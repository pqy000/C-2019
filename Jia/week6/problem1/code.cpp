#include<iostream>
using namespace std;

int pow(int x, int y) {
        int s = 1;
        for(int i=1; i <= y; i++){ 
                s = s * x;
        }
        return s;
}

int main() { 
        int x, y, result;
        cin >> x >> y;
        result = pow(x, y);
        cout << result << endl;

        return 0;
}
