// Fill out your copyright notice in the Description page of Project Settings.
using namespace std;


#include "CSVHandler.h"
CSVHandler* CSVHandler::_instance;
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include "AICharacterLogic.h"
CSVHandler::CSVHandler()
{
	//	UE_LOG(LogTemp, Warning, TEXT("New CSVHandler was created!\nCreating new file if one was not found\nthe path used is: %d"), _urlPath)
	CreateFile();
}

CSVHandler::~CSVHandler()
{
	_instance = nullptr;
}

CSVHandler& CSVHandler::GetInstance()
{
	if (_instance == nullptr)
	{
		_instance = new CSVHandler();
	}
	return *_instance;
}
/// <summary>
/// Writing to CSV FILE the CSV data
/// </summary>
/// <param name="data"></param>
void CSVHandler::AssignData(CSVData data)
{
	fstream file(_urlPath);

	//if (file.fail())
	//	UE_LOG(LogTemp, Warning, TEXT("Failed to find path\nthe path: %d"), _urlPath)

	if (file.is_open())
	{
		file << "AI ID" << ","<<"is Player?" << "," << "Did Won?" << "," << "Died?" << "," << "Time Survived" << endl;

		// skiping to the relevant row 
		int idAfterSkippingThePlayerID = (data.ID + 1);
		for (int i = 1; i < idAfterSkippingThePlayerID; i++)
			file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		file << data.ID << "," << data.isPlayer << "," << data.isWon << "," << data.isDead << "," << data.time << endl;
		file.close();
	}
}

void CSVHandler::CreateFile()
{
	ofstream file(_urlPath);

	if (file.is_open())
	{
		//file << "AI ID" << "," << "Did Won?" << "," << "Died?" << "," << "Time Survived" << endl;
		file.close();
	}
}



