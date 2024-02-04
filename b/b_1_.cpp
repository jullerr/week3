#include <iostream>
#include <regex>
using namespace std;

int main() {
string ipv6_address;

cout << "Введите IPv6 адрес: ";
cin >> ipv6_address;

// Регулярное выражение 
regex ipv6_regex("^([0-9a-fA-F]{1,4}:){7}[0-9a-fA-F]{1,4}$");


if (regex_match(ipv6_address, ipv6_regex)) {
    cout << "Адрес IPv6 введен верно" << endl;
} else {
    cout << "Адрес IPv6 введен неверно" << endl;
}

return 0;
}
