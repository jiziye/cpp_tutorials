/*
大多数的 C++ 编译器都支持大部分通用的强制转换运算符：

(type) expression 

其中，type 是转换后的数据类型。下面列出了 C++ 支持的其他几种强制转换运算符：

=>      const_cast<type> (expr): const_cast 运算符用于修改类型的 const / volatile 属性。
    除了 const 或 volatile 属性之外，目标类型必须与源类型相同。
    这种类型的转换主要是用来操作所传对象的 const 属性，可以加上 const 属性，也可以去掉 const 属性。

=>     dynamic_cast<type> (expr): dynamic_cast 在运行时执行转换，验证转换的有效性。
    如果转换未执行，则转换失败，表达式 expr 被判定为 null。
    dynamic_cast 执行动态转换时，type 必须是类的指针、类的引用或者 void*，
    如果 type 是类指针类型，那么 expr 也必须是一个指针，如果 type 是一个引用，那个 expr 也必须是一个引用。

=>     reinterpret_cast<type> (expr): reinterpret_cast 运算符把某种指针改为其他类型的指针
    它可以把一个指针转换为一个整数，也可以把一个整数转换为一个指针。

=>     static_cast<type> (expr): static_cast 运算符执行非动态转换，没有运行时类检查来保证转换的安全性。
    例如，它可以用来把一个基类指针转换为派生类指针。
*/

#include <iostream>
using namespace std;
 
int main()
{
   double a = 21.09399;
   float b = 10.20;
   int c ;
 
   c = (int) a;
   cout << "Line 1 - Value of (int)a is :" << c << endl ;
   
   c = (int) b;
   cout << "Line 2 - Value of (int)b is  :" << c << endl ;
   
   return 0;
}