//
//  main.cpp
//  Codeforces Round #321 (Div. 2) - A. Kefa and First Steps
//
//  Created by S M HEMEL on 4/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int arr[100010];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int cur = 0, cnt=0, ret = 1;
    for(int i=0; i<n; i++){
        if(arr[i] >= cur) cnt++;
        else cnt = 1;
        cur = arr[i];
        ret = max(ret, cnt);
    }
    cout << ret << endl;
    return 0;
}
