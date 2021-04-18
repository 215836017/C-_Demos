#include <iostream>

using namespace std;

/*
C++类访问修饰符
*/

/*
类成员的访问限制是通过在类主体内部对各个区域标记 public、private、protected 来指定的。关键字 public、private、protected 称为访问修饰符。

一个类可以有多个 public、protected 或 private 标记区域。
每个标记区域在下一个标记区域开始之前或者在遇到类主体结束右括号之前都是有效的。成员和类的默认访问修饰符是 private。
class Base {
 
   public:
 
  // 公有成员
 
   protected:
 
  // 受保护成员
 
   private:
 
  // 私有成员
 
};

*/

/*
公有成员在程序中类的外部是可访问的。可以不使用任何成员函数来设置和获取公有变量的值
*/
class Line
{
public:
    double length;
    double getLength();
    void setLen(double len);
};

double Line::getLength()
{
    return length;
}

void Line::setLen(double len)
{
    length = len;
}

void test1()
{
    Line line;
    // 设置长度
    line.setLen(6.0);
    cout << "Length of line : " << line.getLength() << endl;

    // 不使用成员函数设置长度
    line.length = 10.0; // OK: 因为 length 是公有的
    cout << "Length of line : " << line.length << endl;
}

/*
私有（private）成员
私有成员变量或函数在类的外部是不可访问的，甚至是不可查看的。只有类和友元函数可以访问私有成员。
默认情况下，类的所有成员都是私有的。
*/

class Box
{
    int width; // 默认情况下，类的所有成员都是私有的
private:       //  私有成员
    double breath;

public:
    double lenght;
    int getWidth();
    void setWidth(int width);
    double getBreath();
    void setBreath(double bre);
};
int Box::getWidth()
{
    return width;
}
void Box::setWidth(int wid)
{
    width = wid;
}

double Box::getBreath()
{
    return breath;
}

void Box::setBreath(double bre)
{
    breath = bre;
}

void test2()
{
    Box box;

    // 不使用成员函数设置宽度
    // box.width = 10; // Error: 因为 width 是私有的
    box.setWidth(10); // 使用成员函数设置宽度
    cout << "Width of box : " << box.getWidth() << endl;

    box.setBreath(11.0); // 使用成员函数设置宽度
    cout << "Breath of box : " << box.getBreath() << endl;
}

/*
protected（受保护）成员
protected（受保护）成员变量或函数与私有成员十分相似
但有一点不同，protected（受保护）成员在派生类（即子类）中是可访问的。
*/

class Box1
{
   protected:
      double width;
};
 
class SmallBox:Box1 // SmallBox 是派生类
{
   public:
      void setSmallWidth( double wid );
      double getSmallWidth( void );
};
 
// 子类的成员函数
double SmallBox::getSmallWidth(void)
{
    return width ;
}

void test3(){
    SmallBox box;
 
   // 使用成员函数设置宽度
   box.setSmallWidth(5.0);
   cout << "Width of box : "<< box.getSmallWidth() << endl;
}
 
void SmallBox::setSmallWidth( double wid )
{
    width = wid;
}

/*
继承中的特点
有public, protected, private三种继承方式，它们相应地改变了基类成员的访问属性。

1.public 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中
分别变成：public, protected, private

2.protected 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中
分别变成：protected, protected, private

3.private 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中
分别变成：private, private, private

但无论哪种继承方式，上面两点都没有改变：
1.private 成员只能被本类成员（类内）和友元访问，不能被派生类访问；
2.protected 成员可以被派生类访问。  
*/
int main()
{

    cout << "test 1111111" << endl;
    // test1();

    cout << "\n\ntest 2222222222" << endl;
    // test2();


    cout << "\n\ntest 33333333" << endl;
    test3();
    return 0;
}
