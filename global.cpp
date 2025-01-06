#include "global.h"


std::function<void(QWidget *)> repolishStatus = [](QWidget *widget) {
    widget->style()->unpolish(widget);
    widget->style()->polish(widget);
    widget->update();
};
