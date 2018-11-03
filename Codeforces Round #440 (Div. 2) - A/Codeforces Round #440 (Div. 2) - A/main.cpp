

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int a[1000],b[1000];
int main(){
    int x,y;
    cin >> x >> y;
    for(int i=0; i<x; cin >> a[i],i++);
    for(int i=0; i<y; cin >> b[i],i++);
    sort(a,a+x);
    sort(b,b+y);
    for(int i=0; i<x; i++)
        for(int l=0; l<y; l++)
            if(a[i]==b[l]){
                cout << a[i] << endl;
                return 0;
            }
    if(a[0]>b[0]){
        cout << b[0]<<a[0] << endl;
        return 0;
    }
    cout << a[0]<<b[0] << endl;
    return 0;
}
