#include <bits/stdc++.h>

int main()
{
    std::set<char> f1;
    std::string xxx;
    std::cin >> xxx;
    for (char i : xxx)
    {
        f1.insert(i);
    }
    (f1.size() & 1) ? std::cout << "IGNORE HIM!" : std::cout << "CHAT WITH HER!";
}