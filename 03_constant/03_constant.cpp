#include <iostream>

using namespace std;

/*
在 C++ 中，有两种简单的定义常量的方式：
使用 #define 预处理器。
使用 const 关键字。
*/

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'
void test1()
{
    int area;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
}

void test2()
{
    const int LENGTH2 = 11;
    const int WIDTH2 = 5;
    const char NEWLINE2 = '\n';
    int area;

    area = LENGTH2 * WIDTH2;
    cout << area;
    cout << NEWLINE2;
}

int main()
{

    cout << "test 1111111111\n";
    test1();

    cout << "\ntest 222222222222222\n";
    test2();

    return 0;
}