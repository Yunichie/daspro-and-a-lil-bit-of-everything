#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

class Map {
private:
    int rows;
    int cols;
    vector<vector<char>> map;

public:
    Map(int r, int c) : rows(r), cols(c), map(r, vector<char>(c)) {}

    void create_map() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> map[i][j];
            }
        }
    }

    char get_symbol(int row, int col) const {
        return map[row][col];
    }

    int get_rows() const { return rows; }
    int get_cols() const { return cols; }
};

class Robot {
private:
    int row, col, time, time_increment;
    bool ketemu_mekanik, ketemu_elektrikal;

public:
    Robot() : row(0), col(0), time(0), time_increment(2), ketemu_mekanik(false), ketemu_elektrikal(false) {}

    void traverse_map(char direction, const Map &map) {
        int robot_row = row;
        int robot_col = col;

        switch (direction) {
            case 'U':
                robot_row--;
                break;
            case 'D':
                robot_row++;
                break;
            case 'L':
                robot_col--;
                break;
            case 'R':
                robot_col++;
                break;
        }

        char nextPos = map.get_symbol(robot_row, robot_col);

        if (nextPos == 'x') {
            if (ketemu_mekanik == true) {
                time += time_increment;
            } else {
                cout << "Robot nabrak, silahkan diperbaiki" << endl;
                return;
            }
        }

        row = robot_row;
        col = robot_col;

        switch (nextPos) {
            case '.':
                time += time_increment;
                break;
            case 'M':
                cout << "Bertemu dengan mekanik, siap membasmi rintangan" << endl;
                ketemu_mekanik = true;
                time += time_increment;
                break;
            case 'E':
                cout << "Bertemu dengan electrical, kecepatan roda naik menjadi 200%" << endl;
                ketemu_elektrikal = true;
                time += time_increment;
                time_increment /= 2;
                break;
            case 'P':
                cout << "Hello, world!" << endl;
                time += time_increment;
                break;
            case 'O':
                cout << "Bertemu dengan official, diajak ngonten bareng" << endl;
                time += time_increment;
                time *= 2;
                break;
            case 'F':
                time += time_increment;
                cout << "Robot berhasil mencapai tujuan" << endl;
                cout << "Robot telah berjalan selama " << time << " menit" << endl;
                break;
        }
    }

    bool is_F(const Map &map) const {
        return map.get_symbol(row, col) == 'F';
    }

    int get_time() const {
        return time;
    }
};

class StartRobot {
private:
    Map map;
    Robot robot;
    vector<char> moves;

public:
    StartRobot(int rows, int cols) : map(rows, cols) {}

    void initialize() {
        map.create_map();
        int moveCounts;
        cin >> moveCounts;
        cin.ignore();

        string directions;
        getline(cin, directions);
        istringstream iss(directions);
        char move;
        while (iss >> move) {
            moves.push_back(move);
        }
    }

    void start_move() {
        for (char move: moves) {
            robot.traverse_map(move, map);

            if (robot.is_F(map)) {
                return;
            }
        }
        cout << "Robot gagal dalam mencapai tujuan :(" << endl;
        cout << "Robot telah berjalan selama " << robot.get_time() << " menit" << endl;
    }
};

int main() {
    int cols, rows;
    cin >> rows >> cols;

    StartRobot robot(rows, cols);
    robot.initialize();
    robot.start_move();

    return 0;
}