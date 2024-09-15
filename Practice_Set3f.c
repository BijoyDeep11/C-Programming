#include <stdio.h>

int main() {
int a, b, c, d;
printf("Enter your 4 numnbers; \n");
scanf("%d %d %d %d", &a, &b, &c, &d);
if(a>b && a>c && a>d){
    printf("%d is the greatest number",a);
}
else if(b>a && b>c && b>d){
    printf("%d is the greatest number",b);
}
else if(c>a && c>b && c>d){
    printf("%d is the greatest number",c);
}
else if(d>a && d>b && d>c){
    printf("%d is your greatest number",d);
}
    return 0;
}
