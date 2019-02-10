//
//  main.cpp
//  Codeforces Round #538 (Div. 2) - A
//
//  Created by S M HEMEL on 10/2/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
#define ll long long int
using namespace std;
ll n,m,a,b,c,x,y,z;
ll Max = 0;
int main() {
    
    cin >> x >> y >> z;
    cin >> a >> b >> c;
    ll total = x+y+z;
    ll total1 = a+b+c;
    if(total>total1) return 0 * puts("NO");
    if(x>a) return 0 * puts("NO");
    a -= x;
    if(y>(a+b)) return 0 * puts("NO");
    ll temp = a+b;
    temp -= y;
    if(z>(temp+c)) return 0 * puts("NO");
    puts("YES");
    
    return 0;
}
