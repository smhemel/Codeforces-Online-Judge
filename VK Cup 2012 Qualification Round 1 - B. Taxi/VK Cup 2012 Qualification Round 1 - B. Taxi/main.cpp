//
//  main.cpp
//  VK Cup 2012 Qualification Round 1 - B. Taxi
//
//  Created by S M HEMEL on 4/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int a[100000];
int main()
{
    int n,one = 0, two = 0, three = 0, four = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]==1)
            one++;
        else if(a[i]==2)
            two++;
        else if(a[i]==3)
            three++;
        else
            four++;
    }
    if(one==three)
    {
        four += three;
        three = 0;
        one = 0;
    }
    if(one>three){
        four += three;
        one -= three;
        three = 0;
    }
    else if(one<three){
        four += three;
        three -= one;
        one = 0;
    }
    if(one!=0 && two!=0)
    {
        int temp = one+(two*2);
        if(temp%4)
            four += ((temp/4)+1);
        else
            four += (temp/4);
        cout << four << endl;
        return 0;
    }
    if(one!=0)
    {
        if(one%4)
           four += ((one/4)+1);
        else
            four += (one/4);
    }
    if(two!=0){
        int temp = two*2;
        if(temp%4)
            four += ((temp/4)+1);
        else
            four += (temp/4);
    }
    cout << four << endl;
    return 0;
}
