#include <stdio.h>

char* strcpy(char *dst, const char* src);
size_t strlen(char *s);

void test_strcpy() {
  char dst[20] = {0};
  char *src = "xyz";
  printf("[test_strcpy] before strcpy dst: %s\n", dst);
  strcpy(dst, src);
  printf("[test_strcpy] after strcpy dst: %s\n", dst);
}

void test_strlen() {
  char *s = "this is a string!";
  printf("[test_strlen] the length: %ld\n", strlen(s));
}

int main() {
  test_strcpy();
  test_strlen();
}
