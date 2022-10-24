#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int i,j,l,a,n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      l=n*2-1;
      for(i=0;i<l;i++)
      {
          for(j=0;j<l;j++)
          {
              a=i<j?i:j;
              a=a<l-i?a:l-i-1;
              a=a<l-j-1?a:l-j-1;
              printf("%d ",n-a);
          }
          printf("\n");
      }
      
    return 0;
}
