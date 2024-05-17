#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long int lli;
 
int main(){
    string mes1, mes2;
    cin>>mes1;
    cin>>mes2;
    sort(mes1.begin(),mes1.end());
    sort(mes2.begin(),mes2.end());
    if(mes1==mes2){
        cout<<"Anagram!"<<endl;
    }
    else{
        cout<<"No anagram."<<endl;
    }
    return 0;
}

