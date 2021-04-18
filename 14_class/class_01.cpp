#include <iostream>

using namespace std;


/*
类成员函数
*/
class Box
{
public:
    double length;
    double breadth;
    double height;

    //第一种方式：成员函数声明，在外部实现
    double get();
    // 第二章方式：在内部实现 --- 内联
    double getVolume(){
        return length * breadth * height;
    }
    void set(double len, double bre, double h);
};

/*
需要注意的是，私有的成员和受保护的成员不能使用直接成员访问运算符 (.) 来直接访问。
*/

// 成员函数定义， :: 叫做范围解析运算符
double Box::get()
{
    return length * breadth * height;
}

void Box::set(double len, double bre, double h)
{
    length = len;
    breadth = bre;
    height = h;
}

int main()
{
    Box Box1;            // 声明 Box1，类型为 Box
    Box Box2;            // 声明 Box2，类型为 Box
    Box Box3;            // 声明 Box3，类型为 Box
    double volume = 0.0; // 用于存储体积

    // box 1 详述
    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    // box 2 详述
    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;

    // box 1 的体积
    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Box1 的体积：" << volume << endl;
    cout << "Box1 的体积：" << Box1.getVolume() << endl;

    // box 2 的体积
    volume = Box2.height * Box2.length * Box2.breadth;
    cout << "Box2 的体积：" << volume << endl;

    // box 3 详述
    Box3.set(16.0, 8.0, 12.0);
    volume = Box3.get();
    cout << "Box3 的体积：" << volume << endl;


    return 0;
}
