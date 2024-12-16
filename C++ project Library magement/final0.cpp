#include<iostream>
#include<fstream>
using namespace std;
int x=177;
int i=0;
void welcome();
void back();
void insert();
void search();
void update();
void show();
void delet();
void purchase();
void exit();

struct info
{
string bookname,auname,pubname;
int id,price;
}b[100];


void welcome()
{
	cout<<" ";
for(int i=0;i<41;i++)
{
cout<<char(x);
}
cout<<"  WELCOME TO GLOBAL BOOK SHOP  ";
for(int j=0;j<46;j++)
{
cout<<char(x);
}
cout<<endl;
cout<<" "<<endl;
}



void back()
{
main:
system("cls");
welcome();
int choice;
cout<<char(x)<<char(x)<<" PRESS 1 FOR INSERT BOOK\n";
cout<<" "<<endl;
cout<<char(x)<<char(x)<<" PRESS 2 FOR SEARCH BOOK\n";
cout<<" "<<endl;
cout<<char(x)<<char(x)<<" PRESS 3 FOR UPDATE BOOK\n";
cout<<" "<<endl;
cout<<char(x)<<char(x)<<" PRESS 4 FOR DELETE BOOK\n";
cout<<" "<<endl;
cout<<char(x)<<char(x)<<" PRESS 5 FOR SHOW ALL BOOK\n";
cout<<" "<<endl;
cout<<char(x)<<char(x)<<" PRESS 6 FOR PURCHASING\n";
cout<<" "<<endl;
cout<<char(x)<<char(x)<<" PRESS 7 FOR EXIT\n";
cout<<" "<<endl;
for(int k=0;k<27;k++)
{
cout<<char(x);
}
cout<<endl;
cout<<" "<<endl;
cout<<char(x)<<char(x)<<" ENTER ";
cin>>choice;
if(choice==1)
{
insert();
}
else if(choice==2)
{
search();	
}
else if(choice==3)
{
update();
}
else if(choice==4)
{
delet();	
}
else if(choice==5)
{
show();	
}
else if(choice==6)
{
purchase();	
}
else if(choice==7)
{
cout<<"THANKYOU FOR COMING\n";	
exit();	
}
else
{
cout<<"INVALID\n";
}
goto main;
}



void insert()
{

system("cls");
welcome();
ofstream outline;
outline.open("c.txt");
cout<<" ENTER BOOK ID\n";
cin>>b[i].id;
outline<<b[i].id<<endl;
cout<<" "<<endl;
cout<<" ENTER BOOK NAME\n";
cin.ignore();
getline(cin,b[i].bookname);
cout<<" "<<endl;
cout<<" ENTER AUTHOR NAME\n";
getline(cin,b[i].auname);
cout<<" "<<endl;
cout<<" ENTER PUBLISHER NAME\n";
cin>>b[i].pubname;
cin.ignore();
cout<<" "<<endl;
cout<<" ENTER BOOK PRICE\n";
cin>>b[i].price;
cout<<" "<<endl;
cout<<"INSERT NEW BOOK SUCCESSFULLY\n";
i++;
cout<<"TO RETURN TO MAIN MENU PRESS ENTER";
cin.ignore();
cin.get();
}


void search()
{
int id,s,count=0;
system("cls");
if(i==0)
{
cout<<"EMPTY\n";
}
else
{
cout<<"ENTER ID\n";
cin>>id;
}
for( s=0;s<i;s++)
{
if(b[s].id==id)
{
cout<<" BOOK NAME       "<<b[s].bookname<<endl;
cout<<" AUTHOR NAME     "<<b[s].auname<<endl;
cout<<" PUBLISHER NAMER "<<b[s].pubname<<endl;
cout<<" BOOK PRICE      "<<b[s].price<<endl;
count++;
}
}
if(count==0)
{
cout<<"BOOK ID NOT FOUND\n";
}
cout<<"TO RETURN TO THE MAIN MENU PRESS ENTER\n";
cin.ignore();
cin.get();
}


void update()
{
int id,count=0;
system("cls");
if(i==0)
{
cout<<"EMPTY\n";
}
else
{
cout<<"ENTER BOOK ID\n";
cin>>id;
}
for(int s=0;s<i;s++)
{
if(b[s].id==id)
{
cout<<" "<<endl;
cout<<" ENTER BOOK NAME \n";
cin.ignore();
getline(cin,b[s].bookname);
cout<<" "<<endl;
cout<<" ENTER AUTHOR NAME\n";
getline(cin,b[s].auname);
cout<<" "<<endl;
cout<<" ENTER PUBLISHER NAME\n";
cin>>b[s].pubname;
cin.ignore();
cout<<" "<<endl;
cout<<" ENTER BOOK PRICE\n";
cin>>b[s].price;
cout<<" "<<endl;
cout<<"UPDATE BOOK SUCCESFULLY\n";
count++;
}
}
if(count==0)
{
cout<<"BOOK ID NOT FOUND\n";
}
cout<<"TO RETURN TO THE MAIN MENU PRESS ENTER\n";
cin.ignore();
cin.get();
}

void show()
{
int id;
system("cls");
if(i==0)
{
cout<<"EMPTY\n";
}
for(int k=0;k<i;k++)
{
cout<<" BOOK ID         "<<b[k].id<<endl;
cout<<" BOOK NAME       "<<b[k].bookname<<endl;
cout<<" AUTHOR NAME     "<<b[k].auname<<endl;
cout<<" PUBLISHER NAMER "<<b[k].pubname<<endl;
cout<<" BOOK PRICE      "<<b[k].price<<endl;
cout<<" "<<endl;
cout<<endl;
}
cout<<"TO RETURN TO THE MAIN MENU PRESS ENTER\n";
cin.ignore();
cin.get();	
}



void delet()
{
int id,count=0;
system("cls");
if(i==0)
{
cout<<"EMPTY\n";
}
else
{
cout<<"ENTER BOOK ID\n";
cin>>id;
}
for(int s=0;s<i;s++)
{
if(b[s].id==id)
{
for(int c=s;c<i;c++)
{
b[c].id=b[c+1].id;
b[c].bookname=b[c+1].bookname;
b[c].auname=b[c+1].auname;
b[c].pubname=b[c+1].pubname;
b[c].price=b[c+1].price;
}
cout<<"DELETE BOOK SUCCESSFULLY\n";
i--;
count++;
}
}
if(count==0)
{
cout<<"BOOK ID NOT FOUND\n";
}
cout<<"TO RETURN TO THE MAIN MENU PRESS ENTER\n";
cin.ignore();
cin.get();	
}


void purchase()
{
int id,c,s,count=0;
system("cls");
if(i==0)
{
cout<<"EMPTY\n";
}
else
{
cout<<"ENTER BOOK ID\n";
cin>>id;
}
for( s=0;s<i;s++)
{
if(b[s].id==id)
{
cout<<" BOOK NAME       "<<b[s].bookname<<endl;
cout<<" AUTHOR NAME     "<<b[s].auname<<endl;
cout<<" PUBLISHER NAMER "<<b[s].pubname<<endl;
cout<<" BOOK PRICE      "<<b[s].price<<endl;
cout<<" "<<endl;
cout<<endl;
for( c=s;c<i;c++)
{
b[c].id=b[c+1].id;
b[c].bookname=b[c+1].bookname;
b[c].auname=b[c+1].auname;
b[c].pubname=b[c+1].pubname;
b[c].price=b[c+1].price;
}
cout<<"BOOK PURCHASED SUCCESSFULLY\n";
i--;
count++;
}
}
if(count==0)
{
cout<<"BOOK ID NOT FOUND\n";
}
cout<<"TO RETURN TO THE MAIN MENU PRESS ENTER\n";
cin.ignore();
cin.get();	

}



void exit()
{

exit();
}


int main()
{
back();
}