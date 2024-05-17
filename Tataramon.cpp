#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;


int main() {
    lli t;
    scanf("%lld", &t);
    while (t--){
        lli n;
        scanf("%lld", &n);
        map<lli, lli> mapa;
        for (lli i=0; i<n; i++){
            lli An;
            scanf("%lld", &An);
            mapa[An]++;
            if(mapa[An]<=2){
                printf("%lld ", An);
            }
        }
        printf("\n");
    }
    return 0;
}

