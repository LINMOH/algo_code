#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string a, text;
    cin >> a;
    cin.ignore();
    getline(cin, text);
    int b;

    for (int i = 0; i < a.length(); i++)
        if ('a' <= a[i] && a[i] <= 'z')
            a[i] = a[i] - 32;

    for (int i = 0; i < text.length(); i++)
        if ('a' <= text[i] && text[i]<= 'z')
            text[i] = text[i] - 32;

    text = ' ' + text + ' ';
    a = ' ' + a + ' ';

    int cnt = 0, first = -1;
    b = text.find(a);
    while (b != -1)
    {
        cnt++;
        if (first == -1)
            first = b;
        b = text.find(a, b + 1); // 从当前位置往后找
    }

    if (cnt > 0) cout << cnt << ' ' << first;
    else cout << -1;

    return 0;
}
