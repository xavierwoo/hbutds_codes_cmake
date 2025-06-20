#include "rectangle.h"

namespace hbutds{
    Rectangle::Rectangle(){}
    Rectangle::Rectangle(double l): length(l), width(l){}
    Rectangle::Rectangle(double l, double w): length(l), width(w){}
    auto Rectangle::get_length() const -> double {
        return length;
    }
    auto Rectangle::get_width() const -> double {
        return width;
    }
    void Rectangle::set_length(double l){
        length = l;
    }
    void Rectangle::set_width(double w){
        width = w;
    }
    auto Rectangle::area() const -> double {
        return length * width;
    }
}