#include <iostream>

struct Address {
    char city[50];
    char street[50];
    int houseNumber;
    int apartmentNumber;
    int index;
};

void printAddress(const Address& address) {
    std::cout << "town: " << address.city << std::endl;
    std::cout << "street: " << address.street << std::endl;
    std::cout << "house's num: " << address.houseNumber << std::endl;
    std::cout << "aparment's num: " << address.apartmentNumber << std::endl;
    std::cout << "index: " << address.index << std::endl;
}

int main() {
    Address address1 = {"moscow", "arbat", 12, 8, 123456};
    Address address2 = {"spb", "vasilivskiy ostrov", 59, 143, 953769};

    printAddress(address1);
    std::cout << std::endl;
    printAddress(address2);

    return 0;
}