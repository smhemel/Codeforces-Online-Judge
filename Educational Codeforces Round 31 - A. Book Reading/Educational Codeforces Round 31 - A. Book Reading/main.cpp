//
//  main.cpp
//  Educational Codeforces Round 31 - A. Book Reading
//
//  Created by S M HEMEL on 21/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int day,time,cnt=0;
    cin >> day >> time;
    for(int i=0; i<day; i++){
        int x;
        cin >> x;
        time -= (86400-x);
        cnt++;
        if(time<=0) break;
    }
    cout << cnt << endl;
    return 0;
}
