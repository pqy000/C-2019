#include <iostream>
using namespace std;
void selectsort(int *list,int count)
{
        for(int i=0;i<count-1;i++)
            {
                    int k=i;
                    for(int j=i+1;j<count;j++)
                    
                     if(*(list+j)<*(list+k)){ k=j; }
                        if(k!=i)
                            {
                                  int tmp=*(list+i);
                                  *(list+i)=*(list+k);
                                  *(list+k)=tmp;
                            }
                }
}
int main()
{
        int n;
        cin>>n;
        int array[20];
        for(int j=0;j<n;j++)
            cin>>array[j];
        selectsort(array,n);
        for(int i=0;i<n;i++)
           cout<<array[i]<<" ";
        return 0;
}