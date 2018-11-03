//
//  main.cpp
//  MemSQL Start[c]UP 3.0(Round 1) - A. Declined Finalists
//
//  Created by S M HEMEL on 22/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,Max=0,x;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        Max = max(Max,x);
    }
    if(Max<=25) puts("0");
    else cout << (Max-25) << endl;
    return 0;
}
