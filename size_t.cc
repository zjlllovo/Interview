#include <cstdlib>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void test1() {

  // error:
  /*vector array;
   array.push_back(1);
   array.push_back(2);
   array.push_back(3);
   for (vector::size_type i = array.size() - 1; i >= 0; --i) {
     cout << array[i] << endl;
   }
  */

  vector<int> array;
  array.push_back(1);
  array.push_back(2);
  array.push_back(3);
  for (int i = array.size() - 1; i >= 0; --i) {
    cout << array[i] << endl;
  }
}

void test2() {
  class A {
  public:
    A() { p = this; } // 构造函数和this指针在类的实例化过程中谁先谁后？
    ~A() {
      if (p != NULL) { // 析构函数没问题
        delete p;
        p = NULL;
      }
    }
    A *p;
  };
}

void test3() {
  class A {
  public:
    void del() { delete this; }
  };

  A *pa = new A;
  if (pa) {
    pa->del();
  }
}
int main() {
  // test1();
  // test2();
  test3();
  return 0;
}
