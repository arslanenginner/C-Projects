#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n%2==0)
    {
      cout<<endl;
      cout<<"You enter Even number : "<<n<<endl; 
    }
    else
    {
      cout<<endl;
      cout<<"You enter Odd number : "<<n<<endl;;	
	}
    return 0;
}
