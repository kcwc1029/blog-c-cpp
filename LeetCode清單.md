### 0.1. 資料結構（Data Structures）

-   **堆疊（Stack）** → 括號匹配、單調遞增/遞減堆疊
-   **佇列（Queue）** → 雙端佇列（Deque）、滑動視窗最大值
-   **雜湊表（Hash Table / Hash Map）** → 兩數之和、字串處理
-   **樹（Binary Tree & Binary Search Tree, BST）** → 遍歷（前/中/後序）、最低共同祖先
-   **堆積（Heap / Priority Queue）** → Top K Elements 問題
-   **圖（Graph）** → BFS、DFS、拓撲排序（Topological Sort）

### 0.2. 演算法（Algorithms）

-   **排序（Sorting）**
    -   **快速排序（Quick Sort）**
    -   **合併排序（Merge Sort）**
    -   **計數排序（Counting Sort）**（對大數量級問題有用）
-   **搜尋（Searching）**
    -   **二分搜尋（Binary Search）**（模板題必會，如「搜尋旋轉排序陣列」）
    -   **BFS / DFS（廣度/深度優先搜尋）**（圖、迷宮、最短路徑）
-   **動態規劃（Dynamic Programming, DP）**
-   **貪心演算法（Greedy Algorithm）**
-   **位元運算（Bit Manipulation）**
    -   XOR 運算（Single Number 問題）136
    -   位元計數（Counting Bits）：191
    -   位元翻轉（Bit Reversal）：190
    -   找出二的冪次方（Power of Two）：231
    -   求兩數的漢明距離（Hamming Distance）461
    -   找出兩數的和（Sum of Two Integers, 無需加減號）：371
    -   位元壓縮（Bit Compression）
    -   取最低位的 1（Lowest Set Bit）
    -   清除最低位的 1

## 1. string

### 1.1. 709.To Lower Case

-   [709.To Lower Case](./LeetCode/Strnig/709.to-lower-case.cpp)
-   [709.To Lower Case](./LeetCode/Strnig/709.to-lower-case.c)

### 1.2. 412.Fizz Buzz(教過)

-   給定一個 n，for 跑 1-n，每一個數值依據規定轉換 Fizz Buzz
-   [412.Fizz Buzz.cpp](./LeetCode/Strnig/412.fizz-buzz.cpp)
-   [412.Fizz Buzz.c](./LeetCode/Strnig/412.fizz-buzz.c)

### 1.3. 1662.Check If Two String Arrays are Equivalent

-   解法 1：字串拼接
-   解法 2：雙指針比對
-   [1662.Check If Two String Arrays are Equivalent](./LeetCode/Strnig/1662.check-if-two-string-arrays-are-equivalent.cpp)
-   [1662.Check If Two String Arrays are Equivalent](./LeetCode/Strnig/1662.check-if-two-string-arrays-are-equivalent.c)

### 1.4. 14.Longest Common Prefix

-   每次都跟第一個去比較
-   [14.Longest Common Prefix](./LeetCode/Strnig/14.longest-common-prefix.cpp)

### 1.5. 58.Length of Last Word

![upgit_20241112_1731409811.png|0x0](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241112_1731409811.png)

-   返回最後一個字的長度(不可以用套件)
-   [58.Length of Last Word](./LeetCode/Strnig/58.length-of-last-word.cpp)

### 1.6. 415.Add Strings

-   用字串模擬加法
-   [415.Add Strings](./LeetCode/Strnig/415.add-strings.cpp)

### 1.7. 38.Count and Say(medium)

-   行程长度编码（Run-Length Encoding, RLE）是一种无损压缩算法，用于表示连续重复的数据。它通过记录数据中连续相同元素的个数和元素本身，来压缩原始数据的大小。

![upgit_20241215_1734239728.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241215_1734239728.png)

-   [38.Count and Say](./LeetCode/Strnig/38.count-and-say.cpp)

### 1.8. 520.Detect Capital

-   去檢查大寫字母的使用方式
    -   全部都大寫
    -   第一個字大寫
    -   全部都小寫
-   [520.Detect Capital](./LeetCode/Strnig/520.detect-capital.cpp)

## 2. sort

### 2.1. 242.Valid Anagram

-   Anagram：同樣的數量字母，去做不同排列
-   [242.Valid Anagram](./LeetCode/Sort/242.valid-anagram.cpp)

## 3. math

### 3.1. 2235.Add Two Integers(教過)

-   [2235.Add Two Integers](./LeetCode/Math/2235.add-two-integers.c)

### 3.2. 9.Palindrome Number

-   檢查是否為回文數
-   解法 1：轉字串後，用雙指針判斷
-   解法 2：用數學的方式

![upgit_20241127_1732697628.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241127_1732697628.png)

-   解法 3：用雙指針去檢查。
-   [9.Palindrome Number](./LeetCode/Sort/9.palindrome-number.cpp)

### 3.3. 171.Excel Sheet Column Number

-   [171.Excel Sheet Column Number](./LeetCode/Math/171.excel-sheet-column-number.cpp)

### 3.4. 168.Excel Sheet Column Title

![upgit_20241112_1731413754.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241112_1731413754.png)

-   10 進制轉 26 進制
-   [168.Excel Sheet Column Title](./LeetCode/Math/168.excel-sheet-column-title.cpp)

### 3.5. 258.Add Digits

-   Ugly Number：只包含质因数 2、3 和 5 的 正 整数。
-   1 也是 Ugly Number
-   [258.Add Digits](./LeetCode/Math/258.add-digits.cpp)

### 3.6. 263.Ugly Number

-   [263.Ugly Number]

### 3.7. 292.Nim Game

-   Nim Game：2 人遊戲(你跟對手)，你為先手 - 每一回合，轮到的人拿掉  1 - 3 块石头。 - 拿掉最后一块石头的人就是获胜者。

![upgit_20241129_1732866680.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241129_1732866680.png)

-   [292.Nim Game](./LeetCode/Math/292.nim-game.cpp)

### 3.8. 326.Power of Three

-   查看使否為 3 的次方
-   [326.Power of Three](./LeetCode/Math/326.power-of-three.cpp)

### 3.9. 367.Valid Perfect Square

-   判斷是否為完全平方數
-   解法 1：先開根號，在平方，看是否一樣。
-   解法 2：二分去找(純屬裝牛 B)
-   [367.Valid Perfect Square](./LeetCode/Math/367.valid-perfect-square.cpp)

### 3.10. 405.Convert a Number to Hexadecimal

-   十進位轉十六近位(不准用函數)。

![upgit_20241201_1733048505.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241201_1733048505.png)

-   [405.Convert a Number to Hexadecimal](./LeetCode/Math/405.convert-a-number-to-hexadecimal.cpp)
-   [405.Convert a Number to Hexadecimal by C](./LeetCode/Math/405.convert-a-number-to-hexadecimal.c)

### 3.11. 441.Arranging Coins

-   解法 1：二分
-   我們可以知道公式

$${n(總數)} = \frac{x(最大層) \times (x(最大層) + 1)}{2}$$

-   那就可以設定左指針 0，右指針 x，然後去計算 mid。

    -   每一次 mid 去跟 n 做比較，再依序調整左右指針。

-   解法 2：數學

![upgit_20241203_1733195018.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241203_1733195018.png)

-   [441.Arranging Coins](./LeetCode/Math/441.arranging-coins.cpp)

### 3.12. 492.Construct the Rectangle

-   給一個面積，返回長寬值，其中 - 寬度<=長度

![upgit_20241203_1733196630.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241203_1733196630.png)

-   [492.Construct the Rectangle](./LeetCode/Math/492.construct-the-rectangle.cpp)

### 3.13. 504.Base 7

-   [504.Base 7](./LeetCode/Math/504.base-7.cpp)

### 3.14. 628.Maximum Product of Three Numbers

-   返回數組中最大 3 個數的乘機。
-   解法 1：排序
-   [628.Maximum Product of Three Numbers](./LeetCode/Math/628.maximum-product-of-three-numbers.cpp)

### 3.15. Distribute Candies

這一題比較偏向，數學題

-   假設我有 6 個種類不同的糖果，每一個種類的各一顆 => 因為數量限制是 6/2=3 => 所以我只能吃 3 種
-   假設我有 6 個種類相同的糖果(舊式種類為 1) => 雖然數量限制為 3，但種類只有一個，所以只能吃一種
-   總結，就是【數量/2】、【種類】取最小值

-   [575. Distribute Candies](./LeetCode/Math/575.distribute-candies.cpp)

## 4. Bit Manipulatio

```



lab04
1009 1018 1342 1356 1486
371 78 90 287 218 526 638 672 1238


```

### 4.1. 位元操作：n & (-n) 跟 n & (n-)

-   n & (-n)：保留最低位的 1，其它清零 => 取出最低位的 1

```
n =  0b1100 (12)
-n = 0b0100 (取補數+1)
-----------------------
n & -n = 0b0100 (4)
```

-   n & (n-1)：消除最低位的 1 => 把 `n` 的 最低位的 1 變成 0，其它位元保持不變。

```
n =  0b1100 (12)
n-1= 0b1011 (11)
-----------------------
n&(n-1)= 0b1000 (8)
```

### 4.2. 67.Add Binary

![upgit_20250313_1741843203.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250313_1741843203.png)

-   [67.Add Binary](./LeetCode/Bit%20Manipulatio/67.add-binary.cpp)

### 4.3. 190.Reverse Bits

![upgit_20250313_1741844116.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250313_1741844116.png)

-   [190.Reverse Bits](./LeetCode/Bit%20Manipulatio/190.reverse-bits.cpp)
-   [190.Reverse Bits by C](./LeetCode/Bit%20Manipulatio/190.reverse-bits.c)

### 4.4. 191.Number of 1 Bits

-   先轉乘二進位，在計算幾個 1
-   [191.Number of 1 Bits](./LeetCode/Bit%20Manipulatio/191.number-of-1-bits.cpp)
-   [191.Number of 1 Bits by C](./LeetCode/Bit%20Manipulatio/191.number-of-1-bits.c)

### 4.5. 136.Single Number

-   只有一個數出現 1 次，其他都出現 2 次。
-   阿...這一題他是要找唯一一個的時候，有很多種解法拉(map、排序...)
-   解法 1：排序
-   解法 2：map
-   解法 3：XOR
-   [136.Single Number](./LeetCode/Bit%20Manipulatio/136.single-number.cpp)
-   [136.Single Number by C](./LeetCode/Bit%20Manipulatio/136.single-number.c)

![upgit_20250314_1741941133.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250314_1741941133.png)

### 4.6. 137.Si1ngle Number II

-   只有一個數出現 1 次，其他都出現 3 次。
-   解法 1：用 map 紀錄次數。
-   解法 2：用陣列紀錄：因為她有說數值範圍到 2^32，

![upgit_20241108_1731067383.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241108_1731067383.png)

-   [137.Single Number II](./LeetCode/Bit%20Manipulatio/137.single-number-ii.cpp)

### 4.7. 260.Single Number III

-   兩個數出現 1 次，其他都出現 2 次。
-   [260.Single Number III](./LeetCode/Bit%20Manipulatio/260.single-number-iii.cpp)
-   [260.Single Number III by C](./LeetCode/Bit%20Manipulatio/260.single-number-iii.c)

![upgit_20250314_1741941150.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250314_1741941150.png)

### 4.8. 231.Power of Two

![upgit_20250321_1742563504.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250321_1742563504.png)

-   題目要檢查，是否滿足`-231 <= n <= 231 - 1`
-   開平方嘛，所以就是檢查 1-2^32 這樣
-   解法 1：用乘法的方式，for 迴圈檢查 1-32，每個都去乘乘看
-   解法 2：用除法的方式
-   解法 3：利用 n&(-n)取得最低位元 1，再去 XOR 檢查 => 判斷 2 的幕方

-   [231.Power of Two](./LeetCode/Bit%20Manipulatio/231.power-of-two.cpp)
-   [231.Power of Two by C](./LeetCode/Bit%20Manipulatio/231.power-of-two.c)

### 4.9. 342.Power of Four

-   解法 1：用除法的方式
-   解法 2： 檢查是否為 4 的次方=>檢查開跟號後是否為 2 的次方
-   [342.Power of Four](./LeetCode/Math/342.power-of-four.cpp)
-   [342.Power of Four by C](./LeetCode/Math/342.power-of-four.c)

### 4.10. 268.Missing Number

![upgit_20250322_1742573954.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250322_1742573954.png)

-   [268.Missing Number](./LeetCode/Bit%20Manipulatio/268.missing-number.cpp)
-   [268.Missing Number by C](./LeetCode/Bit%20Manipulatio/268.missing-number.c)

### 4.11. 389.Find the Difference

-   [389.Find the Difference](./LeetCode/Bit%20Manipulatio/389.find-the-difference.cpp)
-   [389.Find the Difference by C](./LeetCode/Bit%20Manipulatio/389.find-the-difference.c)

### 4.12. 338.Counting Bits

![upgit_20250328_1743163162.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250328_1743163162.png)

-   計算範圍內，每個數(二進位)1 的數量。
-   解法 1：就乖乖一個一個去數
-   解法 2：Brian Kernighan 演算法(針對解法 1 進行優化)
-   解法 3：DP
-   [338.Counting Bits](./LeetCode/Bit%20Manipulatio/338.counting-bits.cpp)
-   [338.Counting Bits by C](./LeetCode/Bit%20Manipulatio/338.counting-bits.c)

### 4.13. 401.Binary Watch

![upgit_20241122_1732261033.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241122_1732261033.png)

-   給你一個數字，他代表只能亮的燈數，阿你要返回所有可能
-   他給的燈數，代表說你要去計算【每個時間點，他轉成二進位後的 1 的各數】(就代表說，亮幾個燈)
-   使用雙重迴圈，外迴圈跑 1-12(表示小時)，內迴圈跑 1-60(表示分鐘) => 去遍歷所有時間可能性
-   將【小時】跟【分鐘】各自轉乘二進至，最後看總共用幾個 1
-   [401.Binary Watch](./LeetCode/Bit%20Manipulatio/401.binary-watch.cpp)
-   [401.Binary Watch by C](./LeetCode/Bit%20Manipulatio/401.binary-watch.c)

### 4.14. 461.Hamming Distance

-   漢明距離：兩個數值轉二進位後，两个数字在二进制表示中有多少位是不同的。

![upgit_20241122_1732261928.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241122_1732261928.png)

![upgit_20241122_1732261941.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241122_1732261941.png)

-   [461.Hamming Distance](./LeetCode/Bit%20Manipulatio/461.hamming-distance.cpp)

### 4.15. 476.Number Complement

-   10 轉反(但不+1)
-   模擬(這一題的難度是，你不知道他的最高位到哪裡，所以要先用遮罩做出來)。

![upgit_20250329_1743224601.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250329_1743224601.png)

-   [476.Number Complement](./LeetCode/Bit%20Manipulatio/476.number-complement.cpp)
-   [476.Number Complement by C](./LeetCode/Bit%20Manipulatio/476.number-complement.c)

### 4.16. 645.Set Mismatch

![upgit_20241122_1732265777.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241122_1732265777.png)

-   解法 1：紀錄(看你要用 vector 或 map 都可以)
-   解法 2：排序
    -   重複的數字：若 curr == prev，表示當前數字重複
    -   丟失的數字：若 curr - prev > 1，表示中間缺少一個數字，應記錄為丟失數字 prev + 1。
-   [645.Set Mismatch](./LeetCode/Bit%20Manipulatio/645.set-mismatch.cpp)

### 4.17. 693.Binary Number with Alternating Bits

![upgit_20250329_1743226315.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250329_1743226315.png)

-   轉二進制後查看是否 10 交替出現
-   解法 1：模擬
-   解法 2：位運算
-   [693.Binary Number with Alternating Bits](./LeetCode/Bit%20Manipulatio/693.binary-number-with-alternating-bits.cpp)
-   [693.Binary Number with Alternating Bits by C](./LeetCode/Bit%20Manipulatio/693.binary-number-with-alternating-bits.c)

### 4.18. 762.Prime Number of Set Bits in Binary Representation

-   題目給一個範圍，範圍中的每一個數值轉二進位後，去數 1 的個數。
-   返回【1 的個數為質數】的數量
-   [762.Prime Number of Set Bits in Binary Representation](./LeetCode/Bit%20Manipulatio/762.prime-number-of-set-bits-in-binary-representation.cpp)
-   [762.Prime Number of Set Bits in Binary Representation by C](./LeetCode/Bit%20Manipulatio/762.prime-number-of-set-bits-in-binary-representation.c)

### 4.19. 832.Flipping an Image

-   題目要求：左右翻轉，再 10 反轉
-   解法 1：就先按照題目要求，
-   解法 2：優化至一個迴圈
-   [832.Flipping an Image](./LeetCode/Bit%20Manipulatio/832.flipping-an-image.cpp)

### 4.20. 868.Binary Gap

-   給一個整數，把她轉二近制後，返回相鄰兩個 1 之間的最長距離。
-   取 1 的部分，可以用 AND1=>應該就是右移跟 AND1 的解法。

![upgit_20241126_1732600611.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241126_1732600611.png)

-   [868.Binary Gap](./LeetCode/Bit%20Manipulatio/868.binary-gap.cpp)

### 4.21. 29.Divide Two Integers

![upgit_20241214_1734160683.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241214_1734160683.png)

-   e04 有夠難...
-   [29.Divide Two Integers](./LeetCode/Bit%20Manipulatio/29.divide-two-integers.cpp)

## 5. array

### 5.1. 1480.Running Sum of 1d Array(教過)

-   [1480.Running Sum of 1d Array](./LeetCode/Array/1480.running-sum-of-1-d-array.cpp)
-   [1480.Running Sum of 1d Array](./LeetCode/Array/1480.running-sum-of-1-d-array.c)

### 5.2. 1365.How Many Numbers Are Smaller Than the Current Number

![upgit_20250228_1740751908.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/02/upgit_20250228_1740751908.png)

-   解法 1：暴力
-   解法 2：排序

-   [1365.How Many Numbers Are Smaller Than the Current Number](./LeetCode/Array/1365.how-many-numbers-are-smaller-than-the-current-number.cpp)
-   [1365.How Many Numbers Are Smaller Than the Current Number](./LeetCode/Array/1365.how-many-numbers-are-smaller-than-the-current-number.c)

### 5.3. 66.Plus One

![upgit_20241106_1730892149.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241106_1730892149.png)

-   [66.Plus One](./LeetCode/Array/66.plus-one.cpp)

### 5.4. 118.Pascal’s Triangle

-   題目是返回整個三角型。

```
​[1]
[1,1]
[1,2,1]
[1,3,3,1]
[1,4,6,4,1]​
step1：每一row的第0位跟第n位放1 => 更快點，直接全部塞1
step2：arr[i][i] = arr[i][i-1] + arr[i-1][i-1]
```

-   [118.Pascal’s Triangle](./LeetCode/Array/118.pascals-triangle.cpp)

### 5.5. 119.Pascal’s Triangle II

-   [119.Pascal’s Triangle II](./LeetCode/Array/119.pascals-triangle-ii.cpp)

### 5.6. 189.Rotate Array

-   解法 01：額外開一個數組
-   解法 02：陣列翻轉

    -   STEP01：反轉所有元素
    -   STEP02：反轉[0,kmodn−1]
    -   STEP03：反轉[kmodn,n−1]

-   [189.Rotate Array](./LeetCode/Array/189.rotate-array.cpp)

### 5.7. 48.Rotate Image

-   矩陣要【原地】向右 90 度

![upgit_20241227_1735277021.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241227_1735277021.png)

-   [48.Rotate Image](./LeetCode/Array/48.rotate-image.cpp)

### 5.8. 54.Spiral Matrix

-   順時針螺旋
-   [54.Spiral Matrix](./LeetCode/Array/54.spiral-matrix.cpp)

### 5.9. 59.Spiral Matrix II

-   [59.Spiral Matrix II](./LeetCode/Array/59.spiral-matrix-ii.cpp)

### 5.10. 73.Set Matrix Zeroes

![upgit_20250113_1736751307.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/01/upgit_20250113_1736751307.png)

-   [73.Set Matrix Zeroes](./LeetCode/Array/73.set-matrix-zeroes.cpp)

## 6. two pointer

### 6.1. 26.Remove Duplicates from Sorted Array

-   這題可以當考題

![upgit_20241105_1730803543.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241105_1730803543.png)

-   解法 1：
-   解法 2
    -   延伸 26，26 的題目是【去重複】，也可以理解為【保留 1 位】
    -   那如果今天是【保留 k 位】呢
    -   保留 k 位=>代表【前 k 個數值】可以保留
    -   對於後面的比較：跟左指針(第 k 位)進行比較，不同則保留(左指針給右指針)

![upgit_20241105_1730805429.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241105_1730805429.png)

-   [26.Remove Duplicates from Sorted Array](./LeetCode/Two%20Pointer/26.remove-duplicates-from-sorted-array.cpp)

### 6.2. 80.Remove Duplicates from Sorted Array II

-   [80.Remove Duplicates from Sorted Array II](./LeetCode/Two%20Pointer/80.remove-duplicates-from-sorted-array-ii.cpp)

### 6.3. 27.Remove Element

![upgit_20250309_1741523404.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250309_1741523404.png)

-   [27.Remove Element](./LeetCode/Array/27.remove-element.cpp)

### 6.4. 283.Move Zeroes

-   把 0 都移到後面(就是把非 0 都移到前面)
-   [283.Move Zeroes](./LeetCode/Two%20Pointer/283.move-zeroes.cpp)

### 6.5. 88.Merge Sorted Array

![upgit_20250309_1741525883.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250309_1741525883.png)

-   解法 1：額外開一個空間，兩兩比較，然後再把值丟到新的 arr。
-   解法 2：進行優化。在 num1 排就好啦~
-   [88.Merge Sorted Array](./LeetCode/Two%20Pointer/88.merge-sorted-array.cpp)
-   [88.Merge Sorted Array by C](./LeetCode/Two%20Pointer/88.merge-sorted-array.c)

### 6.6. 125.Valid Palindrome

-   整理字串+測驗回文
-   [125.Valid Palindrome](./LeetCode/Two%20Pointer/125.valid-palindrome.cpp)

### 6.7. 344.Reverse String(教過)

-   [344.Reverse String](./LeetCode/Two%20Pointer/344.reverse-string.cpp)
-   [344.Reverse String](./LeetCode/Two%20Pointer/344.reverse-string.c)

### 6.8. 345.Reverse String

-   set+雙指針
-   [345.Reverse String](./LeetCode/Two%20Pointer/345.reverse-vowels-of-a-string.cpp)

### 6.9. 392.Is Subsequence

-   字符串的一个子序列是原始字符串删除一些（也可以不删除）字符而不改变剩余字符相对位置形成的新字符串。（例如，"ace"是"abcde"的一个子序列，而"aec"不是）。
-   [392.Is Subsequence](./LeetCode/Two%20Pointer/392.is-subsequence.cpp)

### 6.10. 11.Container With Most Water

-   解法：雙指針
-   每次去紀錄指針之間的容量(逐一更新)。
-   指針短的一邊內縮

![upgit_20241207_1733553591.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241207_1733553591.png)

-   [11.Container With Most Water](./LeetCode/Two%20Pointer/11.container-with-most-water.cpp)

### 6.11. 28.Find the Index of the First Occurrence in a String(KMP 演算法)(超難)

-   解法 1：樸素比對
-   解法 2：KMP 演算法(真滴難離解)

![upgit_20241112_1731388553.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241112_1731388553.png)

![upgit_20241112_1731388451.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241112_1731388451.png)

-   [28.Find the Index of the First Occurrence in a String](./LeetCode/Two%20Pointer/28.find-the-index-of-the-first-occurrence-in-a-string.cpp)

## 7. sliding window

### 7.1. 219.Contains Duplicate II

-   返回布林
    -   true：`nums[i] == nums[j]`  且  `abs(i - j) <= k`
-   解法 1：用 map 紀錄
-   解法 2：

![upgit_20241110_1731235566.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241110_1731235566.png)

-   [219.Contains Duplicate II](./LeetCode/Sliding%20Window/219.contains-duplicate-ii.cpp)

### 7.2. 3.Longest Substring Without Repeating Characters

-   去計算【連續不重複字串】的長度。

![upgit_20241205_1733384520.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241205_1733384520.png)

-   [3.Longest Substring Without Repeating Characters](./LeetCode/Sliding%20Window/3.longest-substring-without-repeating-characters.cpp)

### 7.3. 6.Zigzag Conversion

-   [6.Zigzag Conversion](./LeetCode/Sliding%20Window/6.zigzag-conversion.cpp)

## 8. map

### 8.1. 205.Isomorphic Strings

-   他比較的是一個數量，所以要用 map 紀錄。
-   這一題要開兩個 map 做雙向映射。
-   map_A 的 key 為 s，value 為 t
-   map_B 的 key 為 t，value 為 s
-   [205.Isomorphic Strings](./LeetCode/Map/205.isomorphic-strings.cpp)

### 8.2. 290.Word Pattern

-   [290.Word Pattern](./LeetCode/Map/290.word-pattern.cpp)

### 8.3. 383.Ransom Note

-   使用 magazine 裡面的字串建構出 ransomNote
-   [383.Ransom Note](./LeetCode/Map/383.ransom-note.cpp)

### 8.4. 387.First Unique Character in a String

-   [387.First Unique Character in a String](./LeetCode/Map/387.first-unique-character-in-a-string.cpp)

### 8.5. 409.Longest Palindrome

![upgit_20241119_1732010555.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241119_1732010555.png)

-   [409.Longest Palindrome](./LeetCode/Map/409.longest-palindrome.cpp)

### 8.6. 49.Group Anagrams

-   依照字母同位詞進行分組

```
输入: strs = `["eat", "tea", "tan", "ate", "nat", "bat"]`
输出: [["bat"],["nat","tan"],["ate","eat","tea"]]
```

-   [49.Group Anagrams](./LeetCode/Map/49.group-anagrams.cpp)

### 8.7. 1.Two Sum

-   [1.Two Sum](./LeetCode/Map/1.two-sum.cpp)

### 8.8. 169.Majority Element

-   題目要找出最多的那個數值
-   解法 1：用 map 紀錄次數，返回最多的那個
-   解法 2：針對 map 進一步優化，在記錄 map 的時後，一併紀錄最多的次數
-   解法 3：題目描述  【more than `⌊n / 2⌋` times】，那我只要先做排序，然後找那個在最中間的數值。
-   [169.Majority Element](./LeetCode/Map/169.majority-element.cpp)

### 8.9. 287.Find the Duplicate Number

-   題目是要在長度(n+1)找範圍 1 到 n 中的一個重複整數。
-   不能修改數組
-   解法 1：用 map
-   解法 2 是用 linked 的方式

    -   [Floyd's Cycle Detection Algorithm (Floyd 判圈算法) 龜兔賽跑算法 (youtube.com)](https://www.youtube.com/watch?v=xS5eL9qkffA)
    -   ![upgit_20241108_1731040041.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241108_1731040041.png)

-   解法 3：二分+抽屜原理
    -   抽屉原理(Pigeonhole Principle)：如果有 `n + 1` 個數字在 `1` 到 `n` 的範圍內，那麼至少有一個數字是重複的。
    -   ![upgit_20241108_1731041451.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241108_1731041451.png)
-   [287.Find the Duplicate Number](./LeetCode/Map/287.find-the-duplicate-number.cpp)

### 8.10. 36.Valid Sudoku

-   檢查是否為合法數獨
-   去檢查 3 遍(row、col、box)
-   如何去映射 => `j/3 + (i/3)*3`

```plaintext
j/3：決定列屬於哪個 box 的位置
j=0,1,2⇒j/3=0（屬於 box 的第一列）。
j=3,4,5⇒j/3=1（屬於 box 的第二列）。
j=6,7,8⇒j/3=2（屬於 box 的第三列）。

(i/3)*3：決定行屬於哪個 box 的區域
i/3 的意思是用行座標來判斷該格子屬於 box 的第幾行（0, 1, 或 2）。
然後乘以 3，將行座標的影響轉換為 box 編號的基數：
i=0,1,2⇒(i/3)∗3=0（屬於第一行的 box）。
i=3,4,5⇒(i/3)∗3=3（屬於第二行的 box）。
i=6,7,8⇒(i/3)∗3=6（屬於第三行的 box）。
```

-   [36.Valid Sudoku](./LeetCode/Map/36.valid-sudoku.cpp)

### 8.11. 500.Keyboard Row

-   題目描述，返回可以使用在鍵盤同一行的字母打印出来的單字
-   [500.Keyboard Row](./LeetCode/Map/500.keyboard-row.cpp)

### 8.12. 4Sum II

-   題目要求為：`nums1[i]+nums2[j]+nums3[k]+nums4[l]==0`
-   那可以把它視為：`nums1[i]+nums2[j] = -nums3[k]-nums4[l]`
-   先用先用一個 map 紀錄 nums1[i]+nums2[j]
-   再用另一個 map 紀錄 nums3[k]+nums4[l]
-   然後兩者去比較

-   [454. 4Sum II](./LeetCode/Map/454.4-sum-ii.cpp)

### 8.13. Longest Consecutive Sequence

-   題目描述：找到未排序的整數陣列中 數字連續的最長序列（不要求序列元素在原陣列中連續）的長度。
-   [128. Longest Consecutive Sequence](./LeetCode/Map/128.longest-consecutive-sequence.cpp)

## 9. set

### 9.1. 217.Contains Duplicate

-   他要找【是否有重複】
-   [217.Contains Duplicate](./LeetCode/Set/217.contains-duplicate.cpp)

### 9.2. 202.Happy Number

-   快樂數定義：每一次將該數值替換為她每個位置的數字的平方和
-   判斷是否為快樂數=>要記錄
-   解法 1：用 set 紀錄
-   [202.Happy Number](./LeetCode/Set/202.happy-number.cpp)

### 9.3. 1684. Count the Number of Consistent Strings

-   解法 1：

    -   使用 array 或 map 去記錄 allowed 中的符號
    -   然後用 for 迴圈跑 words，去檢查是否由 allowed 組成

-   解法 02 將 allowed 既錄的方式，由 set 改為 用 bitwise 去儲存
-   解法 2 補充(位元操作)

![upgit_20250312_1741756869.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250312_1741756869.png)

-   [1684. Count the Number of Consistent Strings](./LeetCode/Set/1684.count-the-number-of-consistent-strings.cpp)
-   [1684. Count the Number of Consistent Strings by C](./LeetCode/Set/1684.count-the-number-of-consistent-strings.c)

### 9.4. 349. Intersection of Two Arrays

找出兩個陣列的「交集」，不考慮重複元素，也就是說只要元素有出現過，就放進結果。
只保留「唯一」的交集元素，結果中不會有重複數字
將 num1 放到 set 中
for 跑 num2，去檢查 map 中有沒有，有的話就放進 ans

-   [349. Intersection of Two Arrays](./LeetCode/Set/349.intersection-of-two-arrays.cpp)

### 9.5. 350. Intersection of Two Arrays II

找出兩個陣列的「交集」，但這次考慮元素出現的次數，如果某個數字在兩個陣列中都出現多次，就按照它的最小次數重複出現在結果中。
每個元素的出現次數，要跟兩個陣列中「最小的出現次數」相同。
結果中會有重複數字。
做法跟 349 依樣，但因為要考慮次數，改用 map

-   [350. Intersection of Two Arrays II](./LeetCode/Set/350.intersection-of-two-arrays-ii.cpp)

### 9.6. Find All Numbers Disappeared in an Array

-   [448.Find All Numbers Disappeared in an Array](./LeetCode/Set/448.find-all-numbers-disappeared-in-an-array.cpp)

## 10. Binary Search

-   模板

```
step1：會有3個東西
左指針、右指針、中指通(????
中指針是由左右指針位置平均
int left = 0, right = arr.size()-1;

step2：
要一值重複去計算中指針=>while
while(left<=right){
    int mid = left + (right - left) / 2;
}

step3：中指針就會有三種情況，是情況再去處理左右指針
if(arr[mid]==target) return mid
else if(arr[mid]<target) left = mid + 1;
else (arr[mid]>target) right = mid - 1;
```

### 10.1. 35.Search Insert Position

-   返回他的索引位置
-   可能就兩種解法：第一種是從頭往後找過去；要優化就二分
-   解法 1：由頭往後
-   解法 2：二分搜尋
-   [35.Search Insert Position](./LeetCode/Binary%20Search/35.search-insert-position.cpp)

### 10.2. 278.First Bad Version

-   他是要完成一個查找函數
-   实现一个函数来查找第一个错误的版本。你应该尽量减少对调用 API 的次数 => 要用二分法去實現
-   [278.First Bad Version](./LeetCode/Binary%20Search/278.first-bad-version.cpp)

## 11. stack

### 11.1. 20.Valid Parentheses

-   括弧配對的話，就想法要想清楚。
-   如果是碰到各種左括弧=>無腦 push 進去。
-   不是左括弧的話，那就是右括弧。(那要去想，甚麼樣的條件，可以 pop=>不如去想說，甚麼樣的條件是 false。)
-   [20.Valid Parentheses](./LeetCode/Stack/20.valid-parentheses.cpp)

### 11.2. 22.Generate Parentheses

-   可以直接從程式碼去看~
-   遞迴長相

```
          ""
         /   \
       "("   不合法 (右括號不能先出現)
      /   \
   "(("    "()"
  /   \   /   \
"(((" "(()" "()" "(())"
```

-   遞歸參數：
    -   n：括弧對數
    -   left：已經生成的左括號 ( 的數量。
    -   right：已經生成的右括號 ) 的數量。
    -   cur：當前已經生成的括號字串。
    -   res：存放所有合法的括號組合。
-   結束條件：當 left == 0 且 right == 0 時，表示所有的括號都用完了，當前的 cur 是合法的，將其加入結果集。
-   非法情況：當 left > right 時，直接返回。這是因為右括號 ) 已經多於左括號 (，此時無法形成合法的組合。
-   [22.Generate Parentheses](./LeetCode/Stack/22.generate-parentheses.cpp)

### 11.3. 225.Implement Stack using Queues

-   用兩個 queue 去實現 stack
-   只有 push 的時候要注意，當 push 兩個以上時，需要去把兩個 queue 交換(順序顛倒)
-   [225.Implement Stack using Queues](./LeetCode/Stack/225.implement-stack-using-queues.cpp)

### 11.4. 232.Implement Queue using Stacks

![upgit_20250121_1737456465.png|800px](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/01/upgit_20250121_1737456465.png)

-   用兩個 stack 去實現 queue
-   要注意的是，因為 stack 順序改成 queue 只能一次，所以 push 時就先不要動，在 pop 跟 peek 時候，再用檢查的方式，決定要不要做顛倒
-   [232.Implement Queue using Stacks](./LeetCode/Stack/232.implement-queue-using-stacks.cpp)

### 11.5. Next Greater Element I

-   [496. Next Greater Element I](./LeetCode/Stack/496.next-greater-element-i.cpp)

## 12. greedy

### 12.1. 13.Roman to Integer

-   小的在大的左邊：相減 => 可以想成加一個負號
-   小的在大的右邊：相加
-   [13.roman-to-integer.cpp](./LeetCode/Greedy/13.roman-to-integer.cpp)

### 12.2. 12.Integer to Roman

-   貪婪：盡量去用最大的數來表示
-   依開始是使用`map<int, string>，但不保證迭代順序`
-   使用 pair 的話，就已經固定順序了。
-   [12.Integer to Roman](./LeetCode/Greedy/12.integer-to-roman.cpp)

### 12.3. 55.Jump Game

![upgit_20250305_1741151035.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250305_1741151035.png)

-   如果某個作為 起跳點 的格子可以跳躍的距離是 3，那麼表示後面 3 個格子都可以作為 新的起跳點。
-   我們可以對每一個能作為 起跳點 的格子嘗試跳一次，並持續更新 能跳到的最遠距離。
-   如果在跳躍的過程中，可以一直跳到最後一個格子，那麼就代表成功抵達終點。
-   你只需要知道「我最遠能跳到哪」，所以一個變數 k 就夠了
-   [55.Jump Game](./LeetCode/Greedy/55.jump-game.cpp)

### 12.4. 45.Jump Game II

-   [45.Jump Game II](./LeetCode/Greedy/45.jump-game-ii.cpp)

### 12.5. Assign Cookies

-   因為我的目的是要，盡可能地讓小孩吃飽 => 先餵胃口小的
-   將 s、g 排序
-   [455. Assign Cookies](./LeetCode/Greedy/455.assign-cookies.cpp)

### 12.6. 605.Can Place Flowers

-   種花 0 跟 1，要交錯種
-   判斷的條件就是，【當前】【前一個】【後一個】都要為 0，才可以種花(1)
-   判斷：flowerbed[i-1], flowerbed[i], flowerbed[i+1]都要為 0
-   而為了判斷方便，可以在陣列頭尾，各加一個 0
-   [605. Can Place Flowers](./LeetCode/Greedy/605.can-place-flowers.cpp)

### 12.7. 860.Lemonade Change

-   [860. Lemonade Change](./LeetCode/Greedy/860.lemonade-change.cpp)

### 12.8. 1221.Split a String in Balanced Strings

-   [1221.Split a String in Balanced Strings](./LeetCode/Greedy/1221.split-a-string-in-balanced-strings.cpp)

### 12.9. 2027.Minimum Moves to Convert String

-   [2027.Minimum Moves to Convert String](./LeetCode/Greedy/2027.minimum-moves-to-convert-string.cpp)

### 12.10. 435.Non-overlapping Intervals

-   解題方式：按照「結束時間」排序
-   選擇最早結束的區間能讓後續的區間有更多空間可選擇，這樣我們能保留更多區間。
-   如果排序按照「起始時間」，可能會讓一些區間重疊更多次，導致要移除更多區間。
-   [435.Non-overlapping Intervals](./LeetCode/Greedy/435.non-overlapping-intervals.cpp)

### 12.11. 134.Gas Station

-   [134.Gas Station](./LeetCode/Greedy/134.gas-station.cpp)

### 12.12. Partition Labels

-   [763. Partition Labels](./LeetCode/Greedy/763.partition-labels.cpp)

## 13. dynamic-programming

### 13.1. 509.Fibonacci Number

-   [509.Fibonacci Number](./LeetCode/Dynamic%20Programming/509.fibonacci-number.cpp)

### 13.2. 70.Climbing Stairs

-   給階層數，一次只能走 1 或 2 步，求該階層有幾種走法。

![upgit_20241129_1732864640.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241129_1732864640.png)

-   [70.Climbing Stairs](./LeetCode/Dynamic%20Programming/70.climbing-stairs.cpp)

### 13.3. 53.Maximum Subarray(medium)

-   找出一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
-   解法 1：前缀和

![upgit_20250101_1735711113.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/01/upgit_20250101_1735711113.png)

-   解法 2：DP

![upgit_20250101_1735712121.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/01/upgit_20250101_1735712121.png)

-   [53.Maximum Subarray](./LeetCode/Dynamic%20Programming/53.maximum-subarray.cpp)

### 13.4. 62.Unique Paths(medium)

-   法 1：排列組合數學計算

![upgit_20250107_1736228230.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/01/upgit_20250107_1736228230.png)

-   解法 2：DP
-   針對解法 2：二維 DP 壓縮成一為 DP

![Image](https://media.discordapp.net/attachments/1286741860538122281/1326360050201006171/image.jpg?ex=677f248e&is=677dd30e&hm=c9caebc178a1839d0393b7f887b380909e6c92020a880c468ed955ffd3beac63&=&format=webp&width=810&height=229)

-   [62.Unique Paths](./LeetCode/Dynamic%20Programming/62.unique-paths.cpp)

### 13.5. 63.Unique Paths II

-   她是基於 62，但中間多了障礙物
-   [63.Unique Paths II](./LeetCode/Dynamic%20Programming/63.unique-paths-ii.cpp)

### 13.6. 64.Minimum Path Sum

-   他一樣是要從左上到右下
-   解法：dp
-   [64.Minimum Path Sum](./LeetCode/Dynamic%20Programming/64.minimum-path-sum.cpp)

### 13.7. 121.Best Time to Buy and Sell Stock

-   你只能買入一次並賣出一次，求最大的利潤是多少。
-   解法 1：用爆力解方式：定一個點(for loop)，然後另一個 for 去跑後面的，不斷紀錄最小值。
-   解法 2：DP

![upgit_20241106_1730896937.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241106_1730896937.png)

-   [121.Best Time to Buy and Sell Stock](./LeetCode/Dynamic%20Programming/121.best-time-to-buy-and-sell-stock.cpp)

### 13.8. 122.Best Time to Buy and Sell Stock II

-   你可以無限次買賣股票（只要你先買了才能賣），求能夠獲得的最大總利潤。

-   [122.Best Time to Buy and Sell Stock II](./LeetCode/Dynamic%20Programming/122.best-time-to-buy-and-sell-stock-ii.cpp)

## 14. DFS

-   模板

```cpp
void DFS(TreeNode* root, vector<int>& ans){
        // 返回條件
        if(root==nullptr) return;
        // 往左走
        DFS(root->left, ans);
        // 到最左邊之後，慢慢蝶帶回來
        ans.push_back(root->val);
        // 往右走
        DFS(root->right, ans);
    }
```

### 14.1. 100.Same Tree

-   [100. Same Tree](./LeetCode/DFS/100.same-tree.cpp)

### 14.2. Symmetric Tree

-   [101. Symmetric Tree](./LeetCode/DFS/101.symmetric-tree.cpp)

### 14.3. Maximum Depth of Binary Tree

-   [104. Maximum Depth of Binary Tree](./LeetCode/DFS/104.maximum-depth-of-binary-tree.cpp)

### 14.4. Balanced Binary Tree

-   核心：樹的長度 = max(左子樹長度, 右子樹長度) + 1;
-   有兩種解法：由頭->尾巴，或是由尾巴->頭
-   [110. Balanced Binary Tree](./LeetCode/DFS/110.balanced-binary-tree.cpp)

### 14.5. Minimum Depth of Binary Tree

-   [111. Minimum Depth of Binary Tree](./LeetCode/DFS/111.minimum-depth-of-binary-tree.cpp)

### 14.6. Path Sum

-   [112. Path Sum](./LeetCode/DFS/112.path-sum.cpp)

### 14.7. 94.Binary Tree Inorder Traversal

-   中序

```cpp
// inorder traversal：中序遍歷 => 左子樹 → 根節點 → 右子樹
//     1
//    / \
//   2   3
//  / \
// 4   5
// 使用中序遍历的結果會是：4 → 2 → 5 → 1 → 3
```

-   [94.Binary Tree Inorder Traversal](./LeetCode/DFS/94.binary-tree-inorder-traversal.cpp)

### 14.8. Binary Tree Preorder Traversal

-   前序
-   [144. Binary Tree Preorder Traversal](./LeetCode/DFS/144.binary-tree-preorder-traversal.cpp)

### 14.9. Binary Tree Postorder Traversal

-   後序
-   [145. Binary Tree Postorder Traversal](./LeetCode/DFS/145.binary-tree-postorder-traversal.cpp)

### 14.10. Invert Binary Tree

-   [226. Invert Binary Tree](./LeetCode/DFS/226.invert-binary-tree.cpp)

### 14.11. Binary Tree Paths

-   [257. Binary Tree Paths](./LeetCode/DFS/257.binary-tree-paths.cpp)

### 14.12. Recover Binary Search Tree

-   [99. Recover Binary Search Tree](./LeetCode/DFS/99.recover-binary-search-tree.cpp)

### 14.13. Flatten Binary Tree to Linked List

-   [114. Flatten Binary Tree to Linked List](./LeetCode/DFS/114.flatten-binary-tree-to-linked-list.cpp)

### 14.14. Sum Root to Leaf Numbers

-   [129. Sum Root to Leaf Numbers](./LeetCode/DFS/129.sum-root-to-leaf-numbers.cpp)

### 14.15. Binary Tree Right Side View

-   [199. Binary Tree Right Side View](./LeetCode/DFS/199.binary-tree-right-side-view.cpp)

### 14.16. Kth Smallest Element in a BST

-   [230. Kth Smallest Element in a BST](./LeetCode/DFS/230.kth-smallest-element-in-a-bst.cpp)

### 14.17. Lowest Common Ancestor of a Binary Search Tree

-   尋找共同祖先
-   [235. Lowest Common Ancestor of a Binary Search Tree](./LeetCode/DFS/235.lowest-common-ancestor-of-a-binary-search-tree.cpp)

### 14.18. 530.Minimum Absolute Difference in BST

-   [530. Minimum Absolute Difference in BST](./LeetCode/DFS/530.minimum-absolute-difference-in-BST.cpp)

## 15. BFS

### 15.1. Populating Next Right Pointers in Each Node

-   是完美二元數
-   [116. Populating Next Right Pointers in Each Node](./LeetCode/BFS/116.populating-next-right-pointers-in-each-node.cpp)

### 15.2. Populating Next Right Pointers in Each Node II

-   不是完美二元數
-   [117. Populating Next Right Pointers in Each Node II](./LeetCode/BFS/117.populating-next-right-pointers-in-each-node-ii.cpp)

### 15.3. 404.Sum of Left Leaves

-   [404. Sum of Left Leaves](./LeetCode/BFS/404.sum-of-left-leaves.cpp)

### 15.4. 102.Binary Tree Level Order Traversal

-   [102. Binary Tree Level Order Traversal](./LeetCode/BFS/102.binary-tree-level-order-traversal.cpp)

### 15.5. Binary Tree Level Order Traversal II

-   就最後 ans 顛倒而已
-   [107. Binary Tree Level Order Traversal II](./LeetCode/BFS/107.binary-tree-level-order-traversal-ii.cpp)

### 15.6. 103.Binary Tree Zigzag Level Order Traversal

-   [103. Binary Tree Zigzag Level Order Traversal](./LeetCode/BFS/103.binary-tree-zigzag-level-order-traversal.cpp)

## 16. Backtracking

-   模板

```c
void backtracking(参数) {
    if (终止条件) {
        存放结果;
        return;
    }

    for (选择：本层集合中元素（树中节点孩子的数量就是集合的大小）) {
        处理节点;
        backtracking(路径，选择列表); // 递归
        回溯，撤销处理结果
    }
}
```

### 16.1. 17.Letter Combinations of a Phone Number

![upgit_20241207_1733561921.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241207_1733561921.png)

-   [17.Letter Combinations of a Phone Number](./LeetCode/Backtracking/17.letter-combinations-of-a-phone-number.cpp)

### 16.2. 78.Subsets

-   [78.Subsets](./LeetCode/Backtracking/78.subsets.cpp)

### 16.3. 39.Combination Sum

-   返回各種組合(元素可重複)

![upgit_20241220_1734664775.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241220_1734664775.png)

-   [39.combination-sum.cpp](./LeetCode/Backtracking/39.combination-sum.cpp)

### 16.4. 40.Combination Sum II

-   根據 39 題，但不能重複
-   [40.Combination Sum II](./LeetCode/Backtracking/40.combination-sum-ii.cpp)

### 16.5. 46.Permutations

-   给定一个不含重复数字的数组 nums ，返回其所有可能的全排列。
    ![upgit_20241225_1735098588.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241225_1735098588.png)

-   [46.Permutations](./LeetCode/Backtracking/46.permutations.cpp)

### 16.6. 47.Permutations II

-   给定一个可包含重复数字的序列  nums ，按任意顺序返回所有不重复的全排列。

![upgit_20241226_1735193561.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241226_1735193561.png)

-   [47.Permutations II](./LeetCode/Backtracking/47.permutations-ii.cpp)

### 16.7. Path Sum II

-   [113. Path Sum II](./LeetCode/Backtracking/113.path-sum-ii.cpp)

## 17. linked-list

### 17.1. 2.Add Two Numbers

-   節點上面做加總

![upgit_20241204_1733301476.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241204_1733301476.png)

-   [2.Add Two Numbers](./LeetCode/Linked%20List/2.add-two-numbers.cpp)

### 17.2. 21.Merge Two Sorted Lists

![upgit_20250428_1745852897.png|1030x797](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/04/upgit_20250428_1745852897.png)

-   [21.Merge Two Sorted Lists](./LeetCode/Linked%20List/21.merge-two-sorted-lists.cpp)
-   [21.Merge Two Sorted Lists in C](./LeetCode/Linked%20List/21.merge-two-sorted-lists.c)

### 17.3. 24.Swap Nodes in Pairs

-   解法 1：遞迴

![upgit_20241210_1733814466.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241210_1733814466.png)

-   [24.Swap Nodes in Pairs](./LeetCode/Linked%20List/24.swap-nodes-in-pairs.cpp)

-   解法 2：迴圈
    -   [24.Swap Nodes in Pairs ic C](./LeetCode/Linked%20List/24.swap-nodes-in-pairs.c)

### 17.4. 83.Remove Duplicates from Sorted List

-   要刪除某格節點，就是將他的【上一個】直接指向下一個(沒人指=消失)
-   [83.Remove Duplicates from Sorted List](./LeetCode/Linked%20List/83.remove-duplicates-from-sorted-list.cpp)
-   [83.Remove Duplicates from Sorted List in C](./LeetCode/Linked%20List/83.remove-duplicates-from-sorted-list.c)

![upgit_20250429_1745911407.png|1030x737](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/04/upgit_20250429_1745911407.png)

### 17.5. 82.Remove Duplicates from Sorted List II

-   [82.Remove Duplicates from Sorted List II in C](./LeetCode/Linked%20List/82.remove-duplicates-from-sorted-list-ii.c)

### 17.6. 141.Linked List Cycle

![upgit_20250503_1746266566.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/05/upgit_20250503_1746266566.png)

-   解法：快慢指針：快指針走兩步，慢指針走一步，如果有成環，快慢指針有一天一定會相遇。
-   [141.Linked List Cycle](./LeetCode/Linked%20List/141.linked-list-cycle.cpp)
-   [141.Linked List Cycle in C](./LeetCode/Linked%20List/141.linked-list-cycle.c)

### 17.7. 142.Linked List Cycle II

-   做兩次的快慢指針相遇
-   第一次相遇：確認有沒有環
    -   slow 每次走一步；fast 每次走兩步。
    -   如果沒有環：快指針會最終走到 NULL
    -   如果有環：快指針會因為它走得比較快，最終會在環內追上慢指針，這時兩者會「第一次相遇」。
-   第二次相遇：找到環的入口
    -   把 fast 指針放回到鏈表的頭（head）。
    -   slow 依然留在相遇的那個點。
    -   然後讓 fast 和 slow 每次都走一步。
-   [142.Linked List Cycle II in C](./LeetCode/Linked%20List/142.linked-list-cycle-ii.c)

### 17.8. 19.Remove Nth Node From End of List

-   [19.Remove Nth Node From End of List](./LeetCode/Linked%20List/19.remove-nth-node-from-end-of-list.cpp)

### 17.9. 160.Intersection of Two Linked Lists

![upgit_20241212_1733970327.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241212_1733970327.png)

-   [160.Intersection of Two Linked Lists](./LeetCode/Linked%20List/160.intersection-of-two-linked-lists.cpp)
-   [160.Intersection of Two Linked Lists in C](./LeetCode/Linked%20List/160.intersection-of-two-linked-lists.c)

### 17.10. 203.Remove Linked List Elements

-   刪除節點

![upgit_20241215_1734241405.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241215_1734241405.png)

-   [203.Remove Linked List Elements](./LeetCode/Linked%20List/203.remove-linked-list-elements.cpp)
-   [203.Remove Linked List Elements in C](./LeetCode/Linked%20List/203.remove-linked-list-elements.c)

### 17.11. 206.Reverse Linked List

-   [206.Reverse Linked List](./LeetCode/Linked%20List/206.reverse-linked-list.cpp)
-   [206.Reverse Linked List in C](./LeetCode/Linked%20List/206.reverse-linked-list.c)

![upgit_20250503_1746258876.png|1030x553](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/05/upgit_20250503_1746258876.png)

### 17.12. 876.Middle of the Linked List

-   [876.Middle of the Linked List](./LeetCode/Linked%20List/876.middle-of-the-linked-list.cpp)
-   [876.Middle of the Linked List in C](./LeetCode/Linked%20List/876.middle-of-the-linked-list.c)

### 17.13. 234.Palindrome Linked List

-   用到
    -   876 檢查中間
    -   206 反轉
-   [234.Palindrome Linked List](./LeetCode/Linked%20List/234.palindrome-linked-list.cpp)
-   [234.Palindrome Linked List in C](./LeetCode/Linked%20List/234.palindrome-linked-list.c)

### 17.14. 86.Partition List

-   所有小于  `x`  的节点都出现在   大于或等于  `x`  的节点之前。

```
head = [1,4,3,2,5,2], x = 3
所以3後面的兩個2，要移到3前面
4跟5不用動
```

-   建立兩個指標 small_dummy 跟 big_dummy，去把原資料拆開。
-   [86.Partition List](./LeetCode/Linked%20List/86.partition-list.cpp)

### 17.15. 1290.Convert Binary Number in a Linked List to Integer

```
head
1 -> 0 -> 1 -> 1
宣告 ans = 0
讀到1 => (ans*2)加讀到的值 = 0*2 + 1 = 1
讀到0 => (ans*2)加讀到的值 = 1*2 + 0 = 2
讀到1 => (ans*2)加讀到的值 = 2*2 + 1 = 5
讀到1 => (ans*2)加讀到的值 = 5*2 + 1 = 11
```

-   [1290.Convert Binary Number in a Linked List to Integer in C](./LeetCode/Linked%20List/1290.convert-binary-number-in-a-linked-list-to-integer.c)

### 17.16. 237.Delete Node in a Linked List

-   [237. Delete Node in a Linked List in C](./LeetCode/Linked%20List/237.delete-node-in-a-linked-list.c)

## 18. 島嶼問題系列

### 18.1. Island Perimeter

-   計算島嶼的周長
-   [463. Island Perimeter](./LeetCode/Island/463.island-perimeter.cpp)

### 18.2. Number of Islands

-   計算島嶼數量
-   [200. Number of Islands](./LeetCode/Island/200.number-of-islands.cpp)

### 18.3. Max Area of Island

-   找除最大島嶼的面積
-   [695. Max Area of Island](./LeetCode/Island/695.max-area-of-island.cpp)
