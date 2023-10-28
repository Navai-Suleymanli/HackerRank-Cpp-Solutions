#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int pos1;
    int range1, range2;
    cin>>n;
    
    vector<int> v;
    
    for(int i=0; i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    
    cin>>pos1;
    v.erase(v.begin()+pos1-1);
    
    cin>> range1>>range2;
    v.erase(v.begin()+range1-1, v.begin()+range2-1);
    
    cout<<v.size()<<"\n";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
