#include<iostream>
#include<string.h>
using namespace std;


class Dig {
private:
    char * inputData1;
    char * inputData2;
    long long result1, result2;
public:
    Dig(char* input1, char* input2) {
        inputData1 = input1;
        inputData2 = input2;
        result1 = 1;
        result2 = 1;
    }
    void check() {
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

    }
};

int main() {
    // A - 65
    char input1[7], input2[7];
    scanf("%s", input1);
    scanf("%s", input2);
    Dig dig(input1, input2);
    dig.check();    
    
    return 0;
}


