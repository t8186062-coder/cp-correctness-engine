#include "../../common.h"

// Intentionally wrong greedy
long long solve_wrong(long long X, vector<long long> a) {
    sort(a.begin(), a.end(), greater<long long>());
    long long S = 0, bonus = 0;

    for (long long x : a) {
        if ((S + x) / X > S / X) {
            bonus += x;
        }
        S += x;
    }
    return bonus;
}
