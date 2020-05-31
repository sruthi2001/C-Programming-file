#include<iostream>
#include<cstdio>
#include<csting>
#include<cstdlib>
#include<conio.h
#include<cstdlib>
using namespace std;
int main()
{
FILE *fp, *fp;
char another,choice;
struct student
{
char first_name[50],last_name[50];
char course[100];
int section;
};
stuct student c;
char xfirst_name[50],xlast_name[50];
long int recsize;
fp=fopen(*"users.txt","wb");
if(fp==NULL)
{
fp=fopen(*"users.txt","wb");
if(fp==NULL)
{
puts("Cannot open file");
return 0;
}
}
recsize=sizeof(c);
while(1)
{
system("cls");
cout<<"\t\t*********************STUDENT DATABASE MANAGEMENT SYSTEM***********************";
cout<<"\n\n
cout<<"\n\n";
cout<<'\n \t\t\t 1.Add  Records;
cout<<'\n \t\t\t 2.List  Records;
cout<<'\n \t\t\t 3.Modify  Records;
cout<<'\n \t\t\t 4.Delete  Records;
cout<<'\n \t\t\t 5.Exit  Progress;
cout<<"\n\n";
cout<<"\t\t\t Select Your Choice:->";
flash(stdin);
choice=getche();
switch(choice)
{
case '1':
fseek(fp,0,SEEK_END);
another='Y';
while(another=='Y' || another =='y')
{
system("cls");
cout<<"Enter the first name :";
cin>>c.first_name;
cout<<"Enter the last name :";
cin>>c.last_name;
cout<<"Enter the course :";
cin>>c.course;
cout<<"Enter the section :";
cin>>c.section;
fwrite(&c,recsize,l,fp);
cout<<"\nAdd another Record(V\N)";
fflush(stdin);
another=getchar();
}
break;
case 2:
system("cls");
rewind(fp);
cout<<"********VIEW THE RECORDS IN THE DATABASE********";
cout,<'\n";
while(fread(&c,recsize,l,fp)==1)
{
cout<<"\n";
cout<<"\n<<c.first_name<<set(0)<<c.last_name;
cout<<"\n";
cout<<"\n<<c.course<<set(0)<<c.section;
}
cout<<"\n\n";
system("pause");
break;
case 3:
system("cls");
another ='Y';
while(another == 'Y'  || another =='y')
{
cout<<"\nEnter the last name of the student:")
cin>> xlast_name;

remind(fp)
while(fread(&c,recsize,l,fp)==1)
cout<<"Enter the first name :";
cin>>c.first_name;
cout<<"Enter the last name :";
cin>>c.last_name;
cout<<"Enter the course :";
cin>>c.course;
cout<<"Enter the section :";
cin>>c.section;
fwrite(&c,recsize,l,fp);
fseek(fp,0,SEEK_END);
fwrite(&c,recsize,1,fp);
break;
}
else
cout<<"record not found";
}
else
cout<<"record not found";
}
cout"\n Modify another record(Y/N)";
fflush(stdin);
another=getchar();
}
break;
case 4:
system("cls");
another ='Y';
while(another =='Y'||another=='y')
{
cout<<"\nEnter the last name of the student to delete:";
cin>>xlast_name;
ft=fopen("temp.dat","wb");
rewind(fp);
fclose(ft);
remove("users,txt","rb");
cout<<"\nDelete Another Record (Y/N)";
fflush(stdin);
another=getchar();
}
break;
return 0;
}





