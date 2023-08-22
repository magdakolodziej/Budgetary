#ifndef FILEWITHINCOMES_H
#define FILEWITHINCOMES_H

#include <iostream>
#include <vector>
#include <windows.h>

#include "Income.h"
#include "AuxiliaryMethods.h"
#include "TextFile.h"

class FileWithIncomes :public TextFile {
    int lastIncomeId;

    public:
    FileWithIncomes(string fileName) : TextFile(fileName) {
    lastIncomeId = 0;
    }
    int getLastIncomeId();
    void addIncomeToFile(Income income);
    vector <Income> loadLoggedInUserIncomesFromFile(int loggedInUserId);
};

#endif
