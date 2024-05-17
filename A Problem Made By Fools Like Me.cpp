#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <vector>

#define lli long long int

using namespace std;

int main(){
    lli t,n,sum=0;
    scanf("%lld", &t);
    while (t--){
        scanf("%lld", &n);
        if (n>=300){
            
            lli saver = n%100;
            lli hundreds = n/100;
            if (hundreds%10!=3){
                lli hundredsdiff=0;
                while (hundreds%10!=3){
                    hundredsdiff+=100;
                    hundreds--;
                    if(hundreds%10==3){
                        break;
                    }
                }
                n-=hundredsdiff;
                n = (n-saver) + 99;
            }
            lli checker = n/100;
            checker*=100;
            lli temp = n/1000;
            lli wholesum = 34950;
            lli multi = temp+1;
            lli ths = (temp*(temp-1))/2;
            lli extra = (ths)*100000;
            lli diff = n-checker;
            lli min = n-diff;
            if (multi==1){
                min--;
                sum+= (n*(n+1)/2) - (min*(min+1))/2;
            }
            else{
                min--;
                sum+= (n*(n+1)/2) - (min*(min+1))/2;
                sum += (multi-1)*wholesum;
                sum+=extra;
            }
        
        
            printf("%lld\n", sum);
            sum=0;
        }
        else {
            printf("0\n");
        }
    }
    return 0;
}

