#include <bits/stdc++.h>

using namespace std;

long long a[30][30];

struct Group {
    int Index;
    int StudentsAmount;
    int ClassroomIndex;
};

struct Classroom {
    int Index;
    int Capacity;
};

bool CmpGroupStudents(Group a, Group b) {
    return a.StudentsAmount > b.StudentsAmount;
}

bool CmpGroupIndex(Group a, Group b) {
    return a.Index < b.Index;
}

bool CmpClassroomCapacity(Classroom a, Classroom b) {
    return a.Capacity > b.Capacity;
}

int main() {
    int N, M;
    cin >> N >> M;
    Group groups[N];
    Classroom classrooms[M];
    for(int i = 0; i < N; i++) 
    {
        cin >> groups[i].StudentsAmount;
        groups[i].Index = i;
    }
    for(int i = 0; i < M; i++)
    {
        cin >> classrooms[i].Capacity;
        classrooms[i].Capacity--;
        classrooms[i].Index = i+1;
    }

    sort(groups, groups+N, CmpGroupStudents);
    sort(classrooms, classrooms+M, CmpClassroomCapacity);
    
    int j = 0;
    int ans = 0;
    for(int i = 0; i < N; i++) 
    {

        if(groups[i].StudentsAmount > classrooms[j].Capacity) 
            groups[i].ClassroomIndex = 0;
        else
        {
            ans++;
            groups[i].ClassroomIndex = classrooms[j].Index;
            j++;
        } 
    }

    sort(groups, groups+N, CmpGroupIndex);

    cout << ans << "\n";   
    for(int i = 0; i < N; i++) 
        cout << groups[i].ClassroomIndex << ' ';
}