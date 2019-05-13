#include<iostream>
#include<algorithm>
using namespace std;
#define NMAX 200005


class Dig {
private:
    int *num;
    int N, maxValue;
    int dig[NMAX];
public:
    Dig(int *num_temp, int n) {
        num = num_temp;
        N = n;
    }
    void check() {
        dig[0] = num[0], maxValue = num[0];
        for(int i = 1; i < N; i++) {
            dig[i] = max(dig[i - 1], 0) + num[i];
            if(maxValue < dig[i]) maxValue = dig[i];
        }
        
        printf("%d\n", maxValue);
    }
};

int main() {
    int num[NMAX], N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) { scanf("%d", &num[i]); }
    Dig dig(num, N);
    dig.check();

    return 0;
}




