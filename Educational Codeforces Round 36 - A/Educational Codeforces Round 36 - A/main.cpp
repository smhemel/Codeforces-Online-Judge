//
//  main.cpp
//  Educational Codeforces Round 36 - A
//
//  Created by S M HEMEL on 13/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int arr[111];
int main(){
    int n,k;
    cin >> n >> k;
    for(int i=0; i<n; cin >> arr[i],i++);
    sort(arr,arr+n);
    for(int i=n-1; i>=0; i--){
        if(k%arr[i]==0){
            cout << (int)(k/arr[i]) << endl;
            return 0;
        }
    }
    return 0;
}
