#include<iostream>
#include<string>

using namespace std;

int main()
{
    string input_num;
    getline(cin, input_num, '\n');
    string str[10] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };

    if(input_num[0] == '-') {
        cout << "fu" << " ";
        input_num.erase(0, 1);
    }

    for(int i = 0; i < input_num.length(); i++) {
        for(int j = 0; j < 10; j++) {
            if((j + '0') == input_num[i]) {
                cout << str[j];
            }
        }
        if(i < input_num.length()-1) {
            	cout << " ";
			}
    }
}
