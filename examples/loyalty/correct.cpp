#include "../../common.h"

// Correct solution
long long solve_correct(long long X, vector<long long> a) {
    sort(a.begin(), a.end());
    long long S = 0, bonus = 0;
    int l = 0, r = (int)a.size() - 1;

    while (l <= r) {
        if ((S % X) + a[l] < X) {
            S += a[l];
            l++;
        } else {
            S += a[r];
            bonus += a[r];
            r--;
        }
    }
    return bonus;
}
