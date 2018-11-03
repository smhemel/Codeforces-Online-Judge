
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#define ll long long int
using namespace std;
int a[10000],b[10000];
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]!=b[i])
            return 0 * puts("rated");
    }
    for(int i=0; i<n-1; i++){
        if(a[i]<a[i+1] && a[i]==b[i] && a[i+1]==b[i+1])
            return 0 * puts("unrated");
    }
    puts("maybe");
    return 0;
}
