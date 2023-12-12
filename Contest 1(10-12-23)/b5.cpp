    #include<iostream>
    #include<string>
    #include<algorithm>
    #include<sstream>
    #include<iomanip>
    using namespace std;
    struct SV{
        int code;
        string name , clas , date;
        float gpa;
    };
    string title(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        stringstream ss (s);
        string tok;
        string result = "";
        while (ss >> tok) {
            result += toupper(tok[0]); 
            result += &tok[1];
            result += " ";
        }
        return result;
    }
    int main() {
        int n; cin >> n;
        SV sv[n];
        for (int i = 1; i <= n ; i++) {
            string code, name , clas , date,  gpa;
            sv[i-1].code = i ;
            getline(cin >> ws, sv[i-1].name);
            getline(cin >> ws, sv[i-1].clas);
            getline(cin >> ws, sv[i-1].date);
            if(sv[i-1].date[2] != '/') sv[i-1].date = "0" +  sv[i-1].date ;
            if (sv[i-1].date[5] != '/') sv[i-1].date.insert(3,"0");
            cin >> sv[i-1].gpa;
            // sv[i - 1] = {code, name , clas, date, gpa};
        }
        sort(sv, sv + n, [](SV a, SV b) {
            if(a.gpa == b.gpa) return a.code < b. code;
            return a.gpa > b.gpa;
        });
        for(int i = 0; i < n ; i++){
            cout <<"SV" <<  setw(3) << setfill('0') << sv[i].code << " ";
            cout <<title(sv[i].name);
            cout << sv[i].clas <<  " ";
            cout << sv[i]. date << " ";
            cout << fixed << setprecision(2) << sv[i].gpa  <<endl;
        }
    }