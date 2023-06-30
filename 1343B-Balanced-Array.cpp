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
    int t;
    long long int n,sum1,sum2,d,i,j;
    cin>>t;
    while(t--)
    {
        sum1=sum2=0;
        cin>>n;
 
        if(n%4!=0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for(int i=2; i<=n; i+=2){
                cout<<i<<" ";
                sum1+=i;
            }
            for(int i=1; i<n-2; i+=2){
                cout<<i<<" ";
                sum2+=i;
            }
            cout<<sum1-sum2<<"\n";
        }
    }
}
