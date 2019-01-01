//
//  main.cpp
//  Codeforces Round #428 (Div. 2) - A
//
//  Created by S M HEMEL on 12/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int sum = 0,ans =0,cnt = 0;
int main(){
    int n,k,x;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x<=8){
            sum += x;
            if(sum>= 8){
                ans += 8;
                sum -= 8;
            }
            else{
                ans += sum;
                sum = 0;
            }
            cnt++;
        }
        else{
            sum += (x-8);
            ans += 8;
            cnt++;
        }
        if(ans>=k)
            return 0 * printf("%d\n",cnt);
    }
    cout << "-1" << endl;
    return 0;
}

