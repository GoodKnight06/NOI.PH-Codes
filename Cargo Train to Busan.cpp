#include <iostream>
#include <vector>
using namespace std;
char e[1111][1111];
int ll,lw;
int s=0;

void fl(int l, int w) {
    if(e[l][w]!='Z')
        s--;
    e[l][w] ='Z';
    if(l-1>=0&&e[l-1][w]=='.')
        fl(l-1,w);
    if(w-1>=0&&e[l][w-1]=='.')
        fl(l,w-1);
    if(l+1<ll&&e[l+1][w]=='.')
        fl(l+1,w);
    if(w+1<lw&&e[l][w+1]=='.')
        fl(l,w+1);
}

int main() {
    int tc;
    cin>>tc;
    while(tc--){
        long long q,gl,gw,b=0,v=0;
        s=0;
        vector<int>l;
        vector<int>w;
        l.clear();
        w.clear();
        cin>>ll>>lw>>q;
        for(int i=0; i<ll; i++){
            for(int j=0; j<lw; j++){
                cin>>e[i][j];
                if(e[i][j]=='Z'){
                    l.push_back(i);
                    w.push_back(j);
                }
                else if(e[i][j]=='.'){
                    s++;
                }
                    
            }
        }
        for(int i=0; i<w.size(); i++){
            if(l[i]+1<ll){
                    if(e[l[i]+1][w[i]]=='.')
                        fl(l[i]+1,w[i]);
            }
            if(l[i]-1>=0){
                    if(e[l[i]-1][w[i]]=='.')
                        fl(l[i]-1,w[i]);
            }
            if(w[i]+1<lw){
                    if(e[l[i]][w[i]+1]=='.')
                        fl(l[i],w[i]+1);
            }
            if(w[i]-1>=0){
                    if(e[l[i]][w[i]-1]=='.')
                        fl(l[i],w[i]-1);
            }
        }
        int y=1;
        while(y<=q){
            cin>>gl>>gw;
            e[gl-1][gw-1]='.';
            if((e[gl-1+1][gw-1]=='Z'&&gl<ll)||(e[gl-1-1][gw-1]=='Z'&&gl-2>=0)||(e[gl-1][gw-1+1]=='Z'&&gw<lw)||(e[gl-1][gw-1-1]=='Z'&&gw-2>=0)){
            if(e[gl-1+1][gw-1]=='Z')
                fl(gl-1,gw-1);
            if(e[gl-1-1][gw-1]=='Z')
                fl(gl-1,gw-1);
            if(e[gl-1][gw-1+1]=='Z')
                fl(gl-1,gw-1);
            if(e[gl -1][gw-1-1]=='Z')
                fl(gl-1,gw-1);
            }
            cout<<s+y<<endl;
            y++;
    }
    }
}

