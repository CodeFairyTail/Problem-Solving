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

int main() {
 string s,s2;
 cin>>s;
int len=s.length();
for(int i=0;i<len;i++)
{
	if(s[i]=='.'){
		s2+='0';
	}
	if(s[i]=='-'&&s[i+1]=='.'){
		s2+='1';
		++i;
	}
	if(s[i]=='-'&&s[i+1]=='-'){
		s2+='2';
		++i;
	}	
} 
 cout<<s2;
  
 	return 0;
}
