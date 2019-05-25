#include <bits/stdc++.h>
using namespace std;
string s,s1;
int main() {
    cin >> s;
    cin >> s1;
    int len = s.size();
    int d=0,down=0,up=0;
    if(len==1) {
        if(s[0]=='#' || s1[0]=='#')
        {
            puts("YES");
            cout << s << endl << s1 << endl;
        }
        else puts("NO");
        return 0;
    }
    for(int i=0; s[i]; i++){
        if(s[i]==s1[i] && s[i]=='#') d++;
        else if(s1[i]=='#') down++;
        else if (s[i] == '#') up++;
    }
    s = "",s1="";
    if (d || (d == 0 && down == 0 && up) || (d == 0 && down && up == 0)) {
        puts("YES");
        int i = 0;
        for (; i < up; i++) {
            s += '#';
            s1 += '.';
        }
        for (; i < d + up; i++) {
            s += '#';
            s1 += '#';
        }
        for (; i < down + d + up; i++) {
            s += '.';
            s1 += '#';
        }
        for (; i < len; i++) {
            s += '.';
            s1 += '.';
        }
        cout << s << endl << s1 << endl;
    }
    else puts("NO");
    return 0;
}

