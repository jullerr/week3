#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void calculateAverageTemperature(double data_array[], int size) {
int count = 0;
double sum = 0.0;

for (int i = 0; i < size; i++) {
    if (data_array[i] != 0.0) {
        count++;
        sum += data_array[i];
}
}

if (count > 0) {
    double average = sum / count;
    cout << fixed << setprecision(1) << average << endl;
} else {
    cout << "N/A" << endl;
}
}

int main() {
string input;
double data_array[100] = {0.0};
bool sortBySensorId;

cout << "Выберите поле для сортировки (0 - id датчика, 1 - средняя температура): ";
cin >> sortBySensorId;

cout << "Введите пакет показаний: ";
cin.ignore();
getline(cin, input);

int start = 0;
int end = input.find('@');

while (end != string::npos) {
    string sensorData = input.substr(start, end - start);

int sensorId = stoi(sensorData.substr(0, 2));
double temperature = stod(sensorData.substr(2));

if (sensorId >= 0 && sensorId < 100) {
    data_array[sensorId] += temperature;
}

start = end + 1;
end = input.find('@', start);
}

int size = sizeof(data_array) / sizeof(data_array[0]);

if (sortBySensorId) {
        for (int i = 0; i < size; i++) {
            if (data_array[i] != 0.0) {
                cout << i << " ";
                calculateAverageTemperature(&data_array[i], 1);
}
}
} else {
    for (int i = -50; i <= 50; i++) {
        cout << i << " ";
        calculateAverageTemperature(&data_array[i], 1);
}
}

return 0;
}
