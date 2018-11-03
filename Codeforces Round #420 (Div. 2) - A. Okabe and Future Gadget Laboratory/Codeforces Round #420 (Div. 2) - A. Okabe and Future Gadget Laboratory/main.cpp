//
//  main.cpp
//  Codeforces Round #420 (Div. 2) - A. Okabe and Future Gadget Laboratory
//
//  Created by S M HEMEL on 7/5/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int a[100][100];
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        for(int l=0; l<n; l++)
            cin >> a[i][l];
    
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            if(a[i][j]!=1)
            {
                bool ok = false;
                for(int k=0; k<n; k++)
                    for(int l=0; l<n; l++)
                        if (a[i][j] == a[i][k] + a[l][j]) {
                            ok = true;
                            break;
                        }
                if(!ok)
                    return 0 * puts("No");
            }
        }
    puts("Yes");
    return 0;
}
