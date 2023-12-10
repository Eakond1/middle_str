#include <iostream>
# include "middle_str.h"
#include <string>
using namespace std;
string itc_maxCharWord(string str) {
    int max_length = 0;
    string max_word;
    string word = "";
    int counter = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' '     &&    i != str.length() - 1) {
            word += str[i];
            counter ++;
        }
        else if (i == str.length() - 1&&str[i] != ' ') {
            word += str[i];
            counter ++;
            if (word.length() > max_length) {
                max_length = word.length();
                max_word = word;
                counter++;
            }
        }
        else {
            if (word.length() > max_length) {
                max_length = word.length();
                max_word = word;
                counter++;
            }
            word = "";
        }
    }
    if(counter <2)
        return "error";
    return max_word;
}
