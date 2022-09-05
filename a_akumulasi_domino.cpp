#include <bits/stdc++.h>

#define int long long
#define pb push_back
#define popb pop_back
#define fi first
#define se second
#define len length

using namespace std;



void solve() {
	int row, col; cin >> row >> col;
	
	if(col == 1) {
		cout << row - 1;
	} else {
		cout << (col - 1) * row;
	}
	
}

signed main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t = 1; // cin >> t;
	for(int it = 0; it < t; it++){
		solve();
	}
}
