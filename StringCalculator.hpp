#ifndef STRING_CALCULATOR_HPP
#define STRING_CALCULATOR_HPP

using namespace std;

int zamienTxtNaLiczbe (string tekst){
  return atoi(tekst.c_str());
}

bool pojedynczaLiczba(string tekst){
  size_t found=tekst.find(',');
  if(found==string::npos) return true;
  return false;
}

int add (string tekst){
  if(tekst.empty()) return 0;
  if(pojedynczaLiczba(tekst)) 
    return zamienTxtNaLiczbe(tekst);
  return 2;
}

#endif //STRING_CALCULATOR_HPP
