//
//  main.cpp
//  Codeforces Round #259 (Div. 2) - A. Little Pony and Crystal Mine
//
//  Created by S M HEMEL on 2/17/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = 1;
    int m = n/2;
    for(int i=1; i<=(int)n/2; i++) {
        for(int l=1; l<=m; l++)
            cout << "*";
        for(int l1=1; l1<=s; l1++)
            cout << "D";
        for(int l=1; l<=m; l++)
            cout << "*";
        s += 2;
        m--;
        cout << endl;
    }
    for(int i=1; i<=n; i++)
        cout << "D";
    cout << endl;
    s -=2;
    m++;
    for(int i=1; i<=n/2; i++) {
        for(int l=1; l<=m; l++)
            cout << "*";
        for(int l1=1; l1<=s; l1++)
            cout << "D";
        for(int l=1; l<=m; l++)
            cout << "*";
        s -= 2;
        m++;
        cout << endl;
    }
    return 0;
}
