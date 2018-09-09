#include <bits/stdc++.h>
#include <math.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the findPoint function below.
 */
void findPoint(int px, int py, int ox, int oy) {
    vector <int> point;
    int x,y;
    x = ((oy-py) + ox);
    y = ((ox-px) + oy);
    cout<<endl<<x<<" "<<y<<endl;
}
int main(int argc, char const *argv[])
{
    int px,qx,py,qy,t;
    cin>>t;
    while(t--){
        cin>>px>>py>>qx>>qy;
        findPoint(px,py,qx,qy);
    }
    return 0;
}