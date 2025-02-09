#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr = (int *)malloc(sizeof(int)); // Dynamically allocate memory
  if (ptr == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }
  *ptr = 20;
  printf("%d\n", *ptr);
  free(ptr); // Free allocated memory
  ptr = NULL; // Set pointer to NULL after freeing
  return 0;
}