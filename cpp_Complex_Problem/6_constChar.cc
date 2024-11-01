#include <iostream>
#include <string.h>
// char *getContent() { return "1111"; }
//
// int main() {
//   char *p = getContent();
//   std::cout << p << std::endl;
//   p[0] = '2';
//   std::cout << p << std::endl;
// }

// 这段代码错得低级
//
//"1111"是在虚拟内存中是在数据段
// 数据段是只读区域，p[0] = '2'是不可以的。
//
// 这样改
char *getContent() {
  char *buf = (char *)malloc(sizeof(char) * 5);
  // char *buf = new char[5];
  strcpy(buf, "1111");
  return buf;
}

int main() {
  char *p = getContent();
  std::cout << p << std::endl;
  p[0] = '2';
  std::cout << p << std::endl;
}
