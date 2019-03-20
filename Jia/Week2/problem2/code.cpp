	#include<iostream>
	using namespace std;
	
	double a, b;
	
	int cal(double a, double b){
		double inputMoney;
		int result;
		inputMoney = a + b / 10;
		result = inputMoney / 1.9;
		return result;
	}
	
	int main() {
	    cin >> a >> b;
	    int result;
	    result = cal(a, b);
	    cout << result << endl;
	    
	    return 0;
	}