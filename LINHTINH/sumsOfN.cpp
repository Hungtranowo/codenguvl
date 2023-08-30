#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double n;
    cin >> n;
    double s1, s2, s3 = 1, s4 = 0;

    s1 = ((n * (n + 1) / 2) / n);

    for (int i = 1; i <= n; i++)
    {
        s2 += i * i;
    }
    s2 = sqrt(s2);

    for (int i=1; i<=n; i++){
        s3 = s3 * (2*i-1)/2*i;
    }

    for (int i=1; i<=n; i++){
        s4 = s4 + i*(i+1)*(i+2);
    }

    cout << s1 << " " << s2 << " " << s3 << " " << s4;
    return 0;
}
