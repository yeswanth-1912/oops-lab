#include<iostream>
using namespace std;
class rectangle{
    private:
    int length,width;
    public:
    rectangle(int l,int w){
        length = l;
        width = w;
        cout<<"parameterized constructor called:rectangle object created"<<endl;
    }
    void area(){
        cout<<"Area ="<<(length*width)<<endl;
    }
    rectangle(){
        cout<<"destructor called:rectangle object destroyed"<<endl;
    }
};
int main(){
    rectangle r1(10,5);
    r1.area();
    return 0;
}