

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int n,one,two;
    cin >> n >> one >> two;
    int temp=0,rej=0;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(x==1)
        {
            if(one) one--;
            else if(two) two--,temp++;
            else if(temp) temp--;
            else rej++;
        }
        else
        {
            if(two) two--;
            else rej+=2;
        }
    }
    printf("%d\n",rej);
    return 0;
}
