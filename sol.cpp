#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	for (auto &c : s) {
		c = tolower(c);
	}
	for (auto c : s) {
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
			continue;
		} else {
			cout << '.' << c;
		}
	}
	cout << '\n';
	return 0;
}
