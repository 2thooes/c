#include <iostream>
#include "view.h"

using namespace std;

//������� ��� ���������� ������ ����� ��������� ��� ����������� �����������
//����� ����� ����� ����� ��� �������� �����
void refresh(Figure* arr, int size, char board[8][8]) {

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            board[i][j] = 'O';
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < size; k++) {
                if (arr[k].get_x() == j and arr[k].get_y() == i) {
                    board[i][j] = arr[k].get_letter();
                    break;
                }
            }
        }
    }
}

//������ ��� ������ "�����". �� �������� ��� refresh()
void view(Figure* arr, int size, char board[8][8]) {
    refresh(arr, size, board);
    cout << "����� �� ������ ������:" << endl;
    cout << "  a b c d e f g h" << endl << "  ---------------" << endl;
    for (int i = 0; i < 8; i++) {
        cout << 8 - i << '|';
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << '|' << 8 - i << endl;
    }
    cout << "  ---------------" << endl << "  a b c d e f g h" << endl;
}