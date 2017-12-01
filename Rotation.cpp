#include<iostream>
using namespace std;
int main(){
	int n,k,m,p,i,j,temp,counter,C[10],A[1000];
	cin>>k;
	for(i=0;i<10;i++)
	   C[i]=0;
	for(p=0;p<k;p++){
	   cin>>n;
	   for(m=0;m<n;m++)
	      cin>>A[m];
	   if(n==3){
	   	  temp=A[0];
	   	  A[0]=A[1];
	   	  A[1]=A[2];
	   	  A[2]=temp;
	   	  for(i=0;i<n-1;i++)
	   	     if(A[i]<A[i+1])
	   	       C[p]=0;
	   }
	   if(n>3){
	   	  i=1;
	   	  while((i+2)<=(n-1)){
	   	  	 counter=1; 
			while(counter<=3){
				
					C[p]=0;					
						temp=A[i];
			   	  	   A[i]=A[i+1];
			   	  	   A[i+1]=A[i+2];
			   	  	   A[i+2]=temp;
			   	  	 
					for(j=0;j<n-1;j++){
						 if(A[j]<A[j+1]){
						
						    break;
						 }
						 else
                             C[p]=1;
						
	              }  	 			   	  	       
			   	      
                  
				counter++;	   	  	   
		       }
				i++;    
		     }
			 
	       }
	   }
	
	for(int l=0;l<k;l++){
	
	  if(C[l]==1)
	    cout<<"NO"<<endl;
	  else
	    cout<<"YES"<<endl;  
    }
	
	return 0;
}
