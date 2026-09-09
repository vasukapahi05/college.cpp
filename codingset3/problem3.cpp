#include <iostream>
using namespace std;

class Distance
{
public:
    int feet;
    int inches;

    Distance add(Distance d)
    {
        Distance temp;

        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        // Normalize inches
        if (temp.inches >= 12)
        {
            temp.feet++;
            temp.inches = temp.inches - 12;
        }

        return temp;
    }
};

int main()
{
    Distance d1, d2, total;

    cout << "Enter first distance (feet inches): ";
    cin >> d1.feet >> d1.inches;

    cout << "Enter second distance (feet inches): ";
    cin >> d2.feet >> d2.inches;

    total = d1.add(d2);

    cout << "Total Distance = "
         << total.feet << " feet "
         << total.inches << " inches";

    return 0;
}
