#include <iostream>
#include <cmath>

using namespace std;

double calculateSum(int n) {
    double numerator = 1;
    double denumerator = ((2 * n) - 1) * ((2 * n) + 1);

    return numerator/denumerator;
}

int main() {
    double sum = 0.5;
    double sumOfElements = 0;
    double elementOfMathSum = calculateSum(1);

    for (int i = 2; elementOfMathSum > pow(10, -6); i++) {
        sumOfElements += elementOfMathSum;
        elementOfMathSum = calculateSum(i);
    }

    cout << "Correct answer: " << sum << endl;
    cout << "My answer: " << sumOfElements << endl;
    cout << "Accurancy: " << abs(sum - sumOfElements) << endl;

    return 0;
}
