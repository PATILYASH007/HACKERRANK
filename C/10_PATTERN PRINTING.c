#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int i,j,m,n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      int l=2*n-1;
      for(i=0;i<l;i++)
      {
          for(j=0;j<l;j++)
          {
              m=i<j?i:j;
              m=m<l-i?m:l-i-1;
              m=m<l-j?m:l-j-1;
              printf("%d ",n-m);
              
          }
          printf("\n");
      }
    return 0;
}