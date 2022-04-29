#include <bits/stdc++.h>
using namespace std;


void display(int e1, int e2, vector <pair<int,int>> p1, vector <pair<int,int>> p2)
{
    int i;

    cout << "\nThe time stamps of events in P1:\n";

    for (i = 0; i < e1; i++) {
        cout <<"["<< p1[i].first << ","<<p1[i].second<<"]";
    }

    cout << "\nThe time stamps of events in P2:\n";

    for (i = 0; i < e2; i++)
        cout <<"["<< p2[i].first << ","<<p2[i].second<<"]";
}

void lamportLogicalClock(int e1, int e2, vector<vector<int> > m)
{
    int i, j, k;
    vector <pair<int,int> > p1;
    vector<pair<int,int> > p2;

    for (i = 0; i < e1; i++)
    {
        p1.push_back(make_pair(i+1,0));
    }

    for (i = 0; i < e2; i++)
        p2.push_back(make_pair(0,i+1));

    for (i = 0; i < e2; i++)
        cout << "\te2" << i + 1;

    for (i = 0; i < e1; i++) {

        cout << "\n e1" << i + 1 << "\t";

        for (j = 0; j < e2; j++)
            cout << m[i][j] << "\t";
    }
    int m1,m2;
    for (i = 0; i < e1; i++) {
        for (j = 0; j < e2; j++) {

            if (m[i][j] == 1) {
                p2[j].first = max(p2[j].first, p1[i].first);
                for (k = j + 1; k < e2; k++)
                    p2[k].first = p2[k - 1].first;
            }

            if (m[i][j] == -1) {
                p1[i].second = max(p1[i].second, p2[j].second);
                for (k = i + 1; k < e1; k++)
                    p1[k].second = p1[k - 1].second;
            }
        }
    }
    display(e1, e2, p1, p2);
}

int main()
{
    int e1, e2;
    cout<<"\nEnter the events in process 1 followed by process 2: ";
    cin>>e1>>e2;
    vector<vector<int>> matrix(e1 , vector<int> (e2, 0));
    for(int i = 0; i < e1;++i)
    {
        cout<<"\n";
        for(int j = 0; j < e2; j++)
        {
            cout<<"e["<<i+1<<"]["<<j+1<<"] =";
            cin>>matrix[i][j];
        }
    }
    lamportLogicalClock(e1, e2, matrix);
    return 0;
}