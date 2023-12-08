#include "middle_str.h"
#include <string>
#include <iostream>
using namespace std;
int itc_countWords(string str) {
    int znach = 1;
    for (int i = 0; i < itc_len(str); i++) {
        if (str[i] >= '!' && str[i] <= '@' || str[i] >= '[' && str[i] <= '`' || str[i] >= '{' && str[i] <= '~') {
            znach --;
        } else if (str[i] == ' ' && str[i + 1] != ' ') {
            znach ++;
        }
    }
    return znach ;
}
