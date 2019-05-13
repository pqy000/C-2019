#include<iostream>
#include<math.h>
using namespace std;

class Rectangle {
private:
        int l_x;
        int l_y;
        int r_x;
        int r_y;
public:
        void Key() {
                cin >> l_x >> l_y >> r_x >> r_y;
        }
        int setS() {
                double length, width;
                length = abs(l_x - r_x);
                width = abs(l_y - r_y);
                return length * width;
        }
};

int main(){
        Rectangle r1;
        r1.Key();
        cout << r1.setS() << endl;

        return 0;
}

