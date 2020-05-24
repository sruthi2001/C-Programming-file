#include<iostrem>
using namespace std;
int prime(int n);
int main()
{
int n,i,flag=1;
cout<<"enter a positive number";
cin>>n;
for(i=2;i<=n;i++)
{
if(prime(i)==1)
{
if(prime(n-i)===1)
{
cout<<n<<"=<<i<<"+<<n-i<<endl;
flag=0;
}
if(flag==1)
{
cout<<n<<"cannot be expressed as the sum of two prime numbers";
}}
return 0;
}
int prime(int n)
{
int j,flag1=1;
for(j=2;i<=n;j++)
{
if(n%j==0)
{
flag1=0;
break;
}
}
return prime;
}
