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
        lli sum=0, v=0, n;
        cin>>n;
        lli j[n];
        for (lli a=0; a<n; a++){
            cin>>j[a];
            sum+=j[a];
            if (sum<0){
                v+=abs(sum);
                sum=0;
            }
        }
        cout<<v<<endl;
    }
    return 0;
}

