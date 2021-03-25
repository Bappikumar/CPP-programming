#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <vector>
using namespace std;

class game
{
private:
	int row;
    vector <int> fake;
    char map[1800];
    int x;//COORDINATES
    int c;
    int speed;
    int points ;
    int CurrentLevel;
    bool check;
public:
    game()
    {
        x = 1940;
        speed = 215;
        check = 0;
        points = 0;
    }
    void PrepareGraphics();
    void graphics();
    void LevelMenu();
    void Levels();
    void LOGIC();
    void gameover();
    friend void cls();
    friend void sp();
    friend void s();
    void shuffle();
};

void game:: shuffle(){
	Sleep(4);
	
	int r = rand();
	
	if(r%2==0) return;
	
	for(int i=0; i<row; i++){
		for(int j=7; j<33; j++){
			if(map[i*40+j]==char(173))
				continue;
			
			int x = rand();
			int y = rand();
			x%=row;
			y%=33;
			if(y<7) y+=7;
			if(map[x*40+y]==char(173))
				continue;
			
			swap(map[x*40+y], map[i*40+j]);
		}
	}
}

void cls()
{
    HANDLE hOut;
    COORD Position;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    Position.X = 0;
    Position.Y = 0;
    SetConsoleCursorPosition(hOut, Position);
}

void game::Levels() 
{
    speed-=20;
    for(int a = 0;a < 1800;a++)
    {
        map[a] = ' ';           //CLEAN IT FIRST
    }
    switch(CurrentLevel)
    {
    case 1:
    	row = 6;
    for(int b = 0;b < 26;b++)
    {
        map[b + 7] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 47] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 87] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 127] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 167] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 207] = char(98);
    }
    break;
    case 2:
    	row = 8;
    for(int b = 0;b < 26;b++)
    {
        map[b + 7] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 47] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 87] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 127] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 167] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 207] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 247] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 287] = char(98);
    }
    break;
    case 3:
    	row = 9;
    for(int b = 0;b < 26;b++)
    {
        map[b + 7] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 47] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 87] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 127] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 167] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 207] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 247] = char(98);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 287] = char(98);
    }
    
    for(int b = 0;b < 26;b++)
    {
        map[b + 327] = char(98);
    }
    break;
    
    default:
        system("cls");
        cout << "CONGRULATIONS ";
        Sleep(5000);
        }
PrepareGraphics();
}

void sp(int spalva)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), spalva);
}
void game::LevelMenu()
{
    cout <<"CONTROLS: W S A D for moving and  Mouse Right button  for shooting...";
    Sleep(4500);
    system("cls");
    system("color c4");
    sp(481);
    cout << "CHOOSE YOUR LEVEL:";
    cout <<"1." << endl;
    cout <<"2." << endl;
    cout <<"3." << endl;
   
    int y;
    while(y > 3 || y < 1)
    {
        cin >> y;
    }
    if(y == 1)
    {
        CurrentLevel = 1;
        speed = 215;
    }
    else if(y == 2)
    {
        CurrentLevel = 2;
        speed = 195;
    }
    else if(y == 3)
    {
        CurrentLevel = 3;
        speed = 175;
    }
   
    cout << "GET READY.";
    Sleep(2500);
    Levels();
}

void game::PrepareGraphics()
{
    x = 1340;
    map[x] = 'H';
    graphics();
}

void game::graphics()
{
    c = 0;
    for(int i=0; i<row; i++){
		for(int j=7; j<33; j++){
			if(map[i*40+j]==char(98))
				c++;
		}
	}
	
    if(c == 0)
    {
        CurrentLevel++;
        cout << "Congrulations,you have passed this level\n,let's try another one!";
        Sleep(4000);
        Levels();
    }
    cout << endl;
    for(int k = 0;k < 40;k++ )
    {
        cout << char(219);
    }
    cout << endl;

    for(int u = 0;u < 1800;u++)
    {
        if(u!= 0 && u % 40 == 0)
        {
            cout << endl;
        }
        
        if(map[u + 40] == char(173))
        {
            map[u + 40] = ' ';
            
            if(map[u]==char(98)){
            	points++;
			}
			
            map[u] = char(173);
        }
        else if(u <= 39 && map[u] == char(173))
        {
            map[u] = ' ';
        }
        if(map[u] == char(98) && map[u + 40 ] != char(98))
        {
            c = rand() % speed + 1;
            if(c == 5)
            {
                map[u + 40] = 'o';
            }
        };
        if(map[u] == 'o')
        {
            for(unsigned int g = 0;g != fake.size();g++)
            {
                    if(fake[g] == u)
                    {
                        g = fake.size() - 1;
                        check = 1;
                    }
            }
            if(!check)
            {
                map[u] = ' ';
                if(x == u + 40)
                {
                    gameover();
                }
                map[u + 40] = 'o';
                fake.push_back(u + 40);
            }
        };
        check = 0;
        cout << map[u];
    }
    
    for(int h = 1760;h < 1800;h++)
    {
        if(map[h] == 'o')
        {
            map[h] = ' ';
        }
    }
    fake.clear();
    cout << endl;
    for(int k = 0;k < 40;k++ )
    {
        cout << char(219);
    }
    cout << endl;
    cout << "\n\n\n\n            Points:" << points;
    
	LOGIC();
}

void game::gameover()
{
    system("cls");
    cout <<"GG,YOU'VE JUST LOSE!";
    cout <<"You scored " << points << " points\n";
    Sleep(2000);
    cout <<"Restarting...";
    Sleep(2000);
    system("cls");
    system("color c4");
    sp(481);
    LevelMenu();
}
void game::LOGIC()
{
             if (GetAsyncKeyState(0X41))
        {
            if(x % 40 != 0)
            {
                if(map[x - 1] == 'o')
                {
                    gameover();
                };
                x--;
                map[x + 1] = ' ';
                map[x] = 'H';
            }
        }
        else if (GetAsyncKeyState(0X44))
        {
            if((x + 1) % 40 != 0)
            {
                if(map[x + 1] == 'o')
                {
                    gameover();
                };
                x++;
                map[x - 1] = ' ';
                map[x] = 'H';
            }
        }
        else if (GetAsyncKeyState(0X57))
        {
            if(x > 480)
            {
                x-=40;
                map[x+40] = ' ';
                map[x] = 'H';
            }
        }
        else if (GetAsyncKeyState(0X53))
        {
            if(x < 1760 )
            {
                x+=40;
                map[x - 40] = ' ';
                map[x] = 'H';
            }
        }
        else{}
        if(_kbhit())
        {
           if(GetAsyncKeyState(VK_RBUTTON))
            {
                map[x - 40] = char(173);
            };
        }
        
    cls();
    shuffle();
    graphics();
}

int main()
{
    system("color c4");
    sp(481);
    srand((unsigned)time(0));
    game *memb;
    memb = new game;
    memb->LevelMenu();
}

