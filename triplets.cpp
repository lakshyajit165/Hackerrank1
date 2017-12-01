<#include iostream>
using namespace std;
void solve(int,int,int,int,int,int);
int main()
{
	int a0;
	int a1;
	int a2;
	cin>>a0>>a1>>a2;
	int b0;
	int b1;
	int b2;
	cin>>b0>>b1>>b2;
	solve(a0,a1,a2,b0,b1,b2);
	return 0;
}
void solve(int a0,int a1,int a2,int b0,int b1,int b2){
	int A=0;
	int B=0;
	if(a0>b0)
	   A++;
	   else if(a0<b0)
	     B++;
	if(a1>b1)
	   A++;
	   else if(a1<b1)
	     B++;
	if(a2>b2)
	   A++;
	   else if(a2<b2)
	     B++;
	cout<<A<<B;	 	      
	    
}
