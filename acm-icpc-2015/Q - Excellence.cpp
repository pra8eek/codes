#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr, arr+n);
    int min = arr[n-1]+arr[n-2];
    for(int i=0;i<n/2;i++)
    {
        if( arr[i] + arr[n-i-1] < min )
            min = arr[i] + arr[n-i-1];
    }
    cout<<min;
    return 0;
}
