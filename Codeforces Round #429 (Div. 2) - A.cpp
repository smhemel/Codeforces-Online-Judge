#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;
map <char,int> M;
map <char,int> M1;
string s;
int ar[1000];
int main()
{
    int a,b;
    cin >> a >> b;
    cin >> s;
    for(int i=0; s[i]; i++){
        ar[s[i]]++;
    }
    for(int i=0; s[i]; i++){
        if(ar[s[i]]>b)
            return 0 * puts("NO");
    }
    puts("YES");
    return 0;
}







