#include <bits/stdc++.h>
using namespace std;

int main() {
	int l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	if (l1 > l2) {
		swap(l1, l2);
		swap(r1, r2);
	}
	if (r1 <= l2)cout << 0 << endl;
	else if (r1 <= r2)cout << r1 - l2 << endl;
	else cout << r2 - l2 << endl;
        // cout << max(0, min(r1, r2) - max(l1, l2)) << endl; (this is sufficient in fact)
	return 0;
}
