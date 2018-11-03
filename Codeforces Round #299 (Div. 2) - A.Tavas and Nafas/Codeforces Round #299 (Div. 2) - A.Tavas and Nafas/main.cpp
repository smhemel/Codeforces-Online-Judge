//
//  main.cpp
//  Codeforces Round #299 (Div. 2) - A.Tavas and Nafas
//
//  Created by S M HEMEL on 2/27/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct data{
    string abc;
} a[100];
int main() {
    int n;
    vector <string> abc;
    for(int i=0; i<100; a[i].abc ="0",i++);
    a[0].abc = "zero";
    a[1].abc = "one";
    a[2].abc = "two";
    a[3].abc = "three";
    a[4].abc= "four";
    a[5].abc = "five";
    a[6].abc = "six";
    a[7].abc = "seven";
    a[8].abc = "eight";
    a[9].abc = "nine";
    a[10].abc = "ten";
    a[11].abc = "eleven";
    a[12].abc = "twelve";
    a[13].abc = "thirteen";
    a[14].abc = "fourteen";
    a[15].abc = "fifteen";
    a[16].abc = "sixteen";
    a[17].abc = "seventeen";
    a[18].abc = "eighteen";
    a[19].abc = "nineteen";
    a[20].abc = "twenty";
    a[30].abc = "thirty";
    a[40].abc = "forty";
    a[50].abc = "fifty";
    a[60].abc = "sixty";
    a[70].abc = "seventy";
    a[80].abc = "eighty";
    a[90].abc = "ninety";
    scanf("%d",&n);
    if(a[n].abc!="0")
        cout<<a[n].abc<<endl;
    else{
        int z = n%10;
        int h=(n-z) ;
        cout<<a[h].abc<<"-"<<a[z].abc<<endl;
    }
    return 0;
}
