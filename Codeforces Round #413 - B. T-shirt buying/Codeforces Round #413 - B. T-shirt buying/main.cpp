//
//  main.cpp
//  Codeforces Round #413 - B. T-shirt buying
//
//  Created by S M HEMEL on 5/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
template <typename T>

void read(T &x)
{
    char c;
    bool t=false;
    for(c=getchar(); (c<'0'||c>'9') && c!='-'; c=getchar());
    if(c=='-'){
        c = getchar();
        t = true;
    } x = c-'0';
    for(c=getchar(); c>='0'&&c<='9'; c=getchar())
        x=x*10+c-'0';
    if(t) x=-x;
}
struct sto{
    int a,b,pri;
}p[200000];

int main()
{
    vector <int> v,v1,v2;
    
    int n,x;
    read(n);
    for(int i=0; i<n; i++){
        read(x);
        p[i].pri = x;
    }
    for(int i=0; i<n; i++){
        read(x);
        if(x==1)
            v.push_back(p[i].pri);
        if(x==2)
            v1.push_back(p[i].pri);
        if(x==3)
            v2.push_back(p[i].pri);
    }
    for(int i=0; i<n; i++){
        read(x);
        if(x==1)
            v.push_back(p[i].pri);
        if(x==2)
            v1.push_back(p[i].pri);
        if(x==3)
            v2.push_back(p[i].pri);
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int m,cnt = 0;
    read(m);
    int k=0,k1=0,k2=0;
    for(int i=0; i<m; i++)
    {
        int len = (int)v.size();
        int len1 = (int)v1.size();
        int len2 = (int)v2.size();
        int temp = 0;
        read(x);
        if(cnt==n){
            printf("-1 ");
            continue;
        }
        bool f = true;
        if(x==1){
            while(k<v.size()){
                if(v[k]!=0)
                {
                    cnt++;
                    f = false;
                    printf("%d ",v[k]);
                    temp = v[k];
                    v.erase(v.begin()+k,v.begin()+(k+1));
                    break;
                }
                else k++;
            }
            bool f1 = true;
            for(int l=0; l<len1; l++){
                if(temp==v1[l]){
                    v1.erase(v1.begin()+l,v1.begin()+(l+1));
                    f1 = false;
                    break;
                }
                if(v1[l]>temp)
                    break;
            }
            if(f1){
                for(int l=0; l<len2; l++){
                    if(temp==v2[l]){
                        v2.erase(v2.begin()+l,v2.begin()+(l+1));
                        f1 = false;
                        break;
                    }
                    if(v2[l]>temp)
                        break;
                }
            }
            continue;
        }
        else if(x==2){
            while(k1<(int)v1.size()){
                if(v1[k1]!=0)
                {
                    cnt++;
                    f = false;
                    printf("%d ",v1[k1]);
                    temp = v1[k1];
                    v1.erase(v1.begin()+k1,v1.begin()+(k1+1));
                    break;
                }
                else k1++;
            }
            bool f1 = true;
            for(int l=0; l<len; l++){
                if(temp==v[l]){
                    v.erase(v.begin()+l,v.begin()+(l+1));
                    f1 = false;
                    break;
                }
                if(v[l]>temp)
                    break;
            }
            if(f1){
                for(int l=0; l<len2; l++){
                    if(temp==v2[l]){
                        v2.erase(v2.begin()+l,v2.begin()+(l+1));
                        f1 = false;
                        break;
                    }
                    if(v2[l]>temp)
                        break;
                }
            }
            continue;
        }
        else if(x==3){
            while(k2<v2.size()){
                if(v2[k2]!=0)
                {
                    cnt++;
                    f = false;
                    printf("%d ",v2[k]);
                    temp = v2[k];
                    v2.erase(v2.begin()+k2,v2.begin()+(k2+1));
                    break;
                }
                else k2++;
            }
            bool f1 = true;
            for(int l=0; l<len1; l++){
                if(temp==v1[l]){
                    v1.erase(v1.begin()+l,v1.begin()+(l+1));
                    f1 = false;
                    break;
                }
                if(v1[l]>temp)
                    break;
            }
            if(f1){
                for(int l=0; l<len; l++){
                    if(temp==v[l]){
                        v.erase(v.begin()+l,v.begin()+(l+1));
                        f1 = false;
                        break;
                    }
                    if(v[l]>temp)
                        break;
                }
            }
            continue;
        }
        if(f)
            printf("-1 ");
    }
    puts("");
    return 0;
}

