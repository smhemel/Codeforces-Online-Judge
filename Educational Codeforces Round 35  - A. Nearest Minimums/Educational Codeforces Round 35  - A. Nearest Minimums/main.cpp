//
//  main.cpp
//  Educational Codeforces Round 35  - A. Nearest Minimums
//
//  Created by S M HEMEL on 3/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int Min = INT_MAX;
int arr[111111];
int main(){
    int ans = INT_MAX;
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        Min = min(arr[i],Min);
    }
    int x = 0;
    for(int i=1; i<=n; i++){
        if(x && arr[i]==Min){
            ans = min(ans,(i-x));
        }
        if(arr[i]==Min) x = i;
    }
    cout << ans << endl;
    return 0;
}
