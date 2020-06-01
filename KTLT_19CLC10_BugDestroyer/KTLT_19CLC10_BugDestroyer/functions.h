#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H 
#include <iostream>
#include <fstream>
#include "USER.h"
#include "STAFF.h""
#include "Student.h"
#include "CLASS.h"
#include "LinkedList/linkedList.h"
#include "Lecturer.h"
#include "SCOREBOARD.h"
#include "ConsoleUI.h"
const char DataPath[] = "Data\\";
linkedList<IUSER>* LoadUser(linkedList<Course>* CourseList, linkedList<CLASS>* classList);
IUSER* login(linkedList<IUSER>* USER);
void updateUser(linkedList<IUSER>* userList);
void CreateUI(ConsoleUI UI[3]);
void CreateLoginMenu(ConsoleUI *LoginMenu);
#endif // !_FUNCTIONS_H
