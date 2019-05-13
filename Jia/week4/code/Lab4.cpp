#include <iostream>
using namespace std;
void bubble_up(int *ptr,int count)
{
     for(int i=0;i<count;i=i+1)
        for (int j=count-1;j>i;j=j-1)
            if(*(ptr+j-1)>*(ptr+j))
                {
                    int tmp=*(ptr+j-1);
                    *(ptr+j-1)=*(ptr+j);
                    *(ptr+j)=tmp;
        }
}
int main()
{
    int n;
    cin>>n;
    int list[100];
    for(int x=0;x<n;x++)
            cin>>list[x];
    bubble_up(list,n);
        for(int i=0;i<n;i++)
            cout<<list[i]<<" ";
        return 0;
}
