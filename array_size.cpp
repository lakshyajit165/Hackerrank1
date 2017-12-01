#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,kb,bytes=1;
  int A[20];
  cin>>n;
  cout<<endl;
  for(int i=0;i<n;i++)
  {
     cin>>A[i];
     bytes*=A[i];
  }
  kb=floor(4*bytes/1024);
  cout<<endl;
  cout<<kb;
  return 0;   
}
