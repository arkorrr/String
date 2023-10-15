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

string NumberToString(int number,string* str)
{
    *str = to_string(number);
    return *str;
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

string mystrrev(string reversedStr) 
{
   reverse(reversedStr.begin(), reversedStr.end());
   return reversedStr;
}

int main()
{
    setlocale(LC_ALL, "rus");
        /*int mystrcmp(const char* str1, const char* str2); —
            функция сравнивает две строки, и, если строки равны
            возвращает 0, если первая строка больше второй, то
            возвращает 1, иначе –1*/
    char str1[20] = {"Привет как дела"};
    char str2[20] = {"Привет как дела"};
    cout << mystrcmp(str1, str2) << endl;

    /*int StringToNumber(char* str); — функция конвертирует строку в число и возвращает это число*/
    char str[] = { "7" };
    cout << StringToNumber(str) << endl;

    /*char* NumberToString(int number); — функция конвертирует число в строку и возвращает указатель на эту строку.*/
    int number = 7;
    string NumToStr;
    cout << NumberToString(number, &NumToStr) << endl;

    /*char* Uppercase(char* str1); — функция преобразует строку в верхний регистр.*/
    char strr[] = { "Test String" };
    cout << UpperCase(strr) << endl;

    /*char* Lowercase(char* str1); — функция преобразует строку в нижний регистр.*/
    char STR[] = { "Test String" };
    cout << LowerCase(STR) << endl;

    /*char* mystrrev(char* str); — функция реверсирует строку и возвращает указатель на новую строку.*/
    string oldStr = { "Hello, World!" };
    cout << mystrrev(oldStr) << endl;

}
