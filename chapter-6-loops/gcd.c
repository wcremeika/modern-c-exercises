
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int m, n, r;

  printf("Please enter values for m and n: ");
  scanf("%d %d", &m, &n);

  while (n != 0) {
    r = m % n;
    m = n;
    n = r;
  }

  printf("GCD: %d\n", m);

  return 0;
}
