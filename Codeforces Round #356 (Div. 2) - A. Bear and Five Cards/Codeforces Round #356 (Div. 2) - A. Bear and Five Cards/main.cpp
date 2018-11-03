//
//  main.cpp
//  Codeforces Round #356 (Div. 2) - A. Bear and Five Cards
//
//  Created by S M HEMEL on 3/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int arr[111];
int main()
{
    long int sum=0,k,arr[102]= {0};
    for(int i=0; i<5; i++)
    {
        cin >> k;
        arr[k]++;
        sum += k;
    }
    k = sum;
    long int mins=10000;
    for(int i=101; i>=0; i--)
    {
        sum = k;
        if(arr[i]>1)
        {
            if(arr[i]>2)
                sum -= i*3;
            else if(arr[i]==2)
                sum -= i*2;
        }
        mins = min(mins,sum);
    }
    cout << mins <<endl;
    
    
}
