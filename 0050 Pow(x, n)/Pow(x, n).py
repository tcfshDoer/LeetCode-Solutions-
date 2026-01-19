class Solution:#快速冪（Exponentiation by squaring）演算法，O(log n)
    def myPow(self, x: float, n: int) -> float:
        if n < 0:#負次方
            x = 1/x
            n=-n
        result = 1
        while n:#任何正整數 n 都可以表示為二進位的形式
            if n % 2 == 1:
                result *= x
            x *= x
            n //= 2
        return result#快速冪能在極短時間內完成計算，避免超時
