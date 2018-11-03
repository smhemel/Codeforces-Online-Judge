#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <vector>
#include <utility>
#define ll long long int
using namespace std;
ll ar[211111];
string s;
int main() {
    ll n;
    cin >> n;
    if(n==0){
        cout << "0" << endl;
        return 0;
    }
    n++;
    if(n&1){
        cout << n<< endl;
    }
    else
        cout << n/2 << endl;
    
    
    return 0;
}
