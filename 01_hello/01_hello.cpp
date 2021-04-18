#include <iostream>

using namespace std;

// Linux下编译需要使用命令：gcc main.cpp -lstdc++
int  main()
{
    cout << "Hello World, Hello C++" << "\n";
    cout << "Hello World, Hello C++" << endl;

    return 0;
}

/*
所有的编程语言都允许某种形式的注释。C++ 支持单行注释和多行注释。注释中的所有字符会被 C++ 编译器忽略。

C++ 注释一般有两种：
*/

// ---          一般用于单行注释。
/* ... */ -- // 一般用于多行注释(块注释符)。


/*
块注释符是不可以嵌套使用的。
#if 0 ... #endif 属于条件编译，0 即为参数。
所以还可以使用 #if 0 ... #endif 来实现注释，且可以实现嵌套，格式为：

#if 0
   code
#endif 

或者
#if condition
  code1
#else
  code2
#endif

*/