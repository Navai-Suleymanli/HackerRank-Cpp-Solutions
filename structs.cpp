#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    struct Student{
      int age;
      string first_name;
      string last_name;
      int standard;        
    };
    
    
    Student st;
    cin>>st.age>>st.first_name>>st.last_name>>st.standard;
    cout<< st.age<<" "<<st.first_name<<" "<<st.last_name<<" "<<st.standard<<"\n";
    
    return 0;
}
