#include <iostream>

using namespace std;

int main()
{   
    char c;
    bool ischar;
    int isLowercaseVowel, isUppercaseVowel;
    cout << "请输入一个字母: ";
    cin >> c;
    ischar = ((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z'));
    if (ischar) {
        isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
        isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

        if (isLowercaseVowel || isUppercaseVowel) {
            cout << "元音" << endl;
        } else {
            cout << "辅音" << endl;
        }
    } else {
        cout << "输入的不是字母" << endl;
    }

    return 0;
}

// bool isVowel(char letter)
// {
//     letter = tolower(letter);
//     if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
//         return true;
//     }

//     return false;
// }

// int main()
// {

//     cout << "请输入一个字母: ";
//     char letter;
//     cin >> letter;
//     if (isVowel(letter)) {
//         cout << "元音";
//     } else {
//         cout << "辅音";
//     }
//     cout << endl;

//     return 0;
// }
