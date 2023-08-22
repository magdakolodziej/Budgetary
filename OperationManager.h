#ifndef OPERATIONMANAGER_H
#define OPERATIONMANAGER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <iomanip>

#include "Income.h"
#include "Expense.h"
#include "FileWithIncomes.h"
#include "FileWithExpenses.h"
#include "AuxiliaryMethods.h"

class OperationManager {
    vector <Income> incomes;
    vector <Expense> expenses;
    FileWithIncomes fileWithIncomes;
    FileWithExpenses fileWithExpenses;
    const int LOGGED_USER_ID;

    Income enterDataOfNewIncome();
    void sortIncomesVector();
    void putIncomeInSortedVector(Income income);
    void viewIncomeData(int i);
    Expense enterDataOfNewExpense();
    void sortExpensesVector();
    void putExpenseInSortedVector(Expense expense);
    void viewExpenseData(int i);

public:
    OperationManager(string fileWithIncomesName, string fileWithExpensesName, int loggedUserId) : fileWithIncomes(fileWithIncomesName), fileWithExpenses(fileWithExpensesName), LOGGED_USER_ID(loggedUserId) {
    incomes = fileWithIncomes.loadLoggedInUserIncomesFromFile(LOGGED_USER_ID);
    sortIncomesVector();
    expenses = fileWithExpenses.loadLoggedInUserExpensesFromFile(LOGGED_USER_ID);
    sortExpensesVector();
    }
    void addIncome();
    void addExpense();
    void viewCurrentMonthBalance();
    void viewLastMonthBalance();
    void viewBalanceForGivenDates();
};

#endif
