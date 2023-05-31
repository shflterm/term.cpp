//
// Created by winch on 5/5/2023.
//

#ifndef SHUFFLE_INCLUDE_CONSOLE_H_
#define SHUFFLE_INCLUDE_CONSOLE_H_

#include <string>
#include <initializer_list>

#define RESET      string("[0m")
#define BOLD       string("[1m")
#define ITALIC     string("[3m")
#define UNDERLINE  string("[4m")

#define FG_BLACK   string("[30m")
#define FG_RED     string("[31m")
#define FG_GREEN   string("[32m")
#define FG_YELLOW  string("[33m")
#define FG_BLUE    string("[34m")
#define FG_MAGENTA string("[35m")
#define FG_CYAN    string("[36m")
#define FG_WHITE   string("[37m")

#define BG_BLACK   string("[40m")
#define BG_RED     string("[41m")
#define BG_GREEN   string("[42m")
#define BG_YELLOW  string("[43m")
#define BG_BLUE    string("[44m")
#define BG_MAGENTA string("[45m")
#define BG_CYAN    string("[46m")
#define BG_WHITE   string("[47m")

using namespace std;

int wherex();
int wherey();

#endif //SHUFFLE_INCLUDE_CONSOLE_H_
