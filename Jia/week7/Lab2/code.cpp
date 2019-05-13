#include<iostream>
#include<string.h>
using namespace std;
char inputData1[7], inputData2[7];

int main() {
    // A - 65
    scanf("%s", inputData1);
    scanf("%s", inputData2);
    long long result1 = 1, result2 = 1;
        
    for(int i = 0; i < (int)strlen(inputData1); i++)
    {  result1 *= (inputData1[i] - 64); }
    for(int i = 0; i < (int)strlen(inputData2); i++)
    {  result2 *= (inputData2[i] - 64); }
    
    result1 = result1 % 47;
    result2 = result2 % 47;
    
    if(result1 == result2) {
        printf("GO\n");
    } else {
        printf("STAY\n");
    }
    
    return 0;
}