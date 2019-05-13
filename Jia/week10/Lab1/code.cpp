#include<iostream>
using namespace std;
int M, N;
int a[10];

class DigSta {
private:
    int M, N, a[10];
public:
    DigSta(int m, int n){
        M = m; N = n;
        for(int i=0; i < 10; i++){ a[i] = 0; }
    }
    void cal() {
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
    }
};

int main() {
    int M, N;
    scanf("%d%d", &M, &N);
    DigSta ds(M, N);
    ds.cal();

    return 0;    
}
