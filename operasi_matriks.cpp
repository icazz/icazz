#include <iostream>
#include <vector>
using namespace std;
//https://tlx.toki.id/courses/competitive-1/chapters/01/problems/P1

void rotasi(vector<vector<int>> &matrix, int &baris, int &kolom) {
    vector<vector<int>> rotated(kolom, vector<int>(baris));
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            rotated[j][baris - 1 - i] = matrix[i][j];
        }
    }
    matrix = rotated;
    swap(baris, kolom); // Tukar dimensi
}

void operasi(string opr, vector<vector<int>> &matrix, int &baris, int &kolom) {
    vector<vector<int>> temp = matrix;
    if (opr == "_") {
        for (int i = 0; i < baris; i++) {
            matrix[baris - 1 - i] = temp[i];
        }
    } else if (opr == "|") {
        for (int i = 0; i < baris; i++) {
            for (int j = 0; j < kolom; j++) {
                matrix[i][kolom - 1 - j] = temp[i][j];
            }
        }
    } else if (opr == "90") {
        rotasi(matrix, baris, kolom);
    } else if (opr == "180") {
        rotasi(matrix, baris, kolom);
        rotasi(matrix, baris, kolom);
    } else if (opr == "270") {
        rotasi(matrix, baris, kolom);
        rotasi(matrix, baris, kolom);
        rotasi(matrix, baris, kolom);
    } else {
        return;
    }
}

int main() {
    int n, m, x;
    cin >> n >> m >> x;

    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    vector<string> opr(x);
    for (int i = 0; i < x; i++) {
        cin >> opr[i];
    }

    // Operasi pada matriks
    for (int i = 0; i < x; i++) {
        operasi(opr[i], matrix, n, m);
    }

    // Cetak hasil matriks
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
