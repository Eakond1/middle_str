#include <iostream>
# include "middle_str.h"
#include <string>
using namespace std;
unsigned char itc_changeCase(unsigned char c) {
bool bukva = false;
if((c >= 'a' && c<= 'z') || (c >= 'A' && c<= 'Z')){
    bukva = true;
}
if(bukva == false)
    return c;
if(c >= 'a' && c<= 'z'){
    int alnum = c - 'a';
    c = 'A' + alnum;
    return c;
}
if(c >= 'A' && c<= 'Z'){
    int alnum = c - 'A';
    c = 'a' + alnum;
    return c;
}
}
