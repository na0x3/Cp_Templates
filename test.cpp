#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
 
#include <algorithm>
#include <array>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
#include <numeric>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vb = vector<bool>;
using vd = vector<double>;
using vs = vector<string>;
 
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;
 
using vpii = vector<pii>;
using vpll = vector<pll>;
using vpdd = vector<pdd>;
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define lb lower_bound
#define ub upper_bound
#define f first
#define s second
#define resz resize
#define ask for(int i=0;i<n;i++)

/**
 *PROBLEMS ARE EASIER TO SOLVE THAN THEY MIGHT LOOK LIKE
 *     :) 
 * */

//0 n^2
void solve(){
	int n,m,k;
	vector<int>perm(n);
	iota(perm.begin(),perm.end());
	reverse(perm.begin(),perm.end());
	reverse(perm.end()-m,perm.begin());
	for (auto i:perm)cout<<i<<" ";
	cout<<endl;
}


int32_t main(){ 
	ios::sync_with_stdio(false);
  cin.tie(0);
	int t;cin>>t;
	while(t--){
		solve();
	}
}


