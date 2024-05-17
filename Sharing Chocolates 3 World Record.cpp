#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long a,b,c;
    int s,t;
    cin>>t;
    while (s<t){
        s++;
        cin>>a>>b>>c;
        b=a*b;
        if (b==c)
            cout<<"Joint world record..."<<endl;
        else if (b>=c)
                cout<<"World record!"<<endl;
            else
                cout<<"Try again next time :("<<endl;
    }
    return 0;
}

