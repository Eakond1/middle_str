#include <iostream>
# include "middle_str.h"
#include <string>
using namespace std;
string itc_Cezar(string str, int k) {
    string result = "";
    for (int i = 0; i < itc_len(str); i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                char simvol = str[i] + k;
    if (simvol > 'Z') {
            simvol = 'A' + (simvol - 'Z' - 1);
    }
    else if (simvol < 'A') {
            simvol = 'Z' - ('A' - simvol - 1);
    }
    result += simvol;
    }
     else if (str[i] >= 'a' && str[i] <= 'z') {
            char simvol = str[i] + k;
     if (simvol > 'z') {
            simvol = 'a' + (simvol - 'z' - 1);
     }
     else if (simvol < 'a') {
         simvol = 'z' - ('a' - simvol - 1);
         }
         result += simvol;
         }
          else {
                result += str[i];
          }
          }
    return result;
}
