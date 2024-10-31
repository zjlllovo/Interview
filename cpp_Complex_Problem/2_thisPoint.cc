#include <iostream>

using std::cout;
using std::endl;

// class A {
// public:
//   A() { p = this; }
//
//   ~A() {
//     if (p != nullptr) {
//       delete p;
//       p = nullptr;
//     }
//   }
//
// private:
//   A *p;
// };
//
// int main() {
//   A a;
//   return 0;
// }

// 哪里有问题呢？
//   当a出main作用域时，会调用析构函数~A(),由于p = this;析构函数会delete
//   p;delete这个操作符会调用p的析构函数，形成了递归调用~A(),形成死循环爆栈。
// 怎么修改呢？
//  在构造函数种给p赋值nullptr，把p改成public,在类外给p赋值就没问题了。
//

class A {
public:
  A() { p = nullptr; }

  ~A() {
    if (p != nullptr) {
      delete p;
      p = nullptr;
    }
  }

  A *p;
};

int main() {
  A a;
  a.p = new A;
  return 0;
}
