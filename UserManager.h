#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "User.h"
#include "FileWithUsers.h"
#include "AuxiliaryMethods.h"

using namespace std;

class UserManager {
    int loggedUserId;
    vector <User> users;
    FileWithUsers fileWithUsers;

    User enterDataOfNewUser();
    int getNewUserId();
    bool isLoginExist(string login);
    void loadUsers();

public:
    UserManager(string fileWithUsersName) : fileWithUsers(fileWithUsersName) {
    loggedUserId = 0;
    loadUsers();
}
    int getLoggedInUserId();
    void userRegistration();
    bool userLogin();
    void changePasswordLoggedInUser();
    void userLogout();
};


#endif
