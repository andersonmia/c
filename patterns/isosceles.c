#include<stdio.h>
#include<stdlib.h>

int main(){

int i, j, n, space;

printf("Enter the number of rows: ");
scanf("%d",&n);

if(n <= 0){
printf("Thank you for using this program!");
exit(0);
}

for(i = 1; i<= n; i++){
for(space = 1; space <= (n - i); space++){
printf(" ");
}
for(j = 1; j<= i; j++){
printf("* ");
}
printf("\n");
}
return 0;
}
