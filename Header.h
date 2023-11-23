#include <windows.h>



void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

void myLine(int x1, int y1, int x2, int y2, int R, int G, int B) //use three 3 integers if you want colored lines.
{
	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	//change the color by changing the values in RGB (from 0-255) to get shades of gray. For other colors use 3 integers for colors.
	HPEN pen = CreatePen(PS_SOLID, 5, RGB(R, G, B)); //2 is the width of the pen
	SelectObject(device_context, pen);
	MoveToEx(device_context, x1, y1, NULL);
	LineTo(device_context, x2, y2);
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);

}


// This function checks if any of the 4 cursor keys are pressed. 
// If any cursor key is pressed, then the function returns true, and whichKey identifies which of the 4 cursor keys is pressed.
// whichkey is assigned following values if any cursor key is pressed. 1 for left, 2 for up, 3 for right and 4 for left.
bool isCursorKeyPressed(int& whichKey)   //whichKey passed as reference.... 
{
	char key;
	key = GetAsyncKeyState(VK_RETURN);
	if (key == 1)
	{
		whichKey = 5;		// 5 if enter key is pressed 
		return true;
	}
	key = GetAsyncKeyState(37);
	if (key == 1)
	{
		whichKey = 1;		// 1 if left key is pressed 
		return true;
	}
	key = GetAsyncKeyState(38);
	if (key == 1)
	{

		whichKey = 2;		// 2 if up key is pressed
		return true;
	}

	key = GetAsyncKeyState(39);
	if (key == 1)
	{

		whichKey = 3; // 3 if right key is pressed
		return true;
	}
	key = GetAsyncKeyState(40);
	if (key == 1)
	{

		whichKey = 4;   // 4 if down key is pressed
		return true;
	}
	return false;
}

void myRectangle(int x1, int y1, int x2, int y2, int R, int G, int B)
{
	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	//change the color by changing the values in RGB (from 0-255)
	HPEN pen = CreatePen(PS_SOLID, 10, RGB(R, G, B));
	SelectObject(device_context, pen);
	HBRUSH brush = ::CreateSolidBrush(RGB(R, G, B)); //Fill color can also be passed as parameter to the function!!!

	SelectObject(device_context, brush);

	Rectangle(device_context, x1, y1, x2, y2);
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);
	DeleteObject(brush);
}
void myEllipse(int x1, int y1, int x2, int y2, int R, int G, int B)
{
	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	//change the color by changing the values in RGB (from 0-255)
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(R, G, B));
	SelectObject(device_context, pen);
	HBRUSH brush = ::CreateSolidBrush(RGB(R, G, B));  //Fill color is black
	SelectObject(device_context, brush);
	Ellipse(device_context, x1, y1, x2, y2);
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);
	DeleteObject(brush);


}
//for stripes
void myLine1(int x1, int y1, int x2, int y2, int R, int G, int B) //use three 3 integers if you want colored lines.
{
	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	//change the color by changing the values in RGB (from 0-255) to get shades of gray. For other colors use 3 integers for colors.
	HPEN pen = CreatePen(PS_SOLID, 3, RGB(R, G, B)); //2 is the width of the pen
	SelectObject(device_context, pen);
	MoveToEx(device_context, x1, y1, NULL);
	LineTo(device_context, x2, y2);
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);

}

void myLine2(int x1, int y1, int x2, int y2, int R, int G, int B) //use three 3 integers if you want colored lines.
{
	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	//change the color by changing the values in RGB (from 0-255) to get shades of gray. For other colors use 3 integers for colors.
	HPEN pen = CreatePen(PS_SOLID, 12, RGB(R, G, B)); //2 is the width of the pen
	SelectObject(device_context, pen);
	MoveToEx(device_context, x1, y1, NULL);
	LineTo(device_context, x2, y2);
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);

}

////////////// GEMS HAVE BEEN MADE HER TO AVOID MESSY CODE

//****************************************************************************************

//MAIN GEMS

void Topaz(int i, int j)
{
	myRectangle(65 + j * 60, 65 + i * 60, 90 + j * 60, 90 + i * 60, 255, 0, 127);
	myRectangle(70 + j * 60, 70 + i * 60, 85 + j * 60, 85 + i * 60, 229, 204, 255);
}

void Sapphire(int i, int j)
{
	myEllipse(60 + j * 60, 60 + i * 60, 90 + j * 60, 100 + i * 60, 153, 0, 153);
	myEllipse(65 + j * 60, 65 + i * 60, 85 + j * 60, 95 + i * 60, 229, 204, 255);
}

void RubyDiamond(int i, int j)
{
	myLine(60 + j * 60, 80 + i * 60, 80 + j * 60, 60 + i * 60, 255, 0, 0);
	myLine(80 + j * 60, 60 + i * 60, 100 + j * 60, 80 + i * 60, 255, 0, 0);
	myLine(60 + j * 60, 80 + i * 60, 80 + j * 60, 100 + i * 60, 255, 0, 0);
	myLine(80 + j * 60, 100 + i * 60, 100 + j * 60, 80 + i * 60, 255, 0, 0);
}

void HexaGem(int i, int j)
{
	myLine(75 + j * 60, 60 + i * 60, 85 + j * 60, 60 + i * 60, 255, 128, 0);
	myLine(75 + j * 60, 100 + i * 60, 85 + j * 60, 100 + i * 60, 255, 128, 0);
	myLine(75 + j * 60, 60 + i * 60, 60 + j * 60, 75 + i * 60, 255, 128, 0);
	myLine(60 + j * 60, 75 + i * 60, 60 + j * 60, 85 + i * 60, 255, 128, 0);
	myLine(60 + j * 60, 85 + i * 60, 75 + j * 60, 100 + i * 60, 255, 128, 0);
	myLine(85 + j * 60, 60 + i * 60, 100 + j * 60, 75 + i * 60, 255, 128, 0);
	myLine(100 + j * 60, 75 + i * 60, 100 + j * 60, 85 + i * 60, 255, 128, 0);
	myLine(100 + j * 60, 85 + i * 60, 85 + j * 60, 100 + i * 60, 255, 128, 0);

}

void Crystal(int i, int j)
{
	myLine(75 + j * 60, 60 + i * 60, 95 + j * 60, 60 + i * 60, 0, 0, 102);
	myLine(75 + j * 60, 60 + i * 60, 65 + j * 60, 75 + i * 60, 0, 0, 102);
	myLine(95 + j * 60, 60 + i * 60, 105 + j * 60, 75 + i * 60, 0, 0, 102);
	myLine(105 + j * 60, 75 + i * 60, 85 + j * 60, 95 + i * 60, 0, 0, 102);
	myLine(65 + j * 60, 75 + i * 60, 85 + j * 60, 95 + i * 60, 0, 0, 102);
}
//*******************************************************************************************************
//SPECIAL GEMS for collection of 4

void SpecialTopaz(int i, int j)
{
	myRectangle(65 + j * 60, 65 + i * 60, 90 + j * 60, 90 + i * 60, 255, 0, 127);
	myRectangle(68 + j * 60, 68 + i * 60, 87 + j * 60, 87 + i * 60, 229, 204, 255);
	myLine1(70 + j * 60, 60 + i * 60, 70 + j * 60, 90 + i * 60, 255, 0, 127);
	myLine1(77 + j * 60, 60 + i * 60, 77 + j * 60, 90 + i * 60, 255, 0, 127);
	myLine1(84 + j * 60, 60 + i * 60, 84 + j * 60, 90 + i * 60, 255, 0, 127);
}

void SpecialSapp(int i, int j)
{
	myEllipse(60 + j * 60, 60 + i * 60, 90 + j * 60, 100 + i * 60, 153, 0, 153);
	myEllipse(64 + j * 60, 64 + i * 60, 86 + j * 60, 96 + i * 60, 229, 204, 255);
	myLine1(80 + j * 60, 62 + i * 60, 80 + j * 60, 95 + i * 60, 153, 0, 153);
	myLine1(75 + j * 60, 60 + i * 60, 75 + j * 60, 97 + i * 60, 153, 0, 153);
	myLine1(70 + j * 60, 61 + i * 60, 70 + j * 60, 99 + i * 60, 153, 0, 153);
}

void SpecialRuby(int i, int j)
{
	myLine1(60 + j * 60, 80 + i * 60, 80 + j * 60, 60 + i * 60, 255, 0, 0);
	myLine1(80 + j * 60, 60 + i * 60, 100 + j * 60, 80 + i * 60, 255, 0, 0);
	myLine1(60 + j * 60, 80 + i * 60, 80 + j * 60, 100 + i * 60, 255, 0, 0);
	myLine1(80 + j * 60, 100 + i * 60, 100 + j * 60, 80 + i * 60, 255, 0, 0);
	myLine1(80 + j * 60, 60 + i * 60, 80 + j * 60, 100 + i * 60, 255, 0, 0);
	myLine1(72 + j * 60, 69 + i * 60, 72 + j * 60, 91 + i * 60, 255, 0, 0);
	myLine1(89 + j * 60, 69 + i * 60, 89 + j * 60, 91 + i * 60, 255, 0, 0);
}

void SpecialCrystal(int i, int j)
{
	myLine1(75 + j * 60, 60 + i * 60, 95 + j * 60, 60 + i * 60, 0, 0, 102);
	myLine1(75 + j * 60, 60 + i * 60, 65 + j * 60, 75 + i * 60, 0, 0, 102);
	myLine1(95 + j * 60, 60 + i * 60, 105 + j * 60, 75 + i * 60, 0, 0, 102);
	myLine1(105 + j * 60, 75 + i * 60, 85 + j * 60, 95 + i * 60, 0, 0, 102);
	myLine1(65 + j * 60, 75 + i * 60, 85 + j * 60, 95 + i * 60, 0, 0, 102);
	myLine1(72 + j * 60, 62 + i * 60, 85 + j * 60, 95 + i * 60, 0, 0, 102);
	myLine1(98 + j * 60, 62 + i * 60, 85 + j * 60, 95 + i * 60, 0, 0, 102);
	myLine1(85 + j * 60, 60 + i * 60, 85 + j * 60, 95 + i * 60, 0, 0, 102);
}

void SpecialHexaGem(int i, int j)
{
	myLine1(75 + j * 60, 60 + i * 60, 85 + j * 60, 60 + i * 60, 255, 128, 0);
	myLine1(75 + j * 60, 100 + i * 60, 85 + j * 60, 100 + i * 60, 255, 128, 0);
	myLine1(75 + j * 60, 60 + i * 60, 60 + j * 60, 75 + i * 60, 255, 128, 0);
	myLine1(60 + j * 60, 75 + i * 60, 60 + j * 60, 85 + i * 60, 255, 128, 0);
	myLine1(60 + j * 60, 85 + i * 60, 75 + j * 60, 100 + i * 60, 255, 128, 0);
	myLine1(85 + j * 60, 60 + i * 60, 100 + j * 60, 75 + i * 60, 255, 128, 0);
	myLine1(100 + j * 60, 75 + i * 60, 100 + j * 60, 85 + i * 60, 255, 128, 0);
	myLine1(100 + j * 60, 85 + i * 60, 85 + j * 60, 100 + i * 60, 255, 128, 0);
	myLine1(75 + j * 60, 60 + i * 60, 75 + j * 60, 100 + i * 60, 255, 128, 0);
	myLine1(85 + j * 60, 60 + i * 60, 85 + j * 60, 100 + i * 60, 255, 128, 0);
	myLine1(67 + j * 60, 70 + i * 60, 67 + j * 60, 92 + i * 60, 255, 128, 0);
	myLine1(92 + j * 60, 70 + i * 60, 92 + j * 60, 92 + i * 60, 255, 128, 0);
}

//SPECIAL GEM 5 collection of gems

void ComboTopaz(int i, int j)
{
	myRectangle(65 + j * 60, 65 + i * 60, 90 + j * 60, 90 + i * 60, 255, 0, 127);
}
void ComboSapp(int i, int j)
{
	myEllipse(60 + j * 60, 60 + i * 60, 90 + j * 60, 100 + i * 60, 153, 0, 153);
}

void ComboCrystal(int i, int j)
{
	myLine(75 + j * 60, 60 + i * 60, 95 + j * 60, 60 + i * 60, 0, 0, 102);
	myLine(75 + j * 60, 60 + i * 60, 65 + j * 60, 75 + i * 60, 0, 0, 102);
	myLine(95 + j * 60, 60 + i * 60, 105 + j * 60, 75 + i * 60, 0, 0, 102);
	myLine(105 + j * 60, 75 + i * 60, 85 + j * 60, 95 + i * 60, 0, 0, 102);
	myLine(65 + j * 60, 75 + i * 60, 85 + j * 60, 95 + i * 60, 0, 0, 102);
	myLine(72 + j * 60, 62 + i * 60, 85 + j * 60, 95 + i * 60, 0, 0, 102);
	myLine(98 + j * 60, 62 + i * 60, 85 + j * 60, 95 + i * 60, 0, 0, 102);
	myLine(85 + j * 60, 60 + i * 60, 85 + j * 60, 95 + i * 60, 0, 0, 102);
}
void ComboHexaGem(int i, int j)
{
	myLine(75 + j * 60, 60 + i * 60, 85 + j * 60, 60 + i * 60, 255, 128, 0);
	myLine(75 + j * 60, 100 + i * 60, 85 + j * 60, 100 + i * 60, 255, 128, 0);
	myLine(75 + j * 60, 60 + i * 60, 60 + j * 60, 75 + i * 60, 255, 128, 0);
	myLine(60 + j * 60, 75 + i * 60, 60 + j * 60, 85 + i * 60, 255, 128, 0);
	myLine(60 + j * 60, 85 + i * 60, 75 + j * 60, 100 + i * 60, 255, 128, 0);
	myLine(85 + j * 60, 60 + i * 60, 100 + j * 60, 75 + i * 60, 255, 128, 0);
	myLine(100 + j * 60, 75 + i * 60, 100 + j * 60, 85 + i * 60, 255, 128, 0);
	myLine(100 + j * 60, 85 + i * 60, 85 + j * 60, 100 + i * 60, 255, 128, 0);
	myLine(75 + j * 60, 60 + i * 60, 75 + j * 60, 100 + i * 60, 255, 128, 0);
	myLine(85 + j * 60, 60 + i * 60, 85 + j * 60, 100 + i * 60, 255, 128, 0);
	myLine(67 + j * 60, 70 + i * 60, 67 + j * 60, 92 + i * 60, 255, 128, 0);
	myLine(92 + j * 60, 70 + i * 60, 92 + j * 60, 92 + i * 60, 255, 128, 0);
}
void ComboRuby(int i, int j)
{
	myLine(60 + j * 60, 80 + i * 60, 80 + j * 60, 60 + i * 60, 255, 0, 0);
	myLine(80 + j * 60, 60 + i * 60, 100 + j * 60, 80 + i * 60, 255, 0, 0);
	myLine(60 + j * 60, 80 + i * 60, 80 + j * 60, 100 + i * 60, 255, 0, 0);
	myLine(80 + j * 60, 100 + i * 60, 100 + j * 60, 80 + i * 60, 255, 0, 0);
	myLine(80 + j * 60, 60 + i * 60, 80 + j * 60, 100 + i * 60, 255, 0, 0);
	myLine(72 + j * 60, 69 + i * 60, 72 + j * 60, 91 + i * 60, 255, 0, 0);
	myLine(89 + j * 60, 69 + i * 60, 89 + j * 60, 91 + i * 60, 255, 0, 0);
}
void design()
{
	//diamond
	myLine2(800, 150, 1000, 150, 0, 204, 204);
	myLine2(800, 150, 700, 225, 0, 204, 204);
	myLine2(1000, 150, 1100, 225, 0, 204, 204);
	myLine2(700, 225, 900, 600, 0, 204, 204);
	myLine2(1100, 225, 900, 600, 0, 204, 204);
	myLine(700, 225, 800, 285, 0, 204, 204);
	myLine(800, 285, 1000, 285, 0, 204, 204);
	myLine(1000, 285, 1100, 225, 0, 204, 204);
	myLine(1000, 285, 900, 600, 0, 204, 204);
	myLine(800, 285, 900, 600, 0, 204, 204);
	//box
	myRectangle(650, 400, 1150, 500, 255, 255, 255);
	//B
	myLine2(660, 410, 660, 490, 0, 0, 0);
	myLine2(660, 410, 700, 420, 0, 0, 0);
	myLine2(700, 420, 660, 440, 0, 0, 0);
	myLine2(705, 490, 660, 490, 0, 0, 0);
	myLine2(705, 490, 660, 440, 0, 0, 0);
	//E
	myLine2(715, 410, 715, 490, 0, 0, 0);
	myLine2(715, 410, 745, 410, 0, 0, 0);
	myLine2(715, 440, 745, 440, 0, 0, 0);
	myLine2(715, 490, 745, 490, 0, 0, 0);
	//J
	myLine2(760, 410, 800, 410, 0, 0, 0);
	myLine2(780, 410, 780, 490, 0, 0, 0);
	myLine2(760, 490, 780, 490, 0, 0, 0);
	myLine2(760, 490, 760, 450, 0, 0, 0);
	//E
	myLine2(795, 410, 795, 490, 0, 0, 0);
	myLine2(795, 410, 825, 410, 0, 0, 0);
	myLine2(795, 440, 825, 440, 0, 0, 0);
	myLine2(795, 490, 825, 490, 0, 0, 0);
	//W
	myLine2(835, 410, 855, 490, 0, 0, 0);
	myLine2(870, 410, 855, 490, 0, 0, 0);
	myLine2(870, 410, 890, 490, 0, 0, 0);
	myLine2(900, 410, 890, 490, 0, 0, 0);
	//E
	myLine2(910, 410, 910, 490, 0, 0, 0);
	myLine2(910, 410, 940, 410, 0, 0, 0);
	myLine2(910, 440, 940, 440, 0, 0, 0);
	myLine2(910, 490, 940, 490, 0, 0, 0);
	//L
	myLine2(950, 410, 950, 490, 0, 0, 0);
	myLine2(950, 490, 980, 490, 0, 0, 0);
	//E
	myLine2(990, 410, 990, 490, 0, 0, 0);
	myLine2(990, 410, 1020, 410, 0, 0, 0);
	myLine2(990, 440, 1020, 440, 0, 0, 0);
	myLine2(990, 490, 1020, 490, 0, 0, 0);
	//D
	myLine2(1030, 410, 1030, 490, 0, 0, 0);
	myLine2(1030, 410, 1045, 410, 0, 0, 0);
	myLine2(1045, 410, 1065, 490, 0, 0, 0);
	myLine2(1030, 490, 1060, 490, 0, 0, 0);
	///
	myLine2(1080, 450, 1110, 410, 255, 0, 0);
	myLine2(1110, 410, 1140, 450, 255, 0, 0);
	myLine2(1080, 450, 1110, 490, 255, 0, 0);
	myLine2(1110, 490, 1140, 450, 255, 0, 0);
	//box
	myRectangle(750, 530, 1020, 630, 255, 255, 255);
	//B
	myLine2(760, 540, 760, 620, 0, 0, 0);
	myLine2(760, 540, 800, 555, 0, 0, 0);
	myLine2(800, 555, 760, 565, 0, 0, 0);
	myLine2(805, 620, 760, 620, 0, 0, 0);
	myLine2(805, 620, 760, 565, 0, 0, 0);
	//L
	myLine2(820, 540, 820, 620, 0, 0, 0);
	myLine2(820, 620, 850, 620, 0, 0, 0);
	//I
	myLine2(860, 540, 900, 540, 0, 0, 0);
	myLine2(880, 540, 880, 620, 0, 0, 0);
	myLine2(860, 620, 900, 620, 0, 0, 0);
	//T
	myLine2(910, 540, 950, 540, 0, 0, 0);
	myLine2(930, 540, 930, 620, 0, 0, 0);
	//Z
	myLine2(960, 540, 1000, 540, 0, 0, 0);
	myLine2(960, 620, 1000, 540, 0, 0, 0);
	myLine2(960, 620, 1000, 620, 0, 0, 0);
}
