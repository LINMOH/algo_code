#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string a, b;
    int cnt = 0;
    cin >> cnt;
    cin >> a;

    int choice;

    for (int i = 1; i <= cnt; i++)
    {
        cin >> choice;
        switch (choice)
        {
            case 1:
            {
                cin >> b;
                a += b;
                cout << a << endl;
                break;
            }
            case 2:
            {
                int f, s;
                cin >> f >> s;
                a = a.substr(f, s);
                cout << a << endl;
                break;
            }
            case 3:
            {
                int z;
                cin >> z >> b;
                a = a.insert(z, b);
                cout << a << endl;
                break;
            }
            case 4:
            {
                cin >> b;
                cout << (int) a.find(b) << endl;
                break;
            }
        }
    }

    return 0;
}
