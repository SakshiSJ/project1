#include<iostream>
using namespace std;
int main()
{
	int a=1,b=2;
	int i,n;
	int nextterm;
	cout<<"enter the number of steps";
	cin>>n;
	cout<<a<<" "<<b;
	for(int i=2;i<n;i++ )
	{
		nextterm=a+b;
		a=b;
		b=nextterm;
		
		
	}
	cout<<"\n no of ways are"<<nextterm;
}