//
//  main.cpp
//  AIM Tech Round 3 (Div. 2) - A. Juicer
//
//  Created by S M HEMEL on 4/19/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,b,d,cnt = 0,sum = 0;
    cin >> n >> b >> d;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        sum += x;
        if(sum>d){
            cnt++;
            sum = 0;
        }
    }
    cout << cnt << endl;
    return 0;
}
