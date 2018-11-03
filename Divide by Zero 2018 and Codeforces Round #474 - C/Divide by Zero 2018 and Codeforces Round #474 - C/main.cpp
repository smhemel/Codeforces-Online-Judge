//
//  main.cpp
//  Divide by Zero 2018 and Codeforces Round #474 - C
//
//  Created by S M HEMEL on 7/4/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,d,cnt = 0;
    cin >> n >> d;
    cout << n << endl;
    for(int i=1; i<d; i++){
        cout << i << " ";
        cnt++;
    }
    for(int i=d+100; cnt<n; i+= 100){
        cout << i << " ";
        cnt++;
    }
    return 0;
}
