#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch;
    char s[40], sen[50];
    scanf("%c",&ch);
    printf("%c",ch);
    scanf("%s",&s);
    printf("\n%s\n",s);
    
    scanf("  %[^\n]%*c",sen);
    printf("%s",sen);
    return 0;
}
