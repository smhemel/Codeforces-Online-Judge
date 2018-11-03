//
//  main.cpp
//  Educational Codeforces Round 32 - A
//
//  Created by S M HEMEL on 9/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int arr[1111];
int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; cin>> arr[i],i++);
    int cnt = 0;
    for(int i=1; i<n-1; i++){
        if(arr[i]<arr[i-1] && arr[i]<arr[i+1]){
            cnt++;
            continue;
        }
        else if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            cnt++;
        }
    }
    if(cnt)
        cout << cnt << endl;
    else
    cout << "0" << endl;
    return 0;
}
