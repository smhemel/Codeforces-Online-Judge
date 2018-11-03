//
//  main.cpp
//  Codeforces Round #353 (Div. 2) - A. Infinite Sequence
//
//  Created by S M HEMEL on 2/26/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

/*#include <iostream>
using namespace std;
int main()
{
    long a, b, c;
    cin >> a >> b >> c;
    if(c == 0)
    {
        if(a == b)
            puts("YES");
        else
            puts("NO");
        return 0;
    }
    if(b == a)
        puts("YES");
    else if(b>a && (b - a) % c == 0 && c > 0)
        puts("YES");
    else if(b > a && c < 0)
        puts("NO");
    else if(a > b && (a - b) % c == 0 && c < 0)
        puts("YES");
    else if(a > b && c > 0)
        puts("NO");
    else if(b > a && (b - a) % c != 0)
        puts("NO");
    else if(a > b && (a - b) % c != 0)
        puts("NO");
    return 0;
}*/


#include <iostream>
using namespace std;
int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    long long d = b-a;
    if(c==0) {
        if(a==b) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else {
        if (d%c==0 && d/c>= 0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
