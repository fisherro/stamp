#include <iomanip>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cout.setf(std::ios::unitbuf);
    bool newline{true};
    char c{'\0'};
    while (std::cin >> std::noskipws >> c) {
        if (newline) {
            std::time_t t = std::time(nullptr);
            std::tm tm = *std::localtime(&t);
            std::cout << std::put_time(&tm, "%FT%T%z") << ": ";
            newline = false;
        }
        std::cout << c;
        if ('\n' == c) newline = true;
    }
}
