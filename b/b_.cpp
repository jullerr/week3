#include <iostream>
#include <iomanip>
#include <cmath>
#include <map>
using namespace std;

double calculateEntropy(const string& inputString) {
map<char, int> frequency;
int total = 0;


for (char c : inputString) {
    if (!isspace(c)) { 
    frequency[c]++;
    total++;
}
}


double entropy = 0.0;
for (auto it = frequency.begin(); it != frequency.end(); ++it) {
    double probability = static_cast<double>(it->second) / total;
    entropy -= probability * log2(probability);
}

return entropy;
}

int main() {
string inputString;
getline(cin, inputString);

double entropy = calculateEntropy(inputString);

cout << fixed << setprecision(2) << entropy << endl;

return 0;
}
