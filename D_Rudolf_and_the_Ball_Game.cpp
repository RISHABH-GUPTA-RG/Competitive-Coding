#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main() {
    int test_cases;
    std::cin >> test_cases;

    for (int t = 0; t < test_cases; ++t) {
        int n, m, x;
        std::cin >> n >> m >> x;
        std::set<int> s;
        s.insert(x - 1);

        for (int i = 0; i < m; ++i) {
            int r;
            std::string c;
            std::cin >> r >> c;
            std::set<int> t;
            for (auto j : s) {
                if (c == "0" || c == "?")
                    t.insert((j + r) % n);
                if (c == "1" || c == "?")
                    t.insert((j - r + n) % n);
            }
            s = t;
        }

        std::cout << s.size() << std::endl;

        for (auto i : s)
            std::cout << i + 1 << " ";
        std::cout << std::endl;
    }

    return 0;
}
