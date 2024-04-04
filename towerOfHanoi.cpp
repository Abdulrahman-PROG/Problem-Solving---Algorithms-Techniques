#include <iostream>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void towerOfHanoi(int numDisks, char start, char end, char tmp, int& moveCount) {
    if (numDisks == 1) {
        cout << "Move disk 1 from " << start << " to " << end << e;
        moveCount++;
        return;
    }
    towerOfHanoi(numDisks - 1, start, tmp, end, moveCount);
    cout << "Move disk " << numDisks << " from " << start << " to " << end << e;
    moveCount++;
    towerOfHanoi(numDisks - 1, tmp, end, start, moveCount);
}

int main() {
    FAST;
    int numDisks;
    cout << "Enter number of disks.... ";
    cin >> numDisks;

    int moveCount = 0;
    towerOfHanoi(numDisks, 'A', 'C', 'B', moveCount);
    cout << "Total number of moves ==  " << moveCount << e;
    cout << "Total number of moves == 2^(" << numDisks << "-1) == "<< pow(2, numDisks)-1;

    return 0;
}
