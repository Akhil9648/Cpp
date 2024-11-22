#include <iostream>
using namespace std;
void Bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return 1;
}
int main() {
	int arr[100],n,i;
	cout<<"Enter n:";
	cin>>n;
	cout<<"Enter array Elements:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	Bubblesort(arr,n);
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
