#include <iostream>

// void test() {
//   int *pint = new int;
//   *pint = 100;
// }
//
//
void test() {
  int *pint = new int;
  *pint = 100;
  delete pint;
  pint =
      nullptr; // 这一步其实不用加，因为马上test会销毁，pint也就没了，但是防止悬空指针是个好习惯。
}

int main() {
  test();
  return 0;
}

// 这个代码的问题是有内存泄漏，在test中申请空间后应该及时释放，谁申请谁处理
