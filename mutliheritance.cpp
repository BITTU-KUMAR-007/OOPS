#include<iostream>
using namespace std;
class A{
    public:
    int physics;
};
class B{
    public:
    int chemistry;
};
class C:public A,public B{
    public:
    int maths;

};
int main(){
    C d;
    cout<<d.physics<<" "<<d.chemistry<<" "<<d.maths<<" "<<endl;

    return 0;

}