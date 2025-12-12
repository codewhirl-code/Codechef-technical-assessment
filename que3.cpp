#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t; //number of testcases
    for(int i=0;i<t;i++){
        int n;
        cin>>n;//number of trees
        // we are creating a list with all the fruits
        vector<int>fruits;
        for(int j=0;j<n;j++){
            int f;
            cin>>f;
            fruits.emplace_back(f);
        }
        // we will create a dictionary==window, with number of fruits of each type
        int left = 0;
        map<int,int>count;
        int best = 0;
        for(int right=0;right<n;right++){
            int f = fruits[right];
            count[f]++;
            // our window can hold only two type of fruits , so we will shrink it if it exceeds that value
            while(count.size()>2){
                int left_f = fruits[left];
                count[left_f]--;
                if(count[left_f]==0){
                    count.erase(left_f);
                }
                left++;
            }
            // total number of fruits
            best = max(best,right-left+1);
        }
        cout<<best<<endl; // printing the final output
        
    }
    return 0;
}
