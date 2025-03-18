#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <algorithm> // For transform

using namespace std;

int main() {
    string text = "This text is the example of a text where the word text will have a value of 3";
    stringstream iss(text);
    string word;
    map<string, int> word_frequency;

    while (iss >> word) { 
        transform(word.begin(), word.end(), word.begin(), ::tolower); 
        word_frequency[word]++;
    }

    cout << "Text word frequency is: " << word_frequency.at("text") << endl;

    return 0;
}
