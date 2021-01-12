#include <stdio.h>
#include <cstdlib>
#include<iostream>
#include<windows.h>
using namespace std;
void gameInstructions();
void menu(char c);
void easy();
void choose(char a);
void normal();
void hard();






int main() {
	gameInstructions(); 
	cout << "  输入s退出游戏" << endl;
	cout << "按任意键进入游戏" << endl;
	char choose1;
	cin>>choose1;
	menu(choose1);
	char a = ' ';
	choose(a);
	return 0;

}

void gameInstructions() {
	cout << "<---操作按键：[W][S][A][D]--->\n";
	cout << "<---分别对应[上][下][左][右]--->\n";
	cout << "<---注意使用英文输入法--->\n";
	Sleep(1000);
}

void menu(char c) {
	system("cls");
	if (c == 'S' || c == 's') {
		cout << "        游戏加载完毕！" << endl;
		cout << "<---操作按键：[W][S][A][D]--->" << endl;
		cout << "<---分别对应[上][下][左][右]--->" << endl;
		cout << "按任意键开始游戏" << endl;
		cout << "按s退出游戏" << endl;
		cout << "程序将在5s后关闭" << endl;
		int i = 0;
		for (i = 0; i < 5; ++i) {
			system("cls");
			cout << "程序将在5s后关闭" << endl << 5 - i;
			Sleep(1000);
		}
		exit(0);
	}
	else {
		cout << "        游戏加载完毕！" << endl;
		cout << "<---操作按键：[W][S][A][D]--->" << endl;
		cout << "<---分别对应[上][下][左][右]--->" << endl;
		cout << "按任意键开始游戏" << endl;
		cout << "按s退出游戏" << endl;

	}
}
void choose(char a) {
	cout << "     请选择难度" << endl;
	cout << "1----easy" << endl;
	cout << "2----normal" << endl;
	cout << "3----hard" << endl;
	cin >> a;
	if (a == '1')
		easy();
	if (a == '2')
		normal();
	if (a == '3')
		hard();
}
void easy()
{
	system("cls");
	char map[10][10] = { "######",
						 "#o # >",
						 "# ## #",
						 "#  # #",
						 "##   #",
						 "######"
	};

	int i, x, y, p, q;
	char ch;
	x = 1; y = 1; p = 1; q = 5;
	for (i = 0; i <=5; i++)
		cout << map[i] << endl;
	cout<<endl;
	cout<<"1----重新选关"<<endl;
	cout<<"2----退出程序"<<endl;
	char r;
	cin>>r;
	if(r=='1')
		choose(r);
	if(r=='2')
	{
		cout << "程序关闭" << endl;
		exit(0);
		}


	while (x != p || y != q)
	{
		cin>>ch;
		if (ch == 's')
		{
			if (map[x + 1][y] != '#')
			{
				map[x][y] = ' ';
				x++;
				map[x][y] = 'o';
			}
		}
		if (ch == 'w')
		{
			if (map[x - 1][y] != '#')
			{
				map[x][y] = ' ';
				x--;
				map[x][y] = 'o';
			}
		}
		if (ch == 'a')
		{
			if (map[x][y - 1] != '#')
			{
				map[x][y] = ' ';
				y--;
				map[x][y] = 'o';
			}
		}
		if (ch == 'd')
		{
			if (map[x][y + 1] != '#')
			{
				map[x][y] = ' ';
				y++;
				map[x][y] = 'o';
			}
		}
	

		system("cls");
		for (i = 0; i <= 5; i++){
			cout << map[i] << endl;
		}
	}
	system("cls");
	cout << "You Win!" << endl;
	cout << "是否选择进阶关卡(Y/N)" << endl;
	cout << "    请选择" << endl;
	cout << "1----normal" << endl;
	cout << "2----hard" << endl;
	char level;
	cin >> level;
	if (level == '1')
	{
		normal();
	}
	else if (level == '2')
	{
		hard();
	}
	else if (level == 'N' || level == 'n')
	{
		cout << "程序将在5s后关闭" << endl;
		int i = 0;
		for (i = 0; i < 5; ++i) {
			system("cls");
			cout << "程序将在 5s后关闭" << endl << 5 - i;
			Sleep(1000);
		}
		exit(0);//退出程序
	}

	Sleep(3000);
}
void normal() {
		system("cls");
	char map1[30][30] = { "#############################",
							  "#o #   ##             #     #",
							  "# ##  # ## ## #######   ## ##",
							  "#  #  # ##   #     ######  #",
							  "##         ##   ###    ### ##",
							  "## # ##### ## ##   ####     #",
							  "#  # ##       ## # ## ### ## ",
							  "#### ######## ## # ##      ##",
							  "#          ##    # ## ####  #",
							  "####################### ###>#",
	};

	int i, x, y, p, q;
	char ch;
	x = 1;
	y = 1;
	p = 9;
	q = 27;
	for (i = 0; i <= 9; i++)
		cout << map1[i] << endl;

	cout<<endl;
	cout<<"1----重新选关"<<endl;
	cout<<"2----退出程序"<<endl;
	char r;
	cin>>r;
	if(r=='1')
		choose(r);
	if(r=='2')
	{
		cout << "程序关闭" << endl;
		exit(0);
		}
	while (x != p || y != q)
	{
		cin>>ch;
		if (ch == 's')
		{
			if (map1[x + 1][y] != '#')
			{
				map1[x][y] = ' ';
				x++;
				map1[x][y] = 'o';
			}
		}
		if (ch == 'w')
		{
			if (map1[x - 1][y] != '#')
			{
				map1[x][y] = ' ';
				x--;
				map1[x][y] = 'o';
			}
		}
		if (ch == 'a')
		{
			if (map1[x][y - 1] != '#')
			{
				map1[x][y] = ' ';
				y--;
				map1[x][y] = 'o';
			}
		}
		if (ch == 'd')
		{
			if (map1[x][y + 1] != '#')
			{
				map1[x][y] = ' ';
				y++;
				map1[x][y] = 'o';
			}
		}
		system("cls");
		for (i = 0; i <= 9; i++)
			cout << map1[i] << endl;
	}
	system("cls");
	cout << ("哇，你赢啦！") << endl;;
	cout << "是否选择进阶关卡(Y/N)" << endl;
	char level;
	cin >> level;
	if (level == 'Y' || level == 'y')
	{
		hard();
	}
	else
	{
		cout << "程序将在5s后关闭" << endl;
		int i = 0;
		for (i = 0; i < 5; ++i) {
			system("cls");
			cout << "程序将在 5s后关闭" << endl << 5 - i;
			Sleep(1000);
		}
		exit(0);//退出程序
	}


	Sleep(3000);
}

void hard()
{
	system("cls");
	char a[50][50] = { "#############################",
					"#o        #   ### ## ### ####",
					"# ##### # # #  ##   ## ### ##",
					"# #   # #  ### ### # # #    #",
					"#   # #### # # # ###    # ###",
					"##### #  # # #  ## ## ###   #",
					"#   # # #  #  #    ##   ## ##",
					"# # # ## # # # ## #####  # ##",
					"# # # # ## #  # #   #    ## #",
					"# #   ##        ### ###  # ##",
					"# #####  # ##  ##   ##      #",
					"#       ## ##             # #",
					"# ######## # # # ###  #   # >",
					"#     #  # #     #   ## # # #",
					"##### #  # # # # ###  # # # #",
					"#     #  # # #   ##  ## # # #",
					"# # #        ### ## # # #  ##",
					"# #   ###  ##       #    #  #",
					"#############################",
	};
	int i, x, y, p, q;
	char ch;
	x = 1;
	y = 1;
	p = 12;
	q = 28;
	for (i = 0; i <= 18; i++)
		cout << a[i] << endl;
	cout<<endl;
	cout<<"1----重新选关"<<endl;
	cout<<"2----退出程序"<<endl;
	char r;
	cin>>r;
	if(r=='1')
		choose(r);
	if(r=='2')
	{
		cout << "程序关闭" << endl;
		exit(0);
		}
	while (x != p || y != q)
	{
		cin>>ch;
		if (ch == 's')
		{
			if (a[x + 1][y] != '#')
			{
				a[x][y] = ' ';
				x++;
				a[x][y] = 'o';
			}
		}
		if (ch == 'w')
		{
			if (a[x - 1][y] != '#')
			{
				a[x][y] = ' ';
				x--;
				a[x][y] = 'o';
			}
		}
		if (ch == 'a')
		{
			if (a[x][y - 1] != '#')
			{
				a[x][y] = ' ';
				y--;
				a[x][y] = 'o';
			}
		}
		if (ch == 'd')
		{
			if (a[x][y + 1] != '#')
			{
				a[x][y] = ' ';
				y++;
				a[x][y] = 'o';
			}
		}
		system("cls");
		for (i = 0; i <= 18; i++)
			cout << a[i] << endl;
	}
	system("cls");
	cout << ("哇，你赢啦！") << endl;;
	system("cls");
	
}