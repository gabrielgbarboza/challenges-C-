#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int X;
    float N1, N2, N3, N4, N5, MEDIA;

    cin >> X;
    cin >> N1 >> N2 >> N3 >> N4 >> N5;
    cout << X << endl;
    MEDIA = (N1 + N2 + N3 + N4 + N5) / 5;
    cout << fixed;
    cout << setprecision(2) << MEDIA;

        return 0;
}
