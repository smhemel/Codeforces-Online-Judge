//
//  main.cpp
//  Codeforces Round #393 (Div. 2) (8VC Venture Cup 2017 - Final Round Div. 2 Edition), problem: (B) Frodo and pillows
//
//  Created by S M HEMEL on 1/23/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,m,k,cont=1,add=1;
    scanf("%d%d%d",&n,&m,&k);
    m=m-n;
    int pil =k+1;
    int bed =k-1;
    while(m-add>=0)
    {
        m = m-add;
        cont++;
        if(pil<n+1) {
            add++;
            pil++;
        }
        if(bed>0) {
            add++;
            bed--;
        }
    }
    printf("%d\n",cont);
}
