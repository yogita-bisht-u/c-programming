#include<stdio.h>
#include<stdbool.h>
int  main(){
    char name [10];
    int totalmarks;
    float percentage;
    int hindi ;
    int english;
    int maths;
    int computer;
    int science;
     bool fail=false;
    int total_fail_sub=0;
    int fail_sub_marks=0;
    int wronginput=0;
    bool wronginputvalue=false ;

       printf("please enter name\n");
       scanf("%s",&name);


printf("please enter marks of hindi \n");


    scanf("%d" ,&hindi);

printf("please enter marks of english \n");    
    scanf( "%d" ,&english);


printf("please enter marks maths \n");
     scanf("%d" ,&maths);

printf( "please enetr marks computer \n");
     scanf("%d" ,&computer);
printf("please enter marks science \n");
scanf("%d" ,&science);     
 
if(hindi<0 || hindi>100 ){
    printf("wronginput in hindi");
    wronginputvalue=true;
} 
if (english<0 || english>100){
    printf("wronginput in english");
    wronginputvalue=true;
}
if (computer<0 || computer>100){
    printf("wronginput in computer");
    wronginputvalue=true;
}
if (maths<0 || maths>100){
    printf("wronginput in maths");
wronginputvalue=true;

}
if (science<0 || science>100){
    printf("wronginput in science");
    wronginputvalue=true;
}

if (wronginputvalue){
    return 0;
}
totalmarks=hindi+english+maths+computer+science;

 percentage = (totalmarks*100)/500;

 printf( "totalmarks %d \n", totalmarks);
  printf( "percentage %f\n ", percentage);
  

if (hindi<33)
{
    fail = true;
    total_fail_sub = total_fail_sub+1;
    /* code */
    fail_sub_marks =hindi;


}
if (english<33)
{
    fail = true;
    /* code */
    total_fail_sub = total_fail_sub+1;
    fail_sub_marks =english;
    
}

if (computer<33)
{
    fail = true;
    /* code */
        total_fail_sub = total_fail_sub+1;
        fail_sub_marks= computer;
}
if (maths<33)
{
    fail = true;
    /* code */
    total_fail_sub = total_fail_sub+1;
    fail_sub_marks=maths;
}
if (science<33)
{
    fail = true;
    /* code */
    total_fail_sub = total_fail_sub+1;
    fail_sub_marks=science;

}

if (fail)
{

    if (total_fail_sub<=1)
    {
        //pass with grace
        if (fail_sub_marks>=25)
        {
            printf("Pass with grace");
        }
    }else{
        printf("Fail");
    }

} else{

    printf(" you are pass %s \n" ,name );
}
  
}




    



