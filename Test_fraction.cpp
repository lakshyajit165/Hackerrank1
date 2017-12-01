#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	double n,pos=0,neg=0,zero=0; double fp,fn,fz;
	cin>>n;
	int A[100];
	for(int i=0;i<n;i++)
	    cin>>A[i];
	for(int j=0;j<n;j++){
		if(A[j]>0)
		  pos++;
		else if(A[j]<0)
		     neg++;
			 else if(A[j]==0)
			     zero++;  
	}    
	fp=pos/n;
	fn=neg/n;
	fz=zero/n;
	cout<<fp<<" "<<fn<<" "<<fz; 
		return 0;
}
