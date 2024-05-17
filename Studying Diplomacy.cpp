#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lli;

int main() {
    lli t;
    scanf("%lld ", &t);
    while (t--){
        bool imp=false;
        string sms;
        getline(cin,sms);
        for (lli i=0; i<sms.length(); i++){
            if ((sms[i]=='p' || sms[i]=='P') && (sms[i+1]=='r' || sms[i+1]=='R') && (sms[i+2]=='e' || sms[i+2]=='E') && (sms[i+3]=='s' || sms[i+3]=='S') && (sms[i+4]=='i' || sms[i+4]=='I') && (sms[i+5]=='d' || sms[i+5]=='D') && (sms[i+6]=='e' || sms[i+6]=='E') && (sms[i+7]=='n' || sms[i+7]=='N') && (sms[i+8]=='t' || sms[i+8]=='T')){
                imp=true;
                break;
            }
        }
        if (imp==true){
            cout<<"IMPORTANT"<<endl;
        }
        else {
            cout<<"NOT IMPORTANT"<<endl;
        }
    }
    return 0;
}

