//
// Created by David Arsov on 25.12.25.
//


// Да се напише функција која ќе проверува дали дадена реченица е палиндром.
// При проверката да се игнорираат празните места, интерпункциските знаци,
// а соодветните мали и големи букви да се сметаат за еднакви (A == a, B == b, итн.).
//
// Jadejne i pienje daj!
// A man, a plan, a canal, Panama.
// Never odd or even.
// Rise to vote sir!

#include <iostream>

using namespace std;

int daliPalindrom(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (isalpha(str[left]) == 0) {
            left++;
        }
        else if (isalpha(str[right]) == 0) {
            right--;
        }
        else if (tolower(str[left]) != tolower(str[right])) {
            return 0;
        } else {
            left++;
            right--;
        }
    }

    return 1;
}

int main() {

    char str[100];
    cin.getline(str, 100);
    cout << "Palindrom: " << daliPalindrom(str) << endl;
    return 0;


    //Jadejne i pienje dad!

}