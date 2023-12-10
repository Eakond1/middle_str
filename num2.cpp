#include <iostream>
# include "middle_str.h"
#include <string>
using namespace std;
unsigned char itc_toUpper(unsigned char c){
if(c >= 'a' && c<= 'z'){
    int alnum = c - 'a';
    c = 'A' + alnum;
    return c;
}
else if(c >= 'A' && c<= 'Z'){
    return c;
}
return c;
}
