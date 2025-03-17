#include <iostream>

using namespace std;

bool number_is_prime(int number){
    
    if(number <= 1){
        return false;
    } else {
        int cont = 0;
        for(int i = 1; i <= number; i++){
            if(number % i == 0){
                cont++;
            }
        }

        if(cont > 2){
            return false;
        } else {
            return true;
        }

    }
}

int main(){

    string result;
    
    for(int i = 1; i <= 10; i++){

        result = (number_is_prime(i) == 0) ? "not prime" : "prime";
        cout << "Number " << i << "\n" << result << endl; 
    } 

    return 0;
}
