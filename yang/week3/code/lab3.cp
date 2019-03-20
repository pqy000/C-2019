#include <iostream>

using namespace std;

int sum (int a,int b=50)
{
    int result;
    result = a + b;
    return (result);
}

int main()

{
    int a, b;
    cin >> a >> b;
    int result;
    result =sum(a,b);
    cout<<"total value is :" << result<<endl;
    result = sum(a);
    cout<<"total value is:" << result <<endl;
    
    return 0;
    
}

