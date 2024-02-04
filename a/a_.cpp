#include <iostream>
#include <string>
using namespace std;

int countOccurrences(const std::string& searchStr, int n, const string* strings) {
int count = 0;
for (int i = 0; i < n; i++) {
    size_t pos = 0;
while ((pos = strings[i].find(searchStr, pos)) != string::npos) {
    count++;
    pos += searchStr.length();
}
}
return count;
}

int main() {
string searchStr;
cout << "Введите символы для поиска: ";
getline(cin, searchStr);

cout << "Введите количество строк: ";
int n;
cin >> n;
cin.ignore(); 

string* strings = new string[n];
cout << "Где ищем (введите построчно): " << endl;
for (int i = 0; i < n; i++) {
getline(cin, strings[i]);
}

int occurrences = countOccurrences(searchStr, n, strings);
cout << "Вывод: " << occurrences << endl;

delete[] strings;

return 0;
}
