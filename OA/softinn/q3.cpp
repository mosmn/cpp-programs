#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype>
#include <sstream>

using namespace std;

void func(string input) {
    unordered_map<char, int> vowels, consonants, specials;
    unordered_map<string, int> wordOccurrences;

    for (char ch : input) {
        if (isalpha(ch)) {
            char upperCh = toupper(ch);
            if (upperCh == 'A' || upperCh == 'E' || upperCh == 'I' || upperCh == 'O' || upperCh == 'U') {
                vowels[upperCh]++;
            } else {
                consonants[upperCh]++;
            }
        } else {
            specials[ch]++;
        }
    }

    cout << "Vowels:";
    for (auto entry : vowels) {
        cout << " " << entry.first << "(" << entry.second << ")";
    }
    cout << endl;

    cout << "Consonants:";
    for (auto entry : consonants) {
        cout << " " << entry.first << "(" << entry.second << ")";
    }
    cout << endl;

    cout << "Other characters:";
    for (auto entry : specials) {
        cout << " " << entry.first << "(" << entry.second << ")";
    }
    cout << endl;

    istringstream stream(input);
    string word, longestWord;
    size_t maxLength = 0;


    while (stream >> word) {
        for (char ch : word) {
            if (!isalpha(ch)) {
                word.erase(word.find(ch), 1);
            }
        }
        if (word.length() > maxLength) {
            maxLength = word.length();
            longestWord = word;
        }
        wordOccurrences[word]++;
    }

    cout << "The longest word: " << longestWord << endl;
}

int main() {
    cout << "Insert Text: (press 'Return' to mark end of input)" << endl;

    string input;
    getline(cin, input);

    func(input);

    return 0;
}












