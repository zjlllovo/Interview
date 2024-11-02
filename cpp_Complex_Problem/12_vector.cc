#include <vector>

using std::vector;

void test() {
  // vector<int> vec(10);
  vector<int> vec;
  for (int i = 0; i < 10; i++) {
    // vec[i] = i;
    vec.push_back(i);
  }
}

// 这个代码问题很明显，1.要不把vecp[i] = i;换成vec.push_back(i);
//                     2.要不再vec初始化 vector<int> vec(10);

int main() {
  test();
  return 0;
}
