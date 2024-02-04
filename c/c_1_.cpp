#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
string input;
regex reg("(.)\\1{2,}");

cout << "Введите строку: ";
getline(cin, input);

string output = regex_replace(input, reg, "$1");

cout << "Вывод: " << output << endl;

return 0;
}
