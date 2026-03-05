#include <stdio.h>
#include <string.h>

typedef struct {
    char loginname[64];
    char password[64];
} account;

typedef struct {
    char stdID[16];
    char nameSurname[25];
    account stdACC;
} hoststd;

int checkLogin(char *login, char *passwd, account acc);

int main() {

    hoststd cs[5] = {
        {"66-040626-2686-9","MR.A",{"user1","pass1"}},
        {"66-040626-2686-0","MR.B",{"user2","pass2"}},
        {"66-040626-2686-1","MR.C",{"user3","pass3"}},
        {"66-040626-2686-2","MR.D",{"user4","pass4"}},
        {"66-040626-2686-3","MR.E",{"user5","pass5"}}
    };

    char inputLogin[64], inputPass[64];
    int i, found = 0;

    printf("Login : ");
    scanf("%s", inputLogin);

    printf("Password : ");
    scanf("%s", inputPass);

    for(i = 0; i < 5; i++) {

        if(checkLogin(inputLogin, inputPass, cs[i].stdACC)) {
            found = 1;
            break;
        }

    }

    if(found)
        printf("Welcome\n");
    else
        printf("Incorrect login or password\n");

    return 0;
}

int checkLogin(char *login, char *passwd, account acc) {

    if(strcmp(login, acc.loginname) == 0 &&
       strcmp(passwd, acc.password) == 0)
        return 1;
    else
        return 0;

}
