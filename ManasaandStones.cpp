#include <bits/stdc++.h>

using namespace std;

vector<int> stones(int n,int a, int b) {
    vector<int>ans;
    unordered_set<int>st;
    int num=n;
    while(n){
        st.insert(a*(n-1)+b*(num-n));
        n--;
    }
    for(int i:st){
        ans.push_back(i);
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    int k;
    cin>>k;
    while(k--){
    int n,a,b;
    cin>>n>>a>>b;
        vector<int> result = stones(n, a, b);

        for (int  i = 0; i < result.size(); i++) {
            cout << result[i]<<" ";
        }
        cout << "\n";
    }
    return 0;
}

