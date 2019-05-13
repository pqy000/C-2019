#include<iostream>
using namespace std;
int main()
{
    char str[100];
    char *ptr=str;
    int total,cap,sma,num,oth;
    total=cap=sma=num=oth=0;
    cin.get(ptr,100);
    while(*ptr!=0)
    {
        total++;
        if(*ptr>='A'&&*ptr<='Z')cap++;
        else if(*ptr>='a'&&*ptr<='z')sma++;
        else if(*ptr>='0'&&*ptr<='9')num++;
        else oth++;
        ptr++;
    }
    cout<<cap<<endl;
    cout<<sma<<endl;
    cout<<num<<endl;
    cout<<oth<<endl;
    cout<<total<<endl;
    return 0;
}