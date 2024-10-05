#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int i,t;
  int t1=a,t2=b,t3=c;
  
  if(n==1)
  t=t1;
  else if(n==2)
  t=t2;
  else if(n==3)
  t=t3;
  else
  {
      for(i=4;i<=n;i++)
      {
          t=t1+t2+t3;
          t1=t2;
          t2=t3;
          t3=t;
      }
  }
  return t;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}