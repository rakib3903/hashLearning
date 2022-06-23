#include<bits/stdc++.h>
#define minValue -99999999
using namespace std;




int main() {

    int x;
    cin>>x;
    int hsh[11];

    for(int i = 0; i < 11; i++) {
        hsh[i] = minValue;
    }


    for(int i = 0; i < x; i++) {
        int element;
        cin>>element;
        int slot = element % 11;

        if(hsh[slot] == minValue) {
            hsh[slot] = element;
        } else {
            while(1) {
                slot = (slot + 1) % 11;
                if(hsh[slot] == minValue) {
                    hsh[slot] = element;
                    break;
                }
                slot++;
            }
        }
    }


    int terget;
    cin>>terget;
    bool bol = false;
    int slot  = terget % 11;
    if(hsh[slot] == terget) {
        cout<<"The element exists."<<endl;
    } else {
        while(1) {
            slot = (slot + 1) % 11;
            if(hsh[slot] == terget){
            cout<<"The element exists."<<endl;
            bol = true;
            break;
            }
            if(hsh[slot] == minValue){
            break;
            }
            slot++;
        }
        if(bol == false){
        cout<<"The element does not exist."<<endl;
        }
    }
    return 0;

}
