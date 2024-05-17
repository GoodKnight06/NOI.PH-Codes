#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,c,t;
    cin>>a>>b;
    c=a+b;
    t=c%2;
    if (t==0)
        cout<<"HAPPY"<<endl;
    else
        cout<<"SAD"<<endl;
    return 0;
}

