﻿#include "COURSE.h"

Course::Course(string dataString) //Khởi tạo Course
{
	int commaPos = dataString.find(',');
	this->ID = dataString.substr(0, commaPos);
	dataString.erase(0, commaPos + 1);

	commaPos = dataString.find(',');
	this->courseName = dataString.substr(0, commaPos);
	dataString.erase(0, commaPos + 1);

	commaPos = dataString.find(',');
	this->ClassID = dataString.substr(0, commaPos);
	dataString.erase(0, commaPos + 1);

	commaPos = dataString.find(',');
	this->lecturerID = dataString.substr(0, commaPos);
	dataString.erase(0, commaPos + 1);

	commaPos = dataString.find(',');
	this->startDate = StringToDate(dataString.substr(0, commaPos));
	dataString.erase(0, commaPos + 1);

	commaPos = dataString.find(',');
	this->endDate = StringToDate(dataString.substr(0, commaPos));
	dataString.erase(0, commaPos + 1);

	commaPos = dataString.find(',');
	this->dayOfweek = strToInt(dataString.substr(0, commaPos));
	dataString.erase(0, commaPos + 1);

	commaPos = dataString.find(',');
	this->startTime = StringToTime(dataString.substr(0, commaPos));
	dataString.erase(0, commaPos + 1);

	commaPos = dataString.find(',');
	this->endTime = StringToTime(dataString.substr(0, commaPos));
	dataString.erase(0, commaPos + 1);

	this->room = dataString;
}

void Course::viewInfo()
{
	system("cls");
	cout << "Course ID: " << this->ID << endl;
	cout << "Course Name: " << this->courseName << endl;
	cout << "Class ID: " << this->ClassID << endl;
	cout << "Lecturer: " << this->lecturerID << endl;
	cout << "Start Date: " << this->startDate.day <<"-"<< this->startDate.month << "-" << this->startDate.year << endl;
	cout << "End Date: " << this->endDate.day << "-" << this->endDate.month << "-" << this->endDate.year << endl;
	cout << "Start time: " << this->startTime.hour<<":"<< this->startTime.minute << endl;
	cout << "End time: " << this->endTime.hour << ":" << this->endTime.minute << endl;
	cout << "Room: " << this->room << endl;
	cout << "-----------------------------------------------------" << endl;
}

Date StringToDate(string input)
{
	Date date;

	int dashPos = input.find('-');
	date.day = strToInt(input.substr(0, dashPos));
	input.erase(0, dashPos + 1);

	dashPos = input.find('-');
	date.month = strToInt(input.substr(0, dashPos));
	input.erase(0, dashPos + 1);

	date.year = strToInt(input);
	return date;
}

Time StringToTime(string input)
{
	Time time;
	int colonPos = input.find(':');
	time.hour = strToInt(input.substr(0, colonPos));
	input.erase(0, colonPos + 1);

	time.minute = strToInt(input.substr(0, colonPos));
	return time;
}
