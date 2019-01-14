//
//  main.cpp
//  Codeforces Round #532 (Div. 2) - A
//
//  Created by S M HEMEL on 14/1/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int n,k,ans,a[21111];
int main(){
    cin >> n >> k;
    for(int i=0 ;i<n; i++)
        cin >> a[i];
    for(int j=0; j<k; j++){
        int x = 0, y = 0;
        for(int i=0; i<n; i++)
            if((i-j+k)%k)
                a[i]>0?x++:y++;
        ans=max(ans,abs(x-y));
    }
    cout<< ans << endl;
    return 0;
}
