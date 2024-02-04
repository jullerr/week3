#include <iostream>
#include <regex>
using namespace std;

bool emailValid(const string& email) {
regex emailRegex(R"((\w+)(\.\w+)*@(\w+)(\.\w+)+)");

return regex_match(email, emailRegex);
}

int main() {
string email;
cout << "Введите адрес электронной почты: ";
cin >> email;

if (emailValid(email)) {
    cout << "Адрес электронной почты является допустимым." << endl;
} else {
    cout <<"Адрес электронной почты является недопустимым." << endl;
}

return 0;
}
