#include<stdio.h>
void main()
{
    int number[10]={27,4,70,8,9,10};
    int largest_number =number[0];

for (int i=0; i<=5; i++){
    if (largest_number<number[i]){
        largest_number = number[i];
    }
}
printf("%d", largest_number);

    }

