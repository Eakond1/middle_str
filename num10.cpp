#include <iostream>
# include "middle_str.h"
#include <string>
using namespace std;
string itc_rmFreeSpace(string str){
    string result = "";
    bool space = false;
    for (int i = 0; i < str.length(); i++) {
            if (str[i] == ' ' && !space) {
                result += str[i];
    space = true;
    }
     else if (str[i] != ' ') {
            result += str[i];
     space = false;
     }
     }
     if (result[result.length() - 1] == ' ') {
            string temp = "";
     for (int i = 0; i < result.length() - 1; i++) {
            temp += result[i];
     }
     result = temp;
     }
     return result;
}
