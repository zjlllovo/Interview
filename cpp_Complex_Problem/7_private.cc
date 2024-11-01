class CA {
public:
  CA(int a) : m_a(a) {}

private:
  const int m_a;
};

int main() {
  CA *pca = new CA(100);
  delete pca;
}

// 没有任何问题
