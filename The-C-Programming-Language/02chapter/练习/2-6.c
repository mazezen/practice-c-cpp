// 编写一个函数setbits(x, p, n , y), 该函数返回对 x 执行下列操作后的结果值:
// 将 x 中从 p 位开始的 n 个 (二进制) 位求反 (即, 1变成0, 0变成1), x的其余
// 各位保持不变.

/* setbits: set m bits of x at position p with bits of y */
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    return x & ~(~(~0 << n) << (p + 1 - n)) : (y & ~(~0 << n)) << (p + 1 - n);
}
