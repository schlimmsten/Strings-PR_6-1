#include <stdio.h>
#include <string.h>
#define N 80

int main(){
  char s1[N],s2[N],s3[N];
  printf("Enter string 1, number of symbols < %d\n",N);
  fgets (s1, N, stdin);
  //for (int i = 0; i < N -1 && s1[i] != \n; i++)
  printf("String 1:\n");
  puts(s1);
  printf("Enter string 2, number of symbols < %d\n",N);
  fgets (s2, N, stdin);
  printf("String 2:\n");
  puts(s2);
  return 0;
}