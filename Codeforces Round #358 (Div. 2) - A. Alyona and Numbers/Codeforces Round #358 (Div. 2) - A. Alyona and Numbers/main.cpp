//
//  main.cpp
//  Codeforces Round #358 (Div. 2) - A. Alyona and Numbers
//
//  Created by S M HEMEL on 3/25/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

/*#include <iostream>
using namespace std;
int a[6],b[6];
int main()
{
    long long int n,m,cnt = 0;
    cin >> n >> m;
    for(int i=1; i<=n; a[i%5]++,i++);
    for(int i=1; i<=m; b[i%5]++,i++);
    for(int i=0; i<5; i++)
        cnt += 1LL * a[i] * b[(5-i)%5];
    cout << cnt << endl;
    return 0;
}*/


#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    long long ans = 0;
    if(n > m)
        swap(n, m);
    for(int i=1; i<=n; i++)
    {
        int w = i % 5;
        int f = 5 - w;
        int c = m / 5;
        int tm = m % 5;
        if(tm >= f)
            c++;
        ans += c;
    }
    cout << ans << endl;
    return 0;
}
