#include <iostream>
# include "middle_str.h"
#include <string>
using namespace std;
string itc_Cezar(string str, int k) {
    string result = "";
    for(int i =0; i< str.length(); i++){
                    if (str[i] >= 'A'  &&      str[i] <= 'Z') {
            str[i] += (k % 26);
            if (str[i] < 'A')
                str[i] += 26;
            result += str[i];
        }
         else if (str[i] >= 'a'   &&     str[i] <= 'z') {
            str[i] += (k % 26);
            if (str[i] < 'a')
                str[i] += 26;
            result += str[i];
         }
         else if (str[i] >= 'À'  &&      str[i] <= 'ß') {
            str[i] += (k % 33);
            if (str[i] < 'À')
                str[i] += 33;
            result += str[i];
         }
         else if (str[i] >= 'à'   &&     str[i] <= 'ÿ') {
            str[i] += (k % 33);
            if (str[i] < 'à')
                str[i] += 33;
            result += str[i];
         }
         else {
            result += str[i];
        }
    }
    return result;
}
