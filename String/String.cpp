#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include<cstring>
#include <stdio.h>
using namespace std;

int mystrcmp(const char* str1, const char* str2)
{
    if (strlen(str1) == strlen(str2))
    {
        return 0;
    }
    else if (strlen(str1) > strlen(str2))
    {
        return 1;
    }
    else
    {
        return -1;
    }

}

int StringToNumber(char* str)
{
    int res = stoi(str);
    return res;
}

char* NumberToString(int number, char* str)
{
    sprintf(str, "%d", number);
    return str;
}

char* UpperCase(char* str1)
{
    for (int i = 0; i < strlen(str1); i++)
    {
        str1[i] = toupper(str1[i]);
    }
    return str1;
}

char* LowerCase(char* str1)
{
    for (int i = 0; i < strlen(str1); i++)
    {
        str1[i] = tolower(str1[i]);
    }
    return str1;
}

void mystrrev(char* str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        swap(str[i], str[len - i - 1]);
    }
}

int main()
{
    //При проверке нужно запускать каждое задание отдельно.
    setlocale(LC_ALL, "rus");
    /*int mystrcmp(const char* str1, const char* str2); —
        функция сравнивает две строки, и, если строки равны
        возвращает 0, если первая строка больше второй, то
        возвращает 1, иначе –1*/
    char str1[30] = {"Привет как дела"};
    char str2[30] = {"Привет как дела"};
    cout << "Task1: " << mystrcmp(str1, str2) << endl;

    /*int StringToNumber(char* str); — функция конвертирует строку в число и возвращает это число*/
    char str[] = { "7" };
    cout << "Task2: " << StringToNumber(str) << endl;

    /*char* NumberToString(int number); — функция конвертирует число в строку и возвращает указатель на эту строку.*/
    int number = 7;
    char NumToStr[5];
    cout << "NumberToString: " << NumberToString(number, NumToStr) << endl;
 
    /*char* Uppercase(char* str1); — функция преобразует строку в верхний регистр.*/
    char strr[] = { "Test String" };
    cout << "Task4: " << UpperCase(strr) << endl;

    /*char* Lowercase(char* str1); — функция преобразует строку в нижний регистр.*/
    char str[] = { "test string" };
    cout << "task5: " << LowerCase(str) << endl;

    /*char* mystrrev(char* str); — функция реверсирует строку и возвращает указатель на новую строку.*/
    char oldStr[] = {"Hello, World!"};
    mystrrev(oldStr);   
    cout << oldStr << endl;

}
