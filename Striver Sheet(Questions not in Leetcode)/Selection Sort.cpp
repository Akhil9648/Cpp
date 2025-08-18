#include <bits/stdc++.h>
using namespace std;
void sort(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[mini]>arr[j]){
                swap(arr[mini],arr[j]);
                j=mini;
            }
        }
        swap(arr[i],arr[mini]);
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
