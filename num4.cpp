#include <iostream>
# include "middle_str.h"
#include <string>
using namespace std;
bool itc_compare(string s1, string s2){
    bool rav;
if((itc_len(s1) < itc_len(s2)) || (itc_len(s1) > itc_len(s2))){
    return false;
}
for(int i = 0; i < itc_len(s1); i++){
    if(s1[i] == s2[i]){
        rav = true;
    }
    else if(s1[i] != s2[i])
        rav = false;
}
return rav;
}
