#include <iostream>
using namespace std;

// Function to check if a number is a perfect number
bool isPerfect(int num) {
    int sum = 1; // Start with 1 since all numbers are divisible by 1

    // Find divisors up to the square root of the number
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            if (i * i != num) {
                sum += i + num / i;
            } else {
                sum += i;
            }
        }
    }

    // Check if the sum of divisors is equal to the number itself
    return sum == num;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        if (isPerfect(N)) {
            cout << "Yes, " << N << " is a perfect number!" << endl;
        } else {
            cout << "No, " << N << " is not a perfect number!" << endl;
        }
    }

    return 0;
}

