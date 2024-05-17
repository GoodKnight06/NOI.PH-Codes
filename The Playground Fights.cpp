#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long a, f=0;
    cin>>a;
    char b[a], c[a];
    for (long long i=0; i<a; i++){
        cin>>b[i];
    }
    for (long long i=0; i<a; i++){
        cin>>c[i];
    }
    for (long long i=0; i<a; i++){
        if (b[i] != c[i])
            f=f+1;
    }
    cout<<f;
    return 0;
}

