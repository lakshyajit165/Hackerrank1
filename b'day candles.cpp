#include<iostream>
using namespace std;
int birthdayCakeCandles(int n,int ar){
	int largest;
	largest=ar;
	int count=0;
	for(int i=0;i<n;i++){
		if(ar[i]>largest)
		  largest=ar[i];
	}
	for(int i=0;i<n;i++){
		if(ar[i]==largest)
		  count++;
	}
	return count;
	
}
int main(){
	int n;
	cin>>n;
	int ar[10];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	int result=birthdayCakeCandles(n,ar);
	cout<<result<<endl;
	return 0;
}
