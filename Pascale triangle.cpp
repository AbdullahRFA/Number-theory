#include <iostream>
using namespace std;

// একটি ফাংশন যা প্যাসকেলের ত্রিভুজের সংখ্যা প্রিন্ট করে
void printPascalTriangle(int n) {
    for (int line = 1; line <= n; line++) {
        int number = 1;  // প্রথম সংখ্যা সর্বদা 1
        for (int i = 1; i <= n - line; i++) {
            cout << "   "; // স্পেস ব্যবহার করে সঠিক অবস্থানে প্রিন্ট করতে
        }
        for (int i = 1; i <= line; i++) {
            cout << number << "    "; // সংখ্যা প্রিন্ট করতে
            number = number * (line - i) / i;
        }
        cout << endl;
    }
}

int main() {
    int T;
    cin >> T; // টেস্ট কেসের সংখ্যা প্রদান করো
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N; // ত্রিভুজের সারির সংখ্যা প্রদান করো
        cout << "Test Case " << i + 1 << ":" << endl;
        printPascalTriangle(N); // প্যাসকেলের ত্রিভুজ প্রিন্ট করো
        cout << endl;
    }
    return 0;
}

