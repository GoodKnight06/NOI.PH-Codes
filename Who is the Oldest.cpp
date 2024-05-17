#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x,y,z;
    cin>>x>>y>>z;
    if (x==y==z)
        cout<<"No one should have the same age."<<endl;
    else if (x>y && x>z)
        cout<<"Alvin"<<endl;
    else if (y>x && y>z)
        cout<<"Berto"<<endl;
    else
        cout<<"Carlo"<<endl;
    return 0;
}

