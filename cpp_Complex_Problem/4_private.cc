// class CA {
//   int m_a;
// };
//
// int main() {
//   CA *pca = new CA;
//   pca->m_a = 100;
//   delete pca;
// }
//
// 这个代码m_a是私有成员函数，在类外不能通过pca访问。
class CA {
public:
  int m_a;
};

int main() {
  CA *pca = new CA;
  pca->m_a = 100;
  delete pca;
}
