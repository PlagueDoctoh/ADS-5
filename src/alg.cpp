// Copyright 2021 NNTU-CS
#include <string>
#include <map>
#include "tstack.h"

int priority (char ch) {
  if (ch == '(') {
    return 0;
  }
  if (ch == ')') {
    return 1;
  }
  if (ch ==  '+' || ch == '-') {
    return 2;
  }
  if (ch == '*' || ch == '/') {
    return 3;
  }
  return -1;
}

std::string infx2pstfx(std::string inf) {
  // добавьте код
  
  return std::string("");
}

int eval(std::string pref) {
  // добавьте код
  
  return 0;
}
