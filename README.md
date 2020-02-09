# -
10道题

Q1：
题意：找到小于N的只包含数字6和8的最大的数
题解：从N开始向下枚举数字到6，判断当前数是否只包含6和8两个数字。
要点：数字拆分，取出数字每一位的数
%10取最后一位数，/10，循环执行

Q2：
题意：找到字符串中所有的‘A’和‘Z’，做字符串反转，其他字符不变。
题解：生成反转串，再将反转串中不是字符‘A’和‘Z’的字符还原为原字符串中的内容。
要点：字符串操作，反转串的生成

Q3：
题意：将N个不同重量的石头分成两堆，使两堆的总重量相同，问是否有解决方案。
题解：搜索问题，使用深度优先搜索（DFS）枚举当前石子拿或者不拿，N最大为10，无需剪枝。或者枚举N位2进制数，按二进制位（0或者1）进行分堆，再判断是否存在两堆重量一样的情况。
要点：DFS的递归写法

Q4：
题意：10进制数转二进制，再将二进制数反转转10进制
题解：将二进制用字符串存储，反转，再还原为10进制数输出
要点：进制转换，字符串反转

Q8：
题意：计算 xn mod m，2 ≤ x, m ≤ 1000, 0 ≤ n ≤ 231 - 1
题解：n太大，直接暴力算会TLE，使用快速幂解决
相关公式：
n为偶数： xn % m = ( (xn/2 % m)* (xn/2 % m) )%m
n为奇数： xn % m = ( (x% m)* (xn-1 % m) )%m
要点：快速幂，二分的应用

Q10：
原题意：有几堆石头，将相邻两堆合并的代价为重量较大的那堆，问最小的总代价。（DP+线段树）
更新题意：相邻两堆石头之间至少需要花费重量较大的那堆的重量的材料去建立隔层，问最小代价。
题解：遍历数组，相邻两个数取较大值加入答案。

Q12：
题意：成绩排名
题解：构建结构体重载运算符直接排序


