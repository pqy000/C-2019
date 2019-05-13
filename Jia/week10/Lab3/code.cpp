#include<iostream>
#include<string.h>
using namespace std;


class passWd {
private:	
	char *s;
	int n;
public:
	passWd(int N, char* S) {
		s = S;
		n = N;
	}
	void check() {
		int len = (int)strlen(s);
	    for(int i = 0; i < len; i++) {
	        s[i] = ((s[i] + n) - 'a') % 26 + 'a';
	    }
	    cout << s << endl;
	}
};

int main() {
	char s[55];
	int n;
    scanf("%d",&n); //getchar();
    scanf("%s", s);
    
    passWd pw(n, s);
    pw.check();

    return 0;
}
