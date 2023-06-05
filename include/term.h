#ifndef TERM_CPP_LIBRARY_H
#define TERM_CPP_LIBRARY_H

#include <iostream>
#include <string>
#include <algorithm>

#define eraseFromCursorToScreenEnd       "[0J"
#define eraseFromScreenBeginningToCursor "[1J"
#define eraseAll                         "[2J"
#define eraseFromCursorToLineEnd         "[0K"
#define eraseFromLineBeginningToCursor   "[1K"
#define eraseLine                        "[2K"

#define newLine "\n"
#define resetColor "[0m"

#define saveCursorPosition "[s"
#define loadCursorPosition "[u"

using namespace std;

class term_ {
 public:
  term_ operator<<(const string &s);
};
extern term_ term;

string moveVertical(int i);
string moveHorizontal(int i);

enum ColorWhere {
  FOREGROUND = 30, BACKGROUND = 40,
  FOREGROUND_BRIGHT = 90, BACKGROUND_BRIGHT = 100
};

enum Color {
  Black = 0,
  Red = 1,
  Green = 2,
  Yellow = 3,
  Blue = 4,
  Magenta = 5,
  Cyan = 6,
  White = 7,
  Default = 9
};

string color(ColorWhere where, Color color);
string color256(ColorWhere where, int color);

#endif //TERM_CPP_LIBRARY_H
