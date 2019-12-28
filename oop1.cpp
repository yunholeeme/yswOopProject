#include <iostream>
#include <cstring>

#define ID_MAX 20
#define NM_MAX 20

using namespace std;

struct account
{
    char id[ID_MAX];
    char name[NM_MAX];
    int balance;
};

struct account acc[100];        // array to store account;
int index = 0;                  // number of account;

void printMenu();
void openAnAccount();
void deposit();
void withdraw();
void viewBalance();

int main(void)
{
    int choice = 0;
    int flag;

    while (true)
    {
        printMenu();

        cout << "input a number you want to select :" << endl;
        while ((flag = scanf("%d", &choice)) != 1)
        {
            cout << "Wrong answer\n" << endl;
            exit(EXIT_FAILURE);
        }

        switch (choice)
        {
        case 1:
            openAnAccount();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            viewBalance();
            break;
        default:
            cout << "select 1~4, try again" << endl;
            break;
        }
    }
    
    return 0;
}

void printMenu()
{
    cout << "===============================" << endl;
    printf("bank account management program\n");
    printf("function 1. open an account\n");
    printf("function 2. deposit\n");
    printf("function 3. withdraw\n");
    printf("function 4. view a balance\n");
    cout << "===============================" << endl;
}

void openAnAccount()
{
    char name[NM_MAX] = "";
    char id[ID_MAX] = "";
    int balance = 0;

    // struct account acc1;

    cout << "open an account" << endl;
    cout << "Input your name :" << endl;
    cin >> name;
    strcpy(acc[index].name, name);
    cout << "Input your account ID" << endl;
    cin >> id;
    strcpy(acc[index].id, id);
    cout << "Input your balance" << endl;
    cin >> balance;
    acc[index].balance = balance;
    
    index++;

}

void deposit()
{
    char id[ID_MAX] = "";
    int money = 0;
    cout << "input an account id " << endl;
    cin >> id;
    if (id == acc[0].id)
    {
        
    }

}

void withdraw()
{
    cout << "withdraw" << endl;
}

void viewBalance()
{
    cout << "viewBalance" << endl;
    cout << "================" << endl;
    if (index > 0) {
        for (int i = 0; i < index; ++i)
        {
            cout << "name : " << acc[i].name << " " <<
            "id : " << acc[i].id << " " <<
            "balance : " << acc[i].balance << endl;
        }
    } else {
        cout << "no account" << endl;
    }
    
}
