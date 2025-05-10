#include<iostream>
#include<cstring>
using namespace std;

string b[6];

string remove_leading_zeros(string s)
{
    size_t first_non_zero = s.find_first_not_of('0');  // 查找第一个非零字符
    if (first_non_zero == string::npos)
        return "0";  // 如果全是零，返回"0"
        return s.substr(first_non_zero);  // 返回去掉前导零的子串
}

string to_lower(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';

    return s;
}

int main()
{
    string a;
    int cnt = 0;
    bool found = false;  // 用于标记是否有有效数字

    for (int i = 1; i <= 6; i++)
    {
        cin >> a;

        a = to_lower(a);
        if (a == ".") continue;

        if (a == "one" || a == "another" || a == "a" || a == "first") { b[cnt++] = "01"; found = true; }
        if (a == "two" || a == "both" || a == "second") { b[cnt++] = "04"; found = true; }
        if (a == "three" || a == "third") { b[cnt++] = "09"; found = true; }
        if (a == "four") { b[cnt++] = "16"; found = true; }
        if (a == "five") { b[cnt++] = "25"; found = true; }
        if (a == "six") { b[cnt++] = "36"; found = true; }
        if (a == "seven") { b[cnt++] = "49"; found = true; }
        if (a == "eight") { b[cnt++] = "64"; found = true; }
        if (a == "nine") { b[cnt++] = "81"; found = true; }
        if (a == "ten") { b[cnt++] = "00"; found = true; }
        if (a == "eleven") { b[cnt++] = "21"; found = true; }
        if (a == "twelve") { b[cnt++] = "44"; found = true; }
        if (a == "thirteen") { b[cnt++] = "69"; found = true; }
        if (a == "fourteen") { b[cnt++] = "96"; found = true; }
        if (a == "fifteen") { b[cnt++] = "25"; found = true; }
        if (a == "sixteen") { b[cnt++] = "56"; found = true; }
        if (a == "seventeen") { b[cnt++] = "89"; found = true; }
        if (a == "eighteen") { b[cnt++] = "24"; found = true; }
        if (a == "nineteen") { b[cnt++] = "61"; found = true; }
        if (a == "twenty") { b[cnt++] = "00"; found = true; }
    }

    // 如果没有有效数字，则输出0
    if (!found)
    {
        cout << 0;
        return 0;
    }

    // 排序数组
    for (int i = 0; i < cnt; i++)
    {
        int min = i;
        for (int j = i + 1; j < cnt; j++)
            if (stoi(b[j]) < stoi(b[min])) min = j;
            swap(b[i], b[min]);
    }

    // 输出结果
    int z = 0;
    for (int i = 0; i < cnt; i++)
    {
        if (z == 0)
        {
            cout << remove_leading_zeros(b[i]);  // 去掉前导零后输出
            z = 1;
        }
        else
            cout << b[i];
    }
    return 0;
}
