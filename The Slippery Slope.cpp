#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long m, u, d, t, p=0;
    cin>>m>>u>>d;
    if (u==m){
        t=1;
        cout<<t;
    }
    else{
        while (p<m){
            p=p+u;
            t++;
            if (p<m)
                p=p-d;
            else{
                ceil(t);
                cout<<t;
            }
        }
    }
    return 0;
}

