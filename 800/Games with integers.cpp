#include <bits/stdc++.h>
using namespace std;

class Solution {
    
};

int main () {
    Solution obj;
    int t;
    cin>>t;
    for(int test=0;test<t;test++)
    {
        int x;
        cin>>x;
        cout<<(x%3==0?"Second":"First")<<endl;
    }
    return 0;
}