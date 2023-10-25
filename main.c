#include <stdio.h>
#include <string.h>

int checkLogs(char* login, char* password);

int main() {
    char login[20];
    char password[20];
    
    printf("Enter login: ");
    scanf("%s", login);
    
    printf("Enter password: ");
    scanf("%s", password);
    
    if(checkLogs(login, password) == 1){
        printf("Success!\n");
    }else{
        printf("Reject!\n");
    }
    
    return 0;
}

int checkLogs(char* login, char* password) {
    char realAdmin[] = "admin";
    char realPass[] = "password";
    if (strcmp(realAdmin, login) == 0 && strcmp(realPass, password) == 0) {
        return 1;
    } else {
        return 0;
    }
}
