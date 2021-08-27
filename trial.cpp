#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<string.h>
#include<string>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
struct Date{
int yy,mm,dd;
};
struct Address{
string city;
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
int num_issued_book;
Book issued_book[2];
};

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



int main(){
welcome();

book[0].book_id ="b100";
book[0].title="c++";
book[0].author="Melaku";
book[0].shelf_no="A20";
book[0].catagory="art";
book[0].rate=4.5;
book[0].isbn=123;
book[0].read_freq=3;
book[0].quantity=122;
book[0].edition=2;
book[0].date_of_pub={2000,07,25};
book[1]={"b101","Luxury life","Mahi Tz","A10","Self help",5,122,2,{2015,07,25},0,0,false};
//book[2]={"b102","Tsom ","Mastewal ","A20","art",4.5,8,4568,2,{2001,06,23}};
//book[3]={"b103","Java","Matiyas ","A20","Programing",4,6,7892,2,{2010,04,10}};
//book[4]={"b104","sql","Matiyas ","A20","Programing",4.5,1,45587,2,{2020,04,15}};
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

}
for (int i=0;i<20;i++){cout <<setw(10)<<x[i];}
}

//



void search1 (char a){
int Num_search[20],counter=0;
switch (a){
case 'a':{cin.ignore();
system ("cls");
cout<<"\n\n\n"<<"           "<<"Please insert the title of the book"<<endl;
string searchName,temp_title;

getline (cin, searchName);


 transform (searchName.begin(),searchName.end(),searchName.begin(),:: tolower);

/*
        for (int i=0;i<=20;i++){
    char x[20];
   for(int j=0; j<sizeof(book[i].title);j++)
    x[j]=book[i].title[j];
if (strcmp(searchName,x)==0){ */

for (int i=0;i<20;i++){
    temp_title=book[i].title;


transform (temp_title.begin(),temp_title.end(),temp_title.begin(),:: tolower);

        if (temp_title==searchName){

      Num_search[counter]=i;
      counter++;

   /* for (int j=0;j<20;j++){
        if (Num_search[j]==NULL){
            Num_search[j]=i;

             break;

            }
        }*/
    }
}

   display (Num_search,counter);
}
case 'b':{cin.ignore();
system ("cls");
cout <<"\n\n\n"<<"           "<<"Please insert the Author of the book"<<endl;
char searchName[20];
gets(searchName);
for (int i=1;i<=20;i++){
        for (int i=0;i<=20;i++){
    char x[20];
   for(int j=0; j<sizeof(book[i].author);j++)
    x[j]=book[i].author[j];
if ((strcmp(x,searchName))==0){
        {
    counter++;
    for (int j=0;j<20;j++){
        if (Num_search[j]==0){
            Num_search[j]=i;
             break;
                }
            }

        }
    }
}

display (Num_search,counter);
}
case 'c':{cin.ignore();
system ("cls");
cout <<"\n\n\n"<<"           "<<"Please insert the ISBN of the book"<<endl;
int isbn;
cin >>isbn;
for (int i=0;i<=20;i++){
if (isbn=book[i].isbn==0){
{
    counter++;
    for (int j=0;j<20;j++){
        if (Num_search[j]==0){
            Num_search[j]=i;
             break;
                }
            }

        }
    }

}
    display (Num_search,counter);
}
}
}
}
void listbook (char a){
switch(a){
case 'd': list_by_catagory();
    break;
case 'e': most_read_book();
    break;
case 'f': by_rating();
    break;
case 'g': recent_books();
    break;
case 'h': all_books();
}
}
void list_by_catagory(){
       cout <<"\n\n\n\n"<<endl;
        cout << setw(15)<< char(176);      for(int i=0; i<90; i++){cout << char(205);} cout << char(176)<< endl;
        cout << setw(15)<< char(176)<<"choose category "<<endl;
        cout << setw(20)<< char(176)<<"a, Fiction "<<endl;
        cout << setw(20)<< char(176)<<"b, Science "<<endl;
        cout << setw(20)<< char(176)<<"c, Self help"<<endl;
        cout << setw(20)<< char(176)<<"d, Art"<<endl;
        cout << setw(20)<< char(176)<<"e, Religious"<<endl;
        cout << setw(20)<< char(176)<<"f, Social science "<<endl;
        cout << setw(20)<< char(176)<<"g, Amhaaric"<<endl;
        cout << setw(20)<< char(176)<<"h, Research book"<<endl;
int counter=0;
char choice;
cin >>choice;
int Num_search[20];
switch (choice){
case 'a':{for (int i=0;i<=20;i++){

        for (int i=0;i<=20;i++){
    char x[20];
   for(int j=0; j<sizeof(book[i].author);j++)
    x[j]=book[i].author[j];
if (((book[i].catagory=="fiction"))==0 ){
        {
    counter++;
    for (int j=0;j<20;j++){
        if (Num_search[j]==0){
            Num_search[j]=i;
             break;
                }
            }

        }
    }
}

display (Num_search,counter);
}

case 'b':{ for (int i=1;i<=20;i++){
    if ((book[i].catagory=="science")){
      {
    counter++;
    for (int j=0;j<20;j++){
        if (Num_search[j]==0){
            Num_search[j]=i;
             break;
                }
            }

        }

    }
}
display (Num_search,counter);
}
case 'c':{for (int i=1;i<=20;i++){
    if ((book[i].catagory=="art")){

    {
    counter++;
    for (int j=0;j<20;j++){
        if (Num_search[j]==0){
            Num_search[j]=i;
             break;
                }
            }

        }
    }
}
display (Num_search,counter);
}

case 'd': {for (int i=0;i<20;i++){
    if ((book[i].catagory=="self help")){

       {
    counter++;
    for (int j=0;j<20;j++){
        if (Num_search[j]==0){
            Num_search[j]=i;
             break;
                    }
                }

        }
    }
}
display (Num_search,counter);

}

case 'e': {for (int i=0;i<20;i++){
    if ((book[i].catagory=="Religous")){

       {
    counter++;
    for (int j=0;j<20;j++){
        if (Num_search[j]==0){
            Num_search[j]=i;
             break;
                    }
                }

        }
    }
}
display (Num_search,counter);

}
case 'f': {for (int i=0;i<20;i++){
    if ((book[i].catagory=="Social science")){

       {
    counter++;
    for (int j=0;j<20;j++){
        if (Num_search[j]==0){
            Num_search[j]=i;
             break;
                    }
                }

        }
    }
}
display (Num_search,counter);

}

case 'g': {for (int i=0;i<20;i++){
    if ((book[i].catagory=="Amharic")){

       {
    counter++;
    for (int j=0;j<20;j++){
        if (Num_search[j]==0){
            Num_search[j]=i;
             break;
                    }
                }

        }
    }
}
display (Num_search,counter);

}

case 'i': {for (int i=0;i<20;i++){
    if ((book[i].catagory=="Research books")){

       {
    counter++;
    for (int j=0;j<20;j++){
        if (Num_search[j]==0){
            Num_search[j]=i;
             break;
                    }
                }

        }
    }
}
display (Num_search,counter);

            }
        }
    }
}

void most_read_book(){
    int Num_search[20],counter=0;
    for (int i=0;i<20;i++){
    if (book[i].read_freq>=2){
            counter++;
    for (int j=0;j<20;j++){
        if (Num_search[j]==0){
            Num_search[j]=i;
             break;
                    }
                }
    }
    display (Num_search,counter);

}
}
void by_rating(){
   int Num_search[20],counter=0;
        while (counter>=0){
            for (int j=0;j<20;j++){
        if (book[j].rate>4){
            Num_search[counter]=j;
            counter++;
        }

    }
}
display (Num_search,counter);
}

void recent_books(){
    int Num_search[20],counter=0;
        while (counter>=0){
            for (int j=0;j<20;j++){
        if (book[j].date_of_pub.yy>2020){
            Num_search[counter]=j;
            counter++;
        }

    }
}
display (Num_search,counter);
}

void all_books(){
    int Num_search[20];
    for (int i=0;i<20;i++){
        Num_search[i]=i;
    }
    display (Num_search,sizeof(book));

}
void admin_option (){
}


