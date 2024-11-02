#include <string.h>

// void test1() {
//   char string[10];
//   char *str1 = "0123456789";
//   strcpy(string, str1);
// }

void test1() {
  char string[11];
  const char *str1 = "0123456789";
  strcpy(string, str1);
}
int main() {
  test1();
  return 0;
}

// 肉眼观测1.这个代码string应该设为11。
// 2. str1应该是const char* .
