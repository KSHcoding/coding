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
    priority_queue<pair<int, int> > pq; // <�Ÿ� , ���>
    pq.push({ 0, start }); // ���� ����� �Ÿ� = 0
    d[start] = 0;
    while (!pq.empty()) 
    {
        int dist = -pq.top().first; // ���� �������� ��� 
        int now = pq.top().second; // ���� ���
        pq.pop();

        if (d[now] < dist) continue; // ���� ��尡 �̹� ó���� ���� �ִ� ����� ����

        for (int i = 0; i < graph[now].size(); i++) {
            int cost = dist + graph[now][i].second;
            
            if (cost < d[graph[now][i].first]) // ���� ��带 ���ļ�, �ٸ� ���� �̵��ϴ� �Ÿ��� �� ª�� ���
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
            maxDistance = max(maxDistance, d[i]); // ���� �� �� �ִ� �ִ� �Ÿ� = �ִ� �ð�
        }
    }

    // ���� ���� ����
    cout << count - 1 << ' ' << maxDistance << '\n';


	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "����ð� : " << ((double)end - start) / CLOCKS_PER_SEC;
}