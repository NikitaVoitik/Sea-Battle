#include"Header.h"
#define ll long long
#define rep(i, k, n) for(i=k;i<=n;i++)
#define rrep(i, k, n, j) for(i=k;i<=n;i+= j)
#define irep(i, k, n) for(i=k;i>=n;i--)
#define newl cout << "\n";
#define len(x) x.length()
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define cendl(k) cout << k << endl;
#define cspace(k) cout << k << " ";
#define MIN(a, b) (a > b) ? b : a;
#define MAX(a, b) (a > b) ? a : b;
const double PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
using namespace std;
const ll inf = (ll)1e18 + 111;
const int iinf = (int)1e9 + 111;

char PlayerField[100][100];
char Symbol;
extern char PlayerDefense[100][100];
extern char PlayerAttack[100][100];
int Number;
extern int i, j;

void PrintFieldPlayer() {
    rep(i, 1, 15) {
        Number = 0;
        rep(j, 1, 60) {
            if (i >= 3 && i <= 11 && j >= 3 && j <= 21 && j % 2) {
                cout << PlayerDefense[i - 2][++Number];
            }
            else if (i >= 3 && i <= 11 && j >= 25 && j <= 43 && j % 2) {
                cout << PlayerAttack[i - 2][++Number];
            }
            else {
                cout << PlayerField[i][j];
            }
            if (Number == 9) {
                Number = 0;
            }
        }
        newl;
    }
}

void FullFieldPlayerDefense(){
    fastio;
    rep(i, 1, 13) {
        PlayerField[i][2] = '|';
        PlayerField[i][22] = '|';
        PlayerField[i][24] = '|';
        PlayerField[i][44] = '|';
    }
    rep(i, 3, 12) {
        Symbol = i + 46;
        PlayerField[i][1] = Symbol;
        PlayerField[i][23] = Symbol;
        PlayerField[i][45] = Symbol;
    }
    Symbol = 'A';
    rrep(i, 3, 21, 2){
        PlayerField[1][i] = Symbol;
        PlayerField[1][i + 22] = Symbol;
        PlayerField[13][i] = Symbol;
        PlayerField[13][i + 22] = Symbol;
        Symbol++;
    }
    rep(i, 1, 23) {
        PlayerField[2][i] = '=';
        PlayerField[12][i] = '=';
        PlayerField[2][i + 23] = '=';
        PlayerField[12][i + 23] = '=';
    }
    PrintFieldPlayer();
}

void PrintFieldPlayerDefense() {
    FullFieldPlayerDefense();
}