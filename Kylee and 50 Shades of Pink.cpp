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
    lli r,g,b,kr,kg,kb,hr,hg,hb;
    lli krd,kgd,kbd,hrd,hgd,hbd,kdiff,hdiff;
    while (n--){
        scanf("%lld%lld%lld%lld%lld%lld%lld%lld%lld", &r, &g, &b, &kr, &kg, &kb, &hr, &hg, &hb);
        krd = r - kr;
        kgd = g - kg;
        kbd = b - kb;
        hrd = r - hr;
        hgd = g - hg;
        hbd = b - hb;
        kdiff = abs(krd) + abs(kgd) + abs(kbd);
        hdiff = abs(hrd) + abs(hgd) + abs(hbd);
        if (kdiff<hdiff){
            cout<<"Kylee"<<endl;
        }
        if (kdiff>hdiff){
            cout<<"Hadee"<<endl;
        }
        if (kdiff==hdiff){
            cout<<"Both"<<endl;
        }
    }
    return 0;
}

