#include <bits/stdc++.h>
// using namespace std;

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, m, k;
        std::cin >> n >> m >> k;

        int narr[n], marr[m];

        for (int i = 0; i < n; i++)
            std::cin >> narr[i];
        for (int i = 0; i < m; i++)
            std::cin >> marr[i];

        int count = 0;

        for (int l : narr)
        {
            for (int r : marr)
            {
                if (l + r <= k)
                {
                    count++;
                }
            }
        }

        std::cout << count << std::endl;
    }
}