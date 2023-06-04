#include "term.h"

#include <iostream>
#include <string>

#include "console.h"

using namespace std;

#define MOVE "[%d;%dH"
#define CHANGE_COLOR "[1;34;%dm"
#define CHANGE_COLOR_256 "[%d;5;%dm"

term_ term;

term_ term_::operator<<(const string &s) {
  cout << s;
  cout.flush();
  return *this;
}

string moveVertical(int i) {
  int nowX = wherex(), nowY = wherey();
  char res[10];
  sprintf(res, MOVE, nowY - i, nowX);
  return res;
}

string moveHorizontal(int i) {
  int nowX = wherex(), nowY = wherey();
  char res[10];
  sprintf(res, MOVE, nowY, nowX + i);
  return res;
}

string color(ColorWhere where, Color color) {
  char res[20];
  sprintf(res, CHANGE_COLOR, color + where);
  return res;
}

string color256(ColorWhere where, int color) {
  char res[20];
  sprintf(res, CHANGE_COLOR_256, where + 8, color);
  return res;
}
