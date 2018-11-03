//
//  main.cpp
//  Codeforces Round #176 (Div. 2) A. IQ Test
//
//  Created by S M HEMEL on 12/11/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int iq[10][10];
int main()
{
    for(int i=0; i<4; i++)
        for(int l=0; l<4; l++)
            cin >> iq[i][l];
    
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    char a[4][4];
    int i=0,j=0;
    while (i<4)
    {
        cin>>a[i][j];
        j++;
        if (!(j%4))
            j=0;i++;
    }
    i=0,j=0;
    while (i<3)
    {
        if((a[i][j]+a[i][j+1]+a[i+1][j+1]+a[i+1][j])!=162) {
        cout<<"YES";
        return 0;
        }
        j++;
        if(!(j%3))
        {
            j=0;
            i++;
        }
    }
    cout << "NO";
    return 0;
}
