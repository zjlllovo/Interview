#include <iostream>

void test(int begin, int end) {
  int num = end - begin;
  int randidx = begin + rand() % num;
  test(begin, randidx - 1);
  test(randidx + 1, end);
}
int main() {
  test(1, 10);
  return 0;
}
