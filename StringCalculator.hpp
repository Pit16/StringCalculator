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

  size_t pozycjaPrzecinka = tekst.find(',');
  string pierwszaLiczba = tekst.substr(0,pozycjaPrzecinka);
  string drugaLiczba = tekst.substr(pozycjaPrzecinka+1);
  return zamienTxtNaLiczbe(pierwszaLiczba)+zamienTxtNaLiczbe(drugaLiczba);
}


#endif //STRING_CALCULATOR_HPP
