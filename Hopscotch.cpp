#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lli;
lli c[10000005];
int main() {
    lli n,m;
    cin>>n>>m;
    lli boxes[n];
    for (lli i=0; i<n; i++){
        cin>>boxes[i];
        if(i==0 || i==1){
            c[i]=boxes[i];
        }
        else{
            c[i] = c[i-2] + boxes[i];
        }
    }
    for (lli i=0; i<m; i++){
        lli l,r,sum=0;
        cin>>l>>r;
        l--;
        r--;
        if(l-2<0){
            sum = c[r];
        }
        else{
            sum = c[r] - c[l-2];
        }
        cout<<sum<<endl;
    }
    return 0;
}

