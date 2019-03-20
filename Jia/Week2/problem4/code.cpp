	#include<iostream>
	using namespace std;
	
	float sum, perc;
	int year;
	
	float cal(float sum, int n) {
		if (n == 1) { return sum * (1 + x); }
		sum = sum * (1 + x); 
		n = n - 1;
		return cal(sum, n);
	}
	
	int main(){
		sum = 1;
		cin >> x >> n;
		cout << cal(sum, n) << endl;
	
		return 0;
	} 