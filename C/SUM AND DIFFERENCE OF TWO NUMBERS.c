#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    
    printf("%d\t%d\n",a+b,a-b);
    printf("%.1f\t%.1f",c+d,c-d);
    
    return 0;
}
