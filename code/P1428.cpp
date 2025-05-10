#include<iostream>
using namespace std;

/*
 人 *比人，气死人；鱼比鱼，难死鱼。小鱼最近参加了一个“比可爱”比赛，比的是每只鱼的可爱程度。参赛的鱼被从左到右排成一排，头都朝向左边，然后每只鱼会得到一个整数数值，表示这只鱼的可爱程度，很显然整数越大，表示这只鱼越可爱，而且任意两只鱼的可爱程度可能一样。由于所有的鱼头都朝向左边，所以每只鱼只能看见在它左边的鱼的可爱程度，它们心里都在计算，在自己的眼力范围内有多少只鱼不如自己可爱呢。请你帮这些可爱但是鱼脑不够用的小鱼们计算一下。
 */

int main()
{
    int num = 0;
    cin >> num;

    int cutes[num];
    for (int i = 0; i <= num - 1; i++)
    {
        cin >> cutes[i];
    }

    for (int j = 0; j <= num - 1; j++)
    {
        int count = 0;
        for (int a = j; a >= 0; a--)
        {
            if (cutes[a] < cutes[j])
            {
                count++;
            }
        }
        cout << count << " ";
    }
}
