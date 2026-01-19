EN:When calculating \(x^{n}\), the naive approach involves multiplying (x) for (n) times, resulting in (O(n)) complexity. For large (n) (e.g., (2^{31}-1))， 
this becomes computationally expensive and leads to Time Limit Exceeded (TLE). 
The core of this algorithm is to decompose the exponent \(n\) into a sum of powers of 2 (utilizing Binary Representation)


CN:在計算 \(x^{n}\) 時，最直觀的方法是將 \(x\) 連乘 \(n\) 次，這需要 \(O(n)\) 的時間。當 \(n\) 很大時（例如 \(2^{31}-1\)），
計算會極其緩慢甚至導致超時。 快速冪演算法的核心在於將指數 \(n\) 拆解為 2 的冪次之和（即利用 二進位 的特性）
