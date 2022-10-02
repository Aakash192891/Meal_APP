#include <iostream> 
#include <cmath> 

using namespace std; 

int main()
{
    cout << "Hello, welcome to the APP" << endl; // welcomeing message
    cout << "Please create a new account" << endl; 
    cout << "Choose a username: " << endl; 
    string user; // defining user
    getline (cin, user);
    cout << "Choose a password: " << endl; 
    string pass; 
    getline (cin, pass); 

    cout << "Please enter you information: " << endl; // confirming and re entering the user
    cout << "Username: " << endl; 
    string username; 
    getline (cin, username);
    cout << "password: " << endl;
    string password;
    getline (cin, password);

// confirming if password and username is correct or not

    while (username != user && password != pass){
        cout << "Wrong username or password please try again" << endl; 
        cout << "Username: " << endl;
        getline (cin, username);
        cout << "Password: " << endl; 
        getline(cin, password);
    }

    cout << "Welcome to the APP" << endl; // here user enters the app

    // checking the money
    double balance = 5.00;
    cout << "Would you like to add money to your balance? "<< endl;
    string q1;
    getline(cin, q1);
    if (q1 == "yes"){
        cout << "Enter how much money you want to add: "<< endl;
        double add;
        cin >> add;
        cout << "your new balance is: " << balance + add << " $" << endl;
    }
    else {
        cout << "alright" << endl;
    }

    // if the person needs to have a meal or not
    cout << "would you like a meal today?" << endl;
    string q2; 
    getline(cin, q2);
    if (q2 == "yes"){
        cout << "Please select what meal do you want?" << endl;
        string meal_type[] = {"thali", "cheese", "rice"};
        double meal_price[] = {3.00, 4.00, 5,00};

        cout << "1. " << meal_type[0] << " --> " << meal_price[0] << " $ " << endl;
        cout << "2. " << meal_type[1] << " --> " << meal_price[1] << " $ " << endl;
        cout << "3. " << meal_type[2] << " --> " << meal_price[2] << " $ " << endl;

        cout << "Enter your choice as 1, 2 or 3: " << endl;
        int q3; 
        cin >> q3;

        while (q3 > 3 || q3 < 1){
            cout << "This is not a valid input please try again! " << endl;
            cin >> q3;
        }

        if (q3 == 1){
            cout << "You have ordered a "<< meal_type[0] << endl;
            cout << " The total of your order is: " << meal_price[0] << " $ " << endl;
            cout << "You have " << balance - meal_price[0] << " $ left in your balance" << endl;
        }

        if (q3 == 2){
            cout << "You have ordered a "<< meal_type[1] << endl;
            cout << " The total of your order is: " << meal_price[1] << " $ " << endl;
            cout << "You have " << balance - meal_price[1] << " $ left in your balance" << endl;
        }

        if (q3 == 3){
            cout << "You have ordered a "<< meal_type[2] << endl;
            cout << " The total of your order is: " << meal_price[2] << " $ " << endl;
            cout << "You have " << balance - meal_price[2] << " $ left in your balance" << endl;
        }

    }
    else{
        cout << "Alright, have a good day!!" << endl;
    }


    return 0;
}
