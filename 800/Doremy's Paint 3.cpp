#include <bits/stdc++.h>
using namespace std;

class Solution {
    
};

int main () {
    int t;
    cin>>t;
    for(int test=0; test<t;test++)
    {
        int n, num1, num2, freq1=1,freq2=0;
        cin>>n>>num1;
        bool flag=false;
        for(int i=1;i<n;i++)
        {
            int x;
             cin>>x;
             if(x!=num1 && freq2==0)
             {
                 freq2++;
                 num2=x;
             }
             else if(x==num1) freq1++;
             else if(x==num2) freq2++;
             else
             {
                 flag = true;
                 for(int j=i+1;j<n;j++) cin>>x;
                 break;
             }
        }
        if(flag) cout<<"NO"<<endl;
        else if(!freq1 || !freq2) cout<<"YES"<<endl;
        else cout<<(abs(freq1-freq2)<=1 ? "YES" : "NO")<<endl;
    }
    return 0;
}