#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

void task1(char name[], char greeting[]);
void task2(char name[], char greeting[]);

int main(void) {
	setlocale(LC_CTYPE, "RUS");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char name[50], greeting[100];

	puts("Введите ваше имя:");
	scanf("%49s", name);

	task1(name, greeting);
	task2(name, greeting);

	return 0;
}

void task1(char name[], char greeting[]) {
	printf("Задание 1\n\n");

	strcpy(greeting, "Привет, ");

	for (int i = 0; name[i] != '\0'; i++) {
		name[i] = toupper(name[i]);
	}
	strcat(greeting, name);

	while (strlen(greeting) < 40) strcat(greeting, "!");

	puts(greeting);
	printf("\n");
}

void task2(char name[], char greeting[]) {
	int k = 0;
	int end = strlen(name) - 1;

	printf("Задание 2\n\n");

	for (int i = 0; name[i] != '\0'; i++) {
		name[i] = tolower(name[i]);
	}

	strcpy(greeting, "Привет, ");

	name[0] = toupper(name[0]);

	for (int i = 0; name[i] != '\0'; i++) {

		if (i == 1) continue;

		name[k] = name[i];
		k++;
	}
	name[k] = '\0';

	strcat(name, "!");
	strcat(greeting, name);
	puts(greeting);
}