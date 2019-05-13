#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    cin>>str;
    int len;
    len=strlen(str);
    char *p=&str[len-1];
    while(p>=str)
    {
       cout<<*p;
       p--; 
    }
       cout<<endl;
       return 0;
}
