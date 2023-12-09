#include <iostream>
#include "middle_str.h"
#include <string>
using namespace std;
long long itc_len(string str){
    int length = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        length++;
    }
    return length;
}
