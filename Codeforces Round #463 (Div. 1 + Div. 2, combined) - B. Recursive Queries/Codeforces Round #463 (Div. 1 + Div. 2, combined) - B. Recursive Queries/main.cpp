//
//  main.cpp
//  Codeforces Round #463 (Div. 1 + Div. 2, combined) - B. Recursive Queries
//
//  Created by S M HEMEL on 15/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#define siz 1000009
using namespace std;
int store[siz];
int arr[10][siz];
int fun(int x){
    int sum = 1;
    while(x){
        if(x%10)
            sum *= x%10;
        x /=10;
    }
    return sum;
}
int gum(int y){
    if(y<10)
        return y;
    return gum(fun(y));
}
int main(){
    int n,l,r,k;
    for(int i=1; i<siz; i++)
    {
        store[i] = gum(i);
}
    
        for(int i=1; i<10; i++){
            int x = 0;
            for(int j=1; j<siz; j++){
                if(store[j] == i)
                    x++;
                arr[i][j] = x;
            }
            
        }
    cin>> n;
    while (n--) {
        cin >> l >> r >> k;
        cout << arr[k][r]-arr[k][l-1] << endl;
    }
    return 0;
}
