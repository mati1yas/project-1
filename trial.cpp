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
int main(){
welcome();
sampleData();
  bool stop=false;
do{
            int a=main_menu();
    switch (a){
    case 1:{ char b=user_option();
        if(b=='a'|| b=='b'||b=='c'){
        search1(user_option()); }
        else if(b=='d'||b=='e'||b=='f'||b=='g' ||b=='h'){
                listbook(user_option());}}
    break;
    case 2: admin_option ();
        break;

    }
}while (stop);
return 0;
}
void welcome(){
 system("cls");
  cout<<"\t%%      %%      ";
       cout<<"\n\t%%      %% %%%%%%% %%      %%%%%%  %%%%%% %%%%  %%%% %%%%%%%";
       cout<<"\n\t%%      %% %%      %%      %%      %%  %% %%  %%% %% %%       ";


       cout<<"\n\t%%  %%  %% %%%%%   %%      %%      %%  %% %%  %%% %% %%%%%      ";
       cout<<"\n\t%%  %%  %% %%      %%      %%      %%  %% %%      %% %%           ";
       cout<<"\n\t%%%%%%%%%% %%%%%%% %%%%%%% %%%%%%% %%%%%% %%      %% %%%%%%%     ";
       cout<<"\n\n\t\t\t        $$$$$$$$  $$$$$        ";
       cout<<"\n\t\t\t           $$     $   $      ";
       cout<<"\n\t\t\t           $$     $$$$$    ";

       cout<<"\n\n\n\t\t\t  (******** 5M LIBERARY  *******)";
        cout<<"\n\n\n --->  Made By: Group 1 ";
        cout<<"\n --->  AASTU 2021 All right reserved  ";

cout<<"\n\n\n";
system ("pause");
}
int main_menu(){
system ("cls");
 int choice;
       cout <<"\n\n\n\n"<<endl;
        cout << setw(15)<< char(176);      for(int i=0; i<90; i++){cout << char(205);} cout << char(176)<< endl;
        cout << setw(10)<< char(176)<<"select User or Admin to from the following  "<<endl;
        cout << setw(15)<< char(176)<<"1. User"<<endl;
        cout << setw(15)<< char(176)<<"2. Admin"<<endl;
        cout << setw(15)<< char(176)<<"3. Exite"<<endl;
        cout << setw(15)<< char(176);      for(int i=0; i<90; i++){cout << char(205);} cout << char(176)<< endl;
        cin>>choice;
        return choice;
}


char user_option(){

system ("cls");
 char choice;
       cout <<"\n\n\n\n"<<endl;
        cout << setw(15)<< char(176);      for(int i=0; i<90; i++){cout << char(205);} cout << char(176)<< endl;
        cout << setw(15)<< char(176)<<"search books by"<<endl;
        cout << setw(20)<< char(176)<<"a, Title"<<endl;
        cout << setw(20)<< char(176)<<"b, Author"<<endl;
        cout << setw(20)<< char(176)<<"c, ISBN"<<endl;
        cout << setw(15)<< char(176)<<"List books by"<<endl;
        cout << setw(20)<< char(176)<<"d, category"<<endl;
        cout << setw(20)<< char(176)<<"e, Most read"<<endl;
        cout << setw(20)<< char(176)<<"f, Rating "<<endl;
         cout << setw(20)<< char(176)<<"g, Recent books"<<endl;
          cout << setw(20)<< char(176)<<"h, All books"<<endl;
        cout << setw(15)<< char(176)<<endl;
        cout << setw(15)<< char(176);      for(int i=0; i<90; i++){cout << char(205);} cout << char(176)<< endl;
        cin>>choice;
        return choice;
}

void display(int x[],int sizee){
  // system("cls");
cout <<"\n\n\n"<<endl;cout << char(201);  for(int i=0; i<4; i++){cout << char(205);}cout << char(203); /*1*/ for(int i=0; i<8; i++){cout << char(205);}cout << char(203); /*2*/
for(int i=0; i<15; i++){cout << char(205);}cout << char(203); /*3*/for(int i=0; i<15; i++){cout << char(205);}cout << char(203); /*4*/
for(int i=0; i<15; i++){cout << char(205);}cout << char(203); /*5*/for(int i=0; i<8; i++){cout << char(205);}cout << char(203); /*6*/
for(int i=0; i<8; i++){cout << char(205);}cout << char(203); /*7*/for(int i=0; i<18; i++){cout << char(205);}cout << char(203); /*11*/
for(int i=0; i<15; i++){cout << char(205);}cout << char(203); /*8*/
for(int i=0; i<8; i++){cout << char(205);}cout << char(203); /*9*/for(int i=0; i<8; i++){cout << char(205);}cout << char(203); /*10*/cout << char(187) << endl;

cout << char(186) <<setw(4)<<"No"<<char(186)  /*1*/ <<setw(8)<<"book_id"<< char(186);/*2*/
cout<<setw(15)<<"title"<<char(186)/*3*/<<setw(15)<<"author"<<char (186);/*4*/
cout<<setw(15)<<"catagory"<<char(186)/*5*/<<setw(8)<<"rate"<<char (186);/*6*/
cout<<setw(8)<<"quantity"<<char(186);/*7*/
cout<<setw(18)<<"publication date"<<char (186);/*11*/
cout<<setw(15)<<"shelf_no"<<char (186)/*8*/<<setw(8)<<"edition"<<char(186)/*9*/<<setw(8)<<"isbn"<<char (186)/*10*/<< endl;

cout << char(200);  for(int i=0; i<4; i++){cout << char(205);}cout << char(206); /*1*/ for(int i=0; i<8; i++){cout << char(205);}cout << char(206); /*2*/
for(int i=0; i<15; i++){cout << char(205);}cout << char(206); /*3*/for(int i=0; i<15; i++){cout << char(205);}cout << char(206); /*4*/
for(int i=0; i<15; i++){cout << char(205);}cout << char(206); /*5*/for(int i=0; i<8; i++){cout << char(205);}cout << char(206); /*6*/
for(int i=0; i<8; i++){cout << char(205);}cout << char(206); /*7*/for(int i=0; i<18; i++){cout << char(205);}cout << char(206); /*11*/
for(int i=0; i<15; i++){cout << char(205);}cout << char(206); /*8*/
for(int i=0; i<8; i++){cout << char(205);}cout << char(206); /*9*/for(int i=0; i<8; i++){cout << char(205);}cout << char(206) /*10*/<< char(188)<<endl;


for (int i=0;i<5;i++){
cout << char(201);  for(int i=0; i<4; i++){cout << char(205);}cout << char(206); /*1*/ for(int i=0; i<8; i++){cout << char(205);}cout << char(206); /*2*/
for(int i=0; i<15; i++){cout << char(205);}cout << char(206); /*3*/for(int i=0; i<15; i++){cout << char(205);}cout << char(206); /*4*/
for(int i=0; i<15; i++){cout << char(205);}cout << char(206); /*5*/for(int i=0; i<8; i++){cout << char(205);}cout << char(206); /*6*/
for(int i=0; i<8; i++){cout << char(205);}cout << char(206); /*7*/for(int i=0; i<18; i++){cout << char(205);}cout << char(206); /*11*/
for(int i=0; i<15; i++){cout << char(205);}cout << char(206); /*8*/
for(int i=0; i<8; i++){cout << char(205);}cout << char(206); /*9*/for(int i=0; i<8; i++){cout << char(205);}cout << char(206); /*10*/cout << char(187) << endl;

cout << char(206) <<setw(3)<<i+1<<"."<<char(206)  /*1*/ <<setw(8)<<book[x[i]].book_id<< char(206);/*2*/
cout<<setw(15)<<book[x[i]].title<<char(206)/*3*/<<setw(15)<<book[x[i]].author<<char (206);/*4*/
cout<<setw(15)<<book[x[i]].catagory<<char(206)/*5*/<<setw(8)<<book[x[i]].rate<<char (206);/*6*/
cout<<setw(8)<<book[x[i]].quantity<<char(206);/*7*/
cout<<setw(5)<<book[x[i]].date_of_pub.dd<<"-"<<setw(5)<<book[x[i]].date_of_pub.mm<<"-"<<setw(6)<<book[x[i]].date_of_pub.yy<<char (186);/*11*/
cout<<setw(15)<<book[x[i]].shelf_no<<char (206)/*8*/<<setw(6)<<book[x[i]].edition<<"th"<<char(206)/*9*/<<setw(8)<<book[x[i]].isbn<<char (206)/*10*/<< endl;

cout << char(200);  for(int i=0; i<4; i++){cout << char(205);}cout << char(202); /*1*/ for(int i=0; i<8; i++){cout << char(205);}cout << char(202); /*2*/
for(int i=0; i<15; i++){cout << char(205);}cout << char(186); /*3*/for(int i=0; i<15; i++){cout << char(205);}cout << char(186); /*4*/
for(int i=0; i<15; i++){cout << char(205);}cout << char(186); /*5*/for(int i=0; i<8; i++){cout << char(205);}cout << char(186); /*6*/
for(int i=0; i<8; i++){cout << char(205);}cout << char(186); /*7*/for(int i=0; i<18; i++){cout << char(205);}cout << char(186); /*11*/
for(int i=0; i<15; i++){cout << char(205);}cout << char(186); /*8*/
for(int i=0; i<8; i++){cout << char(205);}cout << char(186); /*9*/for(int i=0; i<8; i++){cout << char(205);}cout << char(186); /*10*/cout << char(188) << endl;

cout <<endl;

void sampleData(){
//sample books

book[0]={"b100","c++","Mahri","A20","Programing",3,122,2,{2000,07,25},0,0,false};
book[1]={"b101","Luxury life","Mahi Tz","A10","Self help",5,1224,2,{2015,07,25},0,0,false};
book[2]={"b102","Tsom ","Mastewal ","A20","Programing",8,4568,2,{2001,06,23},0,0,false};
book[3]={"b103","Java","Matiyas ","A20","Programing",6,7892,2,{2010,04,10},0,0,false};
book[4]={"b104","sql","Matiyas ","A20","Programing",1,45587,2,{2020,04,15},0,0,false};

//sample user
  //ooo

user[0].name="Lebamlak";
user[0].user_id="u100";
user[0].age=20;
user[0].user_address.house_no=1812;
user[0].user_address.phone = 1994;

}



