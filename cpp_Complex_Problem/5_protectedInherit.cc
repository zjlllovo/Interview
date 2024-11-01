class CA {
public:
  int m_a;
};

// class CB : protected CA {
// public:
//   int m_b;
// };

class CB : public CA {
public:
  int m_b;
};

int main() {
  CB *pcb = new CB;
  pcb->m_b = 100;

  pcb->m_a = pcb->m_b;
  delete pcb;
  return 0;
}
//
//
// 有一个很明显的错误
// CB保护继承CA,意味着CA的数据成员m_a在CB类里面可以访问，在类外仍不能访问
// 所以pcb->m_a 是错误的
//
// 怎么改？把CB的继承方式改为共有继承就ok
