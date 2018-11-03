//
//  main.cpp
//  Educational Codeforces Round 20 - B. Distances to Zero
//
//  Created by S M HEMEL on 4/28/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int a[300000];
int main()
{
    int n,x,start=1,end=1,in=1;
    cin >> n;
    a[0] = 6;
    bool flag = true;
    for(int i=1; i<=n; i++){
        cin >> x;
        a[i] = x;
        if(x==0){
            start = end;
            end = i;
            int s = start+end;
            if(a[1]!=0 and x==0 and flag){
                flag = false;
                for(int l=i-1; l>0; l--){
                    a[l] = in;
                    in++;
                }
            }
            else{
            for(int l=start+1; l<=s/2; l++){
                a[l] = in;
                in++;
            }
            in = 1;
            for(int l=end-1; l>s/2; l--)
            {
                a[l] = in;
                in++;
            }
            }
        }
        in = 1;
    }
    in = 1;
    for(int i=n; i>=1; i--){
        if(a[i]==0){
            for(int l=i+1; l<=n; l++){
                a[l] = in;
                in++;
            }
            break;
        }
    }
    cout << a[1];
    for(int i=2; i<=n; i++)
        cout << " " << a[i];
    cout << endl;
    return 0;
}
