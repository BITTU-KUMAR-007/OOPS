#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int weight;
    int age;
    void speedup(){
        cout<<"speeding up"<<endl;
    }
    void breakmaro(){
        cout<<"break maro"<<endl; 
    }

};
class Scorpio:public Car{
    

};
int main(){
    Scorpio babbarwali;
    babbarwali.speedup();
    Car *babbar=new Car;
    (*babbar).breakmaro();
    return 0;

}