#include <iostream>
#include <cstdint>
#include <cstdio>

using namespace std;

void 斐波那契数列递归(uint64_t n, uint64_t n1 = 0, uint64_t n2 = 1)
{
    if (n1 <= n)
    {
        printf("%4zu", n1);
        斐波那契数列递归(n, n2, n1 + n2);
    }
}

void 斐波那契数列递推(uint64_t n)
{
    uint64_t
        n1 = 0,
        n2 = 1;
    // 循环 n 次
    for (uint64_t x = 0; x < n; x++)
    {
        printf("%4zu", n1);
        uint64_t cache = n1;
        n1 = n2;
        n2 += cache;
    }
}

int main()
{
    uint64_t n;
    cout << "请输入 n，以计算 n 个斐波那契数列的数：";
    cin >> n;
    斐波那契数列递推(n);

    cout << endl;

    cout << "请输入 n，以获得小于等于 n 的斐波那契数列的数：";
    cin >> n;
    斐波那契数列递归(n);
    return 0;
}
