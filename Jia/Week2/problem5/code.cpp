	#include<iostream>
	using namespace std;
	
	int cal(int n, int m) {
		if (m == 1) { return n; }
		if (n == m) { return 1; }
		return cal(n - 1, m) + cal(n - 1, m - 1);
	}
	
	int main() {
		int n, m;
		cin >> n >> m;
		cout << cal(n, m) << endl;
	
		return 0;
	}