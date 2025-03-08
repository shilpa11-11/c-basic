
#include "hello1.h"
#include<stdio.h>


void createUser(struct User *users, int *userCount) {
    if (*userCount >= 100) {
        printf("Users are full\n");
        return;
    }

    printf("Enter User ID: ");
    scanf("%d", &users[*userCount].id);

    printf("Enter User Name: ");
    scanf(" %[^\n]", users[*userCount].name);

    printf("Enter User Address: ");
    scanf(" %[^\n]", users[*userCount].address);

    printf("Enter User Balance: ");
    scanf("%d", &users[*userCount].balance);

    printf("UserID: %d\n", users[*userCount].id);
    printf("User Name: %s\n", users[*userCount].name);
    printf("User Address: %s\n", users[*userCount].address);
    printf("User Balance: %d\n", users[*userCount].balance);

    (*userCount)++;
    printf("User created successfully\n");
}
