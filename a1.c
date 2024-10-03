#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

char board[SIZE][SIZE];

void initializeBoard() {
    // Initialize the chess board with pieces
    const char *initialRow1 = "rnbqkbnr";
    const char *initialRow2 = "pppppppp";
    const char *initialRow7 = "PPPPPPPP";
    const char *initialRow8 = "RNBQKBNR";

    for (int i = 0; i < SIZE; i++) {
        board[0][i] = initialRow1[i]; // Black pieces
        board[1][i] = initialRow2[i]; // Black pawns
        board[6][i] = initialRow7[i]; // White pawns
        board[7][i] = initialRow8[i]; // White pieces
    }

    // Empty squares
    for (int i = 2; i < 6; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  a b c d e f g h\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", SIZE - i);
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

// يوضح مثال التعليمات البرمجية هذا كيفية قراءة ملف HTML
// قم بإعداد مسار إخراج لحفظ المستند
string documentPath = @"a2";

// قم بتحميل ملف HTML
var document = new HTMLDocument(documentPath);

// اكتب محتوى المستند إلى تدفق الإخراج
Console.WriteLine(document.DocumentElement.OuterHTML);
