#include<stdio.h>
int main(){
    // variable declarations
    long long int card;// card represent enter the card
    int n,p,a,b=50000,diff;// p represent paisa //a is represent amount //n represent enter the option // diff is udes to money differnece
    printf("Welcome to The Atm Machine\n");// Welcome page
    printf("Please insert your card\n");// insert 
    scanf("%lld",&card);

    if(card==9813273454){
        printf("Hello Jatin Soni\n");
        printf(">Press 1 to check the balance\n");
        printf(">Press 2 to the change the atm pin\n");
        printf(">Press 3 to withdrrawal the money from your account\n");
      
        scanf("%d",&n);
        if(n==1){
            printf("Please enter your 4 digit pin:");
            scanf("%d",&p);
            if(p==1234){
                printf("The available balance is %d in your account 98132xxxxxx",b);
            }
        
            else{
                 printf("Invalid PIN.\n");
            }
        } 

     if(n==3){
             printf("Please enter your 4 digit pin:");
             scanf("%d",&p);
        if(p==1234){
            printf("Enter the amount to be withdrawal");
            scanf("%d",&a);

             if(a>b){
                 printf("Insufficient");}
            else{
                 printf("Collect the money\n\n");
                 diff=b-a;
                 printf("Now, your bank balance is %d",diff); 
             }
       }
         else{
             printf("incoorecr pin\n");
             printf("Please try again:");
             scanf("%d",&p);
             if(p==1234)
             {
              printf("Enter the amount to be withdrawal:");
              scanf("%d",&a);
              if(a>b){
                printf("INsufficient balance");
              }  
              else{
                printf("Collect the money\n");
                diff=b-a;
                printf("Now,Your bank Balance is %d in your acc. no. 98132xxx\n",diff);
                printf("Thanku You");}
             }}

    }
    
    if (n == 2) {
            // Option to change PIN
            printf("Feature to change PIN is currently under development.\n");
            return 0;
    }
    }
    else{
        printf("Invalid Card Number \n\n");
        printf("Please try again");
    }
}