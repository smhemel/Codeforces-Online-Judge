//
//  main.cpp
//  Codeforces Round #256 (Div. 2) - A. Rewards
//
//  Created by S M HEMEL on 2/16/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int total_cup = 0,total_medal = 0;
    int n,x,y;
    for(int i=0; i<3; i++) {
        cin >> x;
        total_cup += x;
    }
    for(int i=0; i<3; i++) {
        cin >> y;
        total_medal += y;
    }
    cin >> n;
    //cout << total_medal << total_cup <<endl;
    if(total_cup<=5 && total_cup>0){
        total_cup = 0;
        n--;
    }
    if(total_medal<=10 && total_medal>0){
        total_medal = 0;
        n--;
    }
    if(total_cup<=0 && total_medal <=0 && n>=0){
        printf("YES\n");
        return 0;
    }
    
    while(n!=0)
    {
        n--;
        if(total_cup<=0){
            if(total_medal>0){
                if(total_medal<=10)
                    total_medal = 0;
                else
                    total_medal -= 10;
            }
        }
        if(total_cup>0){
            if(total_cup<=5)
                total_cup = 0;
            else
                total_cup -= 5;
        }
        if(total_cup<=0 && total_medal <=0)
            break;
    }
    if(total_cup<=0 && total_medal <=0 && n>=0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
