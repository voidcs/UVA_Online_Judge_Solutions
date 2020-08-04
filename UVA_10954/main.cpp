#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;

	while (scanf("%d", &n), n) {
		priority_queue<int, vector<int>, greater<int> > q;

		while (n--) {
			int x;
			scanf("%d", &x);
			q.push(x);
		}

		int total = 0, cost = 0;
                
		while (q.size() > 1) {
                    priority_queue<int,vector<int>,greater<int>> test = q;
                    printf("Priority queue: ");
                    while(!test.empty()){
                       printf("%d ",test.top());
                        test.pop();
                    }
                    printf("\n");
			total = q.top();
			q.pop();
			total += q.top();
			q.pop();
			cost += total;
			q.push(total);
		}

		printf("%d\n", cost);
	}

	return 0;
}