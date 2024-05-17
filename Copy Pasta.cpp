#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define lli long long int
using namespace std;


int main() {
    lli t;
    cin>>t;
    while (t--){
        lli p,s=0;
        cin>>p;
        string f,o;
        p--;
        cin>>f;
        while (p--){
            cin>>o;
            if (o==f){
                s++;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}

