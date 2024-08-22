#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "Hello";

    // Concatenation
    string greeting = str + ", Avengers!";
    cout << "Concatenation: " << greeting << endl;

    // Substring
    string part = greeting.substr(7, 8); // Extracts "Avengers"
    cout << "Substring: " << part << endl;

    // Find
    size_t pos = greeting.find("Avengers");
    cout << "Find: 'Avengers' found at position " << pos << endl;

    // Replace
    string replaced = greeting;
    replaced.replace(pos, 8, "C++");
    cout << "Replace: " << replaced << endl;

    // Insert
    string inserted = greeting;
    inserted.insert(5, " Powerful");
    cout << "Insert: " << inserted << endl;

    // Erase
    string erased = greeting;
    erased.erase(5, 9); // Removes " Powerful"
    cout << "Erase: " << erased << endl;

    // To uppercase
    string uppercase = greeting;
    for (char &c : uppercase) c = toupper(c);
    cout << "To Uppercase: " << uppercase << endl;

    // To lowercase
    string lowercase = greeting;
    for (char &c : lowercase) c = tolower(c);
    cout << "To Lowercase: " << lowercase << endl;

    return 0;
}
