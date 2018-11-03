//
//  main.cpp
//  Codeforces Round #445 (Div. 2) - A. ACM ICPC
//
//  Created by S M HEMEL on 16/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int arr[7];
int main(){
    for(int i=0; i<6; i++) cin >> arr[i];
    do{
        if(arr[0]+arr[1]+arr[2]==arr[3]+arr[4]+arr[5]) return 0 * puts("YES");
    }while(next_permutation(arr, arr+6));
    cout << "NO" << endl;
    return 0;
}
