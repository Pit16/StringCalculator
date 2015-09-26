#ifndef STRING_CALCULATOR_HPP
#define STRING_CALCULATOR_HPP

using namespace std;

int zamienTxtNaLiczbe (string tekst){
  return atoi(tekst.c_str());
}

int add (string tekst){
  if(tekst =="") return 0;
  return zamienTxtNaLiczbe(tekst);
}


#endif //STRING_CALCULATOR_HPP
