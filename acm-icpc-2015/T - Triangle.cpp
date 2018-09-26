#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[3] , arr2[3];
    cin>>arr1[0]>>arr1[1]>>arr1[2];
    cin>>arr2[0]>>arr2[1]>>arr2[2];
    sort(arr1 , arr1 + 3);
    sort(arr2 , arr2 + 3);
    if ( arr1[0]*arr1[0] + arr1[1]*arr1[1] == arr1[2]*arr1[2] && (arr1[0] == arr2[0] && arr1[1] == arr2[1] && arr1[2] == arr2[2] ))
            cout<<"YES";
    else cout<<"NO";
}
