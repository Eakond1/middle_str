#include <iostream>
# include "middle_str.h"
#include <string>
using namespace std;
bool itc_isLetter(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= 'à' && ch <= 'ÿ') || (ch >= 'À' && ch <= 'ß');
}
