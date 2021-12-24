#include<iostream>
const int n = 100;
 
using namespace std;
 
 
bool mon(int* p, int m)
{
    for (size_t j = 1; j < m - 1; j++)
    {
        if (p[j - 1] > p[j] && p[j] < p[j + 1])
            return false;
        if (p[j - 1]<p[j] && p[j]>p[j + 1])
            return false;
    }
    return true;
}
int main() {
    setlocale(LC_ALL, "Rus");
    cout << "Введите размерность матрицы n*m";
    int n, m, count = 0;
    cin >> n >> m;
    int** a = new int* [n];
    for (size_t i = 0; i < n; i++)
    {
        a[i] = new int[m];
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            a[i][j] = rand() % 10 - 10;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (size_t i = 0; i < n; i++)
    {
        if (mon(a[i],m))
        {
            count++;
        }
    }
    cout << "\nКол-во монотонных последовательностей = " << count;
 
}
