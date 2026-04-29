//
//  handle.cpp
//  book library
//
//  Created by mazezen on 2026/4/29.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include "lib/menu.h"


#define BOOK_MAX_NUMS 1000

typedef struct Book 
{
    char title[50];
    char author[50];
    char subject[50];
    char book_id[50];
}Book;

// showLibrary 查看图书
void showLibrary(Book *books[], int count)
{

    if ( count == 0 ) 
    {
        std::cout << "暂无图书" << std::endl;
        return;
    }

    std::cout << "书名" << "\t\t\t" << "作者" << "\t\t\t" << "主题" << "\t\t\t" << "书ID" << std::endl;
    for (int i = 0; i < count; i++) 
    {
        std::cout 
            << books[i]->title << "\t\t\t"
            << books[i]->author << "\t\t\t"
            << books[i]->subject << "\t\t\t" 
            << books[i]->book_id << "\t\t\t"
            << std::endl;
    }
      
    return;
}

// addBook 添加图书
void addBook(Book *books[], int& count)
{
    
    if ( count >= BOOK_MAX_NUMS )
    {
        std::cout << "图书已满" << std::endl;
        return;
    }

    char name[50];
    char author[50];
    char subject[100];
    char book_id[50];
    std::cout << "请输入书名: ";
    std::cin >> name;
    std::cout << "请输入作者名字: ";
    std::cin >> author;
    std::cout << "请输入主题/分类: ";
    std::cin >> subject;
    std::cout << "请输入ID: ";
    std::cin >> book_id;

    if (strlen(name) == 0) {
        std::cout << "书名不能为空";
        return;
    }
    if (strlen(author) == 0) {
        std::cout << "作者名不能为空";
        return;
    }
    if (strlen(subject) == 0) {
        std::cout << "主题/分类不能为空";
        return;
    }
    if (strlen(book_id) == 0) {
        std::cout << "ID不能为空";
        return;
    }

    Book *book = new Book;
    strcpy(book->title, name);
    strcpy(book->author, author);
    strcpy(book->subject, subject);
    strcpy(book->book_id, book_id);

    books[count] = book;
    count++;
}

// editBook 编辑图书
void editBook(Book *books[], int& count)
{
    if (count <= 0)
    {
        std::cout << "暂无图书" << std::endl;
        return;
    }

    std::string input;
    std::cout << "请输入您要修改的图书顺序ID: ";
    std::cin >> input;

    int number;
    
    try {
        number = std::stoi(input);
        std::cout << "转换后的数字为：" << number << std::endl;
    } catch (const std::invalid_argument& ia) {
        std::cout << "转换失败, 输入的不是有效的整数." << std::endl;
        return;
    } catch (const std::out_of_range& oor) {
        std::cout << "转换失败, 数字超出了int的范围." << std::endl;
        return;
    }


    char name[50];
    char author[50];
    char subject[100];
    char book_id[50];
    std::cout << "请输入书名: ";
    std::cin >> name;
    std::cout << "请输入作者名字: ";
    std::cin >> author;
    std::cout << "请输入主题/分类: ";
    std::cin >> subject;
    std::cout << "请输入ID: ";
    std::cin >> book_id;

    if (strlen(name) == 0) {
        std::cout << "书名不能为空";
        return;
    }
    if (strlen(author) == 0) {
        std::cout << "作者名不能为空";
        return;
    }
    if (strlen(subject) == 0) {
        std::cout << "主题/分类不能为空";
        return;
    }
    if (strlen(book_id) == 0) {
        std::cout << "ID不能为空";
        return;
    }

    Book *book = new Book;
    book = books[number-1];

    strcpy(book->title, name);
    strcpy(book->author, author);
    strcpy(book->subject, subject);
    strcpy(book->book_id, book_id);
    std::cout << "修改图书成功" << std::endl;
    return;
}

// delBook 删除图书
void delBook(Book *books[], int& count)
{
    if (count <= 0)
    {
        std::cout << "暂无图书" << std::endl;
        return;
    }

    std::string input;
    std::cout << "请输入您要删除的图书顺序ID: ";
    std::cin >> input;

    int number;
    
    try {
        number = std::stoi(input);
        std::cout << "转换后的数字为：" << number << std::endl;
    } catch (const std::invalid_argument& ia) {
        std::cout << "转换失败, 输入的不是有效的整数." << std::endl;
        return;
    } catch (const std::out_of_range& oor) {
        std::cout << "转换失败, 数字超出了int的范围." << std::endl;
        return;
    }

    delete(books[number]);
    count--;
    std::cout << "删除图书成功" << std::endl;
    
    return;
}


void doCmd() 
{
    // 声明图书数组,容量为 BOOK_MAX_NUMS
    Book *books[BOOK_MAX_NUMS];
    int bookCount = 0;

    bool flag = true;
    while (flag)
    {
        std::cout << std::endl;
        printMenu();

        // 获取用户的输入
        char select;
        std::cin >> select;

        // 将 char 转为 int. static_cast 转成的是 ASCII 值
        // 1 -> 49
        // 2 -> 50
        // 3 -> 51
        // 4 -> 52
        // 5 -> 53
        int a = static_cast<int>(select);

        switch (a)
        {
        case 49:
            showLibrary(books, bookCount);
            continue;
        case 50:
            addBook(books, bookCount);
            continue;
        case 51:
            delBook(books, bookCount);
            continue;
        case 52: 
            editBook(books, bookCount);
            continue;
        case 53:
            std::cout << "退出系统" << std::endl;
            flag = false;
            continue;
        default:
            std::cout << "选择错误,请重新选择" << std::endl;
            continue;
        }
    }
}