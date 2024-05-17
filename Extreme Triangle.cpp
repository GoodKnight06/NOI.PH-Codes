#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lli;

int main() {
    
    lli n;
    scanf("%lld", &n);
    if (n==3){
        lli px1,py1,px2,py2,px3,py3;
        scanf("%lld%lld", &px1, &py1);
        scanf("%lld%lld", &px2, &py2);
        scanf("%lld%lld", &px3, &py3);
        lli ans;
        ans = (px1*(py2-py3)) + (px2*(py3-py1)) + (px3*(py1-py2));
        ans = abs(ans);
        printf("%lld\n", ans);
    }
    else{
        lli xpoints[n], ypoints[n];
        for (lli i=0; i<n; i++){
            scanf("%lld%lld", &xpoints[i], &ypoints[i]);
        }
        lli ans=0;
        for (lli i=0; i<n; i++){
            for (lli j=0; j<n; j++){
                for(lli k=0; k<n; k++){
                    lli temp;
                    if(i!=j && i!=k && j!=k){
                        lli x1 = xpoints[i], y1 = ypoints[i];
                        lli x2 = xpoints[j], y2 = ypoints[j];
                        lli x3 = xpoints[k], y3 = ypoints[k];
                        temp = (x1*(y2-y3)) + (x2*(y3-y1)) + (x3*(y1-y2));
                        temp = abs(temp);
                        if(temp>ans){
                            ans = temp;
                        }
                    }
                }
            }
        }
        printf("%lld\n", ans);
    }
    
    return 0;
}

