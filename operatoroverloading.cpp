#include<iostream>
using namespace std;
class Param{
    public: 
    int val;
    void operator+(Param& bittu2){
        int value1=this->val;
        int value2=bittu2.val;
        cout<<(value2-value1)<<endl;
    }
};
int main(){
    Param bittu1,bittu2;
    bittu1.val=9;
    bittu2.val=3;
    // this shoild print the difference between them
    bittu1+bittu2;
    return 0;

}