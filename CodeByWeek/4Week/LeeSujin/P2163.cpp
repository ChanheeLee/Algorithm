#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	cin >> m;


	if (1 <= n &&n <= 300 && 1 <= m&&m <= 300) {
		cout << m*(n - 1) + (m - 1);
	}

	return 0;
}

// �Է� : n,m (1<=n,m<=300)
//
// 1*n = n - 1��
// 2*n = 2n - 1��
// 3*n = 3n - 1��