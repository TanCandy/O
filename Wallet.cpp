#include <iostream>
#include <string>
using namespace std;
int main(){
    int pin = 1234;
    int eneteredPin;
    double balance = 50000;
    int choice;
    double amount;
    cout << " enter your PIN : " ;
    cin >> eneteredPin ;
    if (eneteredPin == pin ){
        cout << " 1 . Check balance " << endl ;
        cout << " 2 . Deposit money " << endl;
        cout << " 3 . Withdraw Money " << endl; 
        cout << " Enter your choice  : " << endl;
        cin >> choice;
        switch(choice){
            case 1 :
            cout << " Your balance is : " << balance << endl;
            break;
            case 2 :
             cout << " enter the amount u want to deposit " << endl;
            cin >> amount ;
            if ( amount > 0 ){
                balance = balance + amount ;
                cout << " New balance  : " << balance << endl;
            }else {
                cout << " Invalid amount . " << endl;
            }
            break;
            case 3 :
            cout << " Enter amount u want to  withdraw :" ;
                cin >> amount ;
                if ( amount > 0 && amount <= balance ){
                    balance = balance - amount ;
                    cout << " New balance : " << balance  << endl;  
                } else {
                    cout << " Your balance is insufficient . " << endl;            
                }
                break;
                default : 
                cout << " Invalid number : " << endl;
        }
        return 0 ;
    } else {
        cout << " Incorrect Pin " << endl;
    }
    return 0;
}
    /*if (eneteredPin == pin ){
        cout << " 1 . Check balance " << endl ;
        cout << " 2 . Deposit money " << endl;
        cout << " 3 . Withdraw Money " << endl; 
        cout << " Enter your choice  : " << endl;
        cin >> choice;
        if ( choice == 1) {
            cout << " Your balance is : " << balance << endl;
        } else if ( choice == 2 ){
            cout << " enter the amount u want to deposit " << endl;
            cin >> amount ;
            if ( amount > 0 ){
                balance = balance + amount ;
                cout << " New balance  : " << balance << endl;
            }else {
                cout << " Invalid amount . " << endl;
            }
            } else if ( choice == 3 ){
                cout << " Enter amount u want to  withdraw :" ;
                cin >> amount ;
                if ( amount > 0 && amount <= balance ){
                    balance = balance - amount ;
                    cout << " New balance " << balance  << endl;  
                } else {
                    cout << " Your balance is insufficient . " << endl;            
                }
            } else { 
                cout << " Invalid number " << endl;    
            } 
            }else{
                cout << " Incorrect PIN " << endl;
            }
            return 0;
}*/
            