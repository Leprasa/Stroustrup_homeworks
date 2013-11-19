#include <iostream>
int main()
{
        // При помощи typedef определите типы:
        typedef unsigned char UC; // unsigned char
        typedef const unsigned char CUC; //const unsigned char
        typedef int* p1; //указатель на целое
        typedef char** p2; //указатель на указатель на char
        typedef char* p3; //указатель на массивchar
        typedef int* p4[7]; // массив из 7 указателей на целые числа
        typedef int** p5[7]; // указатель нама массив из 7 указателей на целые числа
        typedef int* p6[8][7]; //массив из 8 массивов по 7 указателей на целые
}