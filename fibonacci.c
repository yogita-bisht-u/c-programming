#include<stdio.h>
void main(){

int current_value = 1;
int previous_value = 0;
int j=0;
for (int i=0; i<=10; i++){



    j=previous_value+current_value;

    printf("%d \n",j);
    
    previous_value = current_value; 
    current_value = j;

}

}