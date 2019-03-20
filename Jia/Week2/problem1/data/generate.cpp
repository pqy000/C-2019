	#include <iostream>  
	using namespace std;  
	double cal(int a) {
		double result;
		if (a>=400) result = 150*0.4463+250*0.4663+(a-400)*0.5663;
		if (a>=150&&a<400) result = 150*0.4463+(a-150)*0.4663;
		if (a < 150) result = a*0.4463;
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
	int main()  
	{  
		for(int i = 1; i <= 10; i++ ){
			// freopen(name1(i),"r",stdin);//设置 cin scanf 这些输入流都从 test.in中读取
	  		// freopen(name2(i),"w",stdout);//设置 cout printf 这些输出流都输出到 test.out里面去
	  		name1(i);
	  		name2(i);
		    int a; cin >> a;
		    double r = cal(a);  
		    printf("%0.1f", r);  
		}
	    return 0;  
	}  
