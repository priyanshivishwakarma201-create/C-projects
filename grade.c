#include <stdio.h>

int main() {
int a;
printf("enter a value: ");
scanf("%d", &a);

if(a>60){
 printf("%d 1st rank.",a);
}
else if(a>30){
    printf("%d 2nd rank.",a);
    
}
else{
    printf("%d fail.",a);
}
return 0;
}
