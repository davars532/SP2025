//
// Created by David Arsov on 25.12.25.
//

#include <iostream>

using namespace std;

int main() {

    char str[100] = "TestTekst";
    char str1[100] = "TestTekst";
    // str = "dsds";
    cout << str << endl;
    strcpy(str, "NovTekst");
    cout << str << endl;

    // cin >> str;
    // cout << str << endl;

    // cin.getline(str, 3);
    // cout << str << endl;
    // cin.get(str, 100);
    // cin.get();
    // cin.get(str1, 100);
    // //test\n
    // cout << str << endl;
    // cout << str1 << endl;

    char c1[100] = "aaa";
    char c2[100] = "aaa";

    cout << strcmp(c1, c2) << endl;
    return 0;
}