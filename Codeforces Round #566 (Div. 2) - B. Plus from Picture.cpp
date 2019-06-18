#include <bits/stdc++.h>
#define MX 507
using namespace std;
int dx[]={1, -1, 0, 0};
int dy[]={0, 0, 1, -1};
char s[MX][MX];
int h, w;
bool checkValid(int i, int j) {
    if(i < 0 || i >= h || j < 0 || j >= w) return false;
    return s[i][j] == '*';
}

int main () {
    int cnt = 0;
    scanf("%d %d", &h, &w);
    for(int i = 0; i < h; i ++) {
        scanf("%s", s[i]);
        for(int j = 0; j < w; j ++)
            cnt += (s[i][j] == '*');
    }
    
    for(int i = 0; i < h; i ++) {
        for(int j = 0; j < w; j ++) {
            if(s[i][j] == '*') {
                int _cnt = 1;
                bool flag = true;
                for(int k = 0; k < 4; k ++) {
                    int _i = i, _j = j;
                    while(true) {
                        _i += dx[k];
                        _j += dy[k];
                        if(!checkValid(_i, _j)) break;
                        _cnt ++;
                    }
                    flag &= (_i - dx[k] != i) || (_j - dy[k] != j);
                }
                if(_cnt == cnt && flag)
                    return 0 * puts("YES\n");
            }
        }
    }
    printf("NO\n");
    return 0;
}
