#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define lli long long int
using namespace std;


int main() {
    lli t;
    cin>>t;
    while (t--){
        lli hb,wb,hr,br,ubr,ir,ur;
        cin>>hr>>hb>>wb;
        br=wb+5;
        ubr=br-(2*hr);
        ir=ubr;
        ur=hr;
        for (lli a=1; a<=hr; a++){
            cout<<'.';
        } 
        for (lli a=1; a<=ubr; a++){
            cout<<'_';
        }
        for (lli a=1; a<=hr; a++){
            cout<<'.';
        } 
        cout<<endl;
        ur--;
        for (lli a=1; a<=hr; a++){
            for (lli b=1; b<=ur; b++){
                cout<<'.';
            }
            cout<<'/';
            for (lli b=1; b<=ir; b++){
                cout<<'#';
            }
            ir+=2;
            cout<<'\\';
            for (lli b=1; b<=ur; b++){
                cout<<'.';
            }
            cout<<endl;
            ur--;
        }
        for (lli a=1; a<=hb-3; a++){
            cout<<"..|";
            for (lli b=1; b<=wb-1; b++){
                cout<<'.';
            }
            cout<<"|.."<<endl;
        }
        cout<<"..|";
        for (lli a=1; a<=wb-4; a++){
            cout<<'.';
        }
        cout<<"._.|.."<<endl;
        cout<<"..|";
        for (lli a=1; a<=wb-4; a++){
            cout<<'.';
        }
        cout<<"|.||.."<<endl;
        cout<<"..|";
        for (lli a=1; a<=wb-4; a++){
            cout<<'_';
        }
        cout<<"|_||.."<<endl;
        cout<<endl;
    }
    return 0;
}

