#pragma once
#include"ChessBoard.h"
#include"PlantShop.h"
#include<conio.h>

class UI
{
public:
	//**************************普通显示UI
	//展示棋盘
	void ShowChessboard(ChessBoard* chessbd,PlantShop* pshop);
	//在下面显示一些信息
	void ShowInfo(ChessBoard* chessbd, PlantShop* pshop);
	//**********************shop的UI
	//购买植物的UI
	void BuyPlant(ChessBoard* chessbd, PlantShop* pshop);
	bool Confirm(int n);
	const RCPair SelectArea(ChessBoard* chessbd,PlantShop* pshop);
	void PrintSelectBox(int r, int c);
	void ShowShop(PlantShop* pshop);
private:
};

