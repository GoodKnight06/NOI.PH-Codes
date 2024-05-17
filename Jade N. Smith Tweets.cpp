#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string post;
    getline (cin,post);
    cout<<(char) toupper(post[0]);
    long long a=0;
    while (a<post.length()-1){
        a++;
        if( post[a-1] == (int)32)
            cout<<(char) toupper (post[a]);
        else
            cout<<(char) tolower (post[a]);
    }
    return 0;
}

