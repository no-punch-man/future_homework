#include <bits/stdc++.h>
#include <chrono>
using namespace std;
double get_time()
{
    return std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now().time_since_epoch()).count()/1e6;
}

int main()
{
//-----------------1st task----------------------------------------------------------------------------
    vector <int> vec;
    cout << vec.capacity() << endl;
    vec.reserve(4);
    for(int i = 0; i < 4; i++)
    {
        vec[i] = i;
        cout << vec.capacity() << endl;
    }
    for(int i = 0; i < 5; i++)
    {
        vec.push_back(i);
        cout << vec.capacity() << endl;
    }
    //capasity ����� ������� ����� �������� ������ ������� �������(4), ��, ����� ������ ���������� ����� ���������, �������������
    //� 2 ���� ����� ������� ������ �������� ������(� ������ ������� - 4 4 4 4 *��������� ������ ����* 8 8 8 8 16
    //��� �������������� ��������� ������ �������� reserve() �� ���������� capacity ������� ������ ����, ����� ������� ����� ���������� ������
    //������� �������(4), ������ ������������ ����� ��������� 4 �� ������ �������� ������ ��� � ������ ����� ������ ���������, �.�.
    // 0 4 4 4 4 4 4 4 4 8

//------------------2nd task-----------------------------------------------------------------------------

    double startTime, endTime;

    vector<int> vec(100);
    for(int i = 0; i < 100; i++)
    {
        vec[i] = 1+(rand()%90);
    }

    startTime = get_time( );
    sort(vec.begin(), vec.end());
    endTime = get_time( );

    fprintf( stderr, "CPU time used = %lf\n", (endTime - startTime) );

    deque<int> deq(100);
    for(int i = 0; i < 100; i++)
    {
        deq[i] = 1+(rand()%90);
    }
    startTime = get_time( );
    sort(deq.begin(), deq.end());
    endTime = get_time( );

    fprintf( stderr, "CPU time used = %lf\n", (endTime - startTime) );

    list<int> lis(100);
    for( auto it = lis.begin(); it != lis.end(); ++it )
       {
           *it = 1+(rand()%90);
       }
    startTime = get_time( );
    lis.sort();
    endTime = get_time( );
    fprintf( stderr, "CPU time used = %lf\n", (endTime - startTime) );


    int arr[100];
    for(int i = 0; i < 100; i++)
    {
        arr[i] = 1+(rand()%90);
    }

    startTime = get_time( );
    sort(begin(arr), end(arr));
    endTime = get_time( );

    fprintf( stderr, "CPU time used = %lf\n", (endTime - startTime) );


    forward_list <int> f_lis(100);
    list<int> lis(100);
    for( auto it = f_lis.begin(); it != f_lis.end(); ++it )
       {
           *it = 1+(rand()%90);
       }
    startTime = get_time( );
    f_lis.sort();
    endTime = get_time( );
    fprintf( stderr, "CPU time used = %lf\n", (endTime - startTime) );

}
