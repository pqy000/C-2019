//函数重载,函数名称相同，函数的参数个数和类型不同可以重载
#include <iostream>
using namespace std;

void f() { cout<<"first"<<endl; }

void f(int x) { cout<<"second"<<endl; }

void f(int x,int y) { cout<<"third"<<endl; }

void f(double x){ cout<<"double"<<endl; }

int main()
{
    f();
    f(1);
    f(1,2);
    f(1.4);
    return 0;
}

