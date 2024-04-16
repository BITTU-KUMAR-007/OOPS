#include<iostream>
using namespace std;
class Animal{
    private:
    int age;
    int weight;
    public:
    void eat(){
        cout<<"Eating"<<endl;
    }
    int getage(){
        return this->age;
    }
    int setage(){
        this->age=age;

    }
     
};
int main(){
    Animal a;
    a.eat();

}