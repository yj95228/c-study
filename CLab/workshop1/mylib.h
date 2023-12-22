#pragma once
int funcPoint(int(*fp)(char(*)[50], int*), char(*name)[50], int* price);
void printBook(char name[10][50], int price[10]);
void insertBook(char name[10][50], int price[10]);
void updateBook(char name[10][50], int price[10]);
void deleteBook(char name[10][50], int price[10]);
void findBook(char name[10][50]);