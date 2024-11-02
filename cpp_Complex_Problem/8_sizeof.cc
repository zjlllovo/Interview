#include <iostream>

using std::cout;
using std::endl;

void func(char str[100]) {
  cout << sizeof(str) << endl;
} // 8 why? 当数组被当作参数被传递时会退化位指针。所以这里的str是一个指针
short f() { return 1; }
class A {};

// 结构体对齐：以结构体中对齐要求最大的成员作为对齐需求。X是以4字节位对齐需求。i占4，j占4，k占1,但是需要填充10-12这个字节区间，来达到内存对齐。
class X {
  int i;
  int j;
  char k;
};
//
int main() {
  char str[] = "hello";
  cout << sizeof(str) << endl; // 6?why?这里的str是一个数组，sizeof计算方式 h e
                               // l l o \0 6个字符。

  char *p = str;
  cout << sizeof(p) << endl; // 8

  int n = 10;
  cout << sizeof(n) << endl; // 4

  void *p1 = malloc(100);
  cout << sizeof(p1) << endl; // 8

  cout << sizeof(A) << endl;   // 1
  cout << sizeof(X) << endl;   // 12?//涉及到结构体对齐的知识。
  cout << sizeof(f()) << endl; // 2

  char str1[] = "asfiaosfhasifnabfiajf";
  func(str1);
  // func(str);//8
}
