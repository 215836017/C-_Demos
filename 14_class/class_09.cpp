#include <iostream>

using namespace std;

// C++类的静态成员

/*
我们可以使用 static 关键字来把类成员定义为静态的。
当我们声明类的成员为静态时，这意味着无论创建多少个类的对象，静态成员都只有一个副本
*/

/*
静态成员在类的所有对象中是共享的。如果不存在其他的初始化语句，在创建第一个对象时，所有的静态数据都会被初始化为零。
我们不能把静态成员的初始化放置在类的定义中，但是可以在类的外部通过使用范围解析运算符 :: 来重新声明静态变量从而对它进行初始化
*/

class Box
{
private:
    double len;
    double bre;
    double hei;

public:
    static int objectCount;
    Box(double l, double b, double h)
    {
        cout << "Constructor called. " << endl;
        len = l;
        bre = b;
        hei = h;

        objectCount++; // 每次创建对象时加1
    }
    double getVolume()
    {
        return len * bre * hei;
    }
};

int Box::objectCount = 0; //初始化类Box的静态成员
void test1()
{
    Box box1 = Box(1, 2, 3);
    Box box2 = Box(2, 3, 4);
    cout << "Total objects: " << Box::objectCount << endl;
}

/*
静态成员函数
如果把函数成员声明为静态的，就可以把函数与类的任何特定对象独立开来。
静态成员函数即使在类对象不存在的情况下也能被调用，静态函数只要使用类名加范围解析运算符 :: 就可以访问。

静态成员函数只能访问静态成员数据、其他静态成员函数和类外部的其他函数。

静态成员函数有一个类范围，他们不能访问类的 this 指针。可以使用静态成员函数来判断类的某些对象是否已被创建。

静态成员函数与普通成员函数的区别：
1.静态成员函数没有 this 指针，只能访问静态成员（包括静态成员变量和静态成员函数）。
2.普通成员函数有 this 指针，可以访问类中的任意成员；而静态成员函数没有 this 指针。
*/

class Box1
{
   public:
      static int objectCount;
      // 构造函数定义
      Box1(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         // 每次创建对象时增加 1
         objectCount++;
      }
      double Volume()
      {
         return length * breadth * height;
      }
      static int getCount()
      {
         return objectCount;
      }
   private:
      double length;     // 长度
      double breadth;    // 宽度
      double height;     // 高度
};

// 初始化类Box1的静态成员
int Box1::objectCount = 0;

void test2(){
cout << "在创建之前对象的数量(静态变量)：" << Box1::objectCount << endl;
cout << "在创建之前对象的数量(静态函数)：" << Box1::getCount() << endl;

Box1 b1 = Box1(1, 2,3);
Box1 b2 = Box1(2, 3, 4);


cout << "在创建后对象的数量(静态变量)：" << Box1::objectCount << endl;
cout << "在创建后对象的数量(静态函数)：" << Box1::getCount() << endl;

}
int main()
{

    cout << "test 1111111111" << endl;
    test1();


    cout << "\n\ntest 2222222" << endl;
    test2();

    return 0;
}
