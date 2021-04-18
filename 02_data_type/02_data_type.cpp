#include <iostream>
#include <limits>

using namespace std;

/*
基本的内置类型
C++ 为程序员提供了种类丰富的内置数据类型和用户自定义的数据类型。下表列出了七种基本的 C++ 数据类型：

类型	关键字
布尔型	bool
字符型	char
整型	int
浮点型	float
双浮点型	double
无类型	void
宽字符型	
wchar_t

其实 wchar_t 是这样来的：typedef short int wchar_t;  所以 wchar_t 实际上的空间是和 short int 一样。
*/

/*
一些基本类型可以使用一个或多个类型修饰符进行修饰：
signed
unsigned
short
long
*/

/*
下表显示了各种变量类型在内存中存储值时需要占用的内存，以及该类型的变量所能存储的最大值和最小值。
注意：不同系统会有所差异，一字节为 8 位。
类型	位	范围
char	1 个字节	-128 到 127 或者 0 到 255
unsigned char	1 个字节	0 到 255
signed char	1 个字节	-128 到 127
int	4 个字节	-2147483648 到 2147483647
unsigned int	4 个字节	0 到 4294967295
signed int	4 个字节	-2147483648 到 2147483647
short int	2 个字节	-32768 到 32767
unsigned short int	2 个字节	0 到 65,535
signed short int	2 个字节	-32768 到 32767
long int	8 个字节	-9,223,372,036,854,775,808 到 9,223,372,036,854,775,807
signed long int	8 个字节	-9,223,372,036,854,775,808 到 9,223,372,036,854,775,807
unsigned long int	8 个字节	0 到 18,446,744,073,709,551,615
float	4 个字节	精度型占4个字节（32位）内存空间，+/- 3.4e +/- 38 (~7 个数字)
double	8 个字节	双精度型占8 个字节（64位）内存空间，+/- 1.7e +/- 308 (~15 个数字)
long double	16 个字节	长双精度型 16 个字节（128位）内存空间，可提供18-19位有效数字。
wchar_t	2 或 4 个字节	1 个宽字符
*/

void test1()
{
    cout << "type: \t\t"
         << "************size**************" << endl;
    cout << "bool: \t\t"
         << "所占字节数：" << sizeof(bool);
    cout << "\t最大值：" << (numeric_limits<bool>::max)();
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
    cout << "char: \t\t"
         << "所占字节数：" << sizeof(char);
    cout << "\t最大值：" << (numeric_limits<char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
    cout << "signed char: \t"
         << "所占字节数：" << sizeof(signed char);
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
    cout << "unsigned char: \t"
         << "所占字节数：" << sizeof(unsigned char);
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
    cout << "wchar_t: \t"
         << "所占字节数：" << sizeof(wchar_t);
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
    cout << "short: \t\t"
         << "所占字节数：" << sizeof(short);
    cout << "\t最大值：" << (numeric_limits<short>::max)();
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
    cout << "int: \t\t"
         << "所占字节数：" << sizeof(int);
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
    cout << "unsigned: \t"
         << "所占字节数：" << sizeof(unsigned);
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
    cout << "long: \t\t"
         << "所占字节数：" << sizeof(long);
    cout << "\t最大值：" << (numeric_limits<long>::max)();
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
    cout << "unsigned long: \t"
         << "所占字节数：" << sizeof(unsigned long);
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
    cout << "double: \t"
         << "所占字节数：" << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
    cout << "long double: \t"
         << "所占字节数：" << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
    cout << "float: \t\t"
         << "所占字节数：" << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
    cout << "size_t: \t"
         << "所占字节数：" << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
    cout << "string: \t"
         << "所占字节数：" << sizeof(string) << endl;
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;
    cout << "type: \t\t"
         << "************size**************" << endl;
}

/*
typedef 声明:可以使用 typedef 为一个已有的类型取一个新的名字。下面是使用 typedef 定义一个新类型的语法：
typedef type newname; 

例如，下面的语句会告诉编译器，feet 是 int 的另一个名称：
typedef int feet;
现在，下面的声明是完全合法的，它创建了一个整型变量 distance：
feet distance;
*/

typedef int myInt;
void test2()
{
    myInt a = 20;
    cout << "a = " << a << "\n";
}

/*
枚举类型(enumeration)是C++中的一种派生数据类型，它是由用户定义的若干枚举常量的集合。
如果一个变量只有几种可能的值，可以定义为枚举(enumeration)类型。所谓"枚举"是指将变量的值一一列举出来，
变量的值只能在列举出来的值的范围内。

创建枚举，需要使用关键字 enum。枚举类型的一般形式为：
enum 枚举名{ 
     标识符[=整型常数], 
     标识符[=整型常数], 
... 
    标识符[=整型常数]
} 枚举变量;

*/
enum color
{
    red,
    green,
    blue = 10,
    white,
    black
};

void test3()
{
    enum color myColor = green;
    cout << "111 myColor = " << myColor << "\n";
    myColor = blue;
    cout << "222 myColor = " << myColor << "\n";
    myColor = black;
    cout << "333 myColor = " << myColor << "\n";
}

int main()
{
    cout << "test 11111111\n";
    test1();

    cout << "\ntest 222222222222\n";
    test2();

    cout << "\ntest 33333333333\n";
    test3();
    return 0;
}