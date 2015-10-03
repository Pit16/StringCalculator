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

  int suma = 0;
  
  size_t pozycjaPrzecinka = tekst.find(',');
  string pierwszaLiczba = tekst.substr(0,pozycjaPrzecinka);
  suma+=zamienTxtNaLiczbe(pierwszaLiczba);
  size_t pozycjaPrzecinkaDwa = tekst.find(',',pozycjaPrzecinka+1);

  string drugaLiczba = tekst.substr(pozycjaPrzecinka+1, pozycjaPrzecinkaDwa);
  suma+=zamienTxtNaLiczbe(drugaLiczba);
  if(pozycjaPrzecinkaDwa != string::npos)
  {
    string trzeciaLiczba = tekst.substr(pozycjaPrzecinkaDwa+1);
    suma+=zamienTxtNaLiczbe(trzeciaLiczba);
  }

  return suma;

}


#endif //STRING_CALCULATOR_HPP
