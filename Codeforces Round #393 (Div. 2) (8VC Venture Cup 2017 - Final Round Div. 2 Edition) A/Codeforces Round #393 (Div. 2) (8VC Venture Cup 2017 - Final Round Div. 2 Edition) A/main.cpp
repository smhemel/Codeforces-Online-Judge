//
//  main.cpp
//  Codeforces Round #393 (Div. 2) (8VC Venture Cup 2017 - Final Round Div. 2 Edition) A
//
//  Created by S M HEMEL on 1/23/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,m1[13];
    m1[1] =31,m1[2] =28,m1[3] =31,m1[4] =30,m1[5] =31,m1[6] =30,m1[7] =31,m1[8] =31,m1[9] =30,m1[10] =31,m1[11] =30,m1[12] =31;
    cin >> n >> m;
    int count = 0;
    int x = m1[n];
    int i,j=0;
    for(i=m; j<=x;)
    {
        j++;
        if(i%7==0){
            if(j!=x)
                i = 0;
        count++;
        }
        if(j==x)
            break;
        i++;
    }
    if(i<7)
        count++;
    cout << count<<endl;
    return 0;
}





/*#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    if(m-n<n)
        cout << (m-n)<<endl;
    else{
        while((m-n)>=n)
        {
            m -=n;
        }
        cout << m <<endl;
    }
    return 0;
}*/
