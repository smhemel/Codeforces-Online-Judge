//
//  main.cpp
//  Codeforces Round #378 (Div. 2)
//
//  Created by S M HEMEL on 10/31/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

// A. Grasshopper And the String
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[100000];
    int len,count,max;
    while(gets(s))
    {
        len =  0;
        count = 1;
        max = 0;
        len = (int) strlen(s);
        s[len]= '\n';
        for(int i=0; i<=len; i++)
        {
            if(s[i]== 'A'||s[i]== 'E'||s[i]== 'I'||s[i]== 'O'||s[i]== 'U'||s[i]== 'Y' || s[i]=='\n')
            {
               if(max<count)
                   max = count;
                count = 0;
            }
            
            count++;
        }
        cout << max <<endl;
    }
    return 0;
}
