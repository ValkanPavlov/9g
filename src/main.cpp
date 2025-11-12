#include <iostream>
using namespace std;

int main() {
        char input[2];
        cout << "Player 1\n";
        cout << "Rock, paper or scissors?: (r/p/s): ";
        cin >> input[0];
        system("clear");
        cout << "Player 2\n";
        cout << "Rock, paper or scissors?: (r/p/s): ";
        cin >> input[1];
        char *first = &input[0], *second = &input[1];
        for (int i = 0; i<2; ++i, ++first, --second)
        {
                if (*first==*second) goto tie;
                else if (*first=='r'&&*second=='p')
                {
                        if (i) goto win;
                        goto lose;
                }
                else if (*first=='r'&&*second=='s')
                {
                        if (i) goto lose;
                        goto win;
                }
                else if (*first=='p'&&*second=='s')
                {
                        if (i) goto win;
                        goto lose;
                }
        }

tie:
        cout << "Tie!";
        return 0;
win:
        cout << "Player 1 wins!";
        return 0;

lose:
        cout << "Player 2 wins!";
        return 0;
}
