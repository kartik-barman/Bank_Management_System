#include <stdio.h>

void print_menu ();
int balance = 0;
void show_balance();
void add_balance();
void withdrawal_balance();

int main () {
    while (1)
    {
        print_menu();
        int choice;
        printf("\nNow, Enter Your Choice between (1-4) : ");
        scanf("%d", &choice);

        if (choice == 1) {
            show_balance();
        }
        else if (choice == 2) {
            add_balance();
        }
        else if (choice == 3) {
            withdrawal_balance();
        }
        else if (choice == 4) {
            break;
        }
        else{
            printf("Invalid Choice!! Kindly Choice Correct Option Between (1-4)\n");
        }
    }


    printf("\n\033[0;32m Closing This App.........\n");
    printf("\n\033[91m***************************************************");
    printf("\n\033[0;34m          Developed By : Mr Kartik Barman          ");
    printf("\n\033[91m***************************************************");

    return 0;
}


void print_menu () {
    // "\033[0;34m" Output Text Color Code
    printf("\033[0;34m***************************************************\n"); 
    printf("\033[0;31m         Welcome To Bank Management System         ");
    printf("\n\033[0;34m***************************************************");
    printf("\n\033[0;31m          Developed By : Mr Kartik Barman          ");
    printf("\n\033[0;34m***************************************************\n");
    printf("\n\033[0;39m1. Check Balance");
    printf("\n2. Add Balance");
    printf("\n3. Withdrawral Balance");
    printf("\n4. Exit");
};

//********* Check Bank Balance Function ***********

void show_balance() {
    printf("\n\033[0;32m Total bank balance is : %d\n\n" , balance);
};

//********* Add Bank Balance Function ***********

void add_balance () {
    int deposit_amount;
    printf("Enter Your Deposit Amount : ");
    scanf("%d", &deposit_amount);
    printf("Your %d Rs is Successfully deposit\n", deposit_amount);
    balance += deposit_amount;
    printf("\n\033[0;32m Total bank balance is : %d\n\n" , balance);

}

//********* Withdrawal Bank Balance Function ***********

void withdrawal_balance () {
    int withdrawal_amount;
    printf("Enter Your Withdrawal Amount : ");
    scanf("%d", &withdrawal_amount);
    printf("Your %d Rs is Successfully Withdrawal\n", withdrawal_amount);
    balance -= withdrawal_amount;
    printf("\n\033[0;32m Total bank balance is : %d\n\n" , balance);

}