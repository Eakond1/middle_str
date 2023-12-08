#include <iostream>
# include "middle_str.h"
#include <string>
using namespace std;
bool itc_isFirstInSecond(string s1, string s2){
    int len1 = itc_len(s1);
    int len2 = itc_len(s2);
    if (len1 > len2) {
        return false;
    }
    for (int i = 0; i <= len2 - len1; i++) {
        bool found = true;
        for (int j = 0; j < len1; j++) {
            if (s1[j] != s2[i + j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return true;
        }
    }
    return false;
}
