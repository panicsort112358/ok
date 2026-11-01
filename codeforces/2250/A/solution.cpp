#include <iostream>
#include <algorithm>
#include <climits>

void solve() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        long long lower = 0;
        long long upper = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            long long weight;
            std::cin >> weight;

            if (i % 2 == 0) {
                // positions 1, 3, 5, ... move right
                // weight > k
                upper = std::min(upper, weight);
            } else {
                // positions 2, 4, 6, ... move left
                // weight < k
                lower = std::max(lower, weight);
            }
        }

        bool suitable = (n % 2 == 0 && lower + 1 < upper);

        std::cout << (suitable ? "YES\n" : "NO\n");
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
