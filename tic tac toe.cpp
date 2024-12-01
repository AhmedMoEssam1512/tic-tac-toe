// Ahmed Mohamed Essam Ahmed    
#include <iostream>
using namespace std;

int main() {
    string v1, v2, v3, v4, v5, v6, v7, v8, v9; //names of the variables
    cout << "Welcome to tic-tac-toe game\n";// welcoming the players
    while (true) {
        cout << "type 'play' or 'exit' \n";
        string input;// the string whare the user will make decision to either play or exit
        cin >> input;
        if (input == "exit") {//the exit condition
            cout << "leaving game";
            break;
        }
        else if (input == "play")//the play condition
        {
            v1 = v2 = v3 = v4 = v5 = v6 = v7 = v8 = v9 = "- "; //initializing all variables to to start the game"- "
            cout << "the current board is : \n";
            for (int i = 0; i <= 9; i++)
            {
                if (i == 9) {//the draw condition
                    cout << v1 << v2 << v3 << endl;
                    cout << v4 << v5 << v6 << endl;
                    cout << v7 << v8 << v9 << endl;
                    cout << "no winner\n";
                    break;
                }
                cout << v1 << v2 << v3 << endl;
                cout << v4 << v5 << v6 << endl;
                cout << v7 << v8 << v9 << endl;
                if (i % 2 == 0)
                {
                    cout << "enter your move (player one)\n";
                }
                else
                {
                    cout << "enter your move (player two)\n";
                }
                int row, column;//coordinates of the move
                while (1) {//to check the move is valid
                    cin >> row >> column;
                    if (row > 3 || column > 3) {
                        cout << "invalid move\nplease try again: \n";
                    }
                    else break;
                }
                if (row == 1 and column == 1)//move condition for v 1
                {

                    if (v1 == "- ") {

                        if (i % 2)
                        {
                            v1 = "X ";
                        }
                        else
                        {
                            v1 = "O ";
                        }

                    }
                    else {
                        cout << "invalid move\nplease try again: \n";
                        i--;
                    }

                }
                else if (row == 1 and column == 2)//move condition for v 2
                {
                    if (v2 == "- ") {
                        if (i % 2)
                        {
                            v2 = "X ";
                        }
                        else
                        {
                            v2 = "O ";
                        }
                    }

                    else {
                        cout << "invalid move\nplease try again: \n";
                        i--;
                    }

                }
                else if (row == 1 and column == 3) //move condition for v 3
                {
                    if (v3 == "- ") {
                        if (i % 2)
                        {
                            v3 = "X ";
                        }
                        else
                        {
                            v3 = "O ";
                        }
                    }
                    else {
                        cout << "invalid move\nplease try again: \n";
                        i--;
                    }
                }
                else if (row == 2 and column == 1) //move condition for v 4
                {
                    if (v4 == "- ") {
                        if (i % 2)
                        {
                            v4 = "X ";
                        }
                        else
                        {
                            v4 = "O ";
                        }
                    }
                    else {
                        cout << "invalid move\nplease try again: \n";
                        i--;
                    }
                }
                else if (row == 2 and column == 2)//move condition for v 5
                {
                    if (v5 == "- ") {
                        if (i % 2)
                        {
                            v5 = "X ";
                        }
                        else
                        {
                            v5 = "O ";
                        }
                    }
                    else {
                        cout << "invalid move\nplease try again: \n";
                        i--;
                    }
                }
                else if (row == 2 and column == 3)//move condition for v 6
                {
                    if (v6 == "- ") {
                        if (i % 2)
                        {
                            v6 = "X ";
                        }
                        else
                        {
                            v6 = "O ";
                        }
                    }
                    else {
                        cout << "invalid move\nplease try again: \n";
                        i--;
                    }
                }
                else if (row == 3 and column == 1)//move condition for v 7
                {
                    if (v7 == "- ") {
                        if (i % 2)
                        {
                            v7 = "X ";
                        }
                        else
                        {
                            v7 = "O ";
                        }
                    }
                    else {
                        cout << "invalid move\nplease try again: \n";
                        i--;
                    }
                }
                else if (row == 3 and column == 2)//move condition for v 8
                {
                    if (v8 == "- ") {
                        if (i % 2)
                        {
                            v8 = "X ";
                        }
                        else
                        {
                            v8 = "O ";
                        }
                    }
                    else {
                        cout << "invalid move\nplease try again: \n";
                        i--;
                    }
                }
                else if (row == 3 and column == 3)//move condition for v 9
                {
                    if (v9 == "- ") {
                        if (i % 2)
                        {
                            v9 = "X ";
                        }
                        else
                        {
                            v9 = "O ";
                        }
                    }
                    else {
                        cout << "invalid move\nplease try again: \n";
                        i--;
                    }
                }
                if (v1 == v2 and v2 == v3 and v1 != "- ")//winning condition 1
                {
                    if (v1 == "X ")//for player 2
                    {
                        cout << v1 << v2 << v3 << endl;
                        cout << v4 << v5 << v6 << endl;
                        cout << v7 << v8 << v9 << endl;
                        cout << "Player two wins\n";
                        break;
                    }
                    else//for player 1
                    {
                        cout << v1 << v2 << v3 << endl;
                        cout << v4 << v5 << v6 << endl;
                        cout << v7 << v8 << v9 << endl;
                        cout << "Player one wins\n";
                        break;
                    }
                }
                else if (v4 == v5 and v5 == v6 and v4 != "- ")//winning condition 2
                {
                    if (v4 == "X ")//for player 2
                    {
                        cout << v1 << v2 << v3 << endl;
                        cout << v4 << v5 << v6 << endl;
                        cout << v7 << v8 << v9 << endl;
                        cout << "Player two wins\n";
                        break;
                    }
                    else//for player 1
                    {
                        cout << v1 << v2 << v3 << endl;
                        cout << v4 << v5 << v6 << endl;
                        cout << v7 << v8 << v9 << endl;
                        cout << "Player one wins\n";
                        break;
                    }
                }
                else if (v7 == v8 and v8 == v9 and v7 != "- ")//winning condition 3
                {
                    if (v7 == "X ")//for player 2
                    {
                        cout << v1 << v2 << v3 << endl;
                        cout << v4 << v5 << v6 << endl;
                        cout << v7 << v8 << v9 << endl;
                        cout << "Player two wins\n";
                        break;
                    }
                    else//for player 1
                    {
                        cout << v1 << v2 << v3 << endl;
                        cout << v4 << v5 << v6 << endl;
                        cout << v7 << v8 << v9 << endl;
                        cout << "Player one wins\n";
                        break;
                    }
                }
                else if (v1 == v4 and v4 == v7 and v7 != "- ")//winning condition 4
                {
                    if (v7 == "X ")//for player 2
                    {
                        cout << v1 << v2 << v3 << endl;
                        cout << v4 << v5 << v6 << endl;
                        cout << v7 << v8 << v9 << endl;
                        cout << "Player two wins\n";
                        break;
                    }
                    else//for player 1
                    {
                        cout << v1 << v2 << v3 << endl;
                        cout << v4 << v5 << v6 << endl;
                        cout << v7 << v8 << v9 << endl;
                        cout << "Player one wins\n";
                        break;
                    }
                }
                else if (v2 == v5 and v5 == v8 and v8 != "- ")//winning condition 5
                {
                    if (v8 == "X ")//for player 2
                    {
                        cout << v1 << v2 << v3 << endl;
                        cout << v4 << v5 << v6 << endl;
                        cout << v7 << v8 << v9 << endl;
                        cout << "Player two wins\n";
                        break;
                    }
                    else//for player 1
                    {
                        cout << v1 << v2 << v3 << endl;
                        cout << v4 << v5 << v6 << endl;
                        cout << v7 << v8 << v9 << endl;
                        cout << "Player one wins\n";
                        break;
                    }
                }
                else if (v3 == v6 and v6 == v9 and v9 != "- ")//winning condition 6
                {
                    if (v9 == "X ")//for player 2
                    {
                        cout << v1 << v2 << v3 << endl;
                        cout << v4 << v5 << v6 << endl;
                        cout << v7 << v8 << v9 << endl;
                        cout << "Player two wins\n";
                        break;
                    }
                    else//for player 1
                    {
                        cout << v1 << v2 << v3 << endl;
                        cout << v4 << v5 << v6 << endl;
                        cout << v7 << v8 << v9 << endl;
                        cout << "Player one wins\n";
                        break;
                    }
                }
                else if (v1 == v5 and v5 == v9 and v9 != "- ")//winning condition 7
                {
                    if (v9 == "X ")//for player 2
                    {
                        cout << v1 << v2 << v3 << endl;
                        cout << v4 << v5 << v6 << endl;
                        cout << v7 << v8 << v9 << endl;
                        cout << "Player two wins\n";
                        break;
                    }
                    else//for player 1
                    {
                        cout << v1 << v2 << v3 << endl;
                        cout << v4 << v5 << v6 << endl;
                        cout << v7 << v8 << v9 << endl;
                        cout << "Player one wins\n";
                        break;
                    }
                }
                else if (v3 == v5 and v5 == v7 and v7 != "- ")//winning condition 7
                {
                    if (v7 == "X ")//for player 2
                    {
                        cout << v1 << v2 << v3 << endl;
                        cout << v4 << v5 << v6 << endl;
                        cout << v7 << v8 << v9 << endl;
                        cout << "Player two wins\n";
                        break;
                    }
                    else//for player 1
                    {
                        cout << v1 << v2 << v3 << endl;
                        cout << v4 << v5 << v6 << endl;
                        cout << v7 << v8 << v9 << endl;
                        cout << "Player one wins\n";
                        break;
                    }
                }


            }

        }
        else cout << "invalid\n";//in case the first input was nither play nor exit 
    }
}