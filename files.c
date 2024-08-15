#include<stdio.h>
void main(){

       int name [10]={4,6,8,9,3,4};

int smallest_no=name[0];

 for ( int i=1; i<=5; i=i+1 ){

if (smallest_no>name[i]){
     smallest_no = name[i];
}

}
   printf("%d \n", smallest_no);
}
// }
        // if (i==5  ) {
        //  break;
        // }
        
    // }
// }