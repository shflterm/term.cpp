#include "term.h"

#include <iostream>
#include <string>

#define MOVE_V_UP        "[%dA"
#define MOVE_V_DOWN      "[%dB"
#define MOVE_H_RIGHT     "[%dC"
#define MOVE_H_LEFT      "[%dD"
#define TELEPORT         "[%d;%dH"
#define CHANGE_COLOR     "[1;34;%dm"
#define CHANGE_COLOR_256 "[%d;5;%dm"

using std::cout, std::string;

term_ term;

term_ term_::operator<<(const string &s) const {
    if (s == eraseAll) {
#ifdef _WIN32
        system("cls");
#elif defined(__linux__) || defined(__APPLE__)
        system("clear");
#else
        cout << eraseAll;
        cout.flush();
#endif
        return *this;
    }

    cout << s;
    cout.flush();
    return *this;
}

string moveVertical(const int i) {
    char res[20];
    if (i < 0) {
        sprintf(res, MOVE_V_UP, i);
    } else if (i > 0) {
        sprintf(res, MOVE_V_DOWN, i);
    }
    return res;
}

string moveHorizontal(const int i) {
    char res[20];
    if (i > 0) {
        sprintf(res, MOVE_H_RIGHT, i);
    } else if (i < 0) {
        sprintf(res, MOVE_H_LEFT, i);
    }
    return res;
}

string teleport(int x, int y) {
    char res[20];
#ifdef _WIN32
    x++; y++;
#endif
    sprintf(res, TELEPORT, y, x);
    return res;
}

string color(const ColorWhere where, const Color color) {
    char res[20];
    sprintf(res, CHANGE_COLOR, color + where);
    return res;
}

string color256(const ColorWhere where, const int color) {
    char res[20];
    sprintf(res, CHANGE_COLOR_256, where + 8, color);
    return res;
}
