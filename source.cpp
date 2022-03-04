#include <iostream>
using namespace std;


int factorial (int number) {
    if (number == 0) {
        return 1;
    }
    
    else {
        return number*factorial(number-1);
    }
}

int main(){
    
    int param;
    
    cin >> param;
    
    if (factorial(param) == 0){
        cout << "O número não pode ser 0" << endl;
    }
        
    else {
        cout << "Seu resultado é " << factorial(param) << endl;
    }
    
    return 0;
    }