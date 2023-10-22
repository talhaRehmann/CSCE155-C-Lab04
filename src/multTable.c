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
