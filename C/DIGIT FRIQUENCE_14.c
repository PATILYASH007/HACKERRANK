#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    scanf("%s",s);
    int i=0,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,n;
    char c='\0';
    strcat(s,&c);
    for(i=0;i<=1000;i++)
    {
        if (s[i]=='\0')
        {
            n=i;
            break;
        }
        
    }
    for(i=0;i<=n;i++)
    {
        if(s[i]=='1')
        {
            one++;
        }
        else if(s[i]=='2')
        {
            two++;
        }
        else if(s[i]=='3')
        {
            three++;
        }else if(s[i]=='4')
        {
            four++;
        }else if(s[i]=='5')
        {
            five++;
        }else if(s[i]=='6')
        {
            six++;
        }else if(s[i]=='7')
        {
            seven++;
        }else if(s[i]=='8')
        {
            eight++;
        }else if(s[i]=='9')
        {
            nine++;
        }
        else if(s[i]=='0')
        {
            zero++;
        }
        
    }
    printf("%d %d %d %d %d %d %d %d %d %d",zero,one,two,three,four,five,six,seven,eight,nine);
    return 0;
}