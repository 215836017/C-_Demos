#include <iostream>

using namespace std;

// C++ this 指针

/*
在 C++ 中，每一个对象都能通过 this 指针来访问自己的地址。this 指针是所有成员函数的隐含参数。
因此，在成员函数内部，它可以用来指向调用对象。

友元函数没有 this 指针，因为友元不是类的成员。只有成员函数才有 this 指针。
*/

class Box {
    private:
    double length;
    double width;
    double height;

    public:
    Box(double l = 2.0, double w = 2.0, double h = 2.0){
        cout <<"Constructor called." << endl;
         length = l;
         width = w;
         height = h;
    }
    double getVolume(){
        return length * width * height;
    }
    int compare(Box box){
        return this->getVolume() > box.getVolume();
    }
};

int main(void)
{
   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2
 
   if(Box1.compare(Box2))
   {
      cout << "Box2 is smaller than Box1" <<endl;
   }
   else
   {
      cout << "Box2 is equal to or larger than Box1" <<endl;
   }
   return 0;
}