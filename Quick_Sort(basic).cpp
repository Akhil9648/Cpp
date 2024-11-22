#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n,temp;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        arr.push_back(b);
    }
    int pivot=arr[0];
    int i=1;
    int j=n-1;
    do
    {
        while(arr[i]<=pivot)
    {
        i++;
    }
    while(arr[j]>=pivot)
    {
        j--;
    }
    if(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    }while(i<j);
    temp=arr[0];
    arr[0]=arr[j];
    arr[j]=temp;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
