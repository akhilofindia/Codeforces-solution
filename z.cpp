#include <bits/stdc++.h>
using namespace std;

struct User {
    string username;
    string password;
};

bool isUsernameTaken(const vector<User>& users, const string& username) {
    return any_of(users.begin(), users.end(), [username](const User& user) {
        return user.username == username;
    });
}
void registerUser(vector<string >&users) {
    User newUser;
    cout << "Enter a username: ";
    cin >> newUser.username;
     if (isUsernameTaken(users, newUser.username)) {
        cout << "Username already taken. Suggested alternatives:\n";

        for (int suffix = 1; isUsernameTaken(users, newUser.username + to_string(suffix)); ++suffix) {
            cout << newUser.username + to_string(suffix) << endl;
        }
        cout << "Enter one of the suggested usernames or choose a different one: ";
        cin >> newUser.username;
    }

    cout << "Enter a password: ";
    cin >> newUser.password;
    users.push_back(newUser);
    cout << "User successfully registered!"<<endl;
}

int main(){
	vector<User> users;
    registerUser(users);
    registerUser(users);
    registerUser(users);
    cout << "Registered Users:\n";
    for (const auto& user : users) {
        cout << "Username: " << user.username << ", Password: " << user.password << endl;
    }

	return 0;
}