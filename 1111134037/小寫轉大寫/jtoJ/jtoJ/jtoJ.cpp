﻿// jtoJ.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<stdio.h>
#include<string>
#include <cstring>
using namespace std;

//小轉大
string SmalltoBig(char input)
{
    string output;
    output = input - 32;
    return output; 
}

int main()
{
    string j;
    std::string str;

    std::cout << "輸入" << "\n";
    //std::cin.getline()
    getline(cin, str);

    std::cout << "字串長度" << str.length() <<"\n";

    string stroutput;
    for (int i = 0; i < str.length(); i++)
    {
        // 第一個的判斷
        if (i == 0)
        {
            j = SmalltoBig(str[i]);
            stroutput.append(j);
        }
        else if (str[i] == ' ')
        {
            // 接在後面的字的判斷
           j = SmalltoBig(str[i+1]);
           stroutput.append(" ");
           stroutput.append(j);
           i++;
        }
        else
        {
            // 宣告一個字串tempstr取得str[i]第i個字元放在第一個字串的空位上
            string tempstr(1, str[i]);

            stroutput.append(tempstr);
        }
        
        //std::cout << "\n" <<j;
    }

    std:cout << stroutput << "\n";

    // jack jou is kellen's father 
    // Jack Jou Is Kellen's Father 

}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
