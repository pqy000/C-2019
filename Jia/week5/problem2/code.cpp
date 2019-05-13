#include<iostream>
using namespace std;

class Box {
private:
        double length;
        double volume;
        double area;
public:
        Box(double l) {
                length = l;
                volume = 0.0;
                area = 0.0;
        }
        //计算体积
        double getVolume(){
                return length * length * length;
        }
        //计算表面积
        double getArea() { 
                return length * length * 6;
        }
        void show(){ 
                volume = getVolume();
                area = getArea();
                cout << volume << " " << area << endl;     
        }
};
int main(){
        int length = 0;
        cin >> length;
        Box box(length);
        box.show();

        return 0;
}





