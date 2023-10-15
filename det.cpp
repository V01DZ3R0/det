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
    
    int det = (a[0][0] * a[1][1] * a[2][2] + a[1][0] * a[2][1] * a[0][2] + a[0][1] * a[1][2] * a[2][0]) - (a[0][2] * a[1][1] * a[2][0] + a[1][2] * a[2][1] * a[0][0] + a[0][1] * a[1][0] * a[2][2]);
    std::cout << "det:" << det << std::endl;
}
