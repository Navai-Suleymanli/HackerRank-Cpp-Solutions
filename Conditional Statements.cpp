#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string array[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    
    if(n>=1 && n<= 9){
        cout<<array[n-1];
    }
    else{
        cout<<"Greater than 9";
    }

    return 0;
}


