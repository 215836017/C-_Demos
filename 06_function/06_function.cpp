#include <iostream>

using namespace std;
/*
函数参数: 如果函数要使用参数，则必须声明接受参数值的变量。这些变量称为函数的形式参数。
形式参数就像函数内的其他局部变量，在进入函数时被创建，退出函数时被销毁。

当调用函数时，有三种向函数传递参数的方式：

调用类型	描述
传值调用	该方法把参数的实际值赋值给函数的形式参数。在这种情况下，修改函数内的形式参数对实际参数没有影响。
指针调用	该方法把参数的地址赋值给形式参数。在函数内，该地址用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。
引用调用	该方法把参数的引用赋值给形式参数。在函数内，该引用用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。
默认情况下，C++ 使用传值调用来传递参数。一般来说，这意味着函数内的代码不能改变用于调用函数的参数。
*/

// 函数定义
void swap(int x, int y)
{
    int temp;

    temp = x; /* 保存 x 的值 */
    x = y;    /* 把 y 赋值给 x */
    y = temp; /* 把 x 赋值给 y */
    cout << "swap(): x = " << x << ", y = " << y << "\n";
    return;
}
void test1()
{
    // 局部变量声明
    int a = 100;
    int b = 200;

    cout << "交换前，a 的值：" << a << endl;
    cout << "交换前，b 的值：" << b << endl;

    // 调用函数来交换值
    swap(a, b);

    cout << "交换后，a 的值：" << a << endl;
    cout << "交换后，b 的值：" << b << endl;
}

void swap2(int *x, int *y)
{
    int temp;
    temp = *x; /* 保存地址 x 的值 */
    *x = *y;   /* 把 y 赋值给 x */
    *y = temp; /* 把 x 赋值给 y */
    cout << "swap2(): x = " << x << ", y = " << y << "\n";
    return;
}

void test2()
{
    // 局部变量声明
    int a = 100;
    int b = 200;

    cout << "交换前，a 的值：" << a << endl;
    cout << "交换前，b 的值：" << b << endl;

    /* 调用函数来交换值
    * &a 表示指向 a 的指针，即变量 a 的地址 
    * &b 表示指向 b 的指针，即变量 b 的地址 
    */
    swap2(&a, &b);

    cout << "交换后，a 的值：" << a << endl;
    cout << "交换后，b 的值：" << b << endl;
}

void swap3(int &x, int &y)
{
    int temp;
    temp = x; /* 保存地址 x 的值 */
    x = y;    /* 把 y 赋值给 x */
    y = temp; /* 把 x 赋值给 y  */
    cout << "swap3(): x = " << x << ", y = " << y << "\n";
    return;
}

void test3()
{
    // 局部变量声明
    int a = 100;
    int b = 200;

    cout << "交换前，a 的值：" << a << endl;
    cout << "交换前，b 的值：" << b << endl;

    /* 调用函数来交换值 */
    swap3(a, b);

    cout << "交换后，a 的值：" << a << endl;
    cout << "交换后，b 的值：" << b << endl;
}

/*
参数的默认值: 当定义一个函数，可以为参数列表中后边的每一个参数指定默认值。当调用函数时，如果实际参数的值留空，则使用这个默认值。
这是通过在函数定义中使用赋值运算符来为参数赋值的。调用函数时，如果未传递参数的值，则会使用默认值，
如果指定了值，则会忽略默认值，使用传递的值。
*/
void printParam(int a, int b = 10)
{
    cout << "printParam(): a = " << a << ", b = " << b << endl;
}
void test4()
{
    cout << "传递一个参数调用\n";
    printParam(1);

    cout << "传递两个参数调用\n";
    printParam(1, 100);
}

int main()
{
    cout << "test 1111111111\n";
    test1();

    cout << "\ntest 22222222222\n";
    test2();

    cout << "\ntest 33333333333333\n";
    test3();

    cout << "\ntest 444444444444444\n";
    test4();
}