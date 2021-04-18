#include <iostream>

using namespace std;

/*
C++ 允许在 char、int 和 double 数据类型前放置修饰符。修饰符用于改变基本类型的含义，所以它更能满足各种情境的需求。

下面列出了数据类型修饰符：
signed
unsigned
long
short
修饰符 signed、unsigned、long 和 short 可应用于整型，signed 和 unsigned 可应用于字符型，long 可应用于双精度型。
修饰符 signed 和 unsigned 也可以作为 long 或 short 修饰符的前缀。例如：unsigned long int

C++ 允许使用速记符号来声明无符号短整数或无符号长整数。可以不写 int，只写 unsigned、short 或 unsigned、long，int 是隐含的。
例如，下面的两个语句都声明了无符号整型变量。
unsigned x;
unsigned int y;
*/

void test1()
{
    short int i;          // 有符号短整数
    short unsigned int j; // 无符号短整数

    j = 50000;
    i = j;
    cout << "i = " << i << ", j = " << j << "\n";
}

/*
C++ 中的类型限定符
类型限定符提供了变量的额外信息。

限定符	含义
const	const 类型的对象在程序执行期间不能被修改改变。
volatile	修饰符 volatile 告诉编译器不需要优化volatile声明的变量，让程序可以直接从内存中读取变量。对于一般的变量编译器会对变量进行优化，将内存中的变量值放在寄存器中以加快读写效率。
restrict	由 restrict 修饰的指针是唯一一种访问它所指向的对象的方式。只有 C99 增加了新的类型限定符 restrict。
*/

int main()
{
    cout << "test 11111111111\n";
    test1();

    return 0;
}
