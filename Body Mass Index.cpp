#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long h,w,b;
    cin>>w;
    cin>>h;
    b=w/(h*h);
    if (b>=25)
        cout<<"GO ON A DIET";
    else
        cout<<"YOU ARE TOO THIN";
    return 0;
}

