#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    cin>>n>>q;
    
    vector<vector<int>> a(n);
    
    for(int i=0; i<n; i++){
        int k_size;
        cin>>k_size;
        vector<int> k(k_size);
        
        for(int j=0; j<k_size; j++){
            cin>>k[j];
        }
        a[i] = k;
    }
    
    for(int y=0; y<q; y++){
        int i, j;
        cin>>i>>j;
        cout<<a[i][j]<<"\n";
    }
    return 0;
}
