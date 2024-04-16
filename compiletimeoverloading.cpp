#include<iostream>
using namespace std;
class Maths{
    public:
    int sum(int a, int b){
        cout<<" am first parameter"<<endl;
        return a+b;
    }
    int sum(int a,int b, int c){
        cout<<"i am second signature"<<endl;
        return a+b+c;
    }
    int sum(int a,float b){
        cout<<"i am third signature"<<endl;
        return a+b;
    }
};
int main(){
    Maths a;
    a.sum(2,3);
    cout<<a.sum(2,3)<<endl;
    a.sum(3,4,5);
    cout<<a.sum(3,4,5)<<endl;
    a.sum(50,80);
    cout<<a.sum(50,80)<<endl;

    cout<<"bittu kumar"<<endl;

}