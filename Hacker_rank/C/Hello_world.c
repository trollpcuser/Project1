#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    printf("Hello, World!");
    scanf("%[^\n]*c",&s);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    printf("\n%s",s);   
    return 0;
}
