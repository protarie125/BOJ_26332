#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	while (0 < (n--)) {
		int c, p;
		cin >> c >> p;

		cout << c << ' ' << p << '\n';
		cout << p + (c - 1) * (p - 2) << '\n';
	}

	return 0;
}