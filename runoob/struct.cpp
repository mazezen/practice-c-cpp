//
//  struct.cpp
//  runoob
//
//  Created by mazezen on 2026/4/29.
//

#include <iostream>
#include <cstring>

using namespace std;

struct Book {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book;

void printBook(struct Book book);
void printBook(struct Book *book);


int main()
{
    struct Book book1; // 声明 book1 类型为 Book

    // book1 详述
    strcpy(book1.title, "C++ Programming");
    strcpy(book1.author, "Bjarne Stroustrup");
    strcpy(book1.subject, "C++ programming language");
    book1.book_id = 12345;

    printBook(book1);

    struct Book *book2; // 声明 book2 是一个指向 Book 的指针
    book2 = &book1; // 将 book1 的地址赋值给 book2
    printBook(book2);

    return 0;
}

void printBook(struct Book book) 
{
    cout << "Book 1 title: " << book.title << endl;
    cout << "Book 1 author: " << book.author << endl;
    cout << "Book 1 subject: " << book.subject << endl;
    cout << "Book 1 book_id: " << book.book_id << endl;
}

void printBook(struct Book *book)
{
    cout << "Book 2 title: " << book->title << endl;
    cout << "Book 2 author: " << book->author << endl;
    cout << "Book 2 subject: " << book->subject << endl;
    cout << "Book 2 book_id: " << book->book_id << endl;
}
