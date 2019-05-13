#include<iostream>
#include<algorithm>
using namespace std;

struct qj
{
    long int l;
    long int r;
};
qj q[100000];
bool vis[100000];

bool comp(qj a,qj b)
{
    if(a.r>b.r) return 0;
    else return 1;
}

class Dig {
private:
    int ans, n;
    struct qj * qjj;
    bool vis[100000];
public:
    Dig(struct qj * q, int N) {
        for(int i=0; i<100000; i++) vis[i] = 0;
        ans = 0;
        n = N;
        qjj = q;
    }

    void check() {
        ans = 0;
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])//没有被选过，直接选择
            {
                ans++;//选择该区间 
                vis[i]=1;//标记已经选择，可删去
                for(int j=i+1;j<=n;j++)
                {
                    if(qjj[i].r>qjj[j].l) //本区间的右边界在其他区间的左边界右边，则相交 
                    {
                        vis[j]=1;//标记相交区间
                    }
                }
            }
        }
        cout<< ans <<endl;
    }
};


int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>q[i].l>>q[i].r;
    sort(q+1,q+1+n,comp);//排序

    Dig dig(q, n);
    dig.check();


    return 0;
}
