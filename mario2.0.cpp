#include <iostream>
using namespace std;
int main() {
    int i,j,hashtag,space;
    do {
        cout << "高度?" << "\n";
        cin >> j;
    } while (j > 8 || j <= 0);
    
    j *= 2;
    
    for (i = 0; i <= j; i += 2) {
        for (space = j / 2; space > i / 2; space--) {
            cout << " ";
        }
        
        for (hashtag = 1; hashtag <= i; hashtag++) {
            if (hashtag - 1 == i / 2) {
                cout << "  #";
            } else {
                cout << "#";
            }
        }
        cout << "\n";
    }
}
