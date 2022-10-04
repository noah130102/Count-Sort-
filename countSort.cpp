#include<iostream>
using namespace std;

void countSort(int a[], int n){

    int k=a[0];
    for (int  i = 0; i < n; i++)
    {
        k=max(k,a[i]);
    }
    int count[100]={0};

    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }

    for (int i = 1; i <= k; i++)
    {
        count[i]+=count[i-1];
    }
    int outputArr[n];

    for (int i = n-1; i >= 0 ; i--)
    {
        outputArr[--count[a[i]]]= a[i];
    }

    for (int i = 0; i < n; i++)
    {
        a[i]=outputArr[i];
    }
    
      

}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    countSort(arr,n);

    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}