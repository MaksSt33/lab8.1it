#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

bool ContainsTripleStars(char* str) {
    int len = strlen(str);
    for (int i = 0; i <= len - 3; i++) {
        if (str[i] == '*' && str[i + 1] == '*' && str[i + 2] == '*') {
            return true;
        }
    }
    return false;
}

char* ReplaceTripleStars(char* str) {
    int len = strlen(str);
    char* temp = new char[len + 1];
    int j = 0;

    for (int i = 0; i < len; i++) {
        if (i <= len - 3 && str[i] == '*' && str[i + 1] == '*' && str[i + 2] == '*') {
            temp[j++] = '!';
            temp[j++] = '!';
            i += 2;
        }
        else {
            temp[j++] = str[i];
        }
    }
    temp[j] = '\0';
    strcpy(str, temp);
    delete[] temp;
    return str;
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    if (ContainsTripleStars(str)) {
        cout << "String contains a group of '***'" << endl;
    }
    else {
        cout << "No '***' found" << endl;
    }

    cout << "Modified string: " << ReplaceTripleStars(str) << endl;
    return 0;
}
