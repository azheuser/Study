#include<iostream>

int main() {
    char input_char{'*'};
    int input_num{1};
    std::cin >> input_num >> input_char;

    int std_num{1}; // 只有沙漏的字符数
    int maxrow_num{1}; // 当前沙漏行的最多字符数
    int rows{1}; // 倒三角的行数，默认1行
    int spaces{0}; // 空格数，默认0个

    while(std_num < input_num) {
        if(input_num - std_num >= (maxrow_num + 2) * 2) {
            maxrow_num += 2;
            std_num += maxrow_num * 2;
            rows++;
        }
        else {
            break;
        }
    }

    // 输出完整倒三角
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < spaces; j++) {
            std::cout << " ";
        }
        spaces++;
        for(int j = 0; j < maxrow_num; j++) {
            std::cout << input_char;
        }
        maxrow_num -= 2;
        std::cout << std::endl;
    }

    // 空格和最大行字符数矫正
    maxrow_num += 2;
    spaces--;

    // 沙漏剩下的部分
    for(int i = 0; i < rows - 1; i++) {
        spaces--;
        for(int j = 0; j < spaces; j++) {
            std::cout << " ";
        }
        maxrow_num += 2;
        for(int j = 0; j < maxrow_num; j++) {
            std::cout << input_char;
        }
        std::cout << std::endl;
    }

    std::cout << input_num - std_num;

    return 0;
}
