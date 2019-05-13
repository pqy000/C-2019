#include<iostream>
using namespace std;
int M, N;
int a[10];

int main() {
    scanf("%d%d", &M, &N);
    if(M > N) {
        int temp = M;
        M = N;
        N = temp;
    }
    int dig;
    for(int i=M; i<=N; i++) {
        int current = i;
        while(current != 0){
            dig = current % 10;
            current = current / 10;
            a[dig]++;
        }        
    }
    for(int i=0; i<10; i++) {
        printf("%d ", a[i]);        
    }
    printf("\n");
    //system("pause");

    return 0;    
}