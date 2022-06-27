/* kovvax */

#include <iostream>

using namespace std;

void menu()
{
    cout << " *********MENU********** \n ";
    cout << "1. Check your balance \n ";
    cout << "2. Deposit \n ";
    cout << "3. Withdraw \n ";
    cout << "4. Exit \n ";
    cout << "************************ \n ";
}

int main()
{
    int o;
    double balance=500;

    do{
        menu();
        int depositammount;
        int withdrawammonut;
        cin >> o;
        system("cls");
        switch(o)
            {
                case 1:
                    cout << "Your balance is: " << balance << " $ \n "; break;
                case 2:
                    cout << "Deposit ammount: ";
                    cin >> depositammount;
                    balance=balance+depositammount;
                    break;

                case 3:
                    cout << "Withdraw ammount: ";
                    cin >> withdrawammonut;
                    if(withdrawammonut <= balance)
                    {
                        balance=balance-withdrawammonut;
                    }
                    else
                        cout << "Not enough money. \n ";
                    break;
            }

    }while(o!=4);
}
