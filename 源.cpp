/*#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#define H 22
#define W 22
using namespace std;

class chessboard
{
public:
    char qp[H][W];
    int i, j, x1, y1;
    chessboard();
    void food();
    void prt(int grade, int score, int gamespeed);
};
chessboard::chessboard()
{
    for (i = 1; i <= H - 2; i++)
        for (j = 1; j <= W - 2; j++)
            qp[i][j] = ' ';
    for (i = 0; i <= H - 1; i++)
        qp[0][i] = qp[H - 1][i] = '#';
    for (i = 1; i <= H - 2; i++)
        qp[i][0] = qp[i][W - 1] = '#';
    food();
}
void chessboard::food()
{
    srand(time(0));
    do
    {
        x1 = rand() % W - 2 + 1;
        y1 = rand() % H - 2 + 1;
    } while (qp[x1][y1] != ' ');
    qp[x1][y1] = '$';
}
void chessboard::prt(int grade, int score, int gamespeed)
{
    system("cls");
    cout << endl;
    for (i = 0; i < H; i++)
    {
        cout << "\t";
        for (j = 0; j < W; j++)
            cout << qp[i][j] << ' ';
        if (i == 0) cout << "\tGrade:" << grade;
        if (i == 2) cout << "\tScore:" << score;
        if (i == 4) cout << "\tAutomatic forward";
        if (i == 5) cout << "\ttime interval:" << gamespeed << "ms";
        cout << endl;
    }
}
class snake :public chessboard
{
public:
    int zb[2][100];
    long start;
    int head, tail, grade, score, gamespeed, length, timeover, x, y;
    char direction;
    snake();
    void move();
};
snake::snake()
{
    cout << "\n\n\t\tThe game is about to begin!" << endl;
    for (i = 3; i >= 0; i--)
    {
        start = clock();
        while (clock() - start <= 1000);
        system("cls");
        if (i > 0)
            cout << "\n\n\t\tCountdown:" << i << endl;
    }
    for (i = 1; i <= 3; i++)
        qp[1][i] = '*';
    qp[1][4] = '@';
    for (i = 0; i < 4; i++)
    {
        zb[0][i] = 1;
        zb[1][i] = i + 1;
    }
}
void snake::move()
{
    score = 0;
    head = 3, tail = 0;
    grade = 1, length = 4;
    gamespeed = 500;
    direction = 77;
    while (1)
    {
        timeover = 1;
        start = clock();
        while ((timeover = (clock() - start <= gamespeed)) && !_kbhit());
        if (timeover)
        {
            _getch();
            direction = _getch();
        }
        switch (direction)
        {
        case 72: x = zb[0][head] - 1; y = zb[1][head]; break;
        case 80: x = zb[0][head] + 1; y = zb[1][head]; break;
        case 75: x = zb[0][head]; y = zb[1][head] - 1; break;
        case 77: x = zb[0][head]; y = zb[1][head] + 1; break;
        }
        if (x == 0 || x == 21 || y == 0 || y == 21)
        {
            cout << "\tGame over!" << endl; break;
        }
        if (qp[x][y] != ' ' && !(x == x1 && y == y1))
        {
            cout << "\tGame over!" << endl; break;
        }
        if (x == x1 && y == y1)
        {
            length++;
            score = score + 100;
            if (length >= 8)
            {
                length -= 8;
                grade++;
                if (gamespeed >= 200)
                    gamespeed = 550 - grade * 50;
            }
            qp[x][y] = '@';
            qp[zb[0][head]][zb[1][head]] = '*';
            head = (head + 1) % 100;
            zb[0][head] = x;
            zb[1][head] = y;
            food();
            prt(grade, score, gamespeed);
        }
        else
        {
            qp[zb[0][tail]][zb[1][tail]] = ' ';
            tail = (tail + 1) % 100;
            qp[zb[0][head]][zb[1][head]] = '*';
            head = (head + 1) % 100;
            zb[0][head] = x;
            zb[1][head] = y;
            qp[zb[0][head]][zb[1][head]] = '@';
            prt(grade, score, gamespeed);
        }
    }
}
int main()
{
    chessboard cb;
    snake s;
    s.move();
}*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*int main()
{
    int x;
    vector<int> a;
    cout << "����������" << endl;
    while (cin >> x)
    {
        a.push_back(x);
        if (cin.get() == '\n') break;
    }
    sort(a.begin(), a.end());
    //for(int i=0;i<a.size();i++)
     //   cout << a[i] << " ";
   cout<<a.size()<<endl;
   cout << a[a.size()-1];
}*/

class Student {
public:
    //��Ա����
    const char* name;
    int age;
    float score;

    //��Ա����
    void say() {
        cout << name << "��������" << age << "���ɼ���" << score << endl;
    }
};

int main()
{
    Student wei;
    wei.name = "С��";
    wei.age = 20;
    wei.score = 98;
    wei.say();
}