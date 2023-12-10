#include <iostream>
# include "middle_str.h"
#include <string>
using namespace std;
string itc_maxCharWord(string str) {
    int max_length = 0;
    string max_word;
    string word = "";
    int counter = 0;
    for (int i = 0; i < itc_len(str); i++) {
        if (str[i] != ' ' && i != itc_len(str) - 1) {
            word += str[i];
        }
        else if (i == itc_len(str) - 1 && str[i] != ' ') {
            word += str[i];
            if (itc_len(word) > max_length) {
                max_length = itc_len(word);
                max_word = word;
            }
        }
        else {
            if (itc_len(word) > max_length) {
                max_length = itc_len(word);
                max_word = word;
            }
            word = "";
            counter ++;
        }
        }

    if(counter <1){
        return "error";
    }
        return max_word;
}
