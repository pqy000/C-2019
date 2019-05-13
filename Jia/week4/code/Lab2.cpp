#include <iostream>
using namespace std;
void swap(int *xp,int *yp)
{
    int tmp;
    tmp=*xp;
    *xp=*yp;
    *yp=tmp;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
