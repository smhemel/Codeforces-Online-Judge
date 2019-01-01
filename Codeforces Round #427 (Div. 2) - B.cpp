
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
char s[1111111];
int n;
int main(){
    int k,sum = 0;
    cin >> k;
    cin >> s;
    int len = (int)strlen(s);
    for(int i=0; i<len; i++)
        sum += s[i]-'0';
    if(sum>=k)
        return 0 * printf("0\n");
    sort(s, s+len);
    int cnt = 0;
    for(int i=0; i<len; i++){
        sum += (9-(s[i]-'0'));
        cnt++;
        if(sum>=k)
            return 0 * printf("%d\n",cnt);
    }
    return 0;
}
