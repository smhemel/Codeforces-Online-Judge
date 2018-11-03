//
//  main.cpp
//  Codeforces Round #389 - (A) Santa Claus and a Place in a Class
//
//  Created by S M HEMEL on 1/23/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,m,h;
    cin >> n >> m >> h;
    int mult = 0,m1 = m*2,position=0,position1=1;
    int x = 0;
    for(int i=1; i<=n; i++)
    {
        mult = m1*i;
        if(mult>=h){
            position = i;
            break;
        }
    }
    position1 = (m*(position-1)*2)+1;
    for(int i=position1; i<=h;)
    {
        x++;
        if(h==i || h==i+1){
            break;
        }
        i+=2;
    }
    cout << position <<" "<<x<<" "<< ((h%2==0) ? 'R' : 'L') <<endl;
    return 0;
}
