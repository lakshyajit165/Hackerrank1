#include <bits/stdc++.h>

using namespace std;

void solve(int a0, int a1, int a2, int b0, int b1, int b2,int &X,int &Y){
    // Complete this function
    *X=0;
    *Y=0;
    if(a0>b0)
        *X++;
    else if(a0<b0)
          *Y++;
    
     if(a1>b1)
        *X++;
    else if(a1<b1)
          *Y++;
    
     if(a2>b2)
        *X++;
    else if(a2<b2)
          *Y++;
    
    
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    int *A,*B;
    cin >> b0 >> b1 >> b2;
    solve(a0, a1, a2, b0, b1, b2,A,B);
   
    cout<<*A<<" "<<*B;

    return 0;
}

