#include <stdio.h>

int odd_ones(unsigned int x) {
    unsigned int y = 0x00000001;
    if ( (x & y) == 1)
    {
      return 1;
    }
    return 0;
}

int main() {
  printf("%x tem numero %s de bits\n",0x01010101,odd_ones(0x01010103) ? "impar":"par");
  printf("%x tem numero %s de bits\n",0x01030101,odd_ones(0x01030100) ? "impar":"par");
  return 0;
}


