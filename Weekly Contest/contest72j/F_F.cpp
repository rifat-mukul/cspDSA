#include <stdio.h>
#include <set>

int main() {
    long long h, k;
    scanf("%lld%lld", &h, &k);

    std::set<long long> presentNumbers;

    long long totalSum = k * (k + 1) / 2;
    long long inputSum = 0;

    for (long long i = 0; i < h; i++) {
        long long a;
        scanf("%lld", &a);

        if (a <= k) {
            if (presentNumbers.find(a) == presentNumbers.end()) {
                presentNumbers.insert(a);
                inputSum += a;
            }
        }
    }

    printf("%lld\n", totalSum - inputSum);

    return 0;
}
