//
//  main.cpp
//  Codeforces Round #529 (Div. 3) - C
//
//  Created by S M HEMEL on 28/12/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int ar[211111];
int main()
{
    int n, k;
    cin >> n >> k;
    int sum = k;
    fill(ar,ar+k,1);
    for(int i=k-1; i>=0; i--) {
        while(sum + ar[i] <= n) {
            sum += ar[i];
            ar[i] *= 2;
        }
    }
    if (sum != n) puts("NO");
    else {
        puts("YES");
        for(int i=0; i<k; i++)
            cout << ar[i] << ' ';
    }
    return 0;
}

