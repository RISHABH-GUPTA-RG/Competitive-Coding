#include <bits/stdc++.h>
using namespace std;

int main()
{
    string myCard;
    cin >> myCard;
    string cardPlaced[5];
    bool playable = false;

    for (int i = 0; i < 5; i++)
    {
        string card;
        cin >> card;
        cardPlaced[i] = card;
        if (myCard[0] == card[0] or myCard[1] == card[1])
            playable = true;
    }

    (playable) ? cout << "YES" : cout << "NO";
}