#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int x = 0;
		// basically, treat every string as an integer and get the xor value
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			// reverse string before doing xor operation
			reverse(s.begin(), s.end());
			int y = 0;
			// this is the algorithm of getting the xor of s[i] and s[i + 1]...
			for (int j = 0; j < 10; j++) {
				if (s[j] == '1') {
					y ^= (1 << j);
				}
			}
			x ^= y;
		}
		// use this function to count the 1 - bits in an integer
		cout << __builtin_popcount(x) << '\n';
	}
	return 0;
}
