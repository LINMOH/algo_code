#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int a = 0, b = 0, c = 0;  // 初始化变量

    for (int i = 0; i < s.length(); i++)
    {
        // 确保当前是一个赋值语句：x:=y;
        if ((s[i] == 'a' || s[i] == 'b' || s[i] == 'c') &&
            s[i + 1] == ':' && s[i + 2] == '=')
        {
            int name = s[i]; // 左值
            char rhs = s[i + 3]; // 右值
            int val = 0;

            if (rhs >= '0' && rhs <= '9') val = rhs - '0';
            else if (rhs == 'a') val = a;
            else if (rhs == 'b') val = b;
            else if (rhs == 'c') val = c;

            switch (name)
            {
                case 'a': a = val; break;
                case 'b': b = val; break;
                case 'c': c = val; break;
            }

            i += 4; // 跳过当前完整语句：x:=y;
        }
    }

    cout << a << ' ' << b << ' ' << c;

    return 0;
}
