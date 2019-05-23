#include <bits/stdc++.h>
using namespace std;
string s;
string vowel = "aeiou";
int k,n;
int main() {
    
    cin >> k;
    n = 5;
    while(n<k && k%n) n++;
    
    m = k / n;
    if(m<5) return 0 * puts("-1");
    
    for(int i=0; i<k; i++) {
        int r = i / m;
        int c = i % n;
        s += vowel[(r + c) % 5];
    }
    cout << res << endl;
    return 0;
}
