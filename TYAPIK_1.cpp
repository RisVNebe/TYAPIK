// TYAPIK_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <string>
#include <iostream>
#include <vector>
using namespace std;


struct key
{
    string lang;
};
void add(vector<key>& temp, int i) {
    int k = 0;
    key temp_s;
    if (i > 0)
        while (k < i) {
            cin >> temp_s.lang;
            temp.push_back(temp_s);
            k++;
            
        }
}

void print(vector<key>& current) {
    for (int i = 0; i != current.size(); i++) {
        cout << current[i].lang << endl;
    }
}

void bubble(vector<key>& current) {
    for (int i = 0; i < current.size(); i++) {
        int k = i + 1;
        while (k != current.size()) {
            if (current[i].lang == current[k].lang) {
                auto iter = current.cbegin();
                current.erase(iter + k);
                k--;
            }
            k++;
        }

    }
    print(current);
}



void conc(vector<key>&al, vector<key>&al_2,int i, int k) { 
    vector<key> current;
    key temporary;
    int check_2;
    int check_1;
    int check_3=0;
    for (check_2 = 0; k > check_2; check_2++) {
        for (check_1 = 0; i != check_1; check_1++) {
           
           temporary.lang = al[check_1].lang + al_2[check_2].lang;
           current.push_back(temporary);
        }
    }
    bubble(current);
    
}





int main()
{
    int i,k;
    cin >> i;
    cin >> k;
    vector<key>al;
    vector<key>al_2;
    add(al, i);
    add(al_2, k);
    conc(al, al_2, i, k);


}
