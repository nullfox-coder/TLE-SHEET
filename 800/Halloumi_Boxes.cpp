#include <bits/stdc++.h>
using namespace std;

class Solution {
private:

public:
    
    bool SortBoxes(int n, int k, vector<int>&arr){
        if(k==1){
            for(int i=1;i<n;i++){
                    if(arr[i]<arr[i-1]) return false;
                }
                return true;
                }
        return true;
    }
};

int main() {
    Solution obj;
    int n, k, t;
    cin >> t;
    for (int test = 0; test < t; test++) {
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout <<(obj.SortBoxes(n, k, arr) ? "YES" : "NO") << endl;
    }
    return 0;
}