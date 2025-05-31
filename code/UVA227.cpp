#include <iostream>
#include <string>
using namespace std;

char a[5][5];
int x, y;

bool act(int mode) {
    if (mode == 1) {
        if (x == 0) return false;
        swap(a[x][y], a[x - 1][y]);
        x--;
        return true;
    } else if (mode == 2) {
        if (x == 4) return false;
        swap(a[x][y], a[x + 1][y]);
        x++;
        return true;
    } else if (mode == 3) {
        if (y == 0) return false;
        swap(a[x][y], a[x][y - 1]);
        y--;
        return true;
    } else if (mode == 4) {
        if (y == 4) return false;
        swap(a[x][y], a[x][y + 1]);
        y++;
        return true;
    }
    return false;
}

int main() {
    int cnt = 1;
    bool first = true; // 控制 puzzle 之间是否加空行

    while (true) {
        string line;
        getline(cin, line);
        if (line == "Z") break; // 输入终止

        if (!first) cout << '\n';
        first = false;

        // 处理第一行
        for (int j = 0; j < 5; j++) {
            if (j < (int)line.size())
                a[0][j] = line[j];
            else
                a[0][j] = ' ';
            if (a[0][j] == ' ') {
                x = 0; y = j;
            }
        }

        // 读入后4行
        for (int i = 1; i < 5; i++) {
            getline(cin, line);
            for (int j = 0; j < 5; j++) {
                if (j < (int)line.size())
                    a[i][j] = line[j];
                else
                    a[i][j] = ' ';
                if (a[i][j] == ' ') {
                    x = i; y = j;
                }
            }
        }

        // 读取命令
        string input, temp;
        while (getline(cin, temp)) {
            input += temp;
            if (temp.find('0') != string::npos)
                break;
        }

        bool valid = true;
        for (char c : input) {
            if (c == '0') break;
            int mode = 0;
            if (c == 'A') mode = 1;
            else if (c == 'B') mode = 2;
            else if (c == 'L') mode = 3;
            else if (c == 'R') mode = 4;
            if (mode) {
                if (!act(mode)) {
                    valid = false;
                    break;
                }
            }
        }

        cout << "Puzzle #" << cnt++ << ":\n";
        if (!valid) {
            cout << "This puzzle has no final configuration.\n";
        } else {
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    cout << a[i][j];
                    if (j < 4) cout << ' ';
                }
                cout << '\n';
            }
        }
    }
    return 0;
}
