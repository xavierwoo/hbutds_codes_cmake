#ifndef TEMPLATE_TEST_LIBRARY_H
#define TEMPLATE_TEST_LIBRARY_H
namespace template_test{
    template<typename T>
    auto add(T,T) -> T;

    template<typename T>
    auto add(T a, T b) -> T{
        return a + b;
    }

    void it_works();
}
#endif