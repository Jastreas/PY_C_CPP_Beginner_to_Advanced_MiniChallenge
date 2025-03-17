#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> sorter(vector<int> original_vector){
    sort(original_vector.begin(), original_vector.end());
    return original_vector;
}

int main(){
    vector<int> example_vector{3, 5, 4, 1, 2};
    example_vector = sorter(example_vector);
    for(int num : example_vector){
        cout << num << " ";
    }
    return 0;
}
