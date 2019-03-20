	#include<iostream>
	using namespace std;
	
	inline int add(int a, int b) { return a + b;  }
	inline float add(float a, float b) { return a + b; }
	inline int sub(int a, int b) { return a - b; }
	inline float sub(float a, float b) { return a - b; }
	
	int fac1(int n) {
	    if (n == 1) { return 1; }
	    return fac1(n - 1) * n;
	}
	int fac2(int n) {
	    int result = 1;
	    for (int i = 1; i <= n; i++){ result *= i; }
	    return result;
	}
	
	int main(){
	    int flag, flag1;
	    int numa1, numb1;
	    float  numa2, numb2;
	    cin >> flag;
	    if (flag == 1){
	        cin >> flag1;
	        if(flag1 == 1) {
	            cin >> numa1 >> numb1;
	            cout << add(numa1, numb1) << endl;
	        } else if(flag1 == 2){
	            cin >> numa2 >> numb2;
	            printf("%.1f", add(numa2, numb2));
	        }
	    }
	    else if (flag == 2){
	        cin >> flag1;
	        if(flag1 == 1) {
	            cin >> numa1 >> numb1;
	            cout << sub(numa1, numb1) << endl;
	        } else if(flag1 == 2){
	            cin >> numa2 >> numb2;
	            printf("%.1f", sub(numa2, numb2));
	        }
	    }
	    else if( flag == 3){
	        int n; cin >> n;
	        cout << fac2(n) << endl;
	    }
	
	    return 0;
	}

