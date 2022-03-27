#ifndef IOTEXT_H
#define IOTEXT_H

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define MAXBARIS 4
#define MAXKOLOM 20

struct data{
 char data[MAXBARIS][MAXKOLOM];
};

struct editor{
 int baris;
 int kolom;
 HANDLE hstdout;
 COORD destcord;
};

static struct editor E;
static struct data D;

enum KeyInput{
	
	ENTER = 13,
	CTRL_S = 19,
	CTRL_N = 14,
	CTRL_Q = 17,
	CTRL_C = 3
	
};

void print(char arr[MAXBARIS][MAXKOLOM]);
void insertion(int key);
void Delete();
void moveCursor();
void setCursor();
void initEditor();
void keyProsess();
void GetData(char data[MAXBARIS][MAXKOLOM]);

#endif
