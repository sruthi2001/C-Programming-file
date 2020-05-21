#include<iostream>
using namespace std;
int main()
int *ptr;
int arr[5];
cout<<"Enter elements:";
for(int i=0;int<5;i++)
{
cin>>arr[i]>>endl;
}
ptr=arr;
cout<<"You entered:";
for(int i=0;i<5;i++)
{
cout<<*ptr<<endl;
ptr++;
}
return 0;
}
