#include <iostream>

using namespace std;

void timeConversion(char s[]) {
    // Complete this function
    int p,q;
    p=(int)(10*s[0]+s[1]);
    cout<<p;
    if(s[8]=='P'){
        q=p+12;
        s[0]=(char)(q/10);
        s[1]=(char)(q%10);
    }
    else if(s[8]=='A'&&s[0]=='1'){
        s[0]=='0';
        s[1]=='0';
    }
    
             
}

int main() {
    char s[20];
    for(int i=0;i<10;i++){
        cin>>s[i];
    }
    
    timeConversion(s);
    /*for(int i=0;i<10;i++){
        cout<<s[i];
    }*/
    return 0;
}
