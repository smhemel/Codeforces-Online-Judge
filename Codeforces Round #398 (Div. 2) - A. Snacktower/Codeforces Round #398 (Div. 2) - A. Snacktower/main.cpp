//
//  main.cpp
//  Codeforces Round #398 (Div. 2) - A. Snacktower
//
//  Created by S M HEMEL on 4/4/17.
//  Copyright © 2017 Bangladesh University of Business and Technology. All rights reserved.
//

#include <iostream>
using namespace std;
int a[100001];
int main()
{
    int n,x;
    scanf("%d",&n);
    int temp = n;
    while(n--)
    {
        scanf("%d",&x);
        a[x] = 1;
        while(a[temp])
            printf("%d ",temp--);
        cout<<endl;
    }
    return 0;
}
