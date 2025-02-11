# Leetcode

## string

### 1.1. 412.Fizz Buzz

-   給定一個 n，for 跑 1-n，每一個數值依據規定轉換 Fizz Buzz
-   [412.Fizz Buzz.cpp](./LeetCode/Strnig/412.fizz-buzz.cpp)

### 14.Longest Common Prefix

-   每次都跟第一個去比較
-   [14.Longest Common Prefix](./LeetCode/Strnig/14.longest-common-prefix.cpp)

### 58.Length of Last Word

![upgit_20241112_1731409811.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241112_1731409811.png)

-   返回最後一個字的長度(不可以用套件)
-   [58.Length of Last Word](./LeetCode/Strnig/58.length-of-last-word.cpp)

### 415.Add Strings

-   用字串模擬加法
-   [415.Add Strings](./LeetCode/Strnig/415.add-strings.cpp)

### 38.Count and Say(medium)

-   行程长度编码（Run-Length Encoding, RLE）是一种无损压缩算法，用于表示连续重复的数据。它通过记录数据中连续相同元素的个数和元素本身，来压缩原始数据的大小。

![upgit_20241215_1734239728.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241215_1734239728.png)

-   [38.Count and Say](./LeetCode/Strnig/38.count-and-say.cpp)

### 520.Detect Capital

-   去檢查大寫字母的使用方式
    -   全部都大寫
    -   第一個字大寫
    -   全部都小寫
-   [520.Detect Capital](./LeetCode/Strnig/520.detect-capital.cpp)

## sort

### 242.Valid Anagram

-   Anagram：同樣的數量字母，去做不同排列
-   [242.Valid Anagram](./LeetCode/Sort/242.valid-anagram.cpp)

## math

### 9.Palindrome Number

-   檢查是否為回文數
-   解法 1：用雙指針去檢查。
-   [9.Palindrome Number](./LeetCode/Sort/9.palindrome-number.cpp)

### 171.Excel Sheet Column Number

-   [171.Excel Sheet Column Number](./LeetCode/Math/171.excel-sheet-column-number.cpp)

### 168.Excel Sheet Column Title

![upgit_20241112_1731413754.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241112_1731413754.png)

-   10 進制轉 26 進制
-   [168.Excel Sheet Column Title](./LeetCode/Math/168.excel-sheet-column-title.cpp)

## Bit Manipulatio

### 268.Missing Number

![upgit_20241110_1731240936.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241110_1731240936.png)

-   [268.Missing Number](./LeetCode/Bit%20Manipulatio/268.missing-number.cpp)

### 136.Single Number

-   只有一個數出現 1 次，其他都出現 2 次。
-   阿...這一題他是要找唯一一個的時候，有很多種解法拉(map、排序...)
-   解法 1：排序
-   解法 2：map
-   解法 3：XOR
-   [136.Single Number](./LeetCode/Bit%20Manipulatio/136.single-number.cpp)

### 137.Single Number II

-   只有一個數出現 1 次，其他都出現 3 次。
-   解法 1：用 map 紀錄次數。
-   解法 2：用陣列紀錄：因為她有說數值範圍到 2^32，

![upgit_20241108_1731067383.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241108_1731067383.png)

-   [137.Single Number II](./LeetCode/Bit%20Manipulatio/137.single-number-ii.cpp)

### 260.Single Number III

-   兩個數出現 1 次，其他都出現 2 次。
-   [260.Single Number III](./LeetCode/Bit%20Manipulatio/260.single-number-iii.cpp)

### 67.Add Binary

-   [67.Add Binary](./LeetCode/Bit%20Manipulatio/67.add-binary.cpp)

### 190.Reverse Bits

![upgit_20241120_1732093818.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241120_1732093818.png)

-   [190.Reverse Bits](./LeetCode/Bit%20Manipulatio/190.reverse-bits.cpp)

### 191.Number of 1 Bits

-   先轉乘二進位，在計算幾個 1
-   [191.Number of 1 Bits](./LeetCode/Bit%20Manipulatio/191.number-of-1-bits.cpp)

### 231.Power of Two

-   解法 1：用乘法的方式
-   解法 2：用除法的方式
-   解法 3：利用 n&(-n)取得最低位元 1，再去 XOR 檢查

![upgit_20241121_1732193850.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241121_1732193850.png)

-   [231.Power of Two](./LeetCode/Bit%20Manipulatio/231.power-of-two.cpp)

### 389.Find the Difference

-   [389.Find the Difference](./LeetCode/Bit%20Manipulatio/389.find-the-difference.cpp)

### 338.Counting Bits

-   計算範圍內，每個數(二進位)1 的數量。
-   解法 1：就乖乖一個一個去數
-   解法 2：Brian Kernighan 演算法(針對解法 1 進行優化)

![upgit_20241121_1732191249.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241121_1732191249.png)

-   解法 3：DP

![upgit_20241121_1732192960.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241121_1732192960.png)

-   [338.Counting Bits](./LeetCode/Bit%20Manipulatio/338.counting-bits.cpp)

### 401.Binary Watch

![upgit_20241122_1732261033.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241122_1732261033.png)

-   給你一個數字，他代表只能亮的燈數，阿你要返回所有可能
-   他給的燈數，代表說你要去計算【每個時間點，他轉成二進位後的 1 的各數】(就代表說，亮幾個燈)
-   [401.Binary Watch](./LeetCode/Bit%20Manipulatio/401.binary-watch.cpp)

### 461.Hamming Distance

-   漢明距離：兩個數值轉二進位後，两个数字在二进制表示中有多少位是不同的。

![upgit_20241122_1732261928.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241122_1732261928.png)

![upgit_20241122_1732261941.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241122_1732261941.png)

-   [461.Hamming Distance](./LeetCode/Bit%20Manipulatio/461.hamming-distance.cpp)

### 476.Number Complement

-   10 轉反(但不+1)
-   解法 1：模擬(這一題的難度是，你不知道他的最高位到哪裡，所以要先用遮罩做出來)。

![upgit_20241122_1732264090.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241122_1732264090.png)

-   [476.Number Complement](./LeetCode/Bit%20Manipulatio/476.number-complement.cpp)

### 645.Set Mismatch

![upgit_20241122_1732265777.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241122_1732265777.png)

-   解法 1：紀錄(看你要用 vector 或 map 都可以)
-   解法 2：排序
    -   重複的數字：若 curr == prev，表示當前數字重複
    -   丟失的數字：若 curr - prev > 1，表示中間缺少一個數字，應記錄為丟失數字 prev + 1。
-   [645.Set Mismatch](./LeetCode/Bit%20Manipulatio/645.set-mismatch.cpp)

### 693.Binary Number with Alternating Bits

-   轉二進制後查看是否 10 交替出現
-   解法 1：模擬
-   解法 2：位運算
-   [693.Binary Number with Alternating Bits](./LeetCode/Bit%20Manipulatio/693.binary-number-with-alternating-bits.cpp)

### 762.Prime Number of Set Bits in Binary Representation

-   題目給一個範圍，範圍中的每一個數值轉二進位後，去數 1 的個數。
-   返回【1 的個數為質數】的數量
-   [762.Prime Number of Set Bits in Binary Representation](./LeetCode/Bit%20Manipulatio/762.prime-number-of-set-bits-in-binary-representation.cpp)

### 832.Flipping an Image

-   題目要求：左右翻轉，再 10 反轉
-   解法 1：就先按照題目要求，
-   解法 2：優化至一個迴圈
-   [832.Flipping an Image](./LeetCode/Bit%20Manipulatio/832.flipping-an-image.cpp)

### 868.Binary Gap

-   給一個整數，把她轉二近制後，返回相鄰兩個 1 之間的最長距離。
-   取 1 的部分，可以用 AND1=>應該就是右移跟 AND1 的解法。

![upgit_20241126_1732600611.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241126_1732600611.png)

-   [868.Binary Gap](./LeetCode/Bit%20Manipulatio/868.binary-gap.cpp)

### 29.Divide Two Integers

![upgit_20241214_1734160683.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241214_1734160683.png)

-   e04 有夠難...
-   [29.Divide Two Integers](./LeetCode/Bit%20Manipulatio/29.divide-two-integers.cpp)

## array

### 66.Plus One

![upgit_20241106_1730892149.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241106_1730892149.png)

-   [66.Plus One](./LeetCode/Array/66.plus-one.cpp)

### 118.Pascal’s Triangle

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

### 119.Pascal’s Triangle II

-   [119.Pascal’s Triangle II](./LeetCode/Array/119.pascals-triangle-ii.cpp)

### 48.Rotate Image

-   矩陣要【原地】向右 90 度

![upgit_20241227_1735277021.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241227_1735277021.png)

-   [48.Rotate Image](./LeetCode/Array/48.rotate-image.cpp)

### 54.Spiral Matrix

-   順時針螺旋
-   [54.Spiral Matrix](./LeetCode/Array/54.spiral-matrix.cpp)

### 59.Spiral Matrix II

-   [59.Spiral Matrix II](./LeetCode/Array/59.spiral-matrix-ii.cpp)

### 73.Set Matrix Zeroes

![upgit_20250113_1736751307.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/01/upgit_20250113_1736751307.png)

-   [73.Set Matrix Zeroes](./LeetCode/Array/73.set-matrix-zeroes.cpp)

## two pointer

### 26.Remove Duplicates from Sorted Array

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

### 80.Remove Duplicates from Sorted Array II

-   [80.Remove Duplicates from Sorted Array II](./LeetCode/Two%20Pointer/80.remove-duplicates-from-sorted-array-ii.cpp)

### 27.Remove Element

-   [27.Remove Element](./LeetCode/Array/27.remove-element.cpp)

### 283.Move Zeroes

-   把 0 都移到後面(就是把非 0 都移到前面)
-   [283.Move Zeroes](./LeetCode/Two%20Pointer/283.move-zeroes.cpp)

### 88.Merge Sorted Array

-   解法 1：額外開一個空間，兩兩比較，然後再把值丟到新的 arr。

![upgit_20241106_1730893985.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241106_1730893985.png)

-   解法 2：進行優化。在 num1 排就好啦~

![upgit_20241106_1730894582.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241106_1730894582.png)

-   [88.Merge Sorted Array](./LeetCode/Two%20Pointer/88.merge-sorted-array.cpp)

### 125.Valid Palindrome

-   整理字串+測驗回文
-   [125.Valid Palindrome](./LeetCode/Two%20Pointer/125.valid-palindrome.cpp)

### 344.Reverse String

-   [344.Reverse String](./LeetCode/Two%20Pointer/344.reverse-string.cpp)

### 345.Reverse String

-   set+雙指針
-   [345.Reverse String](./LeetCode/Two%20Pointer/345.reverse-vowels-of-a-string.cpp)

### 392.Is Subsequence

-   字符串的一个子序列是原始字符串删除一些（也可以不删除）字符而不改变剩余字符相对位置形成的新字符串。（例如，"ace"是"abcde"的一个子序列，而"aec"不是）。
-   [392.Is Subsequence](./LeetCode/Two%20Pointer/392.is-subsequence.cpp)

### 11.Container With Most Water

-   解法：雙指針
-   每次去紀錄指針之間的容量(逐一更新)。
-   指針短的一邊內縮

![upgit_20241207_1733553591.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241207_1733553591.png)

-   [11.Container With Most Water](./LeetCode/Two%20Pointer/11.container-with-most-water.cpp)

### 28.Find the Index of the First Occurrence in a String(KMP 演算法)(超難)

-   解法 1：樸素比對
-   解法 2：KMP 演算法(真滴難離解)

![upgit_20241112_1731388553.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241112_1731388553.png)

![upgit_20241112_1731388451.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241112_1731388451.png)

-   [28.Find the Index of the First Occurrence in a String](./LeetCode/Two%20Pointer/28.find-the-index-of-the-first-occurrence-in-a-string.cpp)

## sliding window

### 219.Contains Duplicate II

-   返回布林
    -   true：`nums[i] == nums[j]`  且  `abs(i - j) <= k`
-   解法 1：用 map 紀錄
-   解法 2：

![upgit_20241110_1731235566.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241110_1731235566.png)

-   [219.Contains Duplicate II](./LeetCode/Sliding%20Window/219.contains-duplicate-ii.cpp)

### 3.Longest Substring Without Repeating Characters

-   去計算【連續不重複字串】的長度。

![upgit_20241205_1733384520.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241205_1733384520.png)

-   [3.Longest Substring Without Repeating Characters](./LeetCode/Sliding%20Window/3.longest-substring-without-repeating-characters.cpp)

### 6.Zigzag Conversion

-   [6.Zigzag Conversion](./LeetCode/Sliding%20Window/6.zigzag-conversion.cpp)

## map

### 205.Isomorphic Strings

-   他比較的是一個數量，所以要用 map 紀錄。
-   這一題要開兩個 map 做雙向映射。
-   map_A 的 key 為 s，value 為 t
-   map_B 的 key 為 t，value 為 s
-   [205.Isomorphic Strings](./LeetCode/Map/205.isomorphic-strings.cpp)

### 290.Word Pattern

-   [290.Word Pattern](./LeetCode/Map/290.word-pattern.cpp)

### 383.Ransom Note

-   使用 magazine 裡面的字串建構出 ransomNote
-   [383.Ransom Note](./LeetCode/Map/383.ransom-note.cpp)

### 387.First Unique Character in a String

-   [387.First Unique Character in a String](./LeetCode/Map/387.first-unique-character-in-a-string.cpp)

### 409.Longest Palindrome

![upgit_20241119_1732010555.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241119_1732010555.png)

-   [409.Longest Palindrome](./LeetCode/Map/409.longest-palindrome.cpp)

### 49.Group Anagrams

-   依照字母同位詞進行分組

```
输入: strs = `["eat", "tea", "tan", "ate", "nat", "bat"]`
输出: [["bat"],["nat","tan"],["ate","eat","tea"]]
```

-   [49.Group Anagrams](./LeetCode/Map/49.group-anagrams.cpp)

### 1.Two Sum

-   [1.Two Sum](./LeetCode/Map/1.two-sum.cpp)

### 169.Majority Element

-   題目要找出最多的那個數值
-   解法 1：用 map 紀錄次數，返回最多的那個
-   解法 2：針對 map 進一步優化，在記錄 map 的時後，一併紀錄最多的次數
-   解法 3：題目描述  【more than `⌊n / 2⌋` times】，那我只要先做排序，然後找那個在最中間的數值。
-   [169.Majority Element](./LeetCode/Map/169.majority-element.cpp)

### 287.Find the Duplicate Number

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

### 1.1. 36.Valid Sudoku

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

### set

### 2.1. 217.Contains Duplicate

-   他要找【是否有重複】
-   [217.Contains Duplicate](./LeetCode/Set/217.contains-duplicate.cpp)

### 2.1. 202.Happy Number

-   快樂數定義：每一次將該數值替換為她每個位置的數字的平方和
-   判斷是否為快樂數=>要記錄
-   解法 1：用 set 紀錄
-   [202.Happy Number](./LeetCode/Set/202.happy-number.cpp)

## Binary Search

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

### 35.Search Insert Position

-   返回他的索引位置
-   可能就兩種解法：第一種是從頭往後找過去；要優化就二分
-   解法 1：由頭往後
-   解法 2：二分搜尋
-   [35.Search Insert Position](./LeetCode/Binary%20Search/35.search-insert-position.cpp)

### 278.First Bad Version

-   他是要完成一個查找函數
-   实现一个函数来查找第一个错误的版本。你应该尽量减少对调用 API 的次数 => 要用二分法去實現
-   [278.First Bad Version](./LeetCode/Binary%20Search/278.first-bad-version.cpp)

## stack

### 20.Valid Parentheses

-   括弧配對的話，就想法要想清楚。
-   如果是碰到各種左括弧=>無腦 push 進去。
-   不是左括弧的話，那就是右括弧。(那要去想，甚麼樣的條件，可以 pop=>不如去想說，甚麼樣的條件是 false。)
-   [20.Valid Parentheses](./LeetCode/Stack/20.valid-parentheses.cpp)

### 22.Generate Parentheses

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

### 225.Implement Stack using Queues

-   用兩個 queue 去實現 stack
-   只有 push 的時候要注意，當 push 兩個以上時，需要去把兩個 queue 交換(順序顛倒)
-   [225.Implement Stack using Queues](./LeetCode/Stack/225.implement-stack-using-queues.cpp)

### 232.Implement Queue using Stacks

![upgit_20250121_1737456465.png|800px](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/01/upgit_20250121_1737456465.png)

-   用兩個 stack 去實現 queue
-   要注意的是，因為 stack 順序改成 queue 只能一次，所以 push 時就先不要動，在 pop 跟 peek 時候，再用檢查的方式，決定要不要做顛倒
-   [232.Implement Queue using Stacks](./LeetCode/Stack/232.implement-queue-using-stacks.cpp)

## greedy

### 13.Roman to Integer

-   小的在大的左邊：相減 => 可以想成加一個負號
-   小的在大的右邊：相加
-   [13.roman-to-integer.cpp](./LeetCode/Greedy/13.roman-to-integer.cpp)

### 12.Integer to Roman

-   貪婪：盡量去用最大的數來表示
-   依開始是使用`map<int, string>，但不保證迭代順序`
-   使用 pair 的話，就已經固定順序了。
-   [12.Integer to Roman](./LeetCode/Greedy/12.integer-to-roman.cpp)

## dynamic-programming

### 70.Climbing Stairs

-   給階層數，一次只能走 1 或 2 步，求該階層有幾種走法。

![upgit_20241129_1732864640.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241129_1732864640.png)

-   [70.Climbing Stairs](./LeetCode/Dynamic%20Programming/70.climbing-stairs.cpp)

### 53.Maximum Subarray(medium)

-   找出一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
-   解法 1：前缀和

![upgit_20250101_1735711113.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/01/upgit_20250101_1735711113.png)

-   解法 2：DP

![upgit_20250101_1735712121.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/01/upgit_20250101_1735712121.png)

-   [53.Maximum Subarray](./LeetCode/Dynamic%20Programming/53.maximum-subarray.cpp)

### 62.Unique Paths(medium)

-   法 1：排列組合數學計算

![upgit_20250107_1736228230.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/01/upgit_20250107_1736228230.png)

-   解法 2：DP
-   針對解法 2：二維 DP 壓縮成一為 DP

![Image](https://media.discordapp.net/attachments/1286741860538122281/1326360050201006171/image.jpg?ex=677f248e&is=677dd30e&hm=c9caebc178a1839d0393b7f887b380909e6c92020a880c468ed955ffd3beac63&=&format=webp&width=810&height=229)

-   [62.Unique Paths](./LeetCode/Dynamic%20Programming/62.unique-paths.cpp)

### 63.Unique Paths II

-   她是基於 62，但中間多了障礙物
-   [63.Unique Paths II](./LeetCode/Dynamic%20Programming/63.unique-paths-ii.cpp)

### 64.Minimum Path Sum

-   他一樣是要從左上到右下
-   解法：dp
-   [64.Minimum Path Sum](./LeetCode/Dynamic%20Programming/64.minimum-path-sum.cpp)

### 121.Best Time to Buy and Sell Stock

-   解法 1：用爆力解方式：定一個點(for loop)，然後另一個 for 去跑後面的，不斷紀錄最小值。
-   解法 2：DP

![upgit_20241106_1730896937.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/11/upgit_20241106_1730896937.png)

-   [121.Best Time to Buy and Sell Stock](./LeetCode/Dynamic%20Programming/121.best-time-to-buy-and-sell-stock.cpp)

## Backtracking

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

### 17.Letter Combinations of a Phone Number

![upgit_20241207_1733561921.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241207_1733561921.png)

-   [17.Letter Combinations of a Phone Number](./LeetCode/Backtracking/17.letter-combinations-of-a-phone-number.cpp)

### 78.Subsets

-   [78.Subsets](./LeetCode/Backtracking/78.subsets.cpp)

### 39.Combination Sum

-   返回各種組合(元素可重複)

![upgit_20241220_1734664775.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241220_1734664775.png)

-   [39.combination-sum.cpp](./LeetCode/Backtracking/39.combination-sum.cpp)

### 40.Combination Sum II

-   根據 39 題，但不能重複
-   [40.Combination Sum II](./LeetCode/Backtracking/40.combination-sum-ii.cpp)

### 46.Permutations

-   给定一个不含重复数字的数组 nums ，返回其所有可能的全排列。
    ![upgit_20241225_1735098588.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241225_1735098588.png)

-   [46.Permutations](./LeetCode/Backtracking/46.permutations.cpp)

### 47.Permutations II

-   给定一个可包含重复数字的序列  nums ，按任意顺序返回所有不重复的全排列。

![upgit_20241226_1735193561.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2024/12/upgit_20241226_1735193561.png)

-   [47.Permutations II](./LeetCode/Backtracking/47.permutations-ii.cpp)
