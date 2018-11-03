//
//  main.cpp
//  Divide by Zero 2017 and Codeforces Round #399 (Div. 1 + Div. 2, combined) - A. Oath of the Night's Watch
//
//  Created by S M HEMEL on 2/21/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int a[100010];
int main()
{
    int n;
    cin >> n;
    long int max = 0;
    long int min = 9999999999;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(max<a[i])
            max = a[i];
        if(min>a[i])
            min = a[i];
    }
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>min && a[i]<max)
            count++;
    }
    cout << count << endl;
    return 0;
}
