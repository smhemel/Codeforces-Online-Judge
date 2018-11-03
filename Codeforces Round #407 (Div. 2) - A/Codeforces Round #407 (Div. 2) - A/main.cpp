//
//  main.cpp
//  Codeforces Round #407 (Div. 2) - A
//
//  Created by S M HEMEL on 3/29/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <map>
#include <cstring>
using namespace std;
int main()
{
    long long int n,k,answer = 0;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        answer += (x/k);
        if(x%k!=0)
            answer++;
    }
    cout << answer/2+(answer%2==1) << endl;
    return 0;
}
