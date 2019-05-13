#include<iostream>
#include<cmath>
using namespace std;
const double Pi = 3.14159;

class Circle{
private: 
        double m_r;
public:
        void setR(double r){   m_r = r;  }
        double getR(){  return m_r; }
        double getArea(){ return Pi * m_r * m_r; }
};


int main() {
        Circle c;
        double r;
        cin >> r;
        c.setR(r);        
        printf("%.3f\n",c.getArea());

        return 0;
}





