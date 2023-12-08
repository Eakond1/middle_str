#include <iostream>
# include "middle_str.h"
#include <string>
using namespace std;
char itc_sameChar(string str){
char result;
    for (int i = 0; i < itc_len(str); i++) {
        if (itc_isLetter(str[i])) {
            for (int j = i + 1; j < itc_len(str); j++) {
                if (str[i] == str[j]) {
                    result = str[i];
                }
            }
        }
    }
    return result;
}
