#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long int lli;
using namespace std;


int main() {
    lli n;
    cin>>n;
    for (lli a=0,c=1,d=0; a<=n; a++){
        for (lli b=0; b<c; b++){
            if (d==n){
                return 0;
            }
            cout<<"PAK"<<endl;
            d++;
        }
        for (lli b=0; b<c; b++){
            if (d==n){
                return 0;
            }
            cout<<"GANERN"<<endl;
            d++;
        }
        c++;
    }
    return 0;
}

