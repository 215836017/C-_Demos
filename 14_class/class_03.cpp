#include <iostream>

using namespace std;

// C++ 类构造函数 & 析构函数

/*
类的构造函数:
类的构造函数是类的一种特殊的成员函数，它会在每次创建类的新对象时执行。
构造函数的名称与类的名称是完全相同的，并且不会返回任何类型，也不会返回 void。
构造函数可用于为某些成员变量设置初始值。
*/

class Line
{
public:
    void setLength(double len);
    double getLength(void);
    Line(); // 这是构造函数
private:
    double length;
};
// 成员函数定义，包括构造函数
Line::Line(void)
{
    length = 10;
    cout << "Object is being created, default length = " << length << endl;
}

void Line::setLength(double len)
{
    length = len;
}

double Line::getLength(void)
{
    return length;
}
void test1()
{
    Line line;
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() << endl;
}

/*
带参数的构造函数
默认的构造函数没有任何参数，但如果需要，构造函数也可以带有参数。这样在创建对象时就会给对象赋初始值
*/
class Line1
{
public:
    void setLength(double len);
    double getLength(void);
    Line1(double len); // 这是构造函数
private:
    double length;
};
// 成员函数定义，包括构造函数
Line1::Line1(double len)
{
    cout << "Object is being created, default len = " << len << endl;
    length = len;
}

void Line1::setLength(double len)
{
    length = len;
}

double Line1::getLength(void)
{
    return length;
}
void test2()
{
    Line1 line1(20);
    line1.setLength(11.22);
    cout << "Length of line : " << line1.getLength() << endl;
}
/*
使用初始化列表来初始化字段：

Line::Line( double len): length(len)
{
    cout << "Object is being created, length = " << len << endl;
}
上面的语法等同于如下语法：

Line::Line( double len)
{
    length = len;
    cout << "Object is being created, length = " << len << endl;
}
假设有一个类 C，具有多个字段 X、Y、Z 等需要进行初始化，同理地，您可以使用上面的语法，只需要在不同的字段使用逗号进行分隔，如下所示：

C::C( double a, double b, double c): X(a), Y(b), Z(c)
{
  ....
}
*/

/*
类的析构函数
类的析构函数是类的一种特殊的成员函数，它会在每次删除所创建的对象时执行。
析构函数的名称与类的名称是完全相同的，只是在前面加了个波浪号（~）作为前缀，它不会返回任何值，也不能带有任何参数。
析构函数有助于在跳出程序（比如关闭文件、释放内存等）前释放资源。
*/

class Line2
{
public:
    void setLength(double len);
    double getLength(void);
    Line2();  // 这是构造函数声明
    ~Line2(); // 这是析构函数声明

private:
    double length;
};

// 成员函数定义，包括构造函数
Line2::Line2(void)
{
    cout << "Object is being created" << endl;
}
Line2::~Line2(void)
{
    cout << "Object is being deleted" << endl;
}

void Line2::setLength(double len)
{
    length = len;
}

double Line2::getLength(void)
{
    return length;
}

void test3()
{
    Line2 line2;

    // 设置长度
    line2.setLength(6.0);
    cout << "Length of line : " << line2.getLength() << endl;
}


int main()
{
    // cout << "test 111111111" << endl;
    // test1();

    // cout << "test 222222222" << endl;
    // test2();

    cout << "test 3333333333" << endl;
    test3();
    return 0;
}