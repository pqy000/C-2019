	#include <iostream>  
	using namespace std;  
	double cal(int a) {
		double result;
		if (a>=400) result = 150*0.4463+250*0.4663+(a-400)*0.5663;
		if (a>=150&&a<400) result = 150*0.4463+(a-150)*0.4663;
		if (a < 150) result = a*0.4463;
		return result;
	}

	int main()  
	{  
	    int a; cin >> a;
	    double r = cal(a); 
	    printf("%.1f\n", r); 
	    return 0;  
	}  
