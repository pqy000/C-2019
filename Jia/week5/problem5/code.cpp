#include<iostream>
using namespace std;

class Gas{
private:
        double unprice;
        double price;
        double lead;
        double unlead;
        double total;
public: 
        Gas(double ulp, double lp){ 
                unprice = ulp;
                price = lp;
        }
        void show(){
                total = unlead * unprice + lead * price;
                cout << total << endl;
        }
        void getdata(){
                cin >> unlead;
                cin >> lead;
        }

};
int main() {
        Gas g1(17, 16);
        g1.getdata();
        g1.show();
        return 0;
}






