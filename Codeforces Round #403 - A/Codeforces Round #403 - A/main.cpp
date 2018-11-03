//
//  main.cpp
//  Codeforces Round #403 - A
//
//  Created by S M HEMEL on 3/5/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

/*#include <iostream>
#include <ctime>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
clock_t __start;
double __duration;
void start_timer() { __start = clock(); }
void print_timer() {
    __duration = (clock() - __start) / (double)CLOCKS_PER_SEC;
    cout << "Duration: " << __duration << '\n';
}
map <long long int,long long int> M;
long int x;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //start_timer();
    long int n,High = 0,cnt=0;
    cin >> n;
    n = n<<1;
    cin >> x;
    M[x] = 2;
    cnt++;
    for(int i=1; i<n; i++)
    {
        
        cin >> x;
        if(M[x]!=2){
            M[x] = 2;
            cnt++;
        }
        else{
            M[x] = 0;
            cnt--;
        }
        if(High<cnt)
            High = cnt;
    }
    if(High==0)
        High = 1;
    cout << High << endl;
    //print_timer();
    return 0;
}*/




//
//  main.cpp
//  Codeforces Round #403 - A
//
//  Created by S M HEMEL on 3/5/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
clock_t __start;
double __duration;
void start_timer() { __start = clock(); }
void print_timer() {
    __duration = (clock() - __start) / (double)CLOCKS_PER_SEC;
    cout << "Duration: " << __duration << '\n';
}
int x,m[11111],mx=0;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //start_timer();
    int n,ans;
    cin >> n;
    n = n<<1;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        m[x]++;
        if(m[x]==2) ans--;
        else ans++;
        mx = max(mx,ans);
    }
    cout << mx << endl;
    //print_timer();
    return 0;
}



