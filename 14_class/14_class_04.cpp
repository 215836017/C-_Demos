#include <iostream>

using namespace std;

// C++ 拷贝构造函数

/*
拷贝构造函数是一种特殊的构造函数，它在创建对象时，是使用同一类中之前创建的对象来初始化新创建的对象。
拷贝构造函数通常用于：
1.通过使用另一个同类型的对象来初始化新创建的对象。
2.复制对象把它作为参数传递给函数。
3.复制对象，并从函数返回这个对象。

如果在类中没有定义拷贝构造函数，编译器会自行定义一个。如果类带有指针变量，并有动态内存分配，
则它必须有一个拷贝构造函数。拷贝构造函数的最常见形式如下：
classname (const classname &obj) {
   // 构造函数的主体
}
在这里，obj 是一个对象引用，该对象是用于初始化另一个对象的。
*/

class Line
{
public:
    int getLength(void);
    Line(int len);         // 简单的构造函数
    Line(const Line &obj); // 拷贝构造函数
    ~Line();               // 析构函数

private:
    int *ptr;
};

// 成员函数定义，包括构造函数
Line::Line(int len)
{
    cout << "调用构造函数" << endl;
    // 为指针分配内存
    ptr = new int;
    *ptr = len;
}
Line::Line(const Line &obj)
{
    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
    ptr = new int;
    *ptr = *obj.ptr; // 拷贝值
}

Line::~Line(void)
{
    cout << "释放内存" << endl;
    delete ptr;
}
int Line::getLength(void)
{
    return *ptr;
}

void display(Line obj)
{
    cout << "line 大小 : " << obj.getLength() << endl;
}

void test1()
{
    Line line(10);
    display(line);
}

// 对上面的实例稍作修改，通过使用已有的同类型的对象来初始化新创建的对象：
class Line1
{
public:
    int getLength(void);
    Line1(int len);          // 简单的构造函数
    Line1(const Line1 &obj); // 拷贝构造函数
    ~Line1();                // 析构函数

private:
    int *ptr;
};

// 成员函数定义，包括构造函数
Line1::Line1(int len)
{
    cout << "调用构造函数" << endl;
    // 为指针分配内存
    ptr = new int;
    *ptr = len;
}

Line1::Line1(const Line1 &obj)
{
    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
    ptr = new int;
    *ptr = *obj.ptr; // 拷贝值
}

Line1::~Line1(void)
{
    cout << "释放内存" << endl;
    delete ptr;
}
int Line1::getLength(void)
{
    return *ptr;
}

void display1(Line1 obj)
{
    cout << "line 大小 : " << obj.getLength() << endl;
}

void test2()
{
    Line1 line1(10);
    Line1 line2 = line1; // 这里也调用了拷贝构造函数

    display1(line1);
    display1(line2);
}
int main()
{
    // cout << "test 1111111" << endl;
    // test1();

    cout << "test 2222222" << endl;
    test2();

    return 0;
}