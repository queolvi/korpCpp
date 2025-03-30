#include "Time.h"

int main() {

    int s, m = 0, h = 0;

    std::cin >> s >> m >> h;

    College::myTime Time_now(s,m,h); 

    return 0;
}