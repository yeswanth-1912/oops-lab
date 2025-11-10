#include<iostream>
using namespace std;
class number{
    int value;
    public:
    number(int v=0){value=v;}
    void display(){
        cout<<"value:"<<value<<endl;
    }
    number add (number obj){
        number temp;
        temp.value=value+obj.value;
        return temp;
    }
};
int main (){
    number n1(10),n2(20),n3;
    n3=n1.add(n2);
    cout<<"first number:";n1.display();
    cout<<"second number:",n2.display();
    cout<<"result after addition";n3.display();
    return 0;
}