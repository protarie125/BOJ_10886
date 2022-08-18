#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	auto p = int{ 0 };
	auto q = int{ 0 };
	while (0 < (n--)) {
		auto x = int{};
		cin >> x;

		if (1 == x) {
			++p;
		}
		else {
			++q;
		}
	}

	if (q < p) {
		cout << "Junhee is cute!";
	}
	else {
		cout << "Junhee is not cute!";
	}

	return 0;
}