#include <iosteam>
using namespace std;
int main()
{
int age;
int remain;
int year;
cout<<"Please enter your age";
cin>>age;
remain=18-age;
year=2020-age;
if(age<=18)
{
if(remain==1)
{
cout<<You are not an eligible to vote as of now as you are born in the year 2003, anyway you can be a eligible voter after 1 year"; 
}
else
{
cout<<You are not an eligible to vote as of now as you are born in the year <<"year,<<"anyway you can be a eligible voter after <<"remain<<"years"; 
}
}
else
{
cout<<"Congrats.You are an eligible voter.";
}
getch();
}

