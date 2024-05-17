#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#define lli long long int
#define inf 1111111111
using namespace std;

lli qi[2000000];
lli qj[2000000];
lli di[4] = { 0, 1, 0,-1};
lli dj[4] = { 1, 0,-1, 0};

int main() {
    lli n, m;
    cin>>n>>m;
    lli  dist[n][m];
    lli flo=0;
    char grid[n][m];
    lli si, sj;
    for (lli i = 0; i < n; i++) {
        for (lli j = 0; j < m; j++) {
            cin>>grid[i][j];
            dist[i][j] = inf;
            if (grid[i][j] == 'K') si = i, sj = j;
        }
    }
    dist[si][sj] = 0;
    lli q = 1;
    qi[0] = si;
    qj[0] = sj;
    for (lli f = 0; f < q; f++) {
        lli i = qi[f];
        lli j = qj[f];
        for (lli d = 0; d < 4; d++) {
            lli ni = i + di[d];
            lli nj = j + dj[d];
            if (0 <= ni && ni < n && 0 <= nj && nj < m && grid[ni][nj] != '#' && dist[ni][nj] >= inf) {
                dist[ni][nj] = dist[i][j] + 1;
                qi[q] = ni;
                qj[q] = nj;
                q++;
                if (grid[ni][nj]=='*'){
                    flo++;
                }
            }
        }
    }
    printf("%lld", flo);
}
