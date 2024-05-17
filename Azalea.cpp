#include <iostream>
using namespace std;
typedef long long int lli;

int a[100005];
long long int c[100005];
long long int ans[100005];
 
int main(){
    lli t, n, d, l, r;
    scanf("%lld", &t);
    while (t--){
        cin>>n>>d;
        lli sum;
        c[0]=0;
        a[0]=0;
        for (lli i = 1; i <= n; i++){
            cin>>a[i];
            if (i==1){
                c[i]=a[i];
            }
            else {
                c[i]= c[i-1] + a[i];
            }
        }
        for (lli i = 1; i <= d; i++){
            cin>>l>>r;
            sum = c[r] - c[l-1] + ((i-1)*(r-l+1));
            ans[i]=sum;
        }
        for (lli i=1; i<=d; i++){
            if (i!=1){
                cout<<' ';
            }
            cout<<ans[i];
        }
        cout<<endl;
    } 
    return 0;
}

