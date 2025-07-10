#include<stdio.h>

int main(void){
    int choice,n,i=0,accountbalance=1000,deposit,sum,withdraw,minus;
    int mini[25];                                                                                  //for getting the mini statements (all the transaction history)
    
    for(;;) {                                                                                      //if for-loop only has semicolons they the code will keep on repeating when the person wishes to continue (1)

    printf("Select the number according to your request:\n 1-for Deposit\n 2-for Withdrawal\n 3-for Balance\n 4-for Mini statements\n Your choice=");        //ask user for which operation to be performed
    scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter the amounnt to be deposited:");                                                      //input the amount to be deposited
            scanf("%d",&deposit);
            sum=accountbalance+deposit;                                                                        //add the deposit value to account balance
            printf("%d rupees has been deposied to your account\n Your new balance is %d\n",deposit,sum);
            mini[i]=deposit;                                                                                   //store the deposit made in the array (gets stored in mini[0]) as i was initialized as 0
            i++;                                                                                               //increment the i value so the nest value will be store in the next ith position
            break;                                                                                             

            case 2:
            printf("Enter the amount to be withdrawn:");                                                       //input the amount to be withdrawn
            scanf("%d",&withdraw);
            minus=accountbalance-withdraw;                                                                     //subtract the withdraw value from account balance
            printf("%d rupees has been withdrawn from your account\n Your new balance is %d\n",withdraw,minus);   
            mini[i]=(withdraw*-1);                                                                             //store the withdraw made in the array (gets stored in mini[1]), as the value gets reduced from the account balance (*-1) - will display it as a negative value
            i++;                                                                                               //increment the i value so the nest value will be store in the next ith position
            break;

            case 3:
            printf("Your account balance is:%d rupees\n",accountbalance);                                       
            mini[i]=accountbalance;                                                                            //store the deposit made in the array (gets stored in mini[2])
            i++;                                                                                                //increment the i value so the nest value will be store in the next ith position
            break;

            case 4:
            printf("Your mini statements are:");
            for ( i = 0; i < 25; i++){
                printf("%d",mini[i]);                                                                            //all the values stored in array wil be displayed
            }
            break;
         }

        printf("Do your want to continue? Yes=1 or No=2\n Your choice=");                                                       //to check whether the user wants the repeat the entire process again
        scanf("%d",&n);

        if(n==2){
        printf("Thank you for visiting!"); 
        break;
        }
    }

}

                        
