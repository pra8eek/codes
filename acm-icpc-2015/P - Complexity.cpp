#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int arr[26];
    for(int i=0; i<26; i++) arr[i] = 0;
    for(int i=0; i< str.length();i++)
        arr[ str[i] - 97 ]++;
    sort(arr , arr+26);
    cout<<str.length()-arr[24]-arr[25];
    return 0;
}
