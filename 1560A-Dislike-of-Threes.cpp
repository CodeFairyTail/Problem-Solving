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
    cin >> t;
    int arr[1001], cnt = 1;
    for(int i = 1; i <= 1666; i++)
    {
        stringstream ss;
        ss<<i;
        string s;
        ss>>s;
        if(i%3==0 || s[s.size()-1] == '3')
        {
            continue;
        }
        else
        {
            arr[cnt] = i;
            cnt++;
        }
        if(cnt == 10001) break;
    }
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        cout << arr[n] << endl;
    }
}
