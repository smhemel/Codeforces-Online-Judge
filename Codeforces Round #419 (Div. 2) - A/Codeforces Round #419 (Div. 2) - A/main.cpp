
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
int main()
{
    int a,b,l,cnt=0;
    scanf("%d:%d",&a,&b);
    for(int i=a; i<24; i++){
        if(a==i)
            l = b;
        else
            l = 0;
        for(;l<60; l++){
            if(i/10==l%10 && i%10==l/10)
                return 0 * printf("%d\n",cnt);
            cnt++;
        }
        
    }
    cout << cnt << endl;
    return 0;
}
