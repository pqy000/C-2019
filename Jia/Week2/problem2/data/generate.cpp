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
	
void name1(int k){ //起名字生成.in 
	char str[111];
	sprintf(str,"%d",k); 
	strcat(str,".in"); 
	freopen(str,"r",stdin); 
} 
void name2(int k){ //起名字生成.in 
	char str[111];
	sprintf(str,"%d",k); 
	strcat(str,".out"); 
	freopen(str,"w",stdout); 
} 

	int main() {
		for(int i=1; i<=10; i++){
		name1(i); 
		name2(i);
	    cin >> a >> b;
	    int result;
	    result = cal(a, b);
	    cout << result << endl;
	}
	    
	    return 0;
	}