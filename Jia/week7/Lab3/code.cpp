#include<iostream>
#include<string.h>
using namespace std;

char s[55];
int n;

int main() {
    scanf("%d",&n); //getchar();
    scanf("%s", s);
    int len = (int)strlen(s);
    
    for(int i = 0; i < len; i++) {
        s[i] = ((s[i] + n) - 'a') % 26 + 'a';
    }
    cout << s << endl;

    return 0;
}
