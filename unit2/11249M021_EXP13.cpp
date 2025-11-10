#include<iostream>
using namespace std;
class calculator {
    public:
    int add (int a ,int b){
        return a+b;
    }
    double add (double a ,double b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
};
int main(){
    calculator calc;
    cout<<"sum of 2 ingtegers:"<<calc.add(10,20)<<endl;
    cout<<"sum of 2 doubles:"<<calc.add(2.5,3.5)<<endl;
    cout<<"sum of 3 integers:"<<calc.add(1,2,3)<<endl;
    return 0;
}