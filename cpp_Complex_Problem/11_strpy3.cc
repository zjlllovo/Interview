#include <iostream>
#include <string.h>

using std::cout;
using std::endl;
// void test3(char *str1) {
//   char string[10];
//   if (strlen(str1) <= 10) {
//     strcpy(string, str1);
//   }
//
//   cout << string << endl;
// }

// 这个代码有几个问题
//   1.风险若str1等于10字节，那么string串中将没有\0;
//   2.应该检查str1是否为空指针。
//
void test3(char *str1) {
  char string[10];
  if (str1 && strlen(str1) < 10) {
    strncpy(string, str1, 9);
  }
  cout << string << endl;
}
int main() {
  char str[] = "0123456789";
  test3(str);
}

// 推荐使用strncpy,可以准确控制拷贝字节数。防止缓冲区溢出。
