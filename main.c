#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 4

int main()
{
    int i, j, p = 0;
   int a[ROW][COL] = { { 1, 1, 1, 1},
                   { 1, 1, 0, 1},
                   { 0, 1, 1, 1},
                 };
    int row[ROW] = {0};
    int col[COL] = {0};
    for (i = 0; i < ROW; i++) {
      for (j = 0; j < COL; j++) {
        if(a[i][j] == 0) {
            row[i] = 100;
            col[j] = 100;
        }
      }
      printf("\n");
   }
   for (i = 0; i < ROW; i++) {
      if(row[i] == 100) {
        for( p = 0; p < COL; p++) {
            a[i][p] = 0;
        }
      }
   }
   for (i = 0; i < COL; i++) {
      if(col[i] == 100) {
        for( p = 0; p < ROW; p++) {
            a[p][i] = 0;
        }
      }
   }
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 4; j++) {
         printf(" %d ", a[i][j]);
      }
      printf("\n");
   }
    return 0;
}
