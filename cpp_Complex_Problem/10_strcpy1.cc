#include <string.h>

// void test1() {
//   char string[10], str1[10];
//   int i;
//   for (i = 0; i < 10; i++) {
//     str1[i] = 'a';
//   }
//   strcpy(string, str1);
// }

void test1() {
  char string[10], str1[10];
  int i;
  for (i = 0; i < 9; i++) {
    str1[i] = 'a';
  }
  str1[i] = '\0';
  strcpy(string, str1);
}

int main() {
  test1();
  return 0;
}

// 肉眼看，str[9]应该置为\0,才能让str1完整
