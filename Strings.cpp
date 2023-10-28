#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string a, b;
    cin>>a;
    cin>>b;
    
    int lengthA= a.size();
    int lengthB = b.size();
    cout<<lengthA<<" "<<lengthB<<"\n";
    
    string sum = a+b;
    cout<<sum<<"\n";
    
    swap(a[0], b[0]);
    cout<<a<<" "<<b<<"\n";
    
    return 0;
}
