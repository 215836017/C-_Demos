#include <iostream>

using namespace std;

// C++ 指向类的指针
/*
指向类的指针方式如同指向结构的指针。实际上，类可以看成是一个带有函数的结构。
*/

/*
一个指向 C++ 类的指针与指向结构的指针类似，访问指向类的指针的成员，需要使用成员访问运算符 ->，
就像访问指向结构的指针一样。与所有的指针一样，必须在使用指针之前，对指针进行初始化。
*/


class Box {
    private :
    double length;
    double breath;
    double height;

    public:
    Box(double l=2.0, double b = 2, double h = 2){
        cout << "Constructor called." << endl;
        length  = l;
        breath = b;
        height = h;
    }
    double getVolume(){
        return length * breath * height;
    }
};

int main(){
    Box box1(3.3, 1.1, 1.2);
    Box box2(8, 11, 20.9);
    Box *pBox;

    pBox = &box1;
    cout << "volume of box1: " << box1.getVolume() << endl;
    cout << "volume of box1(pBox): " << pBox->getVolume() << endl;

    pBox = &box2;
    cout << "volume of box2: " << box2.getVolume() << endl;
    cout << "volume of box2(pBox): " << pBox->getVolume() << endl;

    return 0;
}