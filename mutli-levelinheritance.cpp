#include<iostream>
using namespace std;
class Parents{
    public:
    string name;
};
class Child:public Parents{
    public:
    int age;
};
class Grandchild:public Child{
    public:
    int weight;

};
int main(){
    Grandchild ankit;
    ankit.name=" ";
    cout<<ankit.name<<endl;
    ankit.weight=20;
    cout<<ankit.weight<<endl;
    ankit.age=30;
    cout<<ankit.age<<endl;
    return 0;

}