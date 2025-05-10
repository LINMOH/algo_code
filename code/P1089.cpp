#include <iostream>
using namespace std;

int main()
{
    // 生成包含每个月预算的列表
    int MonthMoneys[12];
    for (int z = 0; z <= 11; z++)
    {
        int MonthMoney = 0;
        cin >> MonthMoney;
        MonthMoneys[z] = MonthMoney;
    }

    int i = 0;
    int mother = 0;
    int LeftMoney = 0; // 上个月剩余的钱数

    // 模拟每个月的操作
    for (int month = 0; month <= 11; month++) // month 表示数组 MonthMoneys 的下标
    {
        int ThisMonthMoney = LeftMoney + 300; // 当月的钱数
        if (ThisMonthMoney >= MonthMoneys[month])
        {
            ThisMonthMoney -= MonthMoneys[month];
            mother += (ThisMonthMoney / 100) * 100; // 存入整百的钱
            LeftMoney = ThisMonthMoney % 100; // 剩余的钱

            i++; // 记录通过的月份
        }
        else
        {
            cout << '-' << month + 1; // 预算超支，输出 -X
            return 0;
        }
    }

    // 计算年末的钱
    int AllMoney = mother * 120 / 100 + LeftMoney; // 避免浮点运算
    cout << AllMoney;

    return 0;
}
