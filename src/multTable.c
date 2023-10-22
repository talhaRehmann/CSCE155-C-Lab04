/**
 * Author: 
 * Date: 
 *
 * This program generates a multiplication table
 * of the size given as a command line argument.
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    printf("Error: provide an integer\n");
    exit(1);
  }

  int n = atoi(argv[1]);
  if(n <= 0) {
    printf("empty table!\n");
    exit(0);
  }

  //TODO: place your code here
for (int  i = 1; i<=n ; i++)
{
printf("%4d",i);

}
printf("\n");
for (int  i = 1; i <=n ; i++)
{
  printf("%3d", i);
  for (int j = 0; j <=n ; j++)
  {
    printf("%4d", i * j);
  }
  printf("\n");
}
  return 0;
}

/*
PS C:\Users\talha\Desktop\LAB WORK\CSCE155-C-Lab04\src> gcc .\multTable.c
PS C:\Users\talha\Desktop\LAB WORK\CSCE155-C-Lab04\src> .\a.exe 8
   1   2   3   4   5   6   7   8
  1   0   1   2   3   4   5   6   7   8
  2   0   2   4   6   8  10  12  14  16
  3   0   3   6   9  12  15  18  21  24
  4   0   4   8  12  16  20  24  28  32
  5   0   5  10  15  20  25  30  35  40
  6   0   6  12  18  24  30  36  42  48
  7   0   7  14  21  28  35  42  49  56
  8   0   8  16  24  32  40  48  56  64

*/