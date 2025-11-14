#include <stdio.h>
int main(){
int num[4];
printf(" Enter 4 numbers for the array\n");
scanf("%d %d %d %d" , &num[0], &num[1] , &num[2], &num[3]);
int sums[4], i,j, sum;


for(i = 0; i < 4; i++){
sum = 0;
for(j = 0; j <= i; j++){
sum += num[j];
}
sums[i] = sum;
}


printf("Old Array\t");
for(i = 0 ; i<4 ; i++){
printf("%d\t", num[i]);
}
printf("\nNew Array\t");
for(i = 0 ; i<4 ; i++){
printf("%d\t", sums[i]);
}
return 0;
}
