#include<bits/stdc++.h>
 using namespace std ;
int main()
{
    int a ,b;
    cin>>a ;
    cin>>b;
    if(a>b)
    { 
        cout<<b<<" ";
    }
    else{
         cout<<a<<" ";
    }
    int ans = abs(a-b);
    cout<<ans/2;
    return 0;
}
 