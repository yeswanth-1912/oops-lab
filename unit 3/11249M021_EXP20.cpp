#include <iostream>
using namespace std;
class Complex {
private:
    float real, imag;
public:
    void setData(float r, float i) {
        real = r;
        imag = i;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
    Complex operator + (Complex obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
};
int main() {
    Complex c1,c2,c3;
    c1.setData(3.5 ,2.5);
    c2.setData(1.5,4.5);
    c3= c1+c2;
    cout << "First Complex Number: ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();
    c3 = c1 + c2;
    cout << "Result (c1 + c2): ";
    c3.display();
    return 0;
}
