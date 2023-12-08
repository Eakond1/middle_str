#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED
#include <string>
using namespace std;
bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char c);
long long itc_len(string str);
bool itc_compare(string s1, string s2);
unsigned char itc_changeCase(unsigned char c) ;
int itc_countWords(string str);
string itc_maxCharWord(string str);
char itc_sameChar(string str);
bool itc_isLetter(char ch);
bool itc_isFirstInSecond(string s1, string s2);
string itc_Cezar(string str, int k);
string itc_rmFreeSpace(string str);
bool itc_isIp(string str);



#endif // MIDDLE_STR_H_INCLUDED
