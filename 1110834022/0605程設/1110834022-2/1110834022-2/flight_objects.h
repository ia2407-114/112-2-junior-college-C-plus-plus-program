#ifndef FLIGHT_OBJECT_H
#define FLIGHT_OBJECT_H

#include <string>
using namespace std;

class flight_object {
public:
    string name;        // 飛行物名稱
    int id;             // 飛行物編號
    int pilot;          // 駕駛員人數
    float kerosene;     // 煤油量(煤油是飛行物使用的燃料)
    string manufacturer;// 製造者

    // 建立飛行物的資料
    virtual void create_flight_object() = 0;

    // 顯示飛行物的資料
    virtual void display() = 0;

    // 後燃器純虛擬函數
    virtual void afterburner(int seconds) = 0;
};

class airliner : public flight_object {
private:
    int passenger;          // 乘客人數
    int service_person;     // 服務人員的數目

public:
    // 建立大型客機的部分資料
    void create_airliner();

    // 建立大型客機的部分資料
    void create_flight_object() override;

    // 顯示大型客機的資料
    void display() override;

    // 後燃器純虛擬函數 (無操作)
    void afterburner(int seconds) override {}
};

class battleplane : public flight_object {
private:
    string weapon;
    int afterburner_seconds;

public:
    // 建立戰鬥機的部分資料
    void create_battleplane();

    // 建立戰鬥機的部分資料
    void create_flight_object() override;

    // 顯示戰鬥機的資料
    void display() override;

    // 後燃器純虛擬函數
    void afterburner(int seconds) override;
};

#endif // FLIGHT_OBJECT_H
