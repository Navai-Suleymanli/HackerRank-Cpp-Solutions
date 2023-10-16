#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define CPP  // pre-processor directive to switch between c and c++ solutions

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i;
    long l;
    char c;
    float f;
    double d;
    
    
    #ifndef CPP
    // fast solution using C 
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
    printf("%d \n%ld \n%c \n%0.3f \n%lf", i,l,c,f,d);
    #endif
    
    #ifdef CPP
    //Up-to-date solution using C++
    cin>>i>>l>>c>>f>>d;   
    cout<<i<<"\n"<<l<<"\n"<<c<<"\n"<<fixed<<setprecision(3)<<f<<"\n"<<d;
    #endif
    
    return 0;
}
