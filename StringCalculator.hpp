#ifndef STRING_CALCULATOR_HPP
#define STRING_CALCULATOR_HPP
int add (std::string tekst){
  if(tekst =="")return 0;
  else return atoi(tekst.c_str());
}


#endif //STRING_CALCULATOR_HPP
