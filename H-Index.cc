#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> GetHIndexScore(vector<int> citations_per_paper)
{
    vector<int> h_index;

    priority_queue<long long, vector<long long>, greater<long long>> pq;
    int ans = 0, si = 0;

    for (int i = 0; i < citations_per_paper.size(); ++i)
    {
        while (!pq.empty()&& pq.top() <= ans)
        {
            pq.pop();
            --si;
        }
        if (citations_per_paper[i] > ans)
        {
            pq.push(citations_per_paper[i]);
            ++si;
        }
        if (ans + 1 == si)
        {
            ans++;
        }

        h_index.push_back(ans);
    }

    return h_index;
}

int main()
{
    int tests;
    cin >> tests;
    for (int test_case = 1; test_case <= tests; test_case++)
    {
        // Get number of papers for this test case
        int paper_count;
        cin >> paper_count;
        // Get number of citations for each paper
        vector<int> citations(paper_count);
        for (int i = 0; i < paper_count; i++)
        {
            cin >> citations[i];
        }
        vector<int> answer = GetHIndexScore(citations);
        cout << "Case #" << test_case << ": ";
        for (int i = 0; i < answer.size(); i++)
        {
            cout << answer[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
