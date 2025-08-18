#include <bits/stdc++.h>
using namespace std;
void sort(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}
int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,n);
    for(int i:arr) cout<<i<<" ";
    return 0;
}

// Time Complexity
// Best-O(n)
// Worst-O(n^2)
