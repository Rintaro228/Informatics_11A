#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M, V, H;
    
    cin >> N >> M >> V >> H;
    vector<int> vertical_streets(V);
    vector<int> horizontal_streets(H);
    for(int i = 0; i < V; i++) 
        cin >> vertical_streets[i];
    for(int i = 0; i < H; i++)
        cin >> horizontal_streets[i];
    
    int houses = 0, trees = 0, streets = V * M + H * N - V * H;

    for(int i = 0; i < V-1; i++) 
    {
        for(int j = 0; j < H-1; j++) 
            trees += max(0, (vertical_streets[i+1] - vertical_streets[i] - 3)) * max(0, (horizontal_streets[j+1] - horizontal_streets[j] - 3));
    }
    houses = N * M - streets - trees;

    cout << houses <<" "<< trees << " " << streets ;
}