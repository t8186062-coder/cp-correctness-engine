#include "common.h"

// forward declarations (functions defined in other files)
long long solve_correct(long long X, vector<long long> a);
long long solve_wrong(long long X, vector<long long> a);

int main() {
    long long X = 10;
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

    for (int n = 1; n <= 7; n++) {
        for (int it = 0; it < 10000; it++) {
            vector<long long> a(n);
            for (int i = 0; i < n; i++) {
                a[i] = rng() % X + 1; // values in [1, X]
            }

            long long correct = solve_correct(X, a);
            long long wrong = solve_wrong(X, a);

            if (correct != wrong) {
                cout << "Counterexample found!\n";
                cout << "X = " << X << "\n";
                cout << "a = ";
                for (auto x : a) cout << x << " ";
                cout << "\n";
                cout << "correct = " << correct << "\n";
                cout << "wrong   = " << wrong << "\n";
                return 0;
            }
        }
    }

    cout << "No counterexample found\n";
    return 0;
}
