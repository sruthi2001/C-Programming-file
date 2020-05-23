#include<iostream>
using namespace std;
class user{
private:
  int hour;
  int minute;
  int second;
  int result;
public:
  enterdetaills();
  int calculatetime();
  int calculateseconds();
  dislpay();
  }
  user::enterdetails(){
  cout<<"Hours?";
  cin>>hour;
  cout<<"Minutes?";
  cin>>minute:
  cout<<"Seconds?"
  cin>>second;
  }
  user::calculatetime(){
  if(hour<=9 && minute<=9 && second<=9)
  {
  cout<<"The time is = << "0hour:: << "0minute:: << "0second";
  
  }
  elsif(hour<=9 && minute<=9 && second>9)
  {
  cout<<"The time is = <<  "0hour:: << "0minute:: << "second";
  
  }
  elsif(hour<=9 && minute>9 && second>9)
  {
  cout<<"The time is = << "0hour:: << "minute:: << "second";
  
  }
  elsif(hour>9 && minute<=9 && second>9)
  {
  cout<<"The time is = <<  "hour:: << "0minute:: << "0second";
  
  }
  elsif(hour> && minute>9 && second<=9)
  {
  cout<<"The time is = << "hour:: << "minute:: << "0second";
  
  }
  elsif(hour>9 && minute<=9 && second<=9)
  {
  cout<<"The time is = << "hour:: << "0minute:: << "0second";
  
  }
  else
  {
  cout<<"The time is = << "hour:: << "minute:: << "second";
  
  }
  }
  user::calculateseconds()
  {
  result=((hour*3600)+(minute*60)+(second);
  cout<<"Time in total seconds:<<"result";
  }
  main()
  {
  user u1;
  u1.enterdetails();
  u1.calculatetime();
  u1.calculateseconds();
  }
 
  
  
  
