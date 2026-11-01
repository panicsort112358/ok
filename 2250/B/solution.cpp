#include <iostream>
#include <string>

void solve() {
    int t;
    std::cin >> t;

    while(t--) {
        int n, k;
        std::cin >> n >> k;

        int runs = n - k;

        if (runs == 1) {
            std::cout << -1 << '\n';
            continue;
        }

        std::string answer;
        char current = (runs % 2 == 0 ? '0' : '1');

        for (int i = 0; i < runs; i++) {
            answer += current;
            current = (current == '0' ? '1' : '0');
        }

        int extra_zeroes = n / 2 - runs / 2;
        int extra_ones = (n + 1) / 2 - (runs + 1) / 2;

        answer.insert(answer.find('0'), extra_zeroes, '0');
        answer.insert(answer.find('1'), extra_ones, '1');

        std::cout << answer << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
