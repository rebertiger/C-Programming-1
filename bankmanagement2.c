#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct User{
    int ac;
    int password;
    float balance;
};

int main (void) {
    struct User usr;
    int ac,password;
    int operation;
    FILE *fp;
    char filename[50];
    printf("\n\nWelcome To RECEPBANK.\n\nWhich operation do you want to do?\n1:Register a new account\t\t\n2:Login in an existing account\n:");
    scanf("%d",&operation);
    if (operation == 1){
        printf("Your account number: \n");
        scanf("%d",&usr.ac);
        printf("Your password: \n");
        scanf("%d",&usr.password);
        usr.balance = 0;
        strcpy(filename,usr.ac);
        fp = fopen(strcat(filename,".dat"),"w");
        fwrite(&usr,sizeof(struct User),1,fp);
        if (fwrite != 0){
            printf("\nRegisteration is successful.");
        }
        else{
            printf("Something went wrong, please try again");
        }
        fclose(fp);
    }
    else if(operation == 2){
        printf("Enter your account number: \n");
        scanf("%d",&ac);
        printf("Enter your password: \n");
        scanf("%d",&password);
        strcpy(filename,ac);
        fp = fopen(strcat(filename,".dat"),"r");
        fread(&usr,sizeof(struct User),1,fp);
        fclose(fp);
        if (fp = NULL){
            printf("You entered wrong account number.");
        }
        else{
            if (!strcmp(password,usr.password)){
                printf("True password.");
        }
            else{
                printf("You've entered the wrong password.");
        }
        }
        

    }
    else{
        printf("Wrong input, please enter an existing operation.");
    }
    return 0;
}