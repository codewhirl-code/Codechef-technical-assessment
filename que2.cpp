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
    //running the loop for each testcase
    for(int i=0;i<t;i++){
        int w; // number of chillies
        cin>>w;
        // creating vector with all the chillies
        vector<int>v;
        for(int j=0;j<w;j++){
            int a;
            cin>>a;
            v.emplace_back(a);
        }
        // finding if any have identical spice level
        char z = '0';
        for(int m=0;m<w;m++){
            if (z=='1'){
                break;
            }
            for(int n=m+1;n<w;n++){
                if(v[m]==v[n]){
                    cout<<"YES"<<endl;
                    z = '1';
                    break;
                }
            }
        }
        if (z=='0'){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
