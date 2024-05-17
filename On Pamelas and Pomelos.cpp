#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;   
    if (a<0)
        a=a-(a*2);
    if (b<0)
        b=b-(b*2);
    if (c<0)
        c=c-(c*2);
    if (a<b && a<c)
        cout<<"PAMELA I"<<endl;
    else if (b<c && b<a)
        cout<<"PAMELA II"<<endl;
        else if (c<a && c<b)
        cout<<"PAMELA III"<<endl;
    return 0;
}

