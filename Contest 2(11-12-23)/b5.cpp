#include<bits/stdc++.h>
using namespace std;

struct Author {
    string name, email, sex;
};
struct Book {
    vector<Author> author;
    string name;
    long long price, quantity;
};

int main() {
    int n; cin >> n;
    Book book[n];
    string temp;
    for (int i = 0; i < n; i++) {
        cout << "-----------------------\nBook information :\n";
        getline(cin >> ws , temp);
        getline (cin >> ws, book[i].name);
        cout << "Name : " << book[i].name << endl;
        int t; cin >> book[i].price >> book[i].quantity >> t;
        cout << "Price : " << book[i].price << endl;
        cout << "Quantity : " << book[i].quantity << endl;
        cout << "Author information :\n";
        for (int i = 0 ; i < t; i++) {
            cout << "#" <<i+1<<endl;
            string name, email, sex;
            getline(cin >> ws, name);
            getline(cin >> ws, email);
            getline(cin >> ws, sex);
            cout << "Name : " << name << endl;
            cout << "Email : " << email << endl;
            cout << "Gender : " << sex << endl;
            book[i].author.push_back({name, email, sex});
        }

    }
}