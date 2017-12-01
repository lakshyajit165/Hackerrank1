#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,pos=0,neg=0,zero=0; double fp,fn,fz;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(int i=0;i<n;i++){
	
        if(arr[i]>0)
            pos++;
        else if(arr[i]<0)
            neg++;
             else if(arr[i]==0)
                 zero++;
    }
	fp=pos/n;
    fn=neg/n;
    fz=zero/n;
    cout<<fp<<endl;
    cout<<fn<<endl;
    cout<<fz<<endl;
    return 0;
}

