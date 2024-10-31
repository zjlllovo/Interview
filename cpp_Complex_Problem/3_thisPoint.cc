// class A {
// public:
//   void del() { delete this; }
// };
//
// int main() {
//   A *pa = new A;
//   if (pa) {
//     pa->del();
//   }
//   return 0;
// }

// 这个代码写的有风险，就是pa->del()后应该给pa置为null
// pa->del()就已经销毁看pa指向的实体，但是pa是悬置的。
class A {
public:
  void del() { delete this; }
};

int main() {
  A *pa = new A;
  if (pa) {
    pa->del();
    pa = nullptr;
  }
  return 0;
}
