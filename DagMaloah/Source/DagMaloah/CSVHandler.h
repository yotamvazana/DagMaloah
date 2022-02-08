// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <string>
struct CSVData;
class DAGMALOAH_API CSVHandler
{

public:
	static CSVHandler& GetInstance();
	void AssignData(CSVData data);
private:
	CSVHandler();
	~CSVHandler();
	static CSVHandler* CSVHandler::_instance;
 //   const std::string _urlPath = "C:\\Users\\reise\\Desktop\\Dag_Maloah_DT.csv";
    const std::string _urlPath = "Dag_Maloah_DT.csv";
	void CreateFile();

};

