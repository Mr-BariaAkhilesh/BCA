#include<iostream>
using namespace std;
void fibonacci (int n)
{
	int a=0,b=1,c,i;
for (i=1;i<=n;i++)
{
cout<<a<<"\t";
c=a+b;
a=b;
b=c;
}
}
int main()
{
int n;
cout<<"Enter The Number....."<<endl;
cin>>n;
fibonacci(n);
return 0;
}
