#include<locale>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите число и диапазоны через пробел: ";
    int s, l1, r1, l2, r2, x1, x2, z;
    z = 0;
    x1 = 0;
    x2 = 0;
    cin >> s >> l1 >> r1 >> l2 >> r2;
    if ((s > (r1 + r2)) || (s < (l1 + l2)))
    {
     cout << -1;
    }
    else
    {
        if ((s - l1) >= l2)
        {
            if (s <= (l1 + r2))
            {
             cout << l1 << " " << s - l1;
            }
            else
            {
             z = abs(s - (l1 + r2));
             if ((l1 + z) < r1 && (r2 - z) > l2)
                {
                 cout << l1 + z << " " << s - (l1 + z);
                }
                else
                {
                 cout << -1;
                }
            }
        }
        else
        {
         cout << -1;
        }
    }
}