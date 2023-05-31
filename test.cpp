#include "term.h"

int main() {
  term << "1안\nㅎㅇ" << moveVertical(1) << "한줄 위"
  << moveVertical(-1) << eraseLine << color(FOREGROUND, Yellow) << "(노랑으로) 지워졋다!" << newLine;
}