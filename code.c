#include <stdio.h>
                                         
int main(){
int rows;
printf("Enter number of rows you want in the right triangle : ");
scanf("%d",&rows);
int i,j;
printf("The patter obtained is given below:-\n");
for(i=1;i<=rows;i++){
    for(j=1;j<=i;j++){
        printf("01 ");
    }
    printf("\n");
}                     
return 0;
}
