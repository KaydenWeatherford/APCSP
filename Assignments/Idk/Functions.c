#include "MyLibrary.h"
#include <stdio.h>

int main(){

  int l = 5;
  int w = 10;
  int a = area(l, w);
  int p = perim(l,w);
  printf("Area: %d\nPerimiter: %d\n", a, p)
}