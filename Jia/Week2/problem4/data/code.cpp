 #include<iostream>
using namespace std;

long long sum, x, n;

long long cal(long long sum, long long n) {
    if (n == 1) { return sum * (1 + x); }
    sum = sum * (1 + x);
    n = n - 1;
    return cal(sum, n);
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

int main(){
	for(int i=1; i<=5; i++){
		name1(i); name2(i);
	    sum = 1;
	    cin >> x >> n;
	    cout << cal(sum, n) << endl;
	}
    
    return 0;
}