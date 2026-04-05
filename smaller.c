#include <stdio.h>
int main(){
int a,b;
printf("enter two values:");
scanf("%d%d", &a, &b);

if(a<b){
    printf("%d is less than %d", a,b);
}
else{
    printf("%d is less than %d", b,a);
}
 return 0;
}
