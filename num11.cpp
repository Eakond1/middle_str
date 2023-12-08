#include <iostream>
# include "middle_str.h"
#include <string>
using namespace std;
bool itc_isIp(string str){
    int num = 0;
    int count = 0;
    for (int i = 0; i < itc_len(str); i++) {
        if (str[i] == '.') {
            if (num < 0 || num > 255) {
                return false;
            }
            num = 0;
            count++;
        }
        else if (itc_isDigit(str[i])) {
            num = num * 10 + (str[i] - '0');
        }
        else {
            return false;
        }
    }
    if (count != 3 || num < 0 || num > 255) {
        return false;
    }
    return true;
}
