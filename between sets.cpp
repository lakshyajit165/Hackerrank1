#include<iostream>
#include<vector>
using namespace std;
int getTotalX(vector<int> a,vector<int> b,int n,int m){
	int i,j,k,count=0;
	i=j=0;
	for(k=2;k<=100;k++){
		while(i<n||j<m){
			if((k%a[i]==0)||(b[j]%k==0))
			  count++;
		  i++;
		  j++;	  
		}
	}
	return count;
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	for(int a_i=0;a_i<n;a_i++){
		cin>>a[a_i];
	}
	vector<int> b(m);
	for(int b_i=0;b_i<n;b_i++){
		cin>>b[b_i];
	}
	int total=getTotalX(a,b,n,m);
	cout<<total<<endl;
	return 0;
}

