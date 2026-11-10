#include <iostream>

enum Month {
    January = 1, February, March, April, May, June,
    July, August, September, October, November, December
};

int main() {
    int input;
    while (true) {
        std::cout << "Enter month number: ";
        std::cin >> input;

        if (input == 0) {
            std::cout << "Goodbye" << std::endl;
            break;
        }

        Month month = static_cast<Month>(input);

        switch (month) {
            case January:   std::cout << "January" << std::endl;   break;
            case February:  std::cout << "February" << std::endl;  break;
            case March:     std::cout << "March" << std::endl;     break;
            case April:     std::cout << "April" << std::endl;     break;
            case May:       std::cout << "May" << std::endl;       break;
            case June:      std::cout << "June" << std::endl;      break;
            case July:      std::cout << "July" << std::endl;      break;
            case August:    std::cout << "August" << std::endl;    break;
            case September: std::cout << "September" << std::endl; break;
            case October:   std::cout << "October" << std::endl;   break;
            case November:  std::cout << "November" << std::endl;  break;
            case December:  std::cout << "December" << std::endl;  break;
            default:        std::cout << "Invalid number!" << std::endl; break;
        }
    }
    return 0;
}