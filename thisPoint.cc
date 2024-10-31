#include <iostream>

using std::cout;
using std::endl;

//-------------------------------q 1 error------------------
class A {
public:
  // A() {}
  A() : p(this) {}
  ~A() {
    delete p;
    p = nullptr;
  }

private:
  A *p;
};

void _1_test1() { A a; }
//-----------------------------------------------------//

//-------------------------------q 5 error---------------------
class CA {
public:
  int m_a;
};
class CB : protected CA {
public:
  int m_b;
  // void assect() { m_a = m_b; }
};

void _1_test5() {
  CB *pcb = new CB;
  pcb->m_b = 100;
  // pcb->m_a = pcb->m_b; // error ，cb protected 继承ca，，cb对ca的pulic data
  // section的访问权限是protected,不能再class外部访问m_a;
  delete pcb;
}
//-----------------------------------------------------//

//-------------------------------q 6-error--------------------
char *GetContent() { return "11111"; }
void _1_test6() {
  char *p = GetContent();
  cout << p << endl;
  p[0] = '2';
  cout << p << endl; // error "11111"在程序的数据段，属性为只读，不能修改。
}
//-----------------------------------------------------//

//-------------------------------q 7 right---------------------
class CA7 {
public:
  CA7(int a) : m_a(a) {} // const 数据成员有且只能在初始化列表进行初始化操作.
  void p() { cout << m_a << endl; }

private:
  const int m_a;
};
void _1_test7() {
  CA7 *pca = new CA7(100);
  pca->p();
  delete pca;
}
//-------------------------------------------------------------

void _2_func(char str[100]) {}
class _2_A {};
class _2_X {
  int i;
  int j;
  char k;
};
short _2_f();

void _2_countSize() {
  char str[] = "hello";
  char *p = str;
  int n = 10;
  void *p1 = malloc(100);
}

int main() {
  _1_test1();
  _1_test5();
  _1_test6();
  _1_test7();

  _2_countSize();
  return 0;
}
