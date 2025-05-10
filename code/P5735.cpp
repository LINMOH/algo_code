    #include<iostream>
    #include<cmath>
    using namespace std;

    int main()
    {
        double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        double ans1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        double ans2 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
        double ans3 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));

        double ans = ans1 + ans2 + ans3;
        printf("%0.2f", ans);

        return 0;
    }
