//
//  main.cpp
//  Codeforces Round #352 (Div. 2) - A. Summer Camp
//
//  Created by S M HEMEL on 2/26/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

/*#include <iostream>
using namespace std;
int a[1111];
void inti()
{
    int n = 1,i=1;
    for(; i<=1000;)
    {
        if(n>99)
        {
            a[i++] = n/100;
            int x = n%100;
            a[i++] = x/10;
            x = x%10;
            a[i++] = x;
            n++;
        }
        else if(n>9)
        {
            int temp = n%10;
            int x = n/10;
            int temp1 = x%10;
            a[i++] = temp1;
            a[i++] = temp;
            n++;
        }
        else{
            a[i++] = n;
            n++;
        }
    }
}
int main()
{
    inti();
    int n;
    cin >> n;
    cout << a[n] << endl;
    return 0;
}*/

#include <iostream>
#include <ctime>
#include <cstring>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    string line;
    for (int i = 1; i <= N; ++i) {
        line.append(to_string(i));
    }
    cout << line[N-1] << '\n';
    return 0;
}
