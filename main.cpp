#include <bits/stdc++.h>
using namespace std;
int dq(int n,int k)
{
    if(n==1)
        return 1;
    else
        return(n-1,k)+k-1 % n-1;

}

int main()
{
     int n,k;
     cin>>n>>k;
    cout<<dq(n,k);


}