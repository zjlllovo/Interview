#include <iostream>
#include <memory.h>

using std::cout;
using std::endl;

void *MyMemcpy(void *dest, const void *src, int count) {
  char *Dpstr = (char *)dest;
  char *Spstr = (char *)src;
  for (int i = 0; i < count; i++) {
    Dpstr[i] = Spstr[i];
  }
  return dest;
}

int main() {
  const char *Src = "hello world";
  char Des[12] = {0};
  void *rest = MyMemcpy(Des, Src, strlen(Src));
  printf("rest : %s\n", (char *)rest);
}
