#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int k;
		cin >> k;
		// store the letter of the alphabet in the 's' variable (string)
		string s = "abcdefghijklmnopqrstuvwxyz";
		// reverse the 's' string
		reverse(s.begin(), s.end());
		// calculate the quotient and remainder of 'k' and 25
		int quotient = k / 25;
		int rem = k % 25;
		if (rem) {
			// if there is a remainder, print the letters from (25 - 'rem') 
			// with a length of ('rem' + 1)
			cout << s.substr(25 - rem, rem + 1);
		}
		while (quotient--) {
			// print the whole alphabet 'quotient' times
			cout << s;
		}
		cout << '\n';
	}
	return 0;
}
