/*
    Banking System v1.0
    Written by SW. YOON.
*/

#include <iostream>

using namespace::std;
const int NAME_LEN = 20;

typedef struct _Account
{
    int id;                 // account id;
    int balance;            // balance
    char name[NAME_LEN];    // customer name;
} Accoujnt;

Accoujnt pArray[100];       //