#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,x,p,s,e;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>p;
    p--;
    v.erase(v.begin()+p);
    cout<<endl;
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
	cout<<endl;
	cin>>s>>e;
     v.erase(v.begin()+s);  
	  for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    //v.erase(v.begin()+s,v.begin()+e;    
       
        
    
    return 0;
}
