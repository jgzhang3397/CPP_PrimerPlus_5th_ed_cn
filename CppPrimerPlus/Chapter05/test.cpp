/**
 * @file test.cpp -- handle on difficult and confused questions
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main()
{
    using namespace std;
    int x = (1, 024); // x = 024, octal 024 = 20
    cout << x << endl;

    int y ;
    y = 1, 024; //y = 1
    cout << y << endl;

    // difference between cin>>ch, cin.get(ch), ch = cin.get()
    // cin>>ch 将跳过空格，换行符和制表符，其他两种格式将读取这些字符
    return 0;
}