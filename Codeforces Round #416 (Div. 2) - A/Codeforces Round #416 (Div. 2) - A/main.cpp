#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <cstdio>
#define N 1000000
using namespace std;
string s;
int main()
{
    long long int n,m,c = 1;
    cin >> n >> m;
    while(true){
        if(n<c)
            return 0 * puts("Vladik");
        n -= c;
        c++;
        if(m<c)
            return 0 * puts("Valera");
        m-= c;
        c++;
    }
    return 0;
}
