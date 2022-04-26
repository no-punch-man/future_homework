#include <random>
#include <bits/stdc++.h>
int getRandomFloatingPointBetween_progressive(int min, int max) {
	std::random_device rd; // uniformly-distributed integer random number generator
	std::mt19937 gen(rd()); //инициализируем Вихрь Мерсенна случайным стартовым числом
	std::uniform_int_distribution<int> dis(min, max);//uniform distribution between min and max
	return dis(gen);
}
int main()
{
    int arr[3] = {0};
    for(int i = 0; i < 3; i++)
    {
        arr[i] = getRandomFloatingPointBetween_progressive(0, 4);
        std::cout << arr[i] << ' ';
    }
    int k = 0;
    for(int i = 0; i < 2; i++)
    {
        if(arr[i] != arr[i + 1])
        {
            break;
        }
        else
        {
            k++;
        }
    }
    if(k == 2)
    {
        std::cout << "YOU WIN!";
    }
    else
    {
        std::cout << "YOU STUPID HAHA";
    }
}
