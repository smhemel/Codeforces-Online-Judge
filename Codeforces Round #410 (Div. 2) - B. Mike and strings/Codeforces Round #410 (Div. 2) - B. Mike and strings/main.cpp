//
//  main.cpp
//  Codeforces Round #410 (Div. 2) - B. Mike and strings
//
//  Created by S M HEMEL on 4/22/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#define MOD 1000000007
using namespace std;
string str[55];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int len = -1;
    for(int i=0;i<n;i++){
        cin >> str[i];
        len = (int)str[i].length();
        str[i] += str[i];
    }
    int ans = MOD;
    for(int i=0; i<len; i++)
    {
        string temp = str[0].substr(i,len);
        int cnt = 0;
        for(int l=0; l<n; l++)
        {
            int y = (int)str[l].find(temp);
            if(y == -1)
                return puts("-1");
            cnt += y;
        }
        ans = min(ans,cnt);
    }
    cout << ans << endl;
    return 0;
}
