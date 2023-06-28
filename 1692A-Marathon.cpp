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
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int x, count = 0;
        for(int i = 0; i < 3; i++){
            cin>>x;
            if(x > a){
                count++;
            }
        }
        cout<<count<<endl;

    }

}
