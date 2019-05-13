#include<iostream>
using namespace std;

int main() {
    int a[10], i, maxV, minV, *p;
    p = a;
    for(int i=0; i<10; i++) {
        cin >> *p; *p++;
    }
    maxV = minV = a[0];
    for(p = a; p < a+10; p++) {
        if(*p > maxV) { maxV = *p; }
        if(*p < minV) { minV = *p; }
    }
    cout << maxV << " " << minV << endl;
    
    return 0;
}
