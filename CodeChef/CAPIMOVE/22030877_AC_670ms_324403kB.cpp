#include <bits/stdc++.h>
using namespace std;

bool myfnc(pair<int, int> i, pair<int, int> j) {
    return i.first > j.first;
}
int main() {
    int infcase;
    cin >> infcase;
    while(infcase!=0) {
        int planet, popul;
        cin >> planet;
        vector<int> population(planet);
        for(int i = 0; i < planet; i++) {
            cin >> popul;
            population[i] = popul;
        }
        vector<pair<int, int> > pairer(planet);
        for(int i = 0; i < planet; i++) {
            pairer[i].first = population[i];
            pairer[i].second = i;
        }
        sort(pairer.begin(), pairer.end(), myfnc);

        vector<vector<bool> > graph(planet, vector<bool> (planet));
        for(int i = 0; i < planet-1; i++) {
            int v, u;
            cin >> v >> u;
            graph[--v][--u] = 1;
            graph[u][v] = 1;
            graph[i][i] = 1;
        }
        graph[planet-1][planet-1] = 1;
        for(int i = 0; i < planet; i++) {
            int j;
            for(j = 0; j < planet; j++) {
                if(graph[i][pairer[j].second] == 0) {
                    cout << pairer[j].second+1 << " ";
                    break;
                }
            }
            if(j == planet)
                cout << "0 ";
        }
        cout << endl;
        --infcase;
    }
    return 0;
}