#include<iostream>
using namespace std;
int main()
{
      int n,i=1;
    char a[20],*ptr;
    ptr=a;
    cin>>n;
    do{
            if(i%4)
                {
                     *ptr=n%10+'0';
                      n=n/10;
                    }
            else *ptr=',';
            ptr++;
        i++;
    }while(n);
    do{
            ptr--;
            i--;
            cout<<*ptr;
    }while(i>1);
    cout<<endl;
    
    return 0;
}