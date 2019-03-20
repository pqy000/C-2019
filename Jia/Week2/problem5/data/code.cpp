	#include<iostream>
	using namespace std;
	
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

	int cal(int n, int m) {
		if (m == 1) { return n; }
		if (n == m) { return 1; }
		return cal(n - 1, m) + cal(n - 1, m - 1);
	}
	
	int main() {
		for(int i = 1; i <= 5; i++){
			name1(i); name2(i);
			int n, m;
			cin >> n >> m;
			cout << cal(n, m) << endl;
		}	
		return 0;
	}
