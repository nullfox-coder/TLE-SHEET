#include <bits/stdc++.h>
using namespace std;

class Solution {
    
};

int main() {
    Solution obj;
    int t;
    cin>>t;
    for(int test=0; test<t;test++)
    {
        int n,count=0, maxEmpty=0, total=0;;
        cin>>n;
        string s;
        cin>>s;
        if(s[0]=='.')
        {
            count++;
            total++;
        }
        for(int i=1;i<n;i++)
        {
            if(s[i]=='.') total++;
            if(s[i]=='.' && s[i]==s[i-1]) 
            {
                count++;
                maxEmpty = max(maxEmpty, count);
            }
            else if(s[i]=='.')
            {
                count=1;
            }
            else count=0;
        }
        cout<<((maxEmpty>2)?2:total)<<endl; 
    }
    return 0;
}