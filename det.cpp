#include <iostream>

int main()
{

    std::cout << "Enter matrix's rows" << std::endl;
    int n;
    std::cin >> n; // n rows & n columns
    float a[n][n];
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter matrix " << i + 1 << " row" << std::endl;
        for (int j = 0; j < n; j++)
        {
            std::cin >> a[i][j];
        }
    }
    if (n == 1)
    {
        std::cout << "det: " << a[0][0] << std::endl;
        return 0;
    }

    if (n <= 0)
        return 0;

    //

    double k;
    for (int z = 1; z < n; z++)
    {
        for (int i = z; i < n; i++)
        {
            k = a[i][z - 1] / a[z - 1][z - 1];
            for (int j = 0; j < n; j++)

            {
                a[i][j] -= a[z - 1][j] * k;
            }
        }
    }

    // std::cout << "" << std::endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         std::cout << a[i][j] * 1.0 << " ";
    //     }
    //     std::cout << std::endl;
    // }

    double det = 1;
    for (int i = 0; i < n; i++)
    {
        det *= a[i][i];
    }
    std::cout << "det: " << det << std::endl;
    return 0;
}
