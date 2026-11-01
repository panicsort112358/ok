#include <iostream>
#include <string>

void solve() {
    int n, x = 0;
    std::cin >> n;

    while(n--) {
        std::string in;
        std::cin >> in; 

        x += in[1] == '+' ? 1 : -1;
    }

    std::cout << x << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
