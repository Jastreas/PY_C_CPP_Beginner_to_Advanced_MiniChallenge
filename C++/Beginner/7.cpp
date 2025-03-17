#include <iostream>

using namespace std;

int recursive_factorial(const int& number){
    
    int result = 0;

    if(number <= 1){
        return 1;
    }

    result = number * recursive_factorial(number - 1);

    return result;
}


int main(){
    
    for(int i = 1; i <= 12; i++){
        cout << "Recursive factorial of " << i << ": " << recursive_factorial(i) << endl;   
    }

    return 0;
}
