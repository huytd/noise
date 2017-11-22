#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_FRAMES 1000
#define IMAGE_SIZE 100

int draw_noise(int size) {
  printf("P2\n%d %d\n255\n", size, size);
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("%d ", rand() % 255);
    }
    printf("\n");
  }
}

int main() {
  static time_t t;
  srand((unsigned) time(&t));

  for (int i = 0; i < TOTAL_FRAMES; i++) {
    draw_noise(IMAGE_SIZE);
  }
}
