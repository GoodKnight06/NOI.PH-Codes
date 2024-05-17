#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cstring>

#define lli long long int

using namespace std;

int main(){
    lli h,w,e=0,f=0,x=0,o=0,c,d,g,j,i,k;
    cin>>h>>w;
    j=h*w;
    i=j%2;
    if (i==0){
        j=j/2;
        j++;
    }
    else{
        j=j/2;
        ceil(j);
        j++;
    }
    i=h*w;
    char tile[h][w];
    for (lli a=0; a<h; a++){
        for (lli b=0; b<w; b++){
            cin>>tile[a][b];
            if (tile[a][b]== 'X')
                e++;
            else
                f++;
        }
    }
    g=e+f;
    if (g>i || e>j || f>j){
        cout<<"INVALID"<<endl;
        return 0;
    }
    for (lli a=0; a<h; a++){
        for (lli b=0; b<w; b++){
            if (tile[a][b] == 'X'){
                if (tile[a][b]==tile[a+1][b+1] && tile[a][b]==tile[a+2][b+2] && tile[a][b]==tile[a+3][b+3] && a+3<h && b+3<w){
                    x++;
                }
                if (tile[a][b]==tile[a+1][b] && tile[a][b]==tile[a+2][b] && tile[a][b]==tile[a+3][b] && tile[h]>tile[a+3]){
                    x++;
                }
                if (tile[a][b]==tile[a][b+1] && tile[a][b]==tile[a][b+2] && tile[a][b]==tile[a][b+3] && tile[w]>tile[b+3]){
                    x++;
                }
                if (tile[a][b]==tile[a-1][b+1] && tile[a][b]==tile[a-2][b+2] && tile[a][b]==tile[a-3][b+3] && a-3>=0 && b+3<w){
                    x++;
                }
            }
            else{
                if (tile[a][b]==tile[a+1][b+1] && tile[a][b]==tile[a+2][b+2] && tile[a][b]==tile[a+3][b+3] && a+3<h && b+3<w){
                    o++;
                }
                if (tile[a][b]==tile[a+1][b] && tile[a][b]==tile[a+2][b] && tile[a][b]==tile[a+3][b] && tile[h]>tile[a+3]){
                    o++;
                }
                if (tile[a][b]==tile[a][b+1] && tile[a][b]==tile[a][b+2] && tile[a][b]==tile[a][b+3] && tile[w]>tile[b+3]){
                    o++;
                }
                if (tile[a][b]==tile[a-1][b+1] && tile[a][b]==tile[a-2][b+2] && tile[a][b]==tile[a-3][b+3] && a-3>=0 && b+3<w){
                    o++;
                }
            }
        }
    }
    if(x>o){
        k=x-o;
        cout<<"X WINS BY "<<k<<" POINT(S)"<<endl;
    }
    if(x<o){
        k=o-x;
        cout<<"O WINS BY "<<k<<" POINT(S)"<<endl;
    }
    if(x==o){
        k=o;
        cout<<"BOTH PLAYERS ARE TIED AT "<<k<<" POINT(S)"<<endl;
    }
    return 0;
}

