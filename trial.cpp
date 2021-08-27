#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct Date{
int yy,mm,dd;
};
struct Address{
int house_no;
int phone;
};

struct Admin{
string password,user_name;

};
struct Book{

string book_id,title,author,shelf_no,catagory;
int quantity,isbn,edition;
Date date_of_pub;
float rate;
int read_freq;
bool issued;
}book[1000];

struct User{
string name, user_id;
int age;
Address user_address;
int num_issued_book=0;
Book issued_book;
Date issue_date,return_date;
}user[100];
