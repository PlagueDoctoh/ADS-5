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
  Tstack <char, 100> stck;
  std::string ps;
  for (int i = 0; i < inf.size(); i++) {
    if (priority(inf[i]) == -1) {
      if (ps.empty() == False && priority(inf[i - 1]) != -1) {
        stck.push_back(' ');
      }
      stck.push_back(inf[i]);
    } else if (priority(inf[i]) == 0) || priority(inf[i]) > priority(stck.get()) || stck.isEmpty()) {
            stck.push(inf[i]);
        } else {
            if ((priority(inf[i]) == 1)) {
                while (stck.get() != '(') {
                    ps.push_back(' ');
                    ps.push_back(stck.get());
                    stck.pop();
                }
                stck.pop();
            } else {
                while (priority(stck.get()) >= priority(inf[i]) {
                    ps.push_back(' ');
                    ps.push_back(stck.get());
                    stck.pop();
                }
                stck.push(inf[i]);
            }
        }
    }
    while (!stck.isEmpty()) {
        ps.push_back(' ');
        ps.push_back(stck.get());
        stck.pop();
    }
    return ps;
}
}

int eval(std::string pref) {
  // добавьте код
  
  return 0;
}
