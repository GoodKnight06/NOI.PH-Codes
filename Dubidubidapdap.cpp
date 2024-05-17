#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long int lli;
using namespace std;


int main() {
    lli n;
    scanf("%lld", &n);
    lli ans[n];
    for (lli i=0; i<n; i++){
        lli in[10];
        for (lli j=0; j<10; j++){
            in[j]=j;
        }
        lli ex;
        for (lli j=0; j<9; j++){
            scanf("%lld", &ex);
            in[ex]=-1;
        }
        for (lli j=0; j<10; j++){
            if (in[j]!=-1){
                ans[i]=in[j];
            }
        }
    }
    for (lli i=0; i<n; i++){
        printf("%lld", ans[i]);
    }
    return 0;
}

