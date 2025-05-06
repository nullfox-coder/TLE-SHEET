#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
};

int main() {
    Solution obj;
    int t;
    cin>>t;
    for(int test=0;test<t;test++)
    {
        int n,x;
        cin>>n>>x;
        int prev=0, curr=0, maxDist=0;
        for(int i=0;i<n;i++)
        {
            prev=curr;
            cin>>curr;
            maxDist = max(maxDist, curr-prev);
        }
        maxDist = max(maxDist, 2*(x-curr));
        cout<<maxDist<<endl;
    }
    return 0;
}