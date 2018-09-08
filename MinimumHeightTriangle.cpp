#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long a;
    float b;
    cin>>b>>a;
    if(b==1){
        cout<<2*a;
    }else if(b==0){
        cout<<"0";
    }else
        cout<<ceil((2*a)/b);
    return 0;
}
