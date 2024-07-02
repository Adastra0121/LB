// #include<iostream>
// #include<cstring>

// using namespace std;

// char image[20][20];
// int copyImage[20][20],his[256],color[16];

// int _16to10(char a){
//     if(a <= '9') return (a - '0');
//     return (a - 'A' + 10);
// }

// int _10to16(int n){
//     if(n >= 10) return (char)(n - 10 + 'A');
//     return (char)(n + '0');
// }

// int find(int c) {
//     int dis = 256, res = -1;
//     for (int i = 0; i < 16; i++) {
//         int d = c - color[i];
//         if (d < 0)
//             d = -d;
//         if (d < dis) {
//             dis = d;
//             res = i;
//         }
//     return res;
// }
// return res;
// }
// int main(){
//     int n= 0, m = 0;
//     cin >> n;
//     for (int i = 0; i < 256; i++)
//     {
//         his[i] = -1;
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         char line[100];
//         cin >> line;
//         m = strlen(line) / 2;
//         for (int j = 0; j < m; j++)
//         {
//             image[i][j] = _16to10(line[j * 2]) * 16 + _16to10(line[j * 2 + 1]);
//             his[image[i][j]]++;
//         }
//     }
//     for (int i = 0; i < 16; i++)
//     {
//         int max = 0,max_id = -1;
//         for (int j = 0; j < 256; j++)
//         {
//             if (his[j] > max)
//             {
//                 max = his[j];
//                 max_id = j;
//             }
//             color[i] = max_id;    
//             his[max_id] = -1;       
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             copyImage[i][j] = find(image[i][j]);
//         }
//     }
//     for (int i = 0; i < 16; i++)
//     {
//         cout << _10to16(color[i] / 16) << _10to16(color[i] % 16);
//     }
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << _10to16(copyImage[i][j]);
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <cstring>

using namespace std;

int image[20][20];
int cpimg[20][20];
int his[256];
int color[16];

// 一位十六进制字符转换为数字
int trans(char a) {
    if (a <= '9') return (a - '0');
    return (a - 'A' + 10);
}

// 十进制数字转换为十六进制数字
char itrans(int n) {
    if (n >= 10) return (char)(n - 10 + 'A');
    return (char)(n + '0');
}

// 寻找离 c 最近的灰阶
int compress(int c) {
    int dis = 256, res = -1;
    for (int i = 0; i < 16; i++) {
        int d = c - color[i];
        if (d < 0)
            d = -d;
        if (d < dis) {
            dis = d;
            res = i;
        }
    }
    return res;
}


int main() {
    int N = 0, M = 0;
    cin >> N;
    // 灰阶计数，初始化为-1
    for (int i = 0; i < 256; i++)  his[i] = -1;
    // 输入图像，并对灰阶计数
    for (int i = 0; i < N; i++) {
        char line[50];
        cin >> line;
        M = strlen(line) / 2;
        for (int j = 0; j < M; j++) {
            int c = trans(line[j * 2]) * 16 + trans(line[j * 2 + 1]);
            image[i][j] = c;
            his[c]++;
        }
    }
    // 选取出现次数最多的 16 个灰阶
    for (int c = 0; c < 16; c++) {
        int max = 0, max_id = -1;
        for (int i = 0; i < 256; i++)
        if (his[i] > max) {
            max = his[i];
            max_id = i;
        }
        color[c] = max_id;
        his[max_id] = -1;
    }

    // 将 image 的灰阶压缩为 cpimg
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cpimg[i][j] = compress(image[i][j]);
    // 输出选取的 16 个灰阶
    for (int c = 0; c < 16; c++)
        cout << itrans(color[c] / 16) << itrans(color[c] % 16);
    cout << endl;
    // 输出压缩后的图像
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
        cout << itrans(cpimg[i][j]);
    cout << endl;
    }
    return 0;
}