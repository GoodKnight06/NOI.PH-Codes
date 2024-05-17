#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cstring>

#define lli long long int

using namespace std;

int main(){
    lli t,u=0,r,c,a,b;
    cin>>t;
    for (lli z=0; z<t; z++){
      cin>>a>>b;
      char tile[a][b];
      for(int i=0; i<a; i++){
          for(int j=0; j<b; j++){
            cin>>tile[i][j];
          }
      }
      for (lli r=0; r<a; r++){
          for (lli c=0; c<b; c++){
        if (r+4<a&&tile[r][c]=='U'&&tile[r+1][c]=='N'&&tile[r+2][c]=='I'&&tile[r+3][c]=='O'&&tile[r+4][c]=='N')
            u++;
        if (c+4<b&&tile[r][c]=='U'&&tile[r][c+1]=='N'&&tile[r][c+2]=='I'&&tile[r][c+3]=='O'&&tile[r][c+4]=='N')
            u++;
       if (r-4>=0&&tile[r][c]=='U'&&tile[r-1][c]=='N'&&tile[r-2][c]=='I'&&tile[r-3][c]=='O'&&tile[r-4][c]=='N')
            u++;
       if (c-4>=0&&tile[r][c]=='U'&&tile[r][c-1]=='N'&&tile[r][c-2]=='I'&&tile[r][c-3]=='O'&&tile[r][c-4]=='N')
            u++;
if (r+4<a&&c+4<b&&tile[r][c]=='U'&&tile[r+1][c+1]=='N'&&tile[r+2][c+2]=='I'&&tile[r+3][c+3]=='O'&&tile[r+4][c+4]=='N')
            u++;
if (c+4<b&&r-4>=0&&tile[r][c]=='U'&&tile[r-1][c+1]=='N'&&tile[r-2][c+2]=='I'&&tile[r-3][c+3]=='O'&&tile[r-4][c+4]=='N')
            u++;
if (r-4>=0&&c-4>=0&&tile[r][c]=='U'&&tile[r-1][c-1]=='N'&&tile[r-2][c-2]=='I'&&tile[r-3][c-3]=='O'&&tile[r-4][c-4]=='N')
            u++;
if (c-4>=0&&r+4<a&&tile[r][c]=='U'&&tile[r+1][c-1]=='N'&&tile[r+2][c-2]=='I'&&tile[r+3][c-3]=='O'&&tile[r+4][c-4]=='N')
            u++;
    }
        }
        cout<<u<<endl;
        u=0;
    }
    return 0;
}

