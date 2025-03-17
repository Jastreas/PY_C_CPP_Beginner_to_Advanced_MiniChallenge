#include <iostream>
#include <vector>

using namespace std;


int main(){

    vector<int> number_vect(10, 0);

    for(int i = 0; i < number_vect.size(); i++){
        cout << "Introduce a number" << endl; 
        cin >> number_vect[i];
    }

    for(int i = 0; i < number_vect.size(); i++){
        cout << number_vect[i] << endl; 
    }

    return 0;
}
