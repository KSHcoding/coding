#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <time.h>
using namespace std;

int INF = int(1e9);
vector<pair<int, int> > graph[30001];
int d[30001];

void dijkstra(int start) {
    priority_queue<pair<int, int> > pq; // <거리 , 노드>
    pq.push({ 0, start }); // 시작 노드의 거리 = 0
    d[start] = 0;
    while (!pq.empty()) 
    {
        int dist = -pq.top().first; // 현재 노드까지의 비용 
        int now = pq.top().second; // 현재 노드
        pq.pop();

        if (d[now] < dist) continue; // 현재 노드가 이미 처리된 적이 있는 노드라면 무시

        for (int i = 0; i < graph[now].size(); i++) {
            int cost = dist + graph[now][i].second;
            
            if (cost < d[graph[now][i].first]) // 현재 노드를 거쳐서, 다른 노드로 이동하는 거리가 더 짧은 경우
            {
                d[graph[now][i].first] = cost;
                pq.push(make_pair(-cost, graph[now][i].first));
            }
        }
    }
}

void main()
{
	clock_t start, end;

	start = clock() / CLOCKS_PER_SEC;

	int N, M, C;
	int v, e;
	int X, Y, Z;

	cin >> N >> M >> C;

    for (int i = 0; i < M; i++)
    {
        cin >> X >> Y >> Z;
        graph[X].push_back({ Y, Z });
    }

    fill(d, d + 30001, INF);

    dijkstra(C);

	
    int count = 0;
    int maxDistance = 0;
    for (int i = 1; i <= N; i++) {

        if (d[i] != INF) {
            count += 1;
            maxDistance = max(maxDistance, d[i]); // 도달 할 수 있는 최대 거리 = 최대 시간
        }
    }

    // 시작 노드는 제외
    cout << count - 1 << ' ' << maxDistance << '\n';


	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}