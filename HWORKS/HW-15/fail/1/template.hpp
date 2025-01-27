
template <typename T>
T calc(int x,T(*f)(T)) {
    T sum = 0;
    for(int i = 1; i <= x + 1; ++i) {
        sum += f(x / i);
    }
    return sum;
}
