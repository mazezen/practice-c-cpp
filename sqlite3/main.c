#include <stdio.h>
#include <sqlite3.h>
#include <stdlib.h>

static int callback(void *NotUsed, int argc, char **argv, char **azColName)
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}

// clang main.c -o main.out -lsqlite3 && ./main.out
int main(int argc, char *argv[])
{
    sqlite3 *db;
    sqlite3_stmt *stmt = NULL;
    char *zErrMsg = 0;
    int rc = 0;

    // 打开数据库,如果不存在则创建数据库
    rc = sqlite3_open("test.db", &db);
    if (rc)
    {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return 1;
    }
    fprintf(stderr, "Opened database successfully\n");

    // 创建表
    const char *check_sql = "SELECT NAME FROM sqlite_master "
                            "WHERE type = 'table' AND name = 'COMPANY';";
    rc = sqlite3_prepare_v2(db, check_sql, -1, &stmt, NULL);
    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "SQL error: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }
    int table_exists = 0;
    if (sqlite3_step(stmt) == SQLITE_ROW)
    {
        table_exists = 1;
        printf("表已经存在! 无需再次创建 \n");
    }
    else
    {
        printf("表 COMPANY 不存在，正在创建...\n");
    }
    sqlite3_finalize(stmt);
    if (!table_exists)
    {
        const char *create_sql = "CREATE TABLE COMPANY("
                                 "ID INTEGER PRIMARY KEY AUTOINCREMENT,"
                                 "NAME TEXT NOT NULL,"
                                 "AGE INT NOT NULL,"
                                 "ADDRESS CHAR(50),"
                                 "SALARY REAL );";
        // 执行 SQL 语句
        rc = sqlite3_exec(db, create_sql, callback, 0, &zErrMsg);
        if (rc != SQLITE_OK)
        {
            fprintf(stderr, "SQL error: %s\n", zErrMsg);
            sqlite3_free(zErrMsg);
        }
        else
        {
            fprintf(stdout, "Table created successfylly\n");
        }
    }

    // INSERT
    const char *insert_sql = "INSERT INTO COMPANY(NAME, AGE, ADDRESS, SALARY) "
                             "VALUES ('Paual', 32, 'California', 20000.00); "
                             "INSERT INTO COMPANY(NAME, AGE, ADDRESS, SALARY) "
                             "VALUES ('Allen', 25, 'Texas', 15000.00); "
                             "INSERT INTO COMPANY(NAME, AGE, ADDRESS, SALARY) "
                             "VALUES ('Teddy', 23, 'Norway', 20000.00); "
                             "INSERT INTO COMPANY(NAME, AGE, ADDRESS, SALARY) "
                             "VALUES ('Mark', 25, 'Rich-Mond', 65000.00);";
    rc = sqlite3_exec(db, insert_sql, callback, 0, &zErrMsg);
    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "INSERT SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
    else
    {
        printf("Records created successfully!...\n");
    }

    // SELECT
    const char *query_sql = "SELECT * FROM COMPANY";
    const char *data = "Callback function called";
    rc = sqlite3_exec(db, query_sql, callback, (void *)data, &zErrMsg);
    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "QUERY SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
    printf("Query data done successfully\n");

    // UPDATE
    const char *modify_sql = "UPDATE COMPANY set SALARY = 25000.00 WHERE ID = 1; "
                             "SELECT * FROM COMPANY";
    rc = sqlite3_exec(db, modify_sql, callback, (void *)data, &zErrMsg);
    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "QUERY SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
    printf("UPDATE data done successfully\n");

    // DELETE
    const char *del_sql = "DELETE * FROM COMPANY WHERE ID = 2; SELECT * FROM COMPANY;";
    rc = sqlite3_exec(db, del_sql, callback, (void *)data, &zErrMsg);
    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "QUERY SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
    printf("DELETE data done successfully\n");

    // 关闭数据库连接,释放资源
    sqlite3_close(db);

    return 0;
}
