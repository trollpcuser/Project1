#include <stdio.h>
int max_of_four(int a, int b, int c, int d);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>b && a>c && a>d)
    printf("%d",a);
    else
    if(b>a && b>d && b>c)
    printf("%d",b);
    else
    if(c>d && c>a && c>b)
    printf("%d",c);
    else  
    if(d>a && d>b && d>c)
    printf("%d",d);
    
    
    
    return 0;
}
