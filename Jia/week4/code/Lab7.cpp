#include <iostream>
using namespace std;

// 函数声明
double getAverage(int *arr, int size);

int main ()
{
    // 带有 5 个元素的整型数组
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    avg = getAverage( balance, 5 ) ;

    cout << avg << endl;
    
    return 0;
}

double getAverage(int *arr, int size)
{
    int    i, sum = 0;
    double avg;
    
    for (i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    
    avg = double(sum) / size;
    
    return avg;
} 