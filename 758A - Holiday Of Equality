//#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <string>
#include <vector>
using namespace std;
int main()
{
    cin.tie(0);
    cout.tie(0);
    cin.sync_with_stdio(0);
 
    int n,i,max;
 
    while (cin >> n)
    {
        int arr[n],sum = 0;
 
        for (i=0; i<n; i++)
            cin >> arr[i];
 
        sort (arr,arr+i);
 
        max = arr[n-1];
 
        for (i=0; i<n-1; i++)
            sum += abs (max - arr[i]);
 
        cout << sum << endl;
    }
 
    return 0;
}
