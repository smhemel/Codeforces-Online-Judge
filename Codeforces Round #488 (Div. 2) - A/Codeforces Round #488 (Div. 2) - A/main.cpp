#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <utility>
#define ll long long int
using namespace std;
int ar[211111];
string s;
map<int,int>M;
int main() {
    int n,m,x;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> ar[i];
        M[ar[i]] = 1;
    }
    for(int i=0; i<m; i++){
        cin >> x;
        if(M[x]==1){
            M[x] = 2;
        }
    }
    for(int i=0; i<n; i++){
        if(M[ar[i]]==2)
            cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}
