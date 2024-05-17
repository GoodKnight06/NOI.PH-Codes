#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        long c=(a*b)-2;
        cout<<c*(c+1)/2<<endl;
    }
    return 0;
}

