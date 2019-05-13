#include<iostream>
using namespace std;
#define NMAX 1000

int test(int* arr, int len) {
        for(int i=0; i < len/2; i++) {
                if(arr[i] != arr[len-1-i]) { return 0; }
        }
        return 1;
}

int main(){
        int a[NMAX], n, ret;
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        ret = test(a, n);
        printf("%d\n", ret);        

        return 0;
}
