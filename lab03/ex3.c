#include <stdio.h>

unsigned char switch_byte(unsigned char x){
  unsigned char masc1 = 0xf0 & x;
  unsigned char masc2 = 0x0f & x;
  unsigned char masc3 = 0xff;
  
  //printf("%02X\n",masc1);
  //printf("%02X\n",masc2);


  masc1 = masc1 >>4;
  masc2 = masc2 << 4;
  masc3 = masc2|masc1;
 
  return masc3;
}

unsigned char switch_byte2(unsigned char x){
  return (x << 4)|(x >> 4);
}

unsigned char rotate_left(unsigned char x, int n) 
{
    return (x << n) | (x >> (8 - n));
}

int main(){

    char x = 0xAB;
    printf("%02X\n",switch_byte(x));
    printf("%02X\n",switch_byte2(x));
    char y = 0x61;
    printf("%X\n",rotate_left(y,1));
    printf("%X\n",rotate_left(y,2));
    printf("%X\n",rotate_left(y,7));
}