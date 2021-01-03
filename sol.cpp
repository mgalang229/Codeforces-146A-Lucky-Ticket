#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	// use string because input is too large for 'int' or 'long long'
	string s;
	cin >> s;
	bool checker = true;
	// check if all digits are composed of either '7' or '4'
	for (char c : s) {
		if (c != '7' && c != '4') {
			checker = false;
			break;
		}
	}
	if (checker) {
		int sum1 = 0;
		// calculate the sum of the first half
		for (int i = 0; i < n / 2; i++) {
			sum1 += (s[i] - '0');
		}
		int sum2 = 0;
		// calculate the sum of the second half
		for (int i = n / 2; i < n; i++) {
			sum2 += (s[i] - '0');
		}
		// check if the first and second half sum matches
		cout << (sum1 == sum2 ? "YES" : "NO");
	} else {
		cout << "NO";
	}
	cout << '\n';
	return 0;
}
