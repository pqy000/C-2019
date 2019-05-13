#include<iostream>
#include<algorithm>
using namespace std;
#define NMAX 200005
int num[NMAX], N, dig[NMAX], maxValue = 0;

int main() {
    scanf("%d", &N);
    for(int i = 0; i < N; i++) { scanf("%d", &num[i]); }
    dig[0] = num[0], maxValue = num[0];

    //O(nlog(n))
    for(int i = 1; i < N; i++) {
        dig[i] = max(dig[i - 1], 0) + num[i];
        if(maxValue < dig[i]) maxValue = dig[i];
    }
    
    printf("%d\n", maxValue);

    return 0;
}