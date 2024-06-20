#### 题目描述

“彼得·潘框架”是一种装饰文字，每一个字母都是由一个菱形框架。一个彼得·潘框架看起来像这样 （`X`是字母，`#`是框架）：

```
..#..
.#.#.
#.X.#
.#.#.
..#..
```

然而，只是一个框架会有些沉闷，所以我们每遇到三个字母会把第三个字母用温迪框架把它框起来。温迪框架看起来像这样：

```
..*..
.*.*.
*.X.*
.*.*.
..*..
```

当温迪和彼得·潘的框架重叠时，温迪框架覆盖在上面。

#### 输入

一行包含至多 15 个大写英文字母。

#### 输出

输出使用彼得·潘和温迪框架写成的 5 行文字。

___

#### 输入样例1复制

```
A
```

#### 输出样例1复制

```
..#..
.#.#.
#.A.#
.#.#.
..#..
```

___

#### 输入样例2复制

```
DOG
```

#### 输出样例2复制

```
..#...#...*..
.#.#.#.#.*.*.
#.D.#.O.*.G.*
.#.#.#.#.*.*.
..#...#...*..
```

___

#### 输入样例3复制

```
ABCD
```

#### 输出样例3复制

```
..#...#...*...#..
.#.#.#.#.*.*.#.#.
#.A.#.B.*.C.*.D.#
.#.#.#.#.*.*.#.#.
..#...#...*...#..
```