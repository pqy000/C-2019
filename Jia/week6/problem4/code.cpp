#include<iostream>
#include<string.h>
using namespace std;

class Student {
private:
        int id;
        string name;
        int age;
public:
        //构造函数填空
        Student(int id_temp, string name_temp, int age_temp){
                id = id_temp;
                name = name_temp;
                age = age_temp;
        }
        //构造函数填空
        Student(const Student & s){
                id = s.id;
                age = s.age;
                name = s.name;
        }
        //析构函数填空
        ~Student() { };
        
        void show(){
                cout << id << " " << name << " " << age << endl;
        }
};
int main(){
        int id, age; 
        string name;
        cin >> id >> name >> age;
        Student s1(id, name, age);
        Student s2(s1);
        s1.show();
        s2.show();

        return 0;
}










