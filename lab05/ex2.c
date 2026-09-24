#include <stdio.h>

void dump (void *p, int n) {
  unsigned char *p1 = p;
  while (n--) {
    printf("%p - %02x\n", p1, *p1);
    p1++;
  }
}


int main (void) {
  struct X {
  int a;
  short b;
  int c;
} x = {0xa1a2a3a4, 0xb1b2, 0xc1c2c3c4};

  printf ("a: \n");
  dump (&x.a, sizeof(x.a));
  printf ("b: \n");
  dump (&x.b, sizeof(x.b));
  printf ("c: \n");
  dump (&x.c, sizeof(x.c));

  return 0;
}