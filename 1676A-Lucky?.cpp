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
bool isLuckyTicket(string ticket) {
    int sumFirstThreeDigits = (ticket[0] - '0') + (ticket[1] - '0') + (ticket[2] - '0');
    int sumLastThreeDigits = (ticket[3] - '0') + (ticket[4] - '0') + (ticket[5] - '0');
    return sumFirstThreeDigits == sumLastThreeDigits;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string ticket;
        cin >> ticket;

        if (isLuckyTicket(ticket)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
