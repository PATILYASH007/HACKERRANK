#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum,num;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while(n != 0)
    {
        sum = sum + n % 10;
        n /= 10;
    }
    printf("%d",sum);
    
    return 0;
}
