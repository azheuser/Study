#include<iostream>

int main() {
    char input_char{'*'};
    int input_num{1};
    std::cin >> input_num >> input_char;

    int std_num{1}; // ֻ��ɳ©���ַ���
    int maxrow_num{1}; // ��ǰɳ©�е�����ַ���
    int rows{1}; // �����ǵ�������Ĭ��1��
    int spaces{0}; // �ո�����Ĭ��0��

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

    // �������������
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

    // �ո��������ַ�������
    maxrow_num += 2;
    spaces--;

    // ɳ©ʣ�µĲ���
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
