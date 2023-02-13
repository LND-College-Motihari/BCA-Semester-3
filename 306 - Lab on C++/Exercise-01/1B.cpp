#include <iostream>
using namespace std;

int main() {
    int voteCount;
    int ballot[6] = {0};

    cout << "Enter total count of votes : ";
    cin >> voteCount;

    while(voteCount--) {
        int vote;

        cout << "Cast your vote : ";
        cin >> vote;

        switch(vote>=1 && vote<=5) {
            case 1:
                ballot[vote]++;
                break;
            default:
                ballot[0]++;
        }
    }

    for(int i=1; i<6; i++) {
        cout << "Vote casted for candidate number " << i << " : " << ballot[i] << endl;
    }

    cout << "Null vote count : " << ballot[0] << endl;
    
    return 0;
}