//
//  main.cpp
//  Codeforces Round #244 (Div. 2) - A. Police Recruits
//
//  Created by S M HEMEL on 4/2/17.
//  Copyright © 2017 Bangladesh University of Business and Technology. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,cnt1 = 0,cnt = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(x>0){
            cnt1 += x;
            continue;
        }
        if(cnt1==0 && x==-1)
            cnt++;
        else
            cnt1--;
    }
    cout << cnt << endl;
    return 0;
}
