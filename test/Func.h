#pragma once
#include <iostream>
using namespace std;

void array_filler(char player_1[10][10], char player_2[10][10])
{
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            player_1[i][j] = '·';
        }
        for (int k = 0; k < 10; k++) {
            player_2[i][k] = '·';
        }
        cout << "\n";
    }
}

void field_print(char player_1[10][10],char player_2[10][10])
{
    cout << "  0123456789\t\t  0123456789 \n";
    for (int i = 0; i < 10; i++) {
        cout << i << "|";
        for (int j = 0; j < 10; j++) {
            cout << player_1[i][j];
        }
        cout << "|\t\t" << i << "|";
        for (int k = 0; k < 10; k++) {
            cout << player_2[i][k];
        }
        cout << "|\n";
    }
    cout << " Player 1 field\t\tPlayer 2 field\n\n";
}

void ship_placement(char player_1[10][10], char player_2[10][10])
{
    cout << "Place your ships \n";
    int ship_counter = 1;
    int deck = 4;
    do {
        int x, y,user_choice = 0; //Coordinates
        cout << "Choose orientation of your ship \n"
             << "0 - horizontal | 1 - vertical \n";
        cin >> user_choice;
        if (user_choice != 0 && user_choice != 1) {
            cout << "Written value is not equals 0 or 1 neither";
            break;
        }
        else {
            cout << "Write coordinates of your upper deck:  \n";
            cout << "Horizontal - ";
            cin >> x;
            cout << " | Vertical - ";
            cin >> y;
            switch (user_choice) {
            case 0:
            for (int j = y; j < y + deck; j++) {
                player_1[j][x] = '#';
            }
                deck--;
                field_print(player_1, player_2);
            }
                ship_counter++;
        }
    } while (ship_counter != 4);
}