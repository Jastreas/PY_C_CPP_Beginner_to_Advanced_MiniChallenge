#include <cstdio>
#include <string>

std::string reverse_string(const std::string& original_string){
    std::string reversed_string;

    for(int i = original_string.length() - 1; i >= 0; i--){
        reversed_string += original_string[i];
    }

    return reversed_string;
}

int main(){

    std::printf("Returned string: %s\n", reverse_string("Example").c_str()); 
    return 0;
}
