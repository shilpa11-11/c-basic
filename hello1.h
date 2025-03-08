#ifndef HELLO1_H
#define HELLO1_H

struct User {
    int id;
    int balance;
    char name[50];
    char address[200];
};

// Function declaration for createUser
void createUser(struct User *users, int *userCount);

#endif
