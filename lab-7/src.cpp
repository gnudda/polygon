#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
    priority_queue<int> maxHeap;
    int currentFuel = startFuel; 
    int stops = 0;               
    int i = 0;                   
    
    while (currentFuel < target) {
        while (i < stations.size() && stations[i][0] <= currentFuel) {
            maxHeap.push(stations[i][1]);
            i++;
        }
        
        if (maxHeap.empty()) return -1;
        
        currentFuel += maxHeap.top();
        maxHeap.pop();
        stops++;
    }
    
    return stops;
}
