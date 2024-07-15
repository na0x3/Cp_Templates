#include <bits/stdc++.h>
#pragma GCC target("avx")
#pragma GCC optimize("O2")
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-pointer-checks")
#define ll long long
#define ld long double
#define namein "inp.inp"
#define nameout "out.out"
#define pll pair<ll, ll>
#define pii pair<int, int>
#define pb push_back
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpll vector<pll>
#define vpii vector<pii>
#define fr(i, j, n) for (ll i = j; i <= n; i++)
#define ask for(int i=0;i<n;i++)
using namespace std;
const ll mod = 1e9 + 7;
const ll inf = LLONG_MAX;
const ll maxn = 1e5 + 5;
 
void boost(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}


int binarySearch(int a[],int n,int x){
		int i =0,j=n-1;
		int mn=0;
		while(i<=j){
				int mid = (j+i)/2;
				if (a[mid] == x)return x;
				if (a[mid]>x){
						j = mid-1;
						mn = max(a[mid],mn);
				}
				else{
						i = mid+1;
						mn = max(a[mid],mn);
				}
		}
		return mn;
}


void solve(){
	string s;cin>>s;
	int i=0;
	int cnt=0;
	while(s[i]=='h'){
			cnt++;
			i++;
	}
	cout<<cnt<<endl;
	cout<<s[i]<<endl;
}



int32_t main(){
	boost();
	solve();
}

