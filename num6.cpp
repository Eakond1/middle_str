#include <iostream>
# include "middle_str.h"
#include <string>
using namespace std;
string itc_maxCharWord(string str) {
    int len = 0, max_len = 0;
    string word = "", max_word = "";
    int word_count = 0;
    for (int i = 0; i < itc_len(str); i++) {
        if (str[i] != ' ') {
            word += str[i];
            len++;
        }
        else {
            if (len > max_len) {
                max_len = len;
                max_word = word;
            }
            word = "";
            len = 0;
            word_count++;
        }
    }
    if (len > max_len) {
        max_len = len;
        max_word = word;
    }
    word_count++;
    if (word_count < 2) {
    return "error";
}
    return max_word;
}
