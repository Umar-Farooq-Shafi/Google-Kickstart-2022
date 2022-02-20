#include <iostream>
#include <string>

using namespace std;

string FindBoardStatus(int size, char board[][100])
{
    bool win = false;
    for (size_t i = 0; i < size; i++)
    {
        if (board[1][0] != '.')
        {
            win = true;
            for (size_t j = 0; j < size - 1; j++)
            {
                if(board[i][j] != board[i][j+1])
                {
                    win = false;
                    break;
                }
            }
            if (win)
            {
                if (board[i][0] == 'R')
                {
                    return "Red wins";
                }
                else
                {
                    return "Blue wins";
                }
            }
        }
    }
    
    win = false;
    for (size_t i = 0; i < size; i++)
    {
        if (board[0][1] != '.')
        {
            win = true;
            for (size_t j = 0; j < size - 1; j++)
            {
                if(board[j][i] != board[j+1][i])
                {
                    win = false;
                    break;
                }
            }
            if (win)
            {
                if (board[0][1] == 'R')
                {
                    return "Red wins";
                }
                else
                {
                    return "Blue wins";
                }
            }
        }
    }

    return "Nobody wins";
}

int main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; ++tc)
    {
        int n;
        cin >> n;
        char board[100][100];
        for (int r = 0; r < n; ++r)
        {
            for (int c = 0; c < n; ++c)
            {
                cin >> board[r][c];
            }
        }
        cout << "Case #" << tc << ": " << FindBoardStatus(n, board) << endl;
    }
    return 0;
}
