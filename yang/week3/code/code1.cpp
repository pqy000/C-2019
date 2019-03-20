#include<iostream>
using namespace std;

void Swap1(int a, int b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    printf("%d %d\n", a, b);
}

void Swap2(int *p1, int *p2) {
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int main(){
    int a, b;
    cin >> a >> b;
    Swap2(&a, &b);
    printf("%d %d\n", a, b);
    
    return 0;
}
