#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string w;
        cin>>w;
        string new_w;
        new_w= w.substr(0,w.size()-2);
        cout<<new_w+"oi"<<endl;
    }
    return 0;
}
