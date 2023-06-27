//#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include<iomanip>
#define ll long long
#define lli long long int
#define l long
#define YES cout << "YES"
#define NO cout << "NO"
#define fast cin.tie(0); cout.tie(0); cin.sync_with_stdio(0);
using namespace std;
int main()
{
    int m,n,i,j,k,ans;
    cin>>n;
    int a[n],p;
    int cnt=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    sort(a,a+n);
    while(m--)
    {
        cin>>k;
        ans=upper_bound(a,a+n, k)-a;
        cout<<ans<<endl;
    }
    return 0;
}
