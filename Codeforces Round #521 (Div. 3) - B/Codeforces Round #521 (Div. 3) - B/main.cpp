//
//  main.cpp
//  Codeforces Round #521 (Div. 3) - B
//
//  Created by S M HEMEL on 16/2/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int ar[1111];
int main(int argc, const char * argv[]) {
    int n,cnt = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    for(int i=1; i<n-1; i++){
        if(ar[i-1]==ar[i+1] && ar[i-1]==1 && ar[i]==0){
            cnt ++;
            ar[i+1] = 0;
        }
    }
    cout << cnt << endl;
    return 0;
}
