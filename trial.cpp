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

void welcome();
int main_menu();
char user_option();
void display(int[],int);
void search1 (char a);
void listbook (char a);
void list_by_catagory();
void most_read_book();
void by_rating();
void recent_books();
void admin_option();
void all_books();
void sampleData();









void sampleData(){
//sample books

book[0]={"b100","c++","Mahri","A20","Programing",3,122,2,{2000,07,25},0,0,false};
book[1]={"b101","Luxury life","Mahi Tz","A10","Self help",5,1224,2,{2015,07,25},0,0,false};
book[2]={"b102","Tsom ","Mastewal ","A20","Programing",8,4568,2,{2001,06,23},0,0,false};
book[3]={"b103","Java","Matiyas ","A20","Programing",6,7892,2,{2010,04,10},0,0,false};
book[4]={"b104","sql","Matiyas ","A20","Programing",1,45587,2,{2020,04,15},0,0,false};

//sample user

user[0].name="Lebamlak";
user[0].user_id="u100";
user[0].age=20;
user[0].user_address.house_no=1812;
user[0].user_address.phone = 1994;

}



