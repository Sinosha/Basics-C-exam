
#include <iostream>
#include "Func.h"

using namespace std;
void field_print(char player_1[10][10],char player_2[10][10]);
void array_filler(char player_1[10][10],char player_2[10][10]);
void ship_placement(char player_1[10][10], char player_2[10][10]);

int main()
{
    setlocale(LC_ALL, "russian");
    const int field_size = 10;
    char player_1[field_size][field_size];
    char player_2[field_size][field_size];
    array_filler(player_1, player_2);
    field_print(player_1, player_2);
    ship_placement(player_1, player_2);
}

