#include <iostream>
# include "middle_str.h"
#include <string>
using namespace std;
string itc_Cezar(string str, int k) {
  string result = "";
  for(int i =0; i< itc_len(str); i++) {
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'&& str[i] <= 'Z')) {
      char base;
      if (str[i] >= 'A' &&str[i] <= 'Z') {
        base = 'A';
      }
       else {
        base = 'a';
      }
      result += (char)((((str[i] - base + k) % 26 + 26) % 26) + base);
    }
    else {
      result += str[i];
    }
  }
  return result;
}

