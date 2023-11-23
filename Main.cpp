#include<iostream>
#include"Header.h"
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<thread>
using namespace std;
int seconds = 60;
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
bool CorrectSwaping(int ar[][8], int i, int j)               /// checks for the correct swaping
{
	bool correct = false; 
	if (ar[i][j] == ar[i][j + 2] && ar[i][j] == ar[i][j + 3])
	{
		correct = true;
	}
	if (ar[i][j] == ar[i][j - 2] && ar[i][j] == ar[i][j - 3])
	{
		correct = true;
	}
	if (ar[i][j] == ar[i + 1][j + 1] && ar[i][j] == ar[i + 2][j + 1])
	{
		correct = true;
	}
	if (ar[i][j] == ar[i + 1][j - 1] && ar[i][j] == ar[i + 2][j - 1])
	{
		correct = true;
	}
	if (ar[i][j] == ar[i - 1][j + 1] && ar[i][j] == ar[i - 2][j + 1])
	{
		correct = true;
	}
	if (ar[i][j] == ar[i - 1][j - 1] && ar[i][j] == ar[i - 2][j - 1])
	{
		correct = true;
	}
	if (ar[i][j] == ar[i - 1][j - 1] && ar[i][j] == ar[i + 1][j - 1])
	{
		correct = true;
	}
	if (ar[i][j] == ar[i - 1][j + 1] && ar[i][j] == ar[i + 1][j + 1])
	{
		correct = true;
	}

	if (ar[i][j] == ar[i + 2][j] && ar[i][j] == ar[i + 3][j])
	{
		correct = true;
	}
	if (ar[i][j] == ar[i - 2][j] && ar[i][j] == ar[i - 3][j])
	{
		correct = true;
	}
	if (ar[i][j] == ar[i + 1][j + 1] && ar[i][j] == ar[i + 1][j + 2])
	{
		correct = true;
	}
	if (ar[i][j] == ar[i - 1][j - 1] && ar[i][j] == ar[i - 1][j - 2])
	{
		correct = true;
	}
	if (ar[i][j] == ar[i + 1][j - 1] && ar[i][j] == ar[i + 1][j - 2])
	{
		correct = true;
	}
	if (ar[i][j] == ar[i - 1][j - 1] && ar[i][j] == ar[i - 1][j - 2])
	{
		correct = true;
	}
	if (ar[i][j] == ar[i - 1][j - 1] && ar[i][j] == ar[i - 1][j + 1])
	{
		correct = true;
	}
	if (ar[i][j] == ar[i + 1][j - 1] && ar[i][j] == ar[i + 1][j + 1])
	{
		correct = true;
	}
	if (ar[i][j] - 10 == ar[i][j + 2] && ar[i][j] - 10 == ar[i][j + 3])
	{
		correct = true;
	}
	if (ar[i][j] - 10 == ar[i][j - 2] && ar[i][j] - 10 == ar[i][j - 3])
	{
		correct = true;
	}
	if (ar[i][j] - 10 == ar[i + 1][j + 1] && ar[i][j] - 10 == ar[i + 2][j + 1])
	{
		correct = true;
	}
	if (ar[i][j] - 10 == ar[i + 1][j - 1] && ar[i][j] - 10 == ar[i + 2][j - 1])
	{
		correct = true;
	}
	if (ar[i][j] - 10 == ar[i - 1][j + 1] && ar[i][j] - 10 == ar[i - 2][j + 1])
	{
		correct = true;
	}
	if (ar[i][j] - 10 == ar[i - 1][j - 1] && ar[i][j] - 10 == ar[i - 2][j - 1])
	{
		correct = true;
	}
	if (ar[i][j] - 10 == ar[i - 1][j - 1] && ar[i][j] - 10 == ar[i + 1][j - 1])
	{
		correct = true;
	}
	if (ar[i][j] - 10 == ar[i - 1][j + 1] && ar[i][j] - 10 == ar[i + 1][j + 1])
	{
		correct = true;
	}

	if (ar[i][j] - 10 == ar[i + 2][j] && ar[i][j] - 10 == ar[i + 3][j])
	{
		correct = true;
	}
	if (ar[i][j] - 10 == ar[i - 2][j] && ar[i][j] - 10 == ar[i - 3][j])
	{
		correct = true;
	}
	if (ar[i][j] - 10 == ar[i + 1][j + 1] && ar[i][j] - 10 == ar[i + 1][j + 2])
	{
		correct = true;
	}
	if (ar[i][j] - 10 == ar[i - 1][j - 1] && ar[i][j] - 10 == ar[i - 1][j - 2])
	{
		correct = true;
	}
	if (ar[i][j] - 10 == ar[i + 1][j - 1] && ar[i][j] - 10 == ar[i + 1][j - 2])
	{
		correct = true;
	}
	if (ar[i][j] - 10 == ar[i - 1][j - 1] && ar[i][j] - 10 == ar[i - 1][j - 2])
	{
		correct = true;
	}
	if (ar[i][j] - 10 == ar[i - 1][j - 1] && ar[i][j] - 10 == ar[i - 1][j + 1])
	{
		correct = true;
	}
	if (ar[i][j] - 10 == ar[i + 1][j - 1] && ar[i][j] - 10 == ar[i + 1][j + 1])
	{
		correct = true;
	}
	if (ar[i][j] - 100 == ar[i][j + 2] && ar[i][j] - 100 == ar[i][j + 3])
	{
		correct = true;
	}
	if (ar[i][j] - 100 == ar[i][j - 2] && ar[i][j] - 100 == ar[i][j - 3])
	{
		correct = true;
	}
	if (ar[i][j] - 100 == ar[i + 1][j + 1] && ar[i][j] - 100 == ar[i + 2][j + 1])
	{
		correct = true;
	}
	if (ar[i][j] - 100 == ar[i + 1][j - 1] && ar[i][j] - 100 == ar[i + 2][j - 1])
	{
		correct = true;
	}
	if (ar[i][j] - 100 == ar[i - 1][j + 1] && ar[i][j] - 100 == ar[i - 2][j + 1])
	{
		correct = true;
	}
	if (ar[i][j] - 100 == ar[i - 1][j - 1] && ar[i][j] - 100 == ar[i - 2][j - 1])
	{
		correct = true;
	}
	if (ar[i][j] - 100 == ar[i - 1][j - 1] && ar[i][j] - 100 == ar[i + 1][j - 1])
	{
		correct = true;
	}
	if (ar[i][j] - 100 == ar[i - 1][j + 1] && ar[i][j] - 100 == ar[i + 1][j + 1])
	{
		correct = true;
	}

	if (ar[i][j] - 100 == ar[i + 2][j] && ar[i][j] - 100 == ar[i + 3][j])
	{
		correct = true;
	}
	if (ar[i][j] - 100 == ar[i - 2][j] && ar[i][j] - 100 == ar[i - 3][j])
	{
		correct = true;
	}
	if (ar[i][j] - 100 == ar[i + 1][j + 1] && ar[i][j] - 100 == ar[i + 1][j + 2])
	{
		correct = true;
	}
	if (ar[i][j] - 100 == ar[i - 1][j - 1] && ar[i][j] - 100 == ar[i - 1][j - 2])
	{
		correct = true;
	}
	if (ar[i][j] - 100 == ar[i + 1][j - 1] && ar[i][j] - 100 == ar[i + 1][j - 2])
	{
		correct = true;
	}
	if (ar[i][j] - 100 == ar[i - 1][j - 1] && ar[i][j] - 100 == ar[i - 1][j - 2])
	{
		correct = true;
	}
	if (ar[i][j] - 100 == ar[i - 1][j - 1] && ar[i][j] - 100 == ar[i - 1][j + 1])
	{
		correct = true;
	}
	if (ar[i][j] - 100 == ar[i + 1][j - 1] && ar[i][j] - 100 == ar[i + 1][j + 1])
	{
		correct = true;
	}


	
	if (correct == true)
		return true;
	return false;
}


//*************************
//MAIN BOARD

void MyJewelBoard(int a[][8])
{
	myRectangle(50, 50, 530, 530, 229, 204, 255);
	myLine(50, 50, 530, 50, 255, 255, 153);
	myLine(50, 50, 50, 530, 255, 255, 153);
	myLine(530, 50, 530, 530, 255, 255, 153);
	myLine(50, 530, 530, 530, 255, 255, 153);
	for (int i = 0; i < 8; i++)
	{
		myLine(50, 50 + i * 60, 530, 50 + i * 60, 255, 255, 153);
		myLine(50 + i * 60, 50, 50 + i * 60, 530, 255, 255, 153);
	}
}
//*****************************
// Filling board by simple gems and declaration of special and combo gems

void MyJewels(int a[][8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (a[i][j] == 0)
			{
				a[i][j] = (rand() % 5 + 1);
			}
			else if (a[i][j] == 1)
			{
				Topaz(i, j);
			}
			else if (a[i][j] == 2)
			{
				Sapphire(i, j);
			}
			else if (a[i][j] == 3)
			{
				RubyDiamond(i, j);
			}
			else if (a[i][j] == 4)
			{
				HexaGem(i, j);
			}
			else if (a[i][j] == 5)
			{
				Crystal(i, j);
			}
			else if (a[i][j] == 11)
			{
				SpecialTopaz(i, j);
			}
			else if (a[i][j] == 12)
			{
				SpecialSapp(i, j);
			}
			else if (a[i][j] == 13)
			{
				SpecialRuby(i, j);
			}
			else if (a[i][j] == 14)
			{
				SpecialHexaGem(i, j);
			}
			else if (a[i][j] == 15)
			{
				SpecialCrystal(i, j);
			}
			else if (a[i][j] == 101)
			{
				ComboTopaz(i, j);
			}
			else if (a[i][j] == 102)
			{
				ComboSapp(i, j);
			}
			else if (a[i][j] == 103)
			{
				ComboRuby(i, j);
			}
			else if (a[i][j] == 104)
			{
				ComboHexaGem(i, j);
			}
			else if (a[i][j] == 105)
			{
				ComboCrystal(i, j);
			}
		}
	}
}

//*****************************
//Combination update board

void CombinationUpdate(int ar[][8],int &score)
{
	for (int i = 0; i < 6; i++)                                            //TOP LEFT L
	{
		for (int j = 0; j < 6; j++)
		{
			if (ar[i][j] == ar[i + 1][j] && ar[i][j] == ar[i + 2][j] && ar[i][j] == ar[i][j + 1] && ar[i][j] == ar[i][j + 2])
			{
				if (ar[i][j] == 1)
				{
					ar[i][j] = 101;
				}
				else if (ar[i][j] == 2)
				{
					ar[i][j] = 102;
				}
				else if (ar[i][j] == 3)
				{
					ar[i][j] = 103;
				}
				else if (ar[i][j] == 4)
				{
					ar[i][j] = 104;
				}
				else if (ar[i][j] == 5)
				{
					ar[i][j] = 105;
				}
				if (i == 0)
				{
					ar[i + 1][j] = (rand() % 5 + 1);
					ar[i + 2][j] = (rand() % 5 + 1);
					ar[i][j + 1] = (rand() % 5 + 1);
					ar[i][j + 2] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				if (i == 1)
				{
					swap(ar[i + 2][j], ar[i - 1][j]);
					swap(ar[i][j + 1], ar[i - 1][j + 1]);
					swap(ar[i][j + 2], ar[i - 1][j + 2]);
					ar[i + 1][j] = (rand() % 5 + 1);
					ar[i - 1][j] = (rand() % 5 + 1);
					ar[i - 1][j + 1] = (rand() % 5 + 1);
					ar[i - 1][j + 2] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 2)
				{
					swap(ar[i + 2][j], ar[i - 1][j]);
					swap(ar[i + 1][j], ar[i - 2][j]);
					swap(ar[i][j + 1], ar[i - 1][j + 1]);
					swap(ar[i][j + 2], ar[i - 1][j + 2]);
					swap(ar[i - 1][j + 1], ar[i - 2][j + 1]);
					swap(ar[i - 1][j + 2], ar[i - 2][j + 2]);
					ar[i - 2][j] = (rand() % 5 + 1);
					ar[i - 1][j] = (rand() % 5 + 1);
					ar[i - 2][j + 1] = (rand() % 5 + 1);
					ar[i - 2][j + 2] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 3)
				{
					swap(ar[i + 2][j], ar[i - 1][j]);
					swap(ar[i + 1][j], ar[i - 2][j]);
					swap(ar[i - 1][j], ar[i - 3][j]);
					swap(ar[i][j + 1], ar[i - 1][j + 1]);
					swap(ar[i][j + 2], ar[i - 1][j + 2]);
					swap(ar[i - 1][j + 1], ar[i - 2][j + 1]);
					swap(ar[i - 1][j + 2], ar[i - 2][j + 2]);
					swap(ar[i - 2][j + 1], ar[i - 3][j + 1]);
					swap(ar[i - 2][j + 2], ar[i - 3][j + 2]);
					ar[i - 3][j] = (rand() % 5 + 1);
					ar[i - 1][j] = (rand() % 5 + 1);
					ar[i - 3][j + 1] = (rand() % 5 + 1);
					ar[i - 3][j + 2] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 4)
				{
					swap(ar[i + 2][j], ar[i - 1][j]);
					swap(ar[i + 1][j], ar[i - 2][j]);
					swap(ar[i - 1][j], ar[i - 3][j]);
					swap(ar[i - 2][j], ar[i - 4][j]);
					swap(ar[i][j + 1], ar[i - 1][j + 1]);
					swap(ar[i][j + 2], ar[i - 1][j + 2]);
					swap(ar[i - 1][j + 1], ar[i - 2][j + 1]);
					swap(ar[i - 1][j + 2], ar[i - 2][j + 2]);
					swap(ar[i - 2][j + 1], ar[i - 3][j + 1]);
					swap(ar[i - 2][j + 2], ar[i - 3][j + 2]);
					swap(ar[i - 3][j + 1], ar[i - 4][j + 1]);
					swap(ar[i - 3][j + 2], ar[i - 4][j + 2]);
					ar[i - 3][j] = (rand() % 5 + 1);
					ar[i - 4][j] = (rand() % 5 + 1);
					ar[i - 4][j + 1] = (rand() % 5 + 1);
					ar[i - 4][j + 2] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 5)
				{
					swap(ar[i + 2][j], ar[i - 1][j]);
					swap(ar[i + 1][j], ar[i - 2][j]);
					swap(ar[i - 1][j], ar[i - 3][j]);
					swap(ar[i - 2][j], ar[i - 4][j]);
					swap(ar[i - 3][j], ar[i - 5][j]);
					swap(ar[i][j + 1], ar[i - 1][j + 1]);
					swap(ar[i][j + 2], ar[i - 1][j + 2]);
					swap(ar[i - 1][j + 1], ar[i - 2][j + 1]);
					swap(ar[i - 1][j + 2], ar[i - 2][j + 2]);
					swap(ar[i - 2][j + 1], ar[i - 3][j + 1]);
					swap(ar[i - 2][j + 2], ar[i - 3][j + 2]);
					swap(ar[i - 3][j + 1], ar[i - 4][j + 1]);
					swap(ar[i - 3][j + 2], ar[i - 4][j + 2]);
					swap(ar[i - 4][j + 1], ar[i - 4][j + 1]);
					swap(ar[i - 4][j + 2], ar[i - 4][j + 2]);
					ar[i - 5][j] = (rand() % 5 + 1);
					ar[i - 4][j] = (rand() % 5 + 1);
					ar[i - 5][j + 1] = (rand() % 5 + 1);
					ar[i - 5][j + 2] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				score = score + 100;
			}
		}
	}
	//***************************************8
	for (int i = 0; i < 6; i++)                                        //TOP RIGHT L
	{
		for (int j = 7; j > 1; j--)
		{
			if (ar[i][j] == ar[i + 1][j] && ar[i][j] == ar[i + 2][j] && ar[i][j] == ar[i][j - 1] && ar[i][j] == ar[i][j - 2])
			{
				if (ar[i][j] == 1)
				{
					ar[i][j] = 101;
				}
				else if (ar[i][j] == 2)
				{
					ar[i][j] = 102;
				}
				else if (ar[i][j] == 3)
				{
					ar[i][j] = 103;
				}
				else if (ar[i][j] == 4)
				{
					ar[i][j] = 104;
				}
				else if (ar[i][j] == 5)
				{
					ar[i][j] = 105;
				}
				if (i == 0)
				{
					ar[i + 1][j] = (rand() % 5 + 1);
					ar[i + 2][j] = (rand() % 5 + 1);
					ar[i][j - 1] = (rand() % 5 + 1);
					ar[i][j - 2] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				if (i == 1)
				{
					swap(ar[i + 2][j], ar[i - 1][j]);
					swap(ar[i][j - 1], ar[i - 1][j - 1]);
					swap(ar[i][j - 2], ar[i - 1][j - 2]);
					ar[i + 1][j] = (rand() % 5 + 1);
					ar[i - 1][j] = (rand() % 5 + 1);
					ar[i - 1][j - 1] = (rand() % 5 + 1);
					ar[i - 1][j - 2] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 2)
				{
					swap(ar[i + 2][j], ar[i - 1][j]);
					swap(ar[i + 1][j], ar[i - 2][j]);
					swap(ar[i][j - 1], ar[i - 1][j - 1]);
					swap(ar[i][j - 2], ar[i - 1][j - 2]);
					swap(ar[i - 1][j - 1], ar[i - 2][j - 1]);
					swap(ar[i - 1][j - 2], ar[i - 2][j - 2]);
					ar[i - 2][j] = (rand() % 5 + 1);
					ar[i - 1][j] = (rand() % 5 + 1);
					ar[i - 2][j - 1] = (rand() % 5 + 1);
					ar[i - 2][j - 2] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 3)
				{
					swap(ar[i + 2][j], ar[i - 1][j]);
					swap(ar[i + 1][j], ar[i - 2][j]);
					swap(ar[i - 1][j], ar[i - 3][j]);
					swap(ar[i][j - 1], ar[i - 1][j - 1]);
					swap(ar[i][j - 2], ar[i - 1][j - 2]);
					swap(ar[i - 1][j - 1], ar[i - 2][j - 1]);
					swap(ar[i - 1][j - 2], ar[i - 2][j - 2]);
					swap(ar[i - 2][j - 1], ar[i - 3][j - 1]);
					swap(ar[i - 2][j - 2], ar[i - 3][j - 2]);
					ar[i - 3][j] = (rand() % 5 + 1);
					ar[i - 1][j] = (rand() % 5 + 1);
					ar[i - 3][j - 1] = (rand() % 5 + 1);
					ar[i - 3][j - 2] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 4)
				{
					swap(ar[i + 2][j], ar[i - 1][j]);
					swap(ar[i + 1][j], ar[i - 2][j]);
					swap(ar[i - 1][j], ar[i - 3][j]);
					swap(ar[i - 2][j], ar[i - 4][j]);
					swap(ar[i][j - 1], ar[i - 1][j - 1]);
					swap(ar[i][j - 2], ar[i - 1][j - 2]);
					swap(ar[i - 1][j - 1], ar[i - 2][j - 1]);
					swap(ar[i - 1][j - 2], ar[i - 2][j - 2]);
					swap(ar[i - 2][j - 1], ar[i - 3][j - 1]);
					swap(ar[i - 2][j - 2], ar[i - 3][j - 2]);
					swap(ar[i - 3][j - 1], ar[i - 4][j - 1]);
					swap(ar[i - 3][j - 2], ar[i - 4][j - 2]);
					ar[i - 3][j] = (rand() % 5 + 1);
					ar[i - 4][j] = (rand() % 5 + 1);
					ar[i - 4][j - 1] = (rand() % 5 + 1);
					ar[i - 4][j - 2] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 5)
				{
					swap(ar[i + 2][j], ar[i - 1][j]);
					swap(ar[i + 1][j], ar[i - 2][j]);
					swap(ar[i - 1][j], ar[i - 3][j]);
					swap(ar[i - 2][j], ar[i - 4][j]);
					swap(ar[i - 3][j], ar[i - 5][j]);
					swap(ar[i][j - 1], ar[i - 1][j - 1]);
					swap(ar[i][j - 2], ar[i - 1][j - 2]);
					swap(ar[i - 1][j - 1], ar[i - 2][j - 1]);
					swap(ar[i - 1][j - 2], ar[i - 2][j - 2]);
					swap(ar[i - 2][j - 1], ar[i - 3][j - 1]);
					swap(ar[i - 2][j - 2], ar[i - 3][j - 2]);
					swap(ar[i - 3][j - 1], ar[i - 4][j - 1]);
					swap(ar[i - 3][j - 2], ar[i - 4][j - 2]);
					swap(ar[i - 4][j - 1], ar[i - 4][j - 1]);
					swap(ar[i - 4][j - 2], ar[i - 4][j - 2]);
					ar[i - 5][j] = (rand() % 5 + 1);
					ar[i - 4][j] = (rand() % 5 + 1);
					ar[i - 5][j - 1] = (rand() % 5 + 1);
					ar[i - 5][j - 2] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				score = score + 100;
			}
		}
	}
	//*******************************
	for (int i = 7; i > 1; i--)                                                    //LOWER LEFT L
	{
		for (int j = 0; j < 6; j++)
		{
			if (ar[i][j] == ar[i - 1][j] && ar[i][j] == ar[i - 2][j] && ar[i][j] == ar[i][j + 1] && ar[i][j] == ar[i][j + 2])
			{
				if (ar[i][j] == 1)
				{
					ar[i][j] = 101;
				}
				else if (ar[i][j] == 2)
				{
					ar[i][j] = 102;
				}
				else if (ar[i][j] == 3)
				{
					ar[i][j] = 103;
				}
				else if (ar[i][j] == 4)
				{
					ar[i][j] = 104;
				}
				else if (ar[i][j] == 5)
				{
					ar[i][j] = 105;
				}
				if (i == 2)
				{
					ar[i - 1][j] = (rand() % 5 + 1);
					ar[i - 2][j] = (rand() % 5 + 1);
					swap(ar[i][j + 1], ar[i - 1][j + 1]);
					swap(ar[i][j + 2], ar[i - 1][j + 2]);
					swap(ar[i - 1][j + 1], ar[i - 2][j + 1]);
					swap(ar[i - 1][j + 2], ar[i - 2][j + 2]);
					ar[i - 2][j + 1] = (rand() % 5 + 1);
					ar[i - 2][j + 2] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				if (i == 3)
				{
					swap(ar[i - 1][j], ar[i - 3][j]);
					swap(ar[i][j + 1], ar[i - 1][j + 1]);
					swap(ar[i][j + 2], ar[i - 1][j + 2]);
					swap(ar[i - 1][j + 1], ar[i - 2][j + 1]);
					swap(ar[i - 1][j + 2], ar[i - 2][j + 2]);
					swap(ar[i - 2][j + 1], ar[i - 3][j + 1]);
					swap(ar[i - 2][j + 2], ar[i - 3][j + 2]);
					ar[i - 3][j + 1] = (rand() % 5 + 1);
					ar[i - 3][j + 2] = (rand() % 5 + 1);
					ar[i - 3][j] = (rand() % 5 + 1);
					ar[i - 2][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				if (i == 4)
				{
					swap(ar[i - 1][j], ar[i - 3][j]);
					swap(ar[i - 2][j], ar[i - 4][j]);
					swap(ar[i][j + 1], ar[i - 1][j + 1]);
					swap(ar[i][j + 2], ar[i - 1][j + 2]);
					swap(ar[i - 1][j + 1], ar[i - 2][j + 1]);
					swap(ar[i - 1][j + 2], ar[i - 2][j + 2]);
					swap(ar[i - 2][j + 2], ar[i - 3][j + 2]);
					swap(ar[i - 2][j + 1], ar[i - 3][j + 1]);
					swap(ar[i - 3][j + 2], ar[i - 4][j + 2]);
					swap(ar[i - 3][j + 1], ar[i - 4][j + 1]);
					ar[i - 4][j + 1] = (rand() % 5 + 1);
					ar[i - 4][j + 2] = (rand() % 5 + 1);
					ar[i - 3][j] = (rand() % 5 + 1);
					ar[i - 2][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				if (i == 5)
				{
					swap(ar[i - 1][j], ar[i - 3][j]);
					swap(ar[i - 2][j], ar[i - 4][j]);
					swap(ar[i - 3][j], ar[i - 5][j]);
					swap(ar[i][j + 1], ar[i - 1][j + 1]);
					swap(ar[i][j + 2], ar[i - 1][j + 2]);
					swap(ar[i - 1][j + 1], ar[i - 2][j + 1]);
					swap(ar[i - 1][j + 2], ar[i - 2][j + 2]);
					swap(ar[i - 2][j + 2], ar[i - 3][j + 2]);
					swap(ar[i - 2][j + 1], ar[i - 3][j + 1]);
					swap(ar[i - 3][j + 2], ar[i - 4][j + 2]);
					swap(ar[i - 3][j + 1], ar[i - 4][j + 1]);
					swap(ar[i - 4][j + 2], ar[i - 5][j + 2]);
					swap(ar[i - 4][j + 1], ar[i - 5][j + 1]);
					ar[i - 5][j + 1] = (rand() % 5 + 1);
					ar[i - 5][j + 2] = (rand() % 5 + 1);
					ar[i - 5][j] = (rand() % 5 + 1);
					ar[i - 4][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 6)
				{
					swap(ar[i - 1][j], ar[i - 3][j]);
					swap(ar[i - 2][j], ar[i - 4][j]);
					swap(ar[i - 3][j], ar[i - 5][j]);
					swap(ar[i - 4][j], ar[i - 6][j]);
					swap(ar[i][j + 1], ar[i - 1][j + 1]);
					swap(ar[i][j + 2], ar[i - 1][j + 2]);
					swap(ar[i - 1][j + 1], ar[i - 2][j + 1]);
					swap(ar[i - 1][j + 2], ar[i - 2][j + 2]);
					swap(ar[i - 2][j + 2], ar[i - 3][j + 2]);
					swap(ar[i - 2][j + 1], ar[i - 3][j + 1]);
					swap(ar[i - 3][j + 2], ar[i - 4][j + 2]);
					swap(ar[i - 3][j + 1], ar[i - 4][j + 1]);
					swap(ar[i - 4][j + 2], ar[i - 5][j + 2]);
					swap(ar[i - 4][j + 1], ar[i - 5][j + 1]);
					swap(ar[i - 5][j + 2], ar[i - 6][j + 2]);
					swap(ar[i - 5][j + 1], ar[i - 6][j + 1]);
					ar[i - 5][j + 1] = (rand() % 5 + 1);
					ar[i - 5][j + 2] = (rand() % 5 + 1);
					ar[i - 5][j] = (rand() % 5 + 1);
					ar[i - 6][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 7)
				{
					swap(ar[i - 1][j], ar[i - 3][j]);
					swap(ar[i - 2][j], ar[i - 4][j]);
					swap(ar[i - 3][j], ar[i - 5][j]);
					swap(ar[i - 4][j], ar[i - 6][j]);
					swap(ar[i - 5][j], ar[i - 7][j]);
					swap(ar[i][j + 1], ar[i - 1][j + 1]);
					swap(ar[i][j + 2], ar[i - 1][j + 2]);
					swap(ar[i - 1][j + 1], ar[i - 2][j + 1]);
					swap(ar[i - 1][j + 2], ar[i - 2][j + 2]);
					swap(ar[i - 2][j + 2], ar[i - 3][j + 2]);
					swap(ar[i - 2][j + 1], ar[i - 3][j + 1]);
					swap(ar[i - 3][j + 2], ar[i - 4][j + 2]);
					swap(ar[i - 3][j + 1], ar[i - 4][j + 1]);
					swap(ar[i - 4][j + 2], ar[i - 5][j + 2]);
					swap(ar[i - 4][j + 1], ar[i - 5][j + 1]);
					swap(ar[i - 5][j + 2], ar[i - 6][j + 2]);
					swap(ar[i - 5][j + 1], ar[i - 6][j + 1]);
					swap(ar[i - 6][j + 2], ar[i - 7][j + 2]);
					swap(ar[i - 6][j + 1], ar[i - 7][j + 1]);
					ar[i - 6][j + 1] = (rand() % 5 + 1);
					ar[i - 6][j + 2] = (rand() % 5 + 1);
					ar[i - 7][j] = (rand() % 5 + 1);
					ar[i - 6][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				score = score + 100;
			}
		}
	}
	//******************************
	for (int i = 7; i > 1; i--)                                              //LOWER RIGHT
	{
		for (int j = 7; j > 1; j--)
		{
			if (ar[i][j] == ar[i - 1][j] && ar[i][j] == ar[i - 2][j] && ar[i][j] == ar[i][j - 1] && ar[i][j] == ar[i][j - 2])
			{
				if (ar[i][j] == 1)
				{
					ar[i][j] = 101;
				}
				else if (ar[i][j] == 2)
				{
					ar[i][j] = 102;
				}
				else if (ar[i][j] == 3)
				{
					ar[i][j] = 103;
				}
				else if (ar[i][j] == 4)
				{
					ar[i][j] = 104;
				}
				else if (ar[i][j] == 5)
				{
					ar[i][j] = 105;
				}
				if (i == 2)
				{
					ar[i - 1][j] = (rand() % 5 + 1);
					ar[i - 2][j] = (rand() % 5 + 1);
					swap(ar[i][j - 1], ar[i - 1][j - 1]);
					swap(ar[i][j - 2], ar[i - 1][j - 2]);
					swap(ar[i - 1][j - 1], ar[i - 2][j - 1]);
					swap(ar[i - 1][j - 2], ar[i - 2][j - 2]);
					ar[i - 2][j - 1] = (rand() % 5 + 1);
					ar[i - 2][j - 2] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				if (i == 3)
				{
					swap(ar[i - 1][j], ar[i - 3][j]);
					swap(ar[i][j - 1], ar[i - 1][j - 1]);
					swap(ar[i][j - 2], ar[i - 1][j - 2]);
					swap(ar[i - 1][j - 1], ar[i - 2][j - 1]);
					swap(ar[i - 1][j - 2], ar[i - 2][j - 2]);
					swap(ar[i - 2][j - 1], ar[i - 3][j - 1]);
					swap(ar[i - 2][j - 2], ar[i - 3][j - 2]);
					ar[i - 3][j - 1] = (rand() % 5 + 1);
					ar[i - 3][j - 2] = (rand() % 5 + 1);
					ar[i - 3][j] = (rand() % 5 + 1);
					ar[i - 2][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				if (i == 4)
				{
					swap(ar[i - 1][j], ar[i - 3][j]);
					swap(ar[i - 2][j], ar[i - 4][j]);
					swap(ar[i][j - 1], ar[i - 1][j - 1]);
					swap(ar[i][j - 2], ar[i - 1][j - 2]);
					swap(ar[i - 1][j - 1], ar[i - 2][j - 1]);
					swap(ar[i - 1][j - 2], ar[i - 2][j - 2]);
					swap(ar[i - 2][j - 2], ar[i - 3][j - 2]);
					swap(ar[i - 2][j - 1], ar[i - 3][j - 1]);
					swap(ar[i - 3][j - 2], ar[i - 4][j - 2]);
					swap(ar[i - 3][j - 1], ar[i - 4][j - 1]);
					ar[i - 4][j - 1] = (rand() % 5 + 1);
					ar[i - 4][j - 2] = (rand() % 5 + 1);
					ar[i - 3][j] = (rand() % 5 + 1);
					ar[i - 2][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				if (i == 5)
				{
					swap(ar[i - 1][j], ar[i - 3][j]);
					swap(ar[i - 2][j], ar[i - 4][j]);
					swap(ar[i - 3][j], ar[i - 5][j]);
					swap(ar[i][j - 1], ar[i - 1][j - 1]);
					swap(ar[i][j - 2], ar[i - 1][j - 2]);
					swap(ar[i - 1][j - 1], ar[i - 2][j - 1]);
					swap(ar[i - 1][j - 2], ar[i - 2][j - 2]);
					swap(ar[i - 2][j - 2], ar[i - 3][j - 2]);
					swap(ar[i - 2][j - 1], ar[i - 3][j - 1]);
					swap(ar[i - 3][j - 2], ar[i - 4][j - 2]);
					swap(ar[i - 3][j - 1], ar[i - 4][j - 1]);
					swap(ar[i - 4][j - 2], ar[i - 5][j - 2]);
					swap(ar[i - 4][j - 1], ar[i - 5][j - 1]);
					ar[i - 5][j - 1] = (rand() % 5 + 1);
					ar[i - 5][j - 2] = (rand() % 5 + 1);
					ar[i - 5][j] = (rand() % 5 + 1);
					ar[i - 4][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 6)
				{
					swap(ar[i - 1][j], ar[i - 3][j]);
					swap(ar[i - 2][j], ar[i - 4][j]);
					swap(ar[i - 3][j], ar[i - 5][j]);
					swap(ar[i - 4][j], ar[i - 6][j]);
					swap(ar[i][j - 1], ar[i - 1][j - 1]);
					swap(ar[i][j - 2], ar[i - 1][j - 2]);
					swap(ar[i - 1][j - 1], ar[i - 2][j - 1]);
					swap(ar[i - 1][j - 2], ar[i - 2][j - 2]);
					swap(ar[i - 2][j - 2], ar[i - 3][j - 2]);
					swap(ar[i - 2][j - 1], ar[i - 3][j - 1]);
					swap(ar[i - 3][j - 2], ar[i - 4][j - 2]);
					swap(ar[i - 3][j - 1], ar[i - 4][j - 1]);
					swap(ar[i - 4][j - 2], ar[i - 5][j - 2]);
					swap(ar[i - 4][j - 1], ar[i - 5][j - 1]);
					swap(ar[i - 5][j - 2], ar[i - 6][j - 2]);
					swap(ar[i - 5][j - 1], ar[i - 6][j - 1]);
					ar[i - 5][j - 1] = (rand() % 5 + 1);
					ar[i - 5][j - 2] = (rand() % 5 + 1);
					ar[i - 5][j] = (rand() % 5 + 1);
					ar[i - 6][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 7)
				{
					swap(ar[i - 1][j], ar[i - 3][j]);
					swap(ar[i - 2][j], ar[i - 4][j]);
					swap(ar[i - 3][j], ar[i - 5][j]);
					swap(ar[i - 4][j], ar[i - 6][j]);
					swap(ar[i - 5][j], ar[i - 7][j]);
					swap(ar[i][j - 1], ar[i - 1][j - 1]);
					swap(ar[i][j - 2], ar[i - 1][j - 2]);
					swap(ar[i - 1][j - 1], ar[i - 2][j - 1]);
					swap(ar[i - 1][j - 2], ar[i - 2][j - 2]);
					swap(ar[i - 2][j - 2], ar[i - 3][j - 2]);
					swap(ar[i - 2][j - 1], ar[i - 3][j - 1]);
					swap(ar[i - 3][j - 2], ar[i - 4][j - 2]);
					swap(ar[i - 3][j - 1], ar[i - 4][j - 1]);
					swap(ar[i - 4][j - 2], ar[i - 5][j - 2]);
					swap(ar[i - 4][j - 1], ar[i - 5][j - 1]);
					swap(ar[i - 5][j - 2], ar[i - 6][j - 2]);
					swap(ar[i - 5][j - 1], ar[i - 6][j - 1]);
					swap(ar[i - 6][j - 2], ar[i - 7][j - 2]);
					swap(ar[i - 6][j - 1], ar[i - 7][j - 1]);
					ar[i - 6][j - 1] = (rand() % 5 + 1);
					ar[i - 6][j - 2] = (rand() % 5 + 1);
					ar[i - 7][j] = (rand() % 5 + 1);
					ar[i - 6][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				score = score + 100;
			}
		}
	}
	//*************************
	for (int i = 0; i < 4; i++)                                                    // 5 gem combination vertically
	{
		for (int j = 0; j < 8; j++)
		{
			if (ar[i][j] == ar[i + 1][j] && ar[i][j] == ar[i + 2][j] && ar[i][j] == ar[i + 3][j] && ar[i][j] == ar[i + 4][j])
			{
				if (ar[i][j] == 1)
				{
					ar[i][j] = 11;
				}
				else if (ar[i][j] == 2)
				{
					ar[i][j] = 12;
				}
				else if (ar[i][j] == 3)
				{
					ar[i][j] = 13;
				}
				else if (ar[i][j] == 4)
				{
					ar[i][j] = 14;
				}
				else if (ar[i][j] == 5)
				{
					ar[i][j] = 15;
				}
				if (i == 0)
				{
					ar[i + 4][j] = (rand() % 5 + 1);
					ar[i + 3][j] = (rand() % 5 + 1);
					ar[i + 2][j] = (rand() % 5 + 1);
					ar[i + 1][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 1)
				{
					swap(ar[i + 4][j], ar[i - 1][j]);
					ar[i + 3][j] = (rand() % 5 + 1);
					ar[i + 2][j] = (rand() % 5 + 1);
					ar[i - 1][j] = (rand() % 5 + 1);
					ar[i + 1][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 2)
				{

					swap(ar[i + 4][j], ar[i - 1][j]);
					swap(ar[i + 3][j], ar[i - 2][j]);
					ar[i + 2][j] = (rand() % 5 + 1);
					ar[i + 1][j] = (rand() % 5 + 1);
					ar[i - 1][j] = (rand() % 5 + 1);
					ar[i - 2][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 3)
				{
					swap(ar[i + 4][j], ar[i - 1][j]);
					swap(ar[i + 3][j], ar[i - 2][j]);
					swap(ar[i + 2][j], ar[i - 3][j]);
					swap(ar[i + 1][j], ar[i - 4][j]);
					ar[i - 3][j] = (rand() % 5 + 1);
					ar[i - 1][j] = (rand() % 5 + 1);
					ar[i - 2][j] = (rand() % 5 + 1);
					ar[i - 4][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				score = score + 50;
			}
		}
	}
	//***********************************
	for (int i = 0; i < 8; i++)                                   // 5 gem combination horizontal
	{
		for (int j = 0; j < 4; j++)
		{
			if (ar[i][j] == ar[i][j + 1] && ar[i][j] == ar[i][j + 2] && ar[i][j] == ar[i][j + 3] && ar[i][j] == ar[i][j + 4])
			{

				if (ar[i][j] == 1)
				{
					ar[i][j] = 11;
				}
				else if (ar[i][j] == 2)
				{
					ar[i][j] = 12;
				}
				else if (ar[i][j] == 3)
				{
					ar[i][j] = 13;
				}
				else if (ar[i][j] == 4)
				{
					ar[i][j] = 14;
				}
				else if (ar[i][j] == 5)
				{
					ar[i][j] = 15;
				}
				if (i == 0)
				{
					ar[i][j + 3] = (rand() % 5 + 1);
					ar[i][j + 1] = (rand() % 5 + 1);
					ar[i][j + 2] = (rand() % 5 + 1);
					ar[i][j + 4] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i > 0)
				{
					for (int k = 0; k <= i; k++)
					{
						if (k != i)
						{
							swap(ar[i - k][j + 3], ar[i - (k + 1)][j]);
							swap(ar[i - k][j + 1], ar[i - (k + 1)][j + 1]);
							swap(ar[i - k][j + 2], ar[i - (k + 1)][j + 2]);
							swap(ar[i - k][j + 4], ar[i - (k + 1)][j + 4]);
						}
						else if (k == i)
						{
							ar[i - k][j + 4] = (rand() % 5 + 1);
							ar[i - k][j + 3] = (rand() % 5 + 1);
							ar[i - k][j + 1] = (rand() % 5 + 1);
							ar[i - k][j + 2] = (rand() % 5 + 1);
						}
						MyJewelBoard(ar);
						MyJewels(ar);
					}
					score = score + 50;
				}
			}
		}
	}	//***************************************88
	for (int i = 0; i < 5; i++)                                       //4 gem combination for special gem vertically
	{
		for (int j = 0; j < 8; j++)
		{
			if (ar[i][j] == ar[i + 1][j] && ar[i][j] == ar[i + 2][j] && ar[i][j] == ar[i + 3][j])
			{
				if (ar[i][j] == 1)
				{
					ar[i][j] = 11;
				}
				else if (ar[i][j] == 2)
				{
					ar[i][j] = 12;
				}
				else if (ar[i][j] == 3)
				{
					ar[i][j] = 13;
				}
				else if (ar[i][j] == 4)
				{
					ar[i][j] = 14;
				}
				else if (ar[i][j] == 5)
				{
					ar[i][j] = 15;
				}
				if (i == 0)
				{

					ar[i + 3][j] = (rand() % 5 + 1);
					ar[i + 2][j] = (rand() % 5 + 1);
					ar[i + 1][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				if (i == 1)
				{

					swap(ar[i + 3][j], ar[i - 1][j]);
					ar[i + 2][j] = (rand() % 5 + 1);
					ar[i - 1][j] = (rand() % 5 + 1);
					ar[i + 1][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 2)
				{

					swap(ar[i + 3][j], ar[i - 1][j]);
					swap(ar[i + 2][j], ar[i - 2][j]);
					ar[i + 1][j] = (rand() % 5 + 1);
					ar[i - 1][j] = (rand() % 5 + 1);
					ar[i - 2][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 3)
				{

					swap(ar[i + 3][j], ar[i - 1][j]);
					swap(ar[i + 2][j], ar[i - 2][j]);
					swap(ar[i + 1][j], ar[i - 3][j]);
					ar[i - 3][j] = (rand() % 5 + 1);
					ar[i - 1][j] = (rand() % 5 + 1);
					ar[i - 2][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 4)
				{

					swap(ar[i + 3][j], ar[i - 1][j]);
					swap(ar[i + 2][j], ar[i - 2][j]);
					swap(ar[i + 1][j], ar[i - 3][j]);
					swap(ar[i - 1][j], ar[i - 4][j]);
					ar[i - 3][j] = (rand() % 5 + 1);
					ar[i - 4][j] = (rand() % 5 + 1);
					ar[i - 2][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				score = score + 25;
			}

		}
	}
	//************************************
	for (int i = 0; i < 8; i++)                                  // 4 gem combination for special gem horizontally
	{
		for (int j = 0; j < 5; j++)
		{
			if (ar[i][j] == ar[i][j + 1] && ar[i][j] == ar[i][j + 2] && ar[i][j] == ar[i][j + 3])
			{

				if (ar[i][j] == 1)
				{
					ar[i][j] = 11;
				}
				else if (ar[i][j] == 2)
				{
					ar[i][j] = 12;
				}
				else if (ar[i][j] == 3)
				{
					ar[i][j] = 13;
				}
				else if (ar[i][j] == 4)
				{
					ar[i][j] = 14;
				}
				else if (ar[i][j] == 5)
				{
					ar[i][j] = 15;
				}
				if (i == 0)
				{
					ar[i][j + 3] = (rand() % 5 + 1);
					ar[i][j + 1] = (rand() % 5 + 1);
					ar[i][j + 2] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i > 0)
				{
					for (int k = 0; k <= i; k++)
					{
						if (k != i)
						{
							swap(ar[i - k][j + 3], ar[i - (k + 1)][j]);
							swap(ar[i - k][j + 1], ar[i - (k + 1)][j + 1]);
							swap(ar[i - k][j + 2], ar[i - (k + 1)][j + 2]);
						}
						else if (k == i)
						{
							ar[i - k][j + 3] = (rand() % 5 + 1);
							ar[i - k][j + 1] = (rand() % 5 + 1);
							ar[i - k][j + 2] = (rand() % 5 + 1);
						}
					}
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				score = score +25;
			}
		}
	}
	//******************************88
	for (int i = 0; i < 6; i++)                                          //check for vertical combination
	{
		for (int j = 0; j < 8; j++)
		{
			if (ar[i][j] > 100 || ar[i + 1][j] > 100 || ar[i + 2][j] > 100)                 // COMBO
			{
				if (ar[i][j] > 100 && ar[i][j] - 100 == ar[i + 1][j] && ar[i][j] - 100 == ar[i + 2][j])
				{
					for (int k = 0; k < 8; k++)
					{
						ar[k][j] = (rand() % 5 + 1);
					}
					for (int k = 0; k < 8; k++)
					{
						if (k < 7)
						{
							swap(ar[i][j - k], ar[i][j - (k + 1)]);
						}
						else if (k == 7)
						{
							ar[i][k] = (rand() % 5 + 1);
						}
					}
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (ar[i + 1][j] > 100 && ar[i + 1][j] - 100 == ar[i][j] && ar[i + 1][j] - 100 == ar[i + 2][j])
				{
					for (int k = 0; k < 8; k++)
					{
						ar[k][j] = (rand() % 5 + 1);
					}
					for (int k = 0; k < 8; k++)
					{
						if (k < 7)
						{
							swap(ar[i][j - k], ar[i][j - (k + 1)]);
						}
						else if (k == 7)
						{
							ar[i][k] = (rand() % 5 + 1);
						}
					}
					MyJewelBoard(ar);
					MyJewels(ar);

				}
				else if (ar[i + 2][j] > 100 && ar[i + 2][j] - 100 == ar[i][j] && ar[i + 2][j] - 100 == ar[i + 1][j])
				{
					for (int k = 0; k < 8; k++)
					{
						ar[k][j] = (rand() % 5 + 1);
					}
					for (int k = 0; k < 8; k++)
					{
						if (k < 7)
						{
							swap(ar[i][j - k], ar[i][j - (k + 1)]);
						}
						else if (k == 7)
						{
							ar[i][k] = (rand() % 5 + 1);
						}
					}
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				score = score + 80;
			}
			if (ar[i][j] > 10 || ar[i + 1][j] > 10 || ar[i + 2][j] > 10)                          //SPECIAL
			{
				if (ar[i][j] > 10 && ar[i][j] - 10 == ar[i + 1][j] && ar[i][j] - 10 == ar[i + 2][j])
				{
					for (int k = 0; k < 8; k++)
					{
						ar[k][j] = (rand() % 5 + 1);
					}

				}
				else if (ar[i + 1][j] > 10 && ar[i + 1][j] - 10 == ar[i][j] && ar[i + 1][j] - 10 == ar[i + 2][j])
				{

					for (int k = 0; k < 8; k++)
					{
						ar[k][j] = (rand() % 5 + 1);
					}
				}

				else if (ar[i + 2][j] > 10 && ar[i + 2][j] - 10 == ar[i][j] && ar[i + 2][j] - 10 == ar[i + 1][j])
				{
					for (int k = 0; k < 8; k++)
					{
						ar[k][j] = (rand() % 5 + 1);
					}

				}
				MyJewelBoard(ar);
				MyJewels(ar);
				score = score + 70;
			}
			if (ar[i][j] == ar[i + 1][j] && ar[i][j] == ar[i + 2][j])                                  //NORMAL
			{
				if (i == 0)
				{

					ar[i][j] = (rand() % 5 + 1);
					ar[i + 2][j] = (rand() % 5 + 1);
					ar[i + 1][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				if (i == 1)
				{

					swap(ar[i + 2][j], ar[i - 1][j]);
					ar[i][j] = (rand() % 5 + 1);
					ar[i - 1][j] = (rand() % 5 + 1);
					ar[i + 1][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 2)
				{

					swap(ar[i + 2][j], ar[i - 1][j]);
					swap(ar[i + 1][j], ar[i - 2][j]);
					ar[i][j] = (rand() % 5 + 1);
					ar[i - 1][j] = (rand() % 5 + 1);
					ar[i - 2][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 3)
				{

					swap(ar[i + 2][j], ar[i - 1][j]);
					swap(ar[i + 1][j], ar[i - 2][j]);
					swap(ar[i][j], ar[i - 3][j]);
					ar[i - 3][j] = (rand() % 5 + 1);
					ar[i - 1][j] = (rand() % 5 + 1);
					ar[i - 2][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 4)
				{

					swap(ar[i + 2][j], ar[i - 1][j]);
					swap(ar[i + 1][j], ar[i - 2][j]);
					swap(ar[i][j], ar[i - 3][j]);
					swap(ar[i - 1][j], ar[i - 4][j]);
					ar[i - 3][j] = (rand() % 5 + 1);
					ar[i - 4][j] = (rand() % 5 + 1);
					ar[i - 2][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				else if (i == 5)
				{

					swap(ar[i + 2][j], ar[i - 1][j]);
					swap(ar[i + 1][j], ar[i - 2][j]);
					swap(ar[i][j], ar[i - 3][j]);
					swap(ar[i - 1][j], ar[i - 4][j]);
					swap(ar[i - 2][j], ar[i - 5][j]);
					ar[i - 3][j] = (rand() % 5 + 1);
					ar[i - 4][j] = (rand() % 5 + 1);
					ar[i - 5][j] = (rand() % 5 + 1);
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				score = score + 10;
			}

		}
	}
	//********************************
	for (int i = 0; i < 8; i++)                                          //check for horizonatal combination
	{
		for (int j = 0; j < 6; j++)
		{
			if (ar[i][j] > 100 || ar[i][j + 1] > 100 || ar[i][j + 2] > 100)                          //COMBO
			{
				if (ar[i][j] > 100 && ar[i][j] - 100 == ar[i][j + 1] && ar[i][j] - 100 == ar[i][j + 2])
				{
					for (int k = 0; k < 8; k++)
					{
						ar[k][j] = (rand() % 5 + 1);
					}
					for (int k = 0; k < 8; k++)
					{
						if (k < 7)
						{
							swap(ar[i][j - k], ar[i][j - (k + 1)]);
						}
						else if (k == 7)
						{
							ar[i][k] = (rand() % 5 + 1);
						}
					}
					MyJewelBoard(ar);
					MyJewels(ar);
					score = score + 80;
				}
				if (ar[i][j + 1] > 100 && ar[i][j + 1] - 100 == ar[i][j] && ar[i][j + 1] - 100 == ar[i][j + 2])
				{
					for (int k = 0; k < 8; k++)
					{
						ar[k][j] = (rand() % 5 + 1);
					}
					for (int k = 0; k < 8; k++)
					{
						if (k < 7)
						{
							swap(ar[i][j - k], ar[i][j - (k + 1)]);
						}
						else if (k == 7)
						{
							ar[i][k] = (rand() % 5 + 1);
						}
					}
					MyJewelBoard(ar);
					MyJewels(ar);
					score = score + 80;
				}
				if (ar[i][j + 2] > 100 && ar[i][j + 2] - 100 == ar[i][j + 1] && ar[i][j + 2] - 100 == ar[i][j])
				{
					for (int k = 0; k < 8; k++)
					{
						ar[k][j] = (rand() % 5 + 1);
					}
					for (int k = 0; k < 8; k++)
					{
						if (k < 7)
						{
							swap(ar[i][j - k], ar[i][j - (k + 1)]);
						}
						else if (k == 7)
						{
							ar[i][k] = (rand() % 5 + 1);
						}
					}
				}
				score = score + 80;
				MyJewelBoard(ar);
				MyJewels(ar);
			}
			if (ar[i][j] > 10 || ar[i][j + 1] > 10 || ar[i][j + 2] > 10)                       //SPECIAL
			{
				if (ar[i][j] > 10 && ar[i][j] - 10 == ar[i][j + 1] && ar[i][j] - 10 == ar[i][j + 2])
				{
					if (i == 0)
					{
						for (int k = 0; k < 8; k++)
						{
							ar[i][k] = (rand() % 5 + 1);
						}
					}
					else if (i > 0)
					{
						for (int k = 0; k <= i; k++)
						{
							if (k != i)
							{
								for (int a = 0; a < 8; a++)
								{
									swap(ar[i - k][a], ar[i - (k + 1)][a]);
								}
							}
							else if (k == i)
							{
								for (int a = 0; a < 8; a++)
								{
									ar[i - k][a] = (rand() % 5 + 1);
								}

							}
						}
					}
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				if (ar[i][j + 1] > 10 && ar[i][j + 1] - 10 == ar[i][j] && ar[i][j + 1] - 10 == ar[i][j + 2])
				{
					if (i == 0)
					{
						for (int k = 0; k < 8; k++)
						{
							ar[i][k] = (rand() % 5 + 1);
						}
					}
					else if (i > 0)
					{
						for (int k = 0; k <= i; k++)
						{
							if (k != i)
							{
								for (int a = 0; a < 8; a++)
								{
									swap(ar[i - k][a], ar[i - (k + 1)][a]);
								}
							}
							else if (k == i)
							{
								for (int a = 0; a < 8; a++)
								{
									ar[i - k][a] = (rand() % 5 + 1);
								}

							}
						}
					}
					MyJewelBoard(ar);
					MyJewels(ar);
				}
				if (ar[i][j + 2] > 10 && ar[i][j + 2] - 10 == ar[i][j + 1] && ar[i][j + 2] - 10 == ar[i][j])
				{
					if (i == 0)
					{
						for (int k = 0; k < 8; k++)
						{
							ar[i][k] = (rand() % 5 + 1);
						}
					}
					else if (i > 0)
					{
						for (int k = 0; k <= i; k++)
						{
							if (k != i)
							{
								for (int a = 0; a < 8; a++)
								{
									swap(ar[i - k][a], ar[i - (k + 1)][a]);
								}
							}
							else if (k == i)
							{
								for (int a = 0; a < 8; a++)
								{
									ar[i - k][a] = (rand() % 5 + 1);
								}

							}
						}
					}
				}
				score = score + 70;
				MyJewelBoard(ar);
				MyJewels(ar);
			}

			if (ar[i][j] == ar[i][j + 1] && ar[i][j] == ar[i][j + 2])                        //NORMAL
			{

				if (i == 0)
				{
					ar[i][j] = (rand() % 5 + 1);
					ar[i][j + 1] = (rand() % 5 + 1);
					ar[i][j + 2] = (rand() % 5 + 1);
				}
				else if (i > 0)
				{
					for (int k = 0; k <= i; k++)
					{
						if (k != i)
						{
							swap(ar[i - k][j], ar[i - (k + 1)][j]);
							swap(ar[i - k][j + 1], ar[i - (k + 1)][j + 1]);
							swap(ar[i - k][j + 2], ar[i - (k + 1)][j + 2]);
						}
						else if (k == i)
						{
							ar[i - k][j] = (rand() % 5 + 1);
							ar[i - k][j + 1] = (rand() % 5 + 1);
							ar[i - k][j + 2] = (rand() % 5 + 1);
						}
					}
				}
				MyJewelBoard(ar);
				MyJewels(ar);
				score = score + 10;
			}

		}
	}

}

//***************************
//SELECTION RECTANGLE

void PlayGame(int key, int ar[][8], int& x, int& y, int& i, int& j, int& score)
{
	myLine(x, y, x + 60, y, 255, 0, 0);
	myLine(x, y + 60, x + 60, y + 60, 255, 0, 0);
	myLine(x, y, x, y + 60, 255, 0, 0);
	myLine(x + 60, y + 60, x + 60, y, 255, 0, 0);
	bool keypres = 0;
	while (keypres == false)
	{
		keypres = isCursorKeyPressed(key);
	}
	if (key == 3 && (x + 60) <= 480)                         //move right
	{
		x = x + 60;
		myLine(x - 60, y, x + 60 - 60, y, 255, 255, 153);
		myLine(x - 60, y + 60, x - 60 + 60, y + 60, 255, 255, 153);
		myLine(x - 60, y, x - 60, y + 60, 255, 255, 153);
		myLine(x + 60 - 60, y + 60, x - 60 + 60, y, 255, 255, 153);
		myLine(x, y, x + 60, y, 255, 0, 0);
		myLine(x, y + 60, x + 60, y + 60, 255, 0, 0);
		myLine(x, y, x, y + 60, 255, 0, 0);
		myLine(x + 60, y + 60, x + 60, y, 255, 0, 0);
		j++;
		i = i;
	}
	else if (key == 4 && (y + 60) <= 480)                                        //move down
	{
		y = y + 60;
		myLine(x, y - 60, x + 60, y - 60, 255, 255, 153);
		myLine(x, y - 60 + 60, x + 60, y - 60 + 60, 255, 255, 153);
		myLine(x, y - 60, x, y - 60 + 60, 255, 255, 153);
		myLine(x + 60, y - 60 + 60, x + 60, y - 60, 255, 255, 153);
		myLine(x, y, x + 60, y, 255, 0, 0);
		myLine(x, y + 60, x + 60, y + 60, 255, 0, 0);
		myLine(x, y, x, y + 60, 255, 0, 0);
		myLine(x + 60, y, x + 60, y + 60, 255, 0, 0);
		i++;
		j = j;
	}
	else if (key == 1 && (x - 60) >= 50)                                     //move left
	{
		x = x - 60;
		myLine(x + 60, y, x + 60 + 60, y, 255, 255, 153);
		myLine(x + 60, y + 60, x + 60 + 60, y + 60, 255, 255, 153);
		myLine(x + 60, y, x + 60, y + 60, 255, 255, 153);
		myLine(x + 60 + 60, y + 60, x + 60 + 60, y, 255, 255, 153);
		myLine(x, y, x + 60, y, 255, 0, 0);
		myLine(x, y + 60, x + 60, y + 60, 255, 0, 0);
		myLine(x, y, x, y + 60, 255, 0, 0);
		myLine(x + 60, y + 60, x + 60, y, 255, 0, 0);
		j--;
		i = i;
	}
	else if (key == 2 && (y - 60) >= 50)                                     //move left                                  
	{
		y = y - 60;
		myLine(x, y + 60, x + 60, y + 60, 255, 255, 153);
		myLine(x, y + 60 + 60, x + 60, y + 60 + 60, 255, 255, 153);
		myLine(x, y + 60, x, y + 60 + 60, 255, 255, 153);
		myLine(x + 60, y + 60 + 60, x + 60, y + 60, 255, 255, 153);
		myLine(x, y, x + 60, y, 255, 0, 0);
		myLine(x, y + 60, x + 60, y + 60, 255, 0, 0);
		myLine(x, y, x, y + 60, 255, 0, 0);
		myLine(x + 60, y + 60, x + 60, y, 255, 0, 0);
		i--;
		j = j;
	}
	else if (key == 5)
	{
		keypres = 0;
		while (keypres == false)
		{
			keypres = isCursorKeyPressed(key);
		}
		if (key == 4 && CorrectSwaping(ar,i,j)==true)                            //swaps with the lower one
		{
			swap(ar[i][j], ar[i + 1][j]);
			MyJewelBoard(ar);
			MyJewels(ar);
			Sleep(1000);
			CombinationUpdate(ar, score);

		}
		else if (key == 3 && CorrectSwaping(ar,i,j)==true)                       //swaps with the right one
		{

			swap(ar[i][j], ar[i][j + 1]);
			MyJewelBoard(ar);
			MyJewels(ar);
			Sleep(1000);
			CombinationUpdate(ar, score);
		}
		else if (key == 2 && CorrectSwaping(ar, i, j) == true)                  //swaps with the upper one
		{

			swap(ar[i][j], ar[i - 1][j]);
			MyJewelBoard(ar);
			MyJewels(ar);
			Sleep(1000);
			CombinationUpdate(ar, score);

		}
		else if (key == 1 )            //swaps with the left one
		{

			swap(ar[i][j], ar[i][j - 1]);
			MyJewelBoard(ar);
			MyJewels(ar);
			Sleep(1000);
			CombinationUpdate(ar, score);
		}
	}
}
void timer()
{
	while (seconds >= 0)
	{
		gotoxy(0, 0);
		cout << "Time: =" << seconds;
		Sleep(1000);
		seconds--;
	}
}
//***************************************
////   MAIN PROGRAM 
int main()
{

	int x = 50, y = 50, i = 0, j = 0, sec = 60;
	int ar[8][8];
	int score = 0;
	thread o(timer);
	for (int k = 0; k < 8; k++)
	{
		for (int l = 0; l < 8; l++)
		{
			ar[k][l] = (rand() % 5 + 1);
		}
	}
	design();
	int key = 0;
	while (seconds >= 0)
	{
		MyJewelBoard(ar);
		MyJewels(ar);
		PlayGame(key, ar, x, y, i, j, score);
	}
	o.join();
	system("cls");
	cout << "\n\n\n\n\t\t\t\tGame Over!" << endl;
	cout << "\n\n\n\n\t\t\t\tYou scored: " << score << " points\n\n\n";
	_getch();
}