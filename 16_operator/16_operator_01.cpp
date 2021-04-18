#include <iostream>

using namespace std;

// C++ 重载运算符和重载函数

/*
C++ 允许在同一作用域中的某个函数和运算符指定多个定义，分别称为 函数重载 和 运算符重载。
重载声明是指一个与之前已经在该作用域内声明过的函数或方法具有相同名称的声明，但是它们的参数列表和定义（实现）不相同。
当调用一个重载函数或重载运算符时，编译器通过所使用的参数类型与定义中的参数类型进行比较，决定选用最合适的定义。
选择最合适的重载函数或重载运算符的过程，称为重载决策。
*/

/*
C++ 中的函数重载
在同一个作用域内，可以声明几个功能类似的同名函数，但是这些同名函数的形式参数（指参数的个数、类型或者顺序）必须不同。
不能仅通过返回类型的不同来重载函数。
*/

class PrintData
{
public:
    void print(int i)
    {
        cout << "整数为: " << i << endl;
    }

    void print(double f)
    {
        cout << "浮点数为: " << f << endl;
    }

    void print(char c[])
    {
        cout << "字符串为: " << c << endl;
    }
};

void test1()
{
    PrintData pd;

    pd.print(3);
    pd.print(45.67);
    char c[] = "Hello C++";
    pd.print(c);
}

/*
C++ 中的运算符重载
可以重定义或重载大部分 C++ 内置的运算符。这样，就能使用自定义类型的运算符。
重载的运算符是带有特殊名称的函数，函数名是由关键字 operator 和其后要重载的运算符符号构成的。
与其他函数一样，重载运算符有一个返回类型和一个参数列表。

Box operator+(const Box&);
声明加法运算符用于把两个 Box 对象相加，返回最终的 Box 对象。

大多数的重载运算符可被定义为普通的非成员函数或者被定义为类成员函数。如果我们定义上面的函数为类的非成员函数，
那么我们需要为每次操作传递两个参数，如下所示：
Box operator+(const Box&, const Box&);
*/

/*
可重载运算符/不可重载运算符
下面是可重载的运算符列表：
双目算术运算符	+ (加)，-(减)，*(乘)，/(除)，% (取模)
关系运算符	==(等于)，!= (不等于)，< (小于)，> (大于)，<=(小于等于)，>=(大于等于)
逻辑运算符	||(逻辑或)，&&(逻辑与)，!(逻辑非)
单目运算符	+ (正)，-(负)，*(指针)，&(取地址)
自增自减运算符	++(自增)，--(自减)
位运算符	| (按位或)，& (按位与)，~(按位取反)，^(按位异或),，<< (左移)，>>(右移)
赋值运算符	=, +=, -=, *=, /= , % = , &=, |=, ^=, <<=, >>=
空间申请与释放	new, delete, new[ ] , delete[]
其他运算符	()(函数调用)，->(成员访问)，,(逗号)，[](下标)

下面是不可重载的运算符列表：
.：成员访问运算符
.*, ->*：成员指针访问运算符
::：域运算符
sizeof：长度运算符
?:：条件运算符
#： 预处理符号
*/
class Box
{
private:
    double length;
    double breadth;
    double height;

public:
    Box()
    {
    }
    Box(double len, double bre, double h)
    {
        length = len;
        breadth = bre;
        height = h;
    }
    double getVolume()
    {
        return length * breadth * height;
    }
    Box operator+(const Box &b)
    {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }
};

void test2(){
    Box Box1 = Box(6, 7, 5);
    Box Box2 = Box(12, 13,10);
    Box Box3;
    double volume = 0;

    // Box1 的体积
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   // Box2 的体积
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;
 
   // 把两个对象相加，得到 Box3
   Box3 = Box1 + Box2;
 
   // Box3 的体积
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;
}
int main()
{

    cout << "test 11111111" << endl;
    test1();

    cout << "\n\n test 222222222" << endl;
    test2();
    return 0;
}
