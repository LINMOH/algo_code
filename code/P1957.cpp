#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int a, b, c;
    char md = ' ', mode, last_mode;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        if (s == "a" || s == "b" || s == "c")
        {
            mode = s[0]; // 本行是三项：op a b
            cin >> a >> b;
            last_mode = mode;
        } else
        {
            // 本行是两项：a b，沿用上一行运算符
            a = stoi(s);
            cin >> b;
            mode = last_mode;
        }

        switch (mode)
        {
            case 'a': c = a + b; md = '+'; break;
            case 'b': c = a - b; md = '-'; break;
            case 'c': c = a * b; md = '*'; break;
        }

        cout << a << md << b << '=' << c << endl;

        string e = to_string(a) + string(1, md) + to_string(b) + "=" + to_string(c);
        cout << e.length() << endl;
    }

    return 0;
}

