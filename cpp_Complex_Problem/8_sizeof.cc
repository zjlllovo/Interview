#include <iostream>

using std::cout;
using std::endl;

void func(char str[100]) { cout << sizeof(str) << endl; }
short f() { return 1; }
class A {};

class X {
  int i;
  int j;
  char k;
};
int main() {
  char str[] = "hello";
  cout << sizeof(str) << endl;

  char *p = str;
  cout << sizeof(p) << endl;

  int n = 10;
  cout << sizeof(n) << endl;

  void *p1 = malloc(100);

  cout << sizeof(A) << endl;
  cout << sizeof(X) << endl;
  cout << sizeof(f()) << endl;
}
