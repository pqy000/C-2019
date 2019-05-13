#include<iostream>
using namespace std;

int main(){
        int a[5], temp;
        for(int i=0; i<5; i++) 
                cin >> a[i];
        temp = a[0];
        for(int i=1; i<5; i++){ 
                a[i-1] = a[i];
        }
        a[4] = temp;
        for(int i=0; i<5; i++) {
                cout << a[i] << " ";
        }

        return 0;
}
