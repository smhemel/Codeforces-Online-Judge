
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
string s,s1;
int main() {
    int n;
    cin >> n;
    cin >> s;
    if(s[0]=='S' and s[n-1]=='F')
        puts("YES");
    else
        puts("NO");
     return 0;
}

