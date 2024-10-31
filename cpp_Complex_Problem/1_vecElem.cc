#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

// int main() {
//   vector array;
//   array.push_back(1);
//   array.push_back(2);
//   array.push_back(3);
//   array.push_back(4);
//
//   for (vector::size_type i = array.size() - 1; i > 0; i--) {
//     cout << array[i] << endl;
//   }
// }
// 以上代码有什么问题？ 1.vector的类型没有确定，lsp检查都过不了
//                     2.i的类型是vector::size_type
//                     这个写法也是错的，没有类型。应改为vector<int>::size_type,
//                     3.在这个循环中，i是 3 2 1
//                     递减，在最后一次循环中i为1，然后执行循环体，打印出array[i]的值然后--i,i为0出循环错过了array[0];
//                     4.如果改为i>=0
//                     ,也有问题，i是szie_t当i=0时继续减一就是32位自然数的最大数目。array[i]会访问到未知区域。出现未定义行为
// 应该怎么改？
//                    1.给vector加上类型 如：vector<int>
//                    2.给i的类型改为int，不要用size_type.
//                    3.循环条件i>0改为i>=0;
//
// right:
int main() {
  vector<int> array;
  array.push_back(1);
  array.push_back(2);
  array.push_back(3);
  array.push_back(4);

  for (int i = array.size() - 1; i >= 0; --i) {
    cout << array[i] << endl;
  }
}
