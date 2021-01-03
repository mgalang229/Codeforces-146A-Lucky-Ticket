#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	int sum1 = 0;
	int sum2 = 0;
	// using a single-loop
	for (int i = 0; i < n; i++) {
		// check if digit is not equals to '7' or '4'
		if (s[i] != '7' && s[i] != '4') {
			cout << "NO\n";
			return 0;
		}
		if (i < n / 2) {
			// calculate 'sum1' from 'i' to 'n / 2'
			sum1 += (s[i] - '0');
		} else {
			// calculate 'sum2' from 'i' to 'n / 2'
			sum2 += (s[i] - '0');
		}
	}
	// check if sum1 is equal to sum2
	cout << (sum1 == sum2 ? "YES" : "NO") << '\n';
	return 0;
}
