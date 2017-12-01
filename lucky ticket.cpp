#include<iostream>
using namespace std;
long onceInATram(long x){
	long r1,q1,digit_r,digit_q,num,sum_r=0,sum_q=0;
	long r=x%1000;
	r1=r;
	long q=x/1000;
	q1=q;
	while((r!=0)&&(q!=0)){
		digit_r=r%10;
		r/=10;
		sum_r+=digit_r;
		
		digit_q=q%10;
		q/=10;
		sum_q+=digit_q;
      }
		if(sum_r==sum_q){
			num=1000*q1+r1;
			return num;
		    
		}
		else
		   onceInATram(r1+1);
   
}
int main(){
	long x;
	cin>>x;
	long result=onceInATram(x+1);
	cout<<result<<endl;
	return 0;
}
