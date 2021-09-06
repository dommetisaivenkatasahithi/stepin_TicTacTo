/**
 * @file board.c
 * @author sahithidommeti()
 * @brief /****Board****\
 * @version 0.1
 * @date 2021-09-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/***********************
FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
************************/
 #include"stdio.h"
 
 void board(char square[])
{
    //char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    

    printf("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t   Tic -Tac-Toe");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
 
    printf("   Player 1 (X)  -  Player 2 (O)\n\n");
 
 
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t|     |     |     |\n");
    printf("\t|  %c  |  %c  |  %c  |\n", square[1], square[2], square[3]);
 
    printf("\t|_____|_____|_____|\n");
    printf("\t|     |     |     |\n");
 
    printf("\t|  %c  |  %c  |  %c  |\n", square[4], square[5], square[6]);
 
    printf("\t|__|_|__|\n");
    printf("\t|     |     |     |\n");
 
    printf("\t|  %c  |  %c  |  %c  |\n", square[7], square[8], square[9]);
 
    printf("\t|     |     |     |\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
}