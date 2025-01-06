#ifndef GLOBAL_H
#define GLOBAL_H
#include <QPushButton>
#include <QStyle>
#include <functional>

extern std::function<void(QWidget *)> repolishStatus;

enum ButtonState {
    ON = 1,
    OFF = 0,
};

#endif // GLOBAL_H
