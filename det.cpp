#include <iostream>

int main()
{
    int m;
    std::cout << "Enter matrix's rows" << std::endl;
    std::cin >> m; // m rows
    // детерминанта у НЕ квадратных матрицы нет по определению миша
    if (m <= 0)
        return 0;

    int a[m][m];

    for (int i = 0; i < m; i++)
    {
        std::cout << "Enter matrix " << i + 1 << " row" << std::endl;
        for (int j = 0; j < m; j++)
        {
            std::cin >> a[i][j];
        }
    }
    if (m == 1)
    {
        std::cout << "det:" << a[0][0] << std::endl;
        return 0;
    }
    
    int d1 = 1, d2 = 1;
    for (int i = 0; i < m; i++)
    {
        d1 *= a[i][i];
        d2 *= a[i][(m - 1) - i];
    }
    std::cout << "det:" << d1 - d2 << std::endl;
}
