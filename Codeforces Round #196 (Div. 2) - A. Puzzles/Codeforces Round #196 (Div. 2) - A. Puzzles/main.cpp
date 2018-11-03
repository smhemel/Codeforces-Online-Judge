//
//  main.cpp
//  Codeforces Round #196 (Div. 2) - A. Puzzles
//
//  Created by S M HEMEL on 4/14/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[51];
    for(int i=0; i<m; i++)
        cin >> arr[i];
    sort(arr, arr+m);
    int ans = 1 << 30;
    for(int i=0, j=n-1; i<m && j<m; i++,j++)
        ans = min(ans, arr[j] - arr[i]);
    cout << ans << endl;
    return 0;
}
