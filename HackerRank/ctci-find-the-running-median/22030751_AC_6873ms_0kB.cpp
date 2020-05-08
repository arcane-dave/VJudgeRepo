#include <bits/stdc++.h>

using namespace std;


int main()
{
    int inputs;
    cin >> inputs;
    deque<int> number;
    double median = 0;
    for(int i = 0; i < inputs; i++){
        int temp;
        cin >> temp;
        number.insert(upper_bound(number.begin(), number.end(), temp), temp);
        if(number.size() % 2 == 0){
            double midnum1 = number[number.size() / 2 - 1];
            double midnum2 = number[number.size() / 2 ];
            median = (midnum1 + midnum2) / 2;
        }

        else 
{
            median = number[number.size() / 2];
        }
        cout << fixed << setprecision(1) << median << endl;
    }
    return 0;
}
