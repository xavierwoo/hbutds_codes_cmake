#ifndef HBUTDS_RECTANGLE_H
#define HBUTDS_RECTANGLE_H

namespace hbutds{
    struct Rectangle{
    private:
        double length{1.0};
        double width{1.0};

    public:
        Rectangle();
        Rectangle(double);
        Rectangle(double, double);
        
        auto get_length() const -> double;
        auto get_width() const -> double;
        void set_length(double);
        void set_width(double);
        auto area() const -> double;
    };
}
#endif