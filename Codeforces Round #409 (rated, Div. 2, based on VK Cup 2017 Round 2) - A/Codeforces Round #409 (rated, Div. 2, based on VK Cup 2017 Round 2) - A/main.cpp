#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <cmath>
#define N 1000000
using namespace std;
string s;
int c[200];
int main()
{
    cin >> s;
    int len = (int) s.length()-1;
    int cnt = 0;
    for(int i=0; i<len; i++)
        if(s[i]=='V' && s[i+1]=='K')
        {
            cnt++;
            c[i] = 1;
            c[i+1] = 1;
        }
    for(int i=0; i<len; i++)
        if(c[i]==0 && c[i+1]==0 && s[i]==s[i+1]){
            cnt++;
            break;
        }
    cout << cnt << endl;
    return 0;
}

