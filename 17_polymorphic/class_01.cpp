#include <iostream>

using namespace std;

// C++多态

/*
多态按字面的意思就是多种形态。当类之间存在层次结构，并且类之间是通过继承关联时，就会用到多态。
C++ 多态意味着调用成员函数时，会根据调用函数的对象的类型来执行不同的函数。

典型场景：用父类声明参数，实际用子类入参
*/
/*
class Shape {
   protected:
      int width, height;
   public:
      Shape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
      int area()
      {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};
*/
/*
当上面的代码在main()中被编译和执行时，它会产生下列结果：
Parent class area
Parent class area
导致错误输出的原因是，调用函数 area() 被编译器设置为基类中的版本，这就是所谓的静态多态，或静态链接， 
即函数调用在程序执行前就准备好了。有时候这也被称为早绑定，因为 area() 函数在程序编译期间就已经设置好了。
*/
// 对程序稍作修改，在 Shape 类中，area() 的声明前放置关键字 virtual
class Shape
{
protected:
    int width, height;

public:
    Shape(int a = 0, int b = 0)
    {
        width = a;
        height = b;
    }
    virtual int area()
    {
        cout << "Parent class area :" << endl;
        return 0;
    }
};

/*
编译和执行修改后的实例代码时，它会产生以下结果：
area of rec = Rectangle class area :
70
area of tri = Triangle class area :
25
*/

/*
虚函数:
虚函数是在基类中使用关键字 virtual 声明的函数。在派生类中重新定义基类中定义的虚函数时，会告诉编译器不要静态链接到该函数。
我们想要的是在程序中任意点可以根据所调用的对象类型来选择调用的函数，这种操作被称为动态链接，或后期绑定。

纯虚函数:
可能想要在基类中定义虚函数，以便在派生类中重新定义该函数更好地适用于对象，但是在基类中又不能对虚函数给出有意义的实现，
这个时候就会用到纯虚函数。

我们可以把基类中的虚函数 area() 改写如下：
class Shape {
   protected:
      int width, height;
   public:
      Shape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
      // pure virtual function
      virtual int area() = 0;
};
= 0 告诉编译器，函数没有主体，上面的虚函数是纯虚函数。

-- 类比于Java中的abstract
*/

class Rectangle : public Shape
{
public:
    Rectangle(int a = 0, int b = 0) : Shape(a, b) {}
    int area()
    {
        cout << "Rectangle class area :" << endl;
        return (width * height);
    }
};
class Triangle : public Shape
{
public:
    Triangle(int a = 0, int b = 0) : Shape(a, b) {}
    int area()
    {
        cout << "Triangle class area :" << endl;
        return (width * height / 2);
    }
};
// 程序的主函数
int main()
{
    Shape *shape;
    Rectangle rec(10, 7);
    Triangle tri(10, 5);

    // 存储矩形的地址
    shape = &rec;
    // 调用矩形的求面积函数 area
    cout << "area of rec = " << shape->area() << endl;

    // 存储三角形的地址
    shape = &tri;
    // 调用三角形的求面积函数 area
    cout << "area of tri = " << shape->area() << endl;

    return 0;
}