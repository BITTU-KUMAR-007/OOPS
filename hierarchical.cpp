#include<iostream>
using namespace std;
class Car{
    public:
    int age;
    int weight;
    string name;
    void speedup(){
        cout<<"speedup"<<endl;
    }
};
class Scorpio:public Car{

};
class fortuner:public Car{

};
int main(){
    Scorpio s11;
    s11.speedup();
    fortuner f11;
    f11.speedup();



}