#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string word, int n);

int main()
{
    string word = "racecar";
    string word2 = "random";
    string word3 = "madam";

    cout << "Is racecar a palindrome, if 1 then true: " << isPalindrome(word, word.size()) << endl;
    cout << "Is random a palindrome, if 1 then true: " << isPalindrome(word2, word2.size()) << endl;
    cout << "Is madam a palindrome, if 1 then true: " << isPalindrome(word3, word3.size()) << endl;
}

bool isPalindrome(string word, int n) {
    bool result = false;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (word[i] == word[(n - 1) - i]) {
            count ++;
        }
    }

    if (count == n) {
        result = true;
    }

    return result;
}
