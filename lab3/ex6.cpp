#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

// Source: https://www.youtube.com/watch?v=tGWhk47ZIm4

using namespace std;

int board[4][4];
int directionLine[] = {1, 0, -1, 0};
int directionColumn[] = {0, 1, 0, -1};

pair<int, int> generateUnoccupiedPosition();

void newGame();
void printUI();
void applyMove(int direction);
bool canDoMove(int line, int column, int nextLine, int nextColumn);
void addPiece();

int main()
{
    srand(time(0));
    char commandToDirection[128];
    commandToDirection['s'] = 0;
    commandToDirection['d'] = 1;
    commandToDirection['w'] = 2;
    commandToDirection['a'] = 3;
    newGame();

    while (true) {
        printUI();
        char command;
        cin >> command;

        if (command == 'n') {
            newGame();
        } else if (command == 'q') {
            break;
        } else {
            int currentDirection = commandToDirection[command];
            applyMove(currentDirection);
        }
    }
    return 0;
}

void newGame() {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            board[i][j] = 0;
        }
    }

    addPiece();
}

void printUI() {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (board[i][j] == 0) {
                cout << setw(4) <<  ".";
            } else {
                cout << setw(4) << board[i][j];
            }
        }
        cout << "\n";
    }
    cout << "n: New Game, w: up, s: down, d: right, a: left, q: quit\n";
}

pair<int, int> generateUnoccupiedPosition() {
    int occupied = 1, line, column;

    while (occupied) {
        line = rand() % 4;
        column = rand() % 4;

        if (board[line][column] == 0) {
            occupied = 0;
        }
    }
    return make_pair(line, column);
}

void addPiece() {
    pair<int, int> pos = generateUnoccupiedPosition();
    board[pos.first][pos.second] = 2;
}

bool canDoMove(int line, int column, int nextLine, int nextColumn) {
    if (nextLine < 0 || nextColumn < 0 || nextLine >= 4 || nextColumn >= 4 ||
            board[line][column] != board[nextLine][nextColumn] &&
            board[nextLine][nextColumn] != 0) {
        return false;
    }
    return true;
}

void applyMove(int direction) {
    int startLine = 0, startColumn = 0;
    int lineStep = 1, columnStep = 1;

    if (direction == 0) {
        startLine = 3;
        lineStep = -1;
    }

    if (direction == 1) {
        startColumn = 3;
        columnStep = -1;
    }

    int movePossible = 0;
    int canAddPiece = 0;

    do {
        movePossible = 0;
        for (int i = startLine; i >= 0 && i < 4; i += lineStep) {
            for (int j = startColumn; j >= 0 && j < 4; j+= columnStep) {
                int nextI = i + directionLine[direction];
                int nextJ = j + directionColumn[direction];

                if (board[i][j] != 0 && canDoMove(i, j, nextI, nextJ)) {
                    board[nextI][nextJ] += board[i][j];
                    board[i][j] = 0;
                    movePossible = canAddPiece = 1;
                }
            }
        }
    } while (movePossible);

    if (canAddPiece) {
        addPiece();
    }
}
