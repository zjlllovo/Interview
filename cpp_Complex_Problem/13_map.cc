#include <map>

using std::map;

// int test(map<int, int> &mymap, int key) {
//   auto iter = mymap.find(key);
//   return iter->second;
// }

// 这个代码没有处理key不在map的情况
//

int test(map<int, int> &mymap, int key) {
  auto iter = mymap.find(key);
  if (iter != mymap.end()) {
    return iter->second;
  } else {
    return -1;
  }
}
int main() { return 0; }
