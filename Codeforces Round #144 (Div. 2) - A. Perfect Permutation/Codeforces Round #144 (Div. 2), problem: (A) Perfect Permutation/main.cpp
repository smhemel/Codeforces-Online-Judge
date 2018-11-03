//
//  main.cpp
//  Codeforces Round #144 (Div. 2), problem: (A) Perfect Permutation
//
//  Created by S M HEMEL on 12/11/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int arr[100];
int main()
{
    int n;
    cin>>n;
    int cont=2;
    if(n%2==1)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    for(int i=0;i<=n;i+=2){
        arr[i]=cont;
        arr[i+1]=cont-1;
        cont+=2;
    }
    for(int i=0;i<n;i++)
    {
        if(i!=0)
            cout<<" ";
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}
