// Brian McIlwain
// Cracking the Coding Interview 12.2
// Reverse String: Implement a function void reverse(char* str) in C++ / C which reverses
// a null-terminated string.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int MAX_LENGTH = 9999;

void reverse(char * str)
{
    int i = 0;

    while(str[i])
    {
        i++;
    }

    for (int j = (i > 0) ? i : 0 ; j > i/2 ; j--)
    {
        str[i] = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = str[i];
        str[i] = 0;
    }

    return;
}

int main()
{
    char * str = new char[MAX_LENGTH];

    cout << "Enter a string to reverse: ";
    cin >> str;
    reverse(str);
    cout << "Reversed: " << str << endl;
    
    return 0;
}
