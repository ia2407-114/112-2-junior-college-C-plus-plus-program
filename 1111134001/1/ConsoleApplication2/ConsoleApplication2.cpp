﻿#include <iostream>
#include <string>

void checkGenderAndAge(const std::string& id1, const std::string& id2) {
    char gender1 = id1[1]; // 取得第一個身份證字號的性別碼
    char gender2 = id2[1]; // 取得第二個身份證字號的性別碼

    if (gender1 == '1') {
        std::cout << "第一個身份證字號為男性" << std::endl;
    }
    else if (gender1 == '2') {
        std::cout << "第一個身份證字號為女性" << std::endl;
    }
    else {
        std::cout << "第一個身份證字號性別無法確定" << std::endl;
    }

    if (gender2 == '1') {
        std::cout << "第二個身份證字號為男性" << std::endl;
    }
    else if (gender2 == '2') {
        std::cout << "第二個身份證字號為女性" << std::endl;
    }
    else {
        std::cout << "第二個身份證字號性別無法確定" << std::endl;
    }

    // 預估年齡較大的人
    std::string age1_str = id1.substr(1, 8);
    std::string age2_str = id2.substr(1, 8);

    int age1 = std::stoi(age1_str);
    int age2 = std::stoi(age2_str);

    if (age1 < age2) {
        std::cout << "第一個身份證字號的年紀可能比較大" << std::endl;
    }
    else if (age1 > age2) {
        std::cout << "第二個身份證字號的年紀可能比較大" << std::endl;
    }
    else {
        std::cout << "兩個身份證字號的年紀可能相同" << std::endl;
    }
}

int main() {
    std::string idNumber1, idNumber2;
    std::cout << "請輸入第一個身份證字號：";
    std::cin >> idNumber1;
    std::cout << "請輸入第二個身份證字號：";
    std::cin >> idNumber2;

    checkGenderAndAge(idNumber1, idNumber2);

    return 0;
}
