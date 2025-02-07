#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin >> ws, str);

    string original = str;
    int len = str.length();

    for (int i = 0; i < len / 2; i++) {
        swap(str[i], str[len - 1 - i]);
    }

    if (original == str) cout << "String is palindrome!!\n";
    else cout << "String is Not a palindrome!!\n";

    cout << "\nFrequencies: \n";
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') continue;
        int count = 0;
        for (int j = 0; j < len; j++) {
            if (str[j] == str[i]) count++;
        }
        cout << str[i] << ": " << count << endl;
        str[i] = ' ';
    }

    char symbol;
    cout << "\nEnter the symbol you want to replace vowels with: ";
    cin >> symbol;
    string vowels = "aeiouAEIOU";

    for (char& c : original) {
        if (vowels.find(c) != string::npos) c = symbol;
    }

    cout << original;
    return 0;
}