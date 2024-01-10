#include <stdio.h>
#include <stdlib.h>

#include "sort.h"

int main(int argc, char* argv[]) {
  FILE* f = fopen("data.txt", "r");

  if (f == NULL) {
    printf("Error opening file\n");
    return 1;
  }

  int buffer[256];
  int n = 0;
  while (fscanf(f, "%d", &buffer[n]) != EOF) {
    n++;
  }

  sort(buffer, n);

  // printf("%s", buffer);
  // for (int i = 0; i < n; i++) printf("%d ", buffer[i]);
  // printf("\n");
  printf("Read %d words\n", n);

  // Write to a file
  FILE* f_out = fopen("output.txt", "w");
  for (int i = 0; i < (n - 1); i++) fprintf(f_out, "%d ", buffer[i]);
  fprintf(f_out, "%d", buffer[n - 1]);
  fprintf(f_out, "\n");
  fclose(f_out);

  return 0;
}