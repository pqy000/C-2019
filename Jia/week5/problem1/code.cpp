#include<iostream>
using namespace std;
class Point {
private:
        int x, y;
public:
        void setXY(int a, int b) {
                x = a;
                y = b;
        }
        int getX(){ return x; }
        int getY(){ return y; }
};
int main(){
        Point p1;
        int Px,Py;
        cin >> Px >> Py;
        p1.setXY(Px, Py);
        cout << p1.getX() << " " << p1.getY() << endl;
        return 0;
}
