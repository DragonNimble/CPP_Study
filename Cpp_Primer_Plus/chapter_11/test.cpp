#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    int n; //门的数量
    int* DayOfKey = new int[n + 1];
    cin >> n;
    for (int i = 1; i < n + 1; i++)
        cin >> DayOfKey[i];
    
    int* Door = new int[n + 1];  //用于存放门开启情况
    for (int i = 0; i < n + 1; i++)
        Door[i] = 0;  //初始化
    
    int CurrentDay = 1; //当前天数    
    int Key = 1; //当前开到的门编号
    while (Key < n + 1)
    {

        Door[DayOfKey[CurrentDay]] = 1;
        while (Door[Key] == 1)
            {
                cout << CurrentDay << " ";
                Key++;
            }
        CurrentDay++;
    }
    return 0;

}