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
		string s[n];
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < (int) s[i].size(); j++) {
				// if the character of s[i] == s[i + 1] then change s[i + 1] == '0'
				// otherwise, change s[i + 1] == '1'
				if (s[i][j] == s[i + 1][j]) {
					s[i + 1][j] = '0';
				} else {
					s[i + 1][j] = '1';
				}
			}
		}
		// count the frequency of '1' in the last string
		int cnt = 0;
		for (int i = 0; i < (int) s[0].size(); i++) {
			if (s[n - 1][i] == '1') {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
