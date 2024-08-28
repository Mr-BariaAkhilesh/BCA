#include<iostream>
using namespace std;
 int main()
 {
 	int n,rev=0;
 	cout << "Enter The Number....:" << endl;
    cin>>n;
    int temp=n;
    while(n!=0)
    {
    	int rem=n%10;
    	rev=rev*10+rem;
    	n=n/10;
    	
	}
	if(temp==rev)
     cout << "Enter The Pelindrom Number...." << rev;
     else
     cout << "Enter The Not Pelindrom Number...." << rev;
      return 0;
 }
