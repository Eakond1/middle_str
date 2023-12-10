#include <iostream>
# include "middle_str.h"
#include <string>
using namespace std;
string itc_Cezar(string str, int k) {
    string result = "";
    for (int i = 0; i < itc_len(str); i++) {
            int index = (str[i] - 'a' + k) % 26;
            if (index < 0) {
                    index += 26;
                }
            result += char(index + 'a');
    }
    return result;
}
