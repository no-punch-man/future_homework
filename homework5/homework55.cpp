#include <bits/stdc++.h>
#include <chrono>
using namespace std;
double get_time()
{
    return std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now().time_since_epoch()).count()/1e6;
}
int getRandomFloatingPointBetween_progressive(int min, int max) {
	std::random_device rd; // uniformly-distributed integer random number generator
	std::mt19937 gen(rd()); //инициализируем Вихрь Мерсенна случайным стартовым числом
	std::uniform_int_distribution<int> dis(min, max);//uniform distribution between min and max
	return dis(gen);
}
int main()
{
    double startTime_set, endTime_set, startTime_vec, endTime_vec;
    startTime_set = get_time( );
    set<int> st;
    while(st.size() < 100)
    {
        st.insert(getRandomFloatingPointBetween_progressive(0, 1000));
    }
    endTime_set = get_time( );
    startTime_vec = get_time( );
    vector<int> vec(100);
    for(int i = 0; i < 100; i++)
    {
        vec[i] = getRandomFloatingPointBetween_progressive(0, 1000);
    }
    sort(vec.begin(), vec.end());
    endTime_vec = get_time( );

    fprintf( stderr, "CPU time used = %lf\n", (endTime_set - startTime_set) );
    fprintf( stderr, "CPU time used = %lf\n", (endTime_vec - startTime_vec) );

}
