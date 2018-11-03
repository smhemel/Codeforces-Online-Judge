//
//  main.cpp
//  Codeforces Round #298 (Div. 2) - A. Exam
//
//  Created by S M HEMEL on 2/20/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n==1){
        cout << n <<endl;
        cout << "1" <<endl;
        return 0;
    }
    if(n==2)
    {
        cout << n-1 <<endl;
        cout << "1" <<endl;
        return 0;
    }
    if(n==3)
    {
        cout << n-1 <<endl;
        cout << "1 3" <<endl;
        return 0;
    }
    if(n==4)
    {
        cout << n <<endl;
        cout << "3 1 4 2" <<endl;
        return 0;
    }
    cout << n <<endl;
    cout << "1";
    for(int i=2; i<=n; i++)
        if(i%2)
            cout << " " << i;
    for(int i=2; i<=n; i++)
        if(!(i%2))
            cout << " " << i;
    cout << endl;
    return 0;
}
