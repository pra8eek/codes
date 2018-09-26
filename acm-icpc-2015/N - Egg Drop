#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , k , fl;
    string status;
    cin>>n>>k;
    multimap <int , string> arr;
    while(n--!=0)
    {
        cin>>fl>>status;
        arr.insert( pair <int,string> ( fl , status ) );
    }
    int start = 1, end = k ;
 
    for( multimap <int , string> :: iterator itr = arr.begin() ; itr != arr.end() ; itr++ )
    {
        if ( itr->second == "BROKEN" )
        {
            end = itr -> first;
            break;
        }
        start = itr->first;
    }
    cout<<start+1<<" "<<end-1;
    return 0;
}
