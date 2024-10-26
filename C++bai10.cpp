#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;
string convertToVietnamese(int n) {
    
string units[] = {"", "một", "hai", "ba", "bốn", "năm", "sáu", "bảy", "tám", "chín"};
string tens[] = {"", "mười", "hai mươi", "ba mươi", "bốn mươi", "năm mươi", "sáu mươi", "bảy mươi", "tám mươi", "chín mươi"};
string hundreds[] = {"", "một trăm", "hai trăm", "ba trăm", "bốn trăm", "năm trăm", "sáu trăm", "bảy trăm", "tám trăm", "chín trăm"};
string thousands[] = {"", "một nghìn", "hai nghìn", "ba nghìn", "bốn nghìn", "năm nghìn", "sáu nghìn", "bảy nghìn", "tám nghìn", "chín nghìn"};


    if (n == 0) return "không";
    string result = "";
    if (n >= 1000) {
        result += thousands[n / 1000] + " ";
        n = n % 1000;
    }
    if (n >= 100) {
        result += hundreds[n/100]+" ";
        n %= 100;

    }
    if ( n >= 20){
    result += tens[n/10] + " ";
    n %= 10;
    }
    if ( n >= 10 ){
        result += tens[n/10] + " ";
        n %= 10;
    }
    if ( n >= 0 ){
        result += units[n]+ " ";
    }
    return result ;
}
int main(){
    int n ; 
    cout << " enter a positive number ( up to 4 digits ) " << endl;
    cin >> n ;
    if ( n < 0 || n > 9999){
        cout << " unvalid number . please enter the valid number " << endl;
    } else {
        cout << " vietnamese reading is : " << convertToVietnamese(n) << endl;
    }
    return 0 ;
    }
