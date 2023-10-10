#include <iostream>
#include <string>

using namespace std;

void display(string message);

int main()
{
    string input;

    cout << "Please input a message" << endl;

    getline(cin, input);

    display(input);

    return 0;
}

void display(string message) {
    int characters = 0;
    cout << "Your message: " << message << endl;

    characters = message.length();

    cout << "Number of characters: " << characters << endl;
}
