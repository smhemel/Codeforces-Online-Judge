//
//  main.cpp
//  Codeforces Contest
//
//  Created by S M HEMEL on 9/30/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

//A. One-dimensional Japanese Crossword
/*#include <iostream>
#include <cstring>
#define M 1000
using namespace std;
int main()
{
    int n;
    while ((cin >> n))
    {
        char a[M];
        int y =1;
        for (int i=0; i<n; i++)
            cin >> a[i];
        int count = 0,count1 = 0,x;
        for (int i=0; i<n; i++)
        {
            if ((a[i-1]=='B' && a[i]!='B') || (a[i]=='B' && (i==(n-1))))
                count1++;
        }
        cout << count1 <<endl;
        if (count1==0)
            break;
        for (int i=0; i<n; i++)
        {
            if (a[i]!='B')
                x = 0;
            if (a[i]=='B')
            {
                x = 1;
                count++;
            }
            if ((a[i-1]=='B' && a[i]!='B') || (a[i]=='B' && (i==(n-1))))
            {
                if(y==0)
                    cout <<" ";
                cout << count;
                y = 0;
                count = 0;
            }
        }
        cout <<endl;
    }
    return 0;
}*/




/*#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n,a[10000],count1=0;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    getchar();
    for (int i=0; i<n; i++)
    {
        char b[10000];
        gets(b);
        int count = 0;
        int m = (int) strlen(b);
        for (int j=0; j<m; j++)
        {
            if (b[j]=='a' || b[j]=='e' || b[j]=='i' || b[j]=='o' || b[j]=='u' || b[j]=='y')
                count++;
        }
        if (a[i]==count)
            count1++;
    }
    if (count1==n)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;
    
    return 0;
}*/

/*// A - The New Year: Meeting Friends
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[5];
    while(scanf("%d %d %d",a,a+1,a+2)==3)
    {
        sort(a, a+3);
        int ans = a[2] - a[0];
        printf("%d\n", ans);
    }
    return 0;
}*/




// Broken Clock

/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    while(scanf("%d", &n)== 1)
    {
        string s;
        cin >> s;
        int h = (s[0] - '0') * 10 + s[1] - '0';
        int m = s[3] - '0';
        if(m > 5)
            s[3] = '0';
        if(n == 24){
            if(h > 23)
                s[0] = '0';
        }
        else
        {
            if(h > 12)
            {
                if(s[1] != '0')
                    s[0] = '0';
                else
                    s[0] = '1';
            }
            if(!h)
                s[0] = '1';
        }
        cout << s << endl;
    }
    return 0;
}*/



// 701A - Cards
/*#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int v[105];
bool vis[105];
int main()
{
    int n,sum=0,ave;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&v[i]);
        sum+=v[i];
    }
    ave=2*sum/n;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            for(int j=i+1;j<=n;j++)
            {
                if(!vis[j]&&v[i]+v[j]==ave)
                {
                    printf("%d %d\n",i,j);
                    vis[i]=vis[j]=1;
                    break;
                }
            }
        }
    }
    return 0;
}*/





//724B -Batch Sort
/*#include <iostream>
using namespace std;
#define N 1000
int main()
{
    int n,m,temp;
    int a[N][N];
    cin >> n >> m;
    for (int i=0; i<n; i++)
        for (int l=0; l<m; l++)
            cin >> a[i][l];
    int count = 0;
    for (int i=0; i<n; i++)
    {
        temp = 0;
        for (int j=0; j<m-1; j++)
        {
            if(a[i][j]>a[i][j+1]){
                temp = a[i][j];
                a[i][j] = a[i][j+1];
                a[i][j+1]=temp;
                count++;
            }
            if(count > n+1)
                break;
        }
    }
    if(count<=n+1)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
const int maxn = 55;

int a[maxn][maxn],n,m;
bool check(int x,int y)
{
    for(int i=1;i<=n;i++)
    {
        int flag=0;
        for(int j=1;j<=m;j++)
        {
            int tmp=a[i][j];
            if(j==x)tmp=a[i][y];
            if(j==y)tmp=a[i][x];
            if(tmp!=j)flag++;
        }
        if(flag!=0&&flag!=2)
            return false;
    }
    return true;
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
    for(int i=1;i<=m;i++)
        for(int j=1;j<=i;j++)
            if(check(i,j))
                return puts("YES"),0;
    printf("NO");
}*/


//724A- Checking The Calender


#include<iostream>
using namespace std;
int m[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,31};
int getid(string s)
{
    if(s[0]=='m')return 0;
    if(s[0]=='t'&&s[1]=='u')return 1;
    if(s[0]=='w')return 2;
    if(s[0]=='t'&&s[1]=='h')return 3;
    if(s[0]=='f')return 4;
    if(s[0]=='s'&&s[1]=='a')return 5;
    if(s[0]=='s') return 6;
}
string s1,s2;
int main()
{
    cin>>s1>>s2;
    int p=getid(s1),q=getid(s2);
    for(int i=0;i<7;i++)
    {
        int now=i;
        for(int j=0;j<12;j++)
        {
            for(int k=0;k<m[j];k++)
            {
                now=(now+1)%7;
                if(k==0&&now==p&&(now+m[j])%7==q)
                    return puts("YES");
            }
        }
    }
    printf("NO");
}
