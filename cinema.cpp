#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

int main();
string currentDateTime();

void cinema();
void welcome();
void movie();
void movieDescription(int choices);
void booking(int choices);
void bookSeats(int tikets, string ordered, int movie);
void confirmOrder(int movie, int tikets, int seats[8], string bench);
void payment(int movie, int tickets, int seats[8], string bench, int total_price);
void ticket(int movie, int tickets, int seats[8], string bench);

string gName;

int main() {

    welcome();

    cinema();

}

void welcome() {

    string name;

    cout << " ----------------------------------------" << endl;
    cout << "|                   Hello,               |" << endl;
    cout << "|           Welcome to Cinema XXI        |" << endl;
    cout << "|----------------------------------------|" << endl;
    cout << "|         PLAZA INDONESIA 6th Floor      |" << endl;
    cout << "|             Central Jakarta            |" << endl;
    cout << " ----------------------------------------" << endl << endl;
    cout << "Please enter your name : ";
    cin >> name;

    ::gName = name;

    system("cls");

}

void cinema() {

    cinema:

        int choice;
        string q_order;

        movie();

        cout << "\nEnter the movie of your choice (1-5) : ";
        cin >> choice;

        if (cin.fail()) {

            cin.clear();

            cin.ignore();

            cout << "\nPlease enter a valid choice.\n\n" << endl;

            goto cinema;

        }

        if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5) {

            system("cls");

            movieDescription(choice);

        } else {

            cout << "\nPlease enter a valid choice." << endl;

            goto cinema;

        }
}

void movie() {

    string movie[] = { "Black Adam (2022)",
                      "Black Panther: Wakanda Forever (2022)",
                      "Prey for the Devil (2022)",
                      "Disenchanted (2022)",
                      "The Sea Beast (2022)"
                    };

    cout << " ---------------------------------------------" << endl;
    cout << "|                  Cinema XXI                 |" << endl;
    cout << "|---------------------------------------------|" << endl;
    cout << "|                  Movie list                 |" << endl;
    cout << " ---------------------------------------------" << endl;

    for (int i = 0; i <= sizeof(movie) / sizeof(movie[0]) - 1; i++) {

        cout << " " << i + 1 << ". " << movie[i] << endl;

    }

}

void movieDescription(int choices) {

    string q_order;

    switch(choices) {

        case 1:

            cout << " ----------------------------------" << endl;
            cout << "|        Movie Description         |" << endl;
            cout << "|----------------------------------|" << endl;
            cout << "|        Black Adam (2022)         |" << endl;
            cout << " ----------------------------------" << endl;
            cout << "| Duration : 125 Minutes           |" << endl;
            cout << "| Genre    : Action, Adventure     |" << endl;
            cout << "| Price    : Rp. 50.000            |" << endl;
            cout << " ----------------------------------" << endl;

            ask_1:

                cout << "\n\nDo you want to order tickets for this movie? (Y/N) : ";
                cin >> q_order;

                if (cin.fail()) {

                    cin.clear();

                    cin.ignore();

                    cout << "\nPlease enter a valid choice.\n\n" << endl;

                    goto ask_1;

                }

                if (q_order == "y" || q_order == "Y") {

                    system("cls");

                    booking(choices);

                } else {

                    system("cls");

                    cinema();

                }

            break;


        case 2:

            cout << " ----------------------------------" << endl;
            cout << "|        Movie Description         |" << endl;
            cout << "|----------------------------------|" << endl;
            cout << "|          Black Panther:          |" << endl;
            cout << "|      Wakanda Forever (2022)      |" << endl;
            cout << "|----------------------------------|" << endl;
            cout << "| Duration : 162 Minutes           |" << endl;
            cout << "| Genre    : Action, Adventure     |" << endl;
            cout << "| Price    : Rp. 50.000            |" << endl;
            cout << " ----------------------------------" << endl;

            ask_2:

                cout << "\n\nDo you want to order tickets for this movie? (Y/N) : ";
                cin >> q_order;

                if (cin.fail()) {

                    cin.clear();

                    cin.ignore();

                    cout << "\nPlease enter a valid choice.\n\n" << endl;

                    goto ask_2;

                }

                if (q_order == "y" || q_order == "Y") {

                    system("cls");

                    booking(choices);

                } else {

                    system("cls");

                    cinema();

                }

            break;

        case 3:

            cout << " ----------------------------------" << endl;
            cout << "|        Movie Description         |" << endl;
            cout << "|----------------------------------|" << endl;
            cout << "|     Prey for the Devil (2022)    |" << endl;
            cout << "|----------------------------------|" << endl;
            cout << "| Duration : 93 Minutes            |" << endl;
            cout << "| Genre    : Horror, Thriller      |" << endl;
            cout << "| Price    : Rp. 45.000            |" << endl;
            cout << " ----------------------------------" << endl;

            ask_3:

                cout << "\n\nDo you want to order tickets for this movie? (Y/N) : ";
                cin >> q_order;

                if (cin.fail()) {

                    cin.clear();

                    cin.ignore();

                    cout << "\nPlease enter a valid choice.\n\n" << endl;

                    goto ask_3;

                }

                if (q_order == "y" || q_order == "Y") {

                    system("cls");

                    booking(choices);

                } else {

                    system("cls");

                    cinema();

                }

            break;

        case 4:

            cout << " ----------------------------------" << endl;
            cout << "|        Movie Description         |" << endl;
            cout << "|----------------------------------|" << endl;
            cout << "|        Disenchanted (2022)       |" << endl;
            cout << "|----------------------------------|" << endl;
            cout << "| Duration : 121 Minutes           |" << endl;
            cout << "| Genre    : Fantasy, Comedy       |" << endl;
            cout << "| Price    : Rp. 45.000            |" << endl;
            cout << " ----------------------------------" << endl;

            ask_4:

                cout << "\n\nDo you want to order tickets for this movie? (Y/N) : ";
                cin >> q_order;

                if (cin.fail()) {

                    cin.clear();

                    cin.ignore();

                    cout << "\nPlease enter a valid choice.\n\n" << endl;

                    goto ask_4;

                }

                if (q_order == "y" || q_order == "Y") {

                    system("cls");

                    booking(choices);

                } else {

                    system("cls");

                    cinema();

                }

            break;

        case 5:

            cout << " ----------------------------------" << endl;
            cout << "|        Movie Description         |" << endl;
            cout << "|----------------------------------|" << endl;
            cout << "|        The Sea Beast (2022)      |" << endl;
            cout << "|----------------------------------|" << endl;
            cout << "| Duration : 115 Minutes           |" << endl;
            cout << "| Genre    : Adventure, Animation  |" << endl;
            cout << "| Price    : Rp. 50.000            |" << endl;
            cout << " ----------------------------------" << endl;

            ask_5:

                cout << "\n\nDo you want to order tickets for this movie? (Y/N) : ";
                cin >> q_order;

                if (cin.fail()) {

                    cin.clear();

                    cin.ignore();

                    cout << "\nPlease enter a valid choice.\n\n" << endl;

                    goto ask_5;

                }

                if (q_order == "y" || q_order == "Y") {

                    system("cls");

                    booking(choices);

                } else {

                    system("cls");

                    cinema();

                }

            break;

        default:

            cout << "\nPlease enter a valid choice.\n\n" << endl << endl;

            cinema();

    }

}

void booking(int choices) {

    int tikets;
    string b_ordered;

    switch (choices) {

        case 1:

            cout << " =========================================== " << endl;
            cout << "|                                           |" << endl;
            cout << "|          ------------------------         |" << endl;
            cout << "|         |      Cinema Screen     |        |" << endl;
            cout << "|          ------------------------         |" << endl;
            cout << "|                                           |" << endl;
            cout << "|-------------------------------------------|" << endl;
            cout << "|                                           |" << endl;
            cout << "| [A]|1|2|3|4|5|6|7|8|  [B]|1|2|3|4|5|6|7|8 |" << endl;
            cout << "| [C]|1|2|3|4|5|6|7|8|  [D]|1|2|3|4|5|6|7|8 |" << endl;
            cout << "| [E]|1|2|3|4|5|6|7|8|  [F]|1|2|3|4|5|6|7|8 |" << endl;
            cout << "|                                           |" << endl;
            cout << " =========================================== " << endl << endl;

            b_tikets_1:

                cout << "How many tickets do you want in? : ";
                cin >> tikets;

                if (cin.fail()) {

                    cin.clear();

                    cin.ignore();

                    cout << "\nPlease enter a valid choice.\n" << endl;

                    goto b_tikets_1;

                } else if (tikets > 4) {

                    cout << "\nMaximum ticket order is 4 tickets." << endl << endl;

                    goto b_tikets_1;

                }

            b_ordered_1:

                cout << "Please select the part of the bench ordered (A-F) : ";
                cin >> b_ordered;

                if (b_ordered == "A" || b_ordered == "a" ||
                    b_ordered == "B" || b_ordered == "b" ||
                    b_ordered == "C" || b_ordered == "c" ||
                    b_ordered == "D" || b_ordered == "d" ||
                    b_ordered == "E" || b_ordered == "e" ||
                    b_ordered == "F" || b_ordered == "f" )
                {

                    bookSeats(tikets, b_ordered, choices);

                } else {

                    cout << "\nPlease enter a valid choice.\n" << endl;

                    goto b_ordered_1;

                }

                break;

        case 2:

            cout << " =========================================== " << endl;
            cout << "|                                           |" << endl;
            cout << "|          ------------------------         |" << endl;
            cout << "|         |      Cinema Screen     |        |" << endl;
            cout << "|          ------------------------         |" << endl;
            cout << "|                                           |" << endl;
            cout << "|-------------------------------------------|" << endl;
            cout << "|                                           |" << endl;
            cout << "| [A]|1|2|3|4|5|6|7|8|  [B]|1|2|3|4|5|6|7|8 |" << endl;
            cout << "| [C]|1|2|3|4|5|6|7|8|  [D]|1|2|3|4|5|6|7|8 |" << endl;
            cout << "| [E]|1|2|3|4|5|6|7|8|  [F]|1|2|3|4|5|6|7|8 |" << endl;
            cout << "|                                           |" << endl;
            cout << " =========================================== " << endl << endl;

            b_tikets_2:

                cout << "How many tickets do you want in? : ";
                cin >> tikets;

                if (cin.fail()) {

                    cin.clear();

                    cin.ignore();

                    cout << "\nPlease enter a valid choice.\n" << endl;

                    goto b_tikets_2;

                } else if (tikets > 4) {

                    cout << "\nMaximum ticket order is 4 tickets." << endl << endl;

                    goto b_tikets_2;

                }

            b_ordered_2:

                cout << "Please select the part of the bench ordered (A-F) : ";
                cin >> b_ordered;

                if (b_ordered == "A" || b_ordered == "a" ||
                    b_ordered == "B" || b_ordered == "b" ||
                    b_ordered == "C" || b_ordered == "c" ||
                    b_ordered == "D" || b_ordered == "d" ||
                    b_ordered == "E" || b_ordered == "e" ||
                    b_ordered == "F" || b_ordered == "f" )
                {

                    bookSeats(tikets, b_ordered, choices);

                } else {

                    cout << "\nPlease enter a valid choice.\n" << endl;

                    goto b_ordered_2;

                }

                break;

        case 3:

            cout << " =========================================== " << endl;
            cout << "|                                           |" << endl;
            cout << "|          ------------------------         |" << endl;
            cout << "|         |      Cinema Screen     |        |" << endl;
            cout << "|          ------------------------         |" << endl;
            cout << "|                                           |" << endl;
            cout << "|-------------------------------------------|" << endl;
            cout << "|                                           |" << endl;
            cout << "| [A]|1|2|3|4|5|6|7|8|  [B]|1|2|3|4|5|6|7|8 |" << endl;
            cout << "| [C]|1|2|3|4|5|6|7|8|  [D]|1|2|3|4|5|6|7|8 |" << endl;
            cout << "| [E]|1|2|3|4|5|6|7|8|  [F]|1|2|3|4|5|6|7|8 |" << endl;
            cout << "|                                           |" << endl;
            cout << " =========================================== " << endl << endl;

            b_tikets_3:

                cout << "How many tickets do you want in? : ";
                cin >> tikets;

                if (cin.fail()) {

                    cin.clear();

                    cin.ignore();

                    cout << "\nPlease enter a valid choice.\n" << endl;

                    goto b_tikets_3;

                } else if (tikets > 4) {

                    cout << "\nMaximum ticket order is 4 tickets." << endl << endl;

                    goto b_tikets_3;

                }

            b_ordered_3:

                cout << "Please select the part of the bench ordered (A-F) : ";
                cin >> b_ordered;

                if (b_ordered == "A" || b_ordered == "a" ||
                    b_ordered == "B" || b_ordered == "b" ||
                    b_ordered == "C" || b_ordered == "c" ||
                    b_ordered == "D" || b_ordered == "d" ||
                    b_ordered == "E" || b_ordered == "e" ||
                    b_ordered == "F" || b_ordered == "f" )
                {

                    bookSeats(tikets, b_ordered, choices);

                } else {

                    cout << "\nPlease enter a valid choice.\n" << endl;

                    goto b_ordered_3;

                }

                break;

        case 4:

            cout << " =========================================== " << endl;
            cout << "|                                           |" << endl;
            cout << "|          ------------------------         |" << endl;
            cout << "|         |      Cinema Screen     |        |" << endl;
            cout << "|          ------------------------         |" << endl;
            cout << "|                                           |" << endl;
            cout << "|-------------------------------------------|" << endl;
            cout << "|                                           |" << endl;
            cout << "| [A]|1|2|3|4|5|6|7|8|  [B]|1|2|3|4|5|6|7|8 |" << endl;
            cout << "| [C]|1|2|3|4|5|6|7|8|  [D]|1|2|3|4|5|6|7|8 |" << endl;
            cout << "| [E]|1|2|3|4|5|6|7|8|  [F]|1|2|3|4|5|6|7|8 |" << endl;
            cout << "|                                           |" << endl;
            cout << " =========================================== " << endl << endl;

            b_tikets_4:

                cout << "How many tickets do you want in? : ";
                cin >> tikets;

                if (cin.fail()) {

                    cin.clear();

                    cin.ignore();

                    cout << "\nPlease enter a valid choice.\n" << endl;

                    goto b_tikets_4;

                } else if (tikets > 4) {

                    cout << "\nMaximum ticket order is 4 tickets." << endl << endl;

                    goto b_tikets_4;
                }

            b_ordered_4:

                cout << "Please select the part of the bench ordered (A-F) : ";
                cin >> b_ordered;

                if (b_ordered == "A" || b_ordered == "a" ||
                    b_ordered == "B" || b_ordered == "b" ||
                    b_ordered == "C" || b_ordered == "c" ||
                    b_ordered == "D" || b_ordered == "d" ||
                    b_ordered == "E" || b_ordered == "e" ||
                    b_ordered == "F" || b_ordered == "f" )
                {

                    bookSeats(tikets, b_ordered, choices);

                } else {

                    cout << "\nPlease enter a valid choice.\n" << endl;

                    goto b_ordered_4;

                }

                break;

        case 5:

            cout << " =========================================== " << endl;
            cout << "|                                           |" << endl;
            cout << "|          ------------------------         |" << endl;
            cout << "|         |      Cinema Screen     |        |" << endl;
            cout << "|          ------------------------         |" << endl;
            cout << "|                                           |" << endl;
            cout << "|-------------------------------------------|" << endl;
            cout << "|                                           |" << endl;
            cout << "| [A]|1|2|3|4|5|6|7|8|  [B]|1|2|3|4|5|6|7|8 |" << endl;
            cout << "| [C]|1|2|3|4|5|6|7|8|  [D]|1|2|3|4|5|6|7|8 |" << endl;
            cout << "| [E]|1|2|3|4|5|6|7|8|  [F]|1|2|3|4|5|6|7|8 |" << endl;
            cout << "|                                           |" << endl;
            cout << " =========================================== " << endl << endl;

            b_tikets_5:

                cout << "How many tickets do you want in? : ";
                cin >> tikets;

                if (cin.fail()) {

                    cin.clear();

                    cin.ignore();

                    cout << "\nPlease enter a valid choice.\n" << endl;

                    goto b_tikets_5;

                } else if (tikets > 4) {

                    cout << "\nMaximum ticket order is 4 tickets." << endl << endl;

                    goto b_tikets_5;

                }

            b_ordered_5:

                cout << "Please select the part of the bench ordered (A-F) : ";
                cin >> b_ordered;

                if (b_ordered == "A" || b_ordered == "a" ||
                    b_ordered == "B" || b_ordered == "b" ||
                    b_ordered == "C" || b_ordered == "c" ||
                    b_ordered == "D" || b_ordered == "d" ||
                    b_ordered == "E" || b_ordered == "e" ||
                    b_ordered == "F" || b_ordered == "f" )
                {

                    bookSeats(tikets, b_ordered, choices);

                } else {

                    cout << "\nPlease enter a valid choice.\n" << endl;

                    goto b_ordered_5;

                }

                break;

        default:

            cout << "\nPlease enter a valid choice.\n" << endl;
            break;

    }

}

void bookSeats(int tikets, string ordered, int movie) {

    int seats[8], avl_seats_a[] = { 1,2,3,6,8 }, avl_seats_b[] = { 2,3,7,8 },
        avl_seats_c[] = { 1,3,4,8 }, avl_seats_d[] = { 1,2,3,4,5,6,7,8 },
        avl_seats_e[] = { 1,2,5,8 }, avl_seats_f[] = { 1,4,7,8 };

    if (ordered == "a" || ordered == "A") {

        cout << "\nAvailable seat numbers : ";

        for (int i = 0; i <= sizeof(avl_seats_a) / sizeof(avl_seats_a[0]) - 1; i++) {

            cout << avl_seats_a[i] << " ";

        }

        for (int i = 1; i <= tikets; i++) {

            s_seats_1:

                cout << "\nPlease select an available seat. (Seat " << i << ") : ";
                cin >> seats[i];

                if (cin.fail()) {

                    cin.clear();

                    cin.ignore();

                    cout << "\nPlease enter a valid choice.\n\n" << endl;

                    goto s_seats_1;

                }

            bool s_exist = find(begin(avl_seats_a), end(avl_seats_a), seats[i]) != end(avl_seats_a);

            if (!s_exist) {

                cout << "\nSeat number is not available." << endl;

                i -= 1;

            }

        }


        system("cls");

        confirmOrder(movie, tikets, seats, "A");


    } else if (ordered == "b" || ordered == "B") {

        cout << "\nAvailable seat numbers : ";

        for (int i = 0; i <= sizeof(avl_seats_b) / sizeof(avl_seats_b[0]) - 1; i++) {

            cout << avl_seats_b[i] << " ";

        }

        for (int i = 1; i <= tikets; i++) {

            s_seats_2:

                cout << "\nPlease select an available seat. (Seat " << i << ") : ";
                cin >> seats[i];

                if (cin.fail()) {

                    cin.clear();

                    cin.ignore();

                    cout << "\nPlease enter a valid choice.\n\n" << endl;

                    goto s_seats_2;

                }

            bool s_exist = find(begin(avl_seats_b), end(avl_seats_b), seats[i]) != end(avl_seats_b);

            if (!s_exist) {

                cout << "\nSeat number is not available." << endl;

                i -= 1;

            }

        }

        system("cls");

        confirmOrder(movie, tikets, seats, "B");

    } else if (ordered == "c" || ordered == "C") {

        cout << "\nAvailable seat numbers : ";

        for (int i = 0; i <= sizeof(avl_seats_c) / sizeof(avl_seats_c[0]) - 1; i++) {

            cout << avl_seats_c[i] << " ";

        }

        for (int i = 1; i <= tikets; i++) {

            s_seats_3:

                cout << "\nPlease select an available seat. (Seat " << i << ") : ";
                cin >> seats[i];

                if (cin.fail()) {

                    cin.clear();

                    cin.ignore();

                    cout << "\nPlease enter a valid choice.\n\n" << endl;

                    goto s_seats_3;

                }

            bool s_exist = find(begin(avl_seats_c), end(avl_seats_c), seats[i]) != end(avl_seats_c);

            if (!s_exist) {

                cout << "\nSeat number is not available." << endl;

                i -= 1;

            }

        }

        system("cls");

        confirmOrder(movie, tikets, seats, "C");

    } else if (ordered == "d" || ordered == "D") {

        cout << "\nAvailable seat numbers : ";

        for (int i = 0; i <= sizeof(avl_seats_d) / sizeof(avl_seats_d[0]) - 1; i++) {

            cout << avl_seats_d[i] << " ";

        }

        for (int i = 1; i <= tikets; i++) {

            s_seats_4:

                cout << "\nPlease select an available seat. (Seat " << i << ") : ";
                cin >> seats[i];

                if (cin.fail()) {

                    cin.clear();

                    cin.ignore();

                    cout << "\nPlease enter a valid choice.\n\n" << endl;

                    goto s_seats_4;

                }

            bool s_exist = find(begin(avl_seats_d), end(avl_seats_d), seats[i]) != end(avl_seats_d);

            if (!s_exist) {

                cout << "\nSeat number is not available." << endl;

                i -= 1;

            }

        }

        system("cls");

        confirmOrder(movie, tikets, seats, "D");

    } else if (ordered == "e" || ordered == "E") {

        cout << "\nAvailable seat numbers : ";

        for (int i = 0; i <= sizeof(avl_seats_e) / sizeof(avl_seats_e[0]) - 1; i++) {

            cout << avl_seats_e[i] << " ";

        }

        for (int i = 1; i <= tikets; i++) {

            cout << "\nPlease select an available seat. (Seat " << i << ") : ";
            cin >> seats[i];

            s_seats_5:

                cout << "\nPlease select an available seat. (Seat " << i << ") : ";
                cin >> seats[i];

                if (cin.fail()) {

                    cin.clear();

                    cin.ignore();

                    cout << "\nPlease enter a valid choice.\n\n" << endl;

                    goto s_seats_5;

                }

            bool s_exist = find(begin(avl_seats_e), end(avl_seats_e), seats[i]) != end(avl_seats_e);

            if (!s_exist) {

                cout << "\nSeat number is not available." << endl;

                i -= 1;

            }

        }

        system("cls");

        confirmOrder(movie, tikets, seats, "E");

    } else {

        cout << "\nAvailable seat numbers : ";

        for (int i = 0; i <= sizeof(avl_seats_f) / sizeof(avl_seats_f[0]) - 1; i++) {

            cout << avl_seats_f[i] << " ";

        }

        for (int i = 1; i <= tikets; i++) {

            s_seats_6:

                cout << "\nPlease select an available seat. (Seat " << i << ") : ";
                cin >> seats[i];

                if (cin.fail()) {

                    cin.clear();

                    cin.ignore();

                    cout << "\nPlease enter a valid choice.\n\n" << endl;

                    goto s_seats_6;

                }

            bool s_exist = find(begin(avl_seats_f), end(avl_seats_f), seats[i]) != end(avl_seats_f);

            if (!s_exist) {

                cout << "\nSeat number is not available." << endl;

                i -= 1;

            }

        }

        system("cls");

        confirmOrder(movie, tikets, seats, "F");

    }

}

void confirmOrder(int movie, int tickets, int seats[8], string bench) {

    string confirm;

    switch(movie) {

        case 1:

            cout << " ----------------------------------" << endl;
            cout << "|        Movie Description         |" << endl;
            cout << "|----------------------------------|" << endl;
            cout << "|        Black Adam (2022)         |" << endl;
            cout << " ----------------------------------" << endl << endl;
            cout << "  Price         : Rp. 75.000" << endl;
            cout << "  Total Tickets : " << tickets << endl;
            cout << "  Bench Ordered : " << bench << endl;
            cout << "  Seats number  : ";

            for (int i = 1; i <= tickets; i++) {

                 cout << seats[i] << " ";

            }

            cout << "\n  Total Price   : Rp. " << tickets * 75000 << endl;

            cout << "-----------------------------------" << endl << endl;

            confirm_1:

                cout << "Is the order above correct? (Y/N) : ";

                cin >> confirm;

                if (confirm == "y" || confirm == "Y") {

                    payment(movie, tickets, seats, bench, tickets * 75000);

                } else if (confirm == "n" || confirm == "N") {

                    system("cls");

                    cinema();

                } else {

                    cout << "\nPlease, enter a valid choices." << endl;

                    goto confirm_1;

                }

                break;

        case 2:

            cout << " ----------------------------------" << endl;
            cout << "|        Movie Description         |" << endl;
            cout << "|----------------------------------|" << endl;
            cout << "|     Prey for the Devil (2022)    |" << endl;
            cout << "|----------------------------------|" << endl << endl;
            cout << "  Price         : Rp. 75.000" << endl;
            cout << "  Total Tickets : " << tickets << endl;
            cout << "  Bench Ordered : " << bench << endl;
            cout << "  Seats number  : ";

            for (int i = 1; i <= tickets; i++) {

                 cout << seats[i] << " ";

            }

            cout << "\n  Total Price   : Rp. " << tickets * 75000 << endl;

            cout << "-----------------------------------" << endl << endl;

            confirm_2:

                cout << "Is the order above correct? (Y/N) : ";

                cin >> confirm;

                if (confirm == "y" || confirm == "Y") {

                    payment(movie, tickets, seats, bench, tickets * 75000);

                } else if (confirm == "n" || confirm == "N") {

                    system("cls");

                    cinema();

                } else {

                    cout << "\nPlease, enter a valid choices." << endl;

                    goto confirm_2;

                }

                break;

        case 3:

            cout << " ----------------------------------" << endl;
            cout << "|        Movie Description         |" << endl;
            cout << "|----------------------------------|" << endl;
            cout << "|     Prey for the Devil (2022)    |" << endl;
            cout << "|----------------------------------|" << endl << endl;
            cout << "  Price         : Rp. 60.000" << endl;
            cout << "  Total Tickets : " << tickets << endl;
            cout << "  Bench Ordered : " << bench << endl;
            cout << "  Seats number  : ";

            for (int i = 1; i <= tickets; i++) {

                 cout << seats[i] << " ";

            }

            cout << "\n  Total Price   : Rp. " << tickets * 60000 << endl;

            cout << "-----------------------------------" << endl << endl;

            confirm_3:

                cout << "Is the order above correct? (Y/N) : ";

                cin >> confirm;

                if (confirm == "y" || confirm == "Y") {

                    payment(movie, tickets, seats, bench, tickets * 60000);

                } else if (confirm == "n" || confirm == "N") {

                    system("cls");

                    cinema();

                } else {

                    cout << "\nPlease, enter a valid choices." << endl;

                    goto confirm_3;

                }

                break;


        case 4:

            cout << " ----------------------------------" << endl;
            cout << "|        Movie Description         |" << endl;
            cout << "|----------------------------------|" << endl;
            cout << "|        Disenchanted (2022)       |" << endl;
            cout << "|----------------------------------|" << endl << endl;
            cout << "  Price         : Rp. 60.000" << endl;
            cout << "  Total Tickets : " << tickets << endl;
            cout << "  Bench Ordered : " << bench << endl;
            cout << "  Seats number  : ";

            for (int i = 1; i <= tickets; i++) {

                 cout << seats[i] << " ";

            }

            cout << "\n  Total Price   : Rp. " << tickets * 60000 << endl;

            cout << "-----------------------------------" << endl << endl;

            confirm_4:

                cout << "Is the order above correct? (Y/N) : ";

                cin >> confirm;

                if (confirm == "y" || confirm == "Y") {

                    payment(movie, tickets, seats, bench, tickets * 60000);

                } else if (confirm == "n" || confirm == "N") {

                    system("cls");

                    cinema();

                } else {

                    cout << "\nPlease, enter a valid choices." << endl;

                    goto confirm_4;

                }

                break;

        case 5:

            cout << " ----------------------------------" << endl;
            cout << "|        Movie Description         |" << endl;
            cout << "|----------------------------------|" << endl;
            cout << "|        The Sea Beast (2022)      |" << endl;
            cout << "|----------------------------------|" << endl << endl;
            cout << "  Price         : Rp. 75.000" << endl;
            cout << "  Total Tickets : " << tickets << endl;
            cout << "  Bench Ordered : " << bench << endl;
            cout << "  Seats number  : ";

            for (int i = 1; i <= tickets; i++) {

                 cout << seats[i] << " ";

            }

            cout << "\n  Total Price   : Rp. " << tickets * 75000 << endl;

            cout << "-----------------------------------" << endl << endl;

            confirm_5:

                cout << "Is the order above correct? (Y/N) : ";

                cin >> confirm;

                if (confirm == "y" || confirm == "Y") {

                    payment(movie, tickets, seats, bench, tickets * 75000);

                } else if (confirm == "n" || confirm == "N") {

                    system("cls");

                    cinema();

                } else {

                    cout << "\nPlease, enter a valid choices." << endl;

                    goto confirm_5;

                }

                break;


        default:

            cout << "\nPlease, enter a valid choices." << endl;
            break;


    }

}

void payment(int movie, int tickets, int seats[8], string bench, int total_price) {

    int payment_money, change;

    payment:

        cout << "\nYour total payment is : Rp. " << total_price << endl;
        cout << "\nPlease enter your amount of money : Rp. ";
        cin >> payment_money;

        if (cin.fail()) {

            cin.clear();

            cin.ignore();

            cout << "\nPlease enter a valid choice.\n\n" << endl;

            goto payment;

        } else if (payment_money < total_price) {

            cout << "\nSorry, your money is not enough to continue the order. Please re-pay." << endl;

            goto payment;

        } else {

            change = payment_money - total_price;

            cout << "\nYour return is : Rp. " << change << endl;

            system("pause");

            system("cls");

            ticket(movie, tickets, seats, bench);

        }

}

void ticket(int movie, int tickets, int seats[8], string bench) {

    cout << "       =======================================" << endl;
    cout << "                     YOUR TICKETS             " << endl;
    cout << "       =======================================" << endl << endl;

    switch(movie) {

        case 1:
            cout << " ___________________________________________________" << endl;
            cout << "|                        |                          |" << endl;
            cout << "|                        |                          |" << endl;
            cout << "|                        |        CINEMA XXI        |" << endl;
            cout << "|       Black Adam       |      PLAZA INDONESIA     |" << endl;
            cout << "|         (2022)         |         6th Floor        |" << endl;
            cout << "|                        |      Central Jakarta     |" << endl;
            cout << "|                        |                          |" << endl;
            cout << "|________________________|__________________________|" << endl << endl;

            break;

        case 2:

            cout << " ___________________________________________________" << endl;
            cout << "|                        |                          |" << endl;
            cout << "|                        |                          |" << endl;
            cout << "|                        |        CINEMA XXI        |" << endl;
            cout << "|      Black Panther     |      PLAZA INDONESIA     |" << endl;
            cout << "| Wakanda Forever (2022) |         6th Floor        |" << endl;
            cout << "|                        |      Central Jakarta     |" << endl;
            cout << "|                        |                          |" << endl;
            cout << "|________________________|__________________________|" << endl << endl;

            break;

        case 3:

            cout << " ___________________________________________________" << endl;
            cout << "|                        |                          |" << endl;
            cout << "|                        |                          |" << endl;
            cout << "|                        |        CINEMA XXI        |" << endl;
            cout << "|   Prey for the Devil   |      PLAZA INDONESIA     |" << endl;
            cout << "|         (2022)         |         6th Floor        |" << endl;
            cout << "|                        |      Central Jakarta     |" << endl;
            cout << "|                        |                          |" << endl;
            cout << "|________________________|__________________________|" << endl << endl;

            break;

        case 4:

            cout << " ___________________________________________________" << endl;
            cout << "|                        |                          |" << endl;
            cout << "|                        |                          |" << endl;
            cout << "|                        |        CINEMA XXI        |" << endl;
            cout << "|      Disenchanted      |      PLAZA INDONESIA     |" << endl;
            cout << "|         (2022)         |         6th Floor        |" << endl;
            cout << "|                        |      Central Jakarta     |" << endl;
            cout << "|                        |                          |" << endl;
            cout << "|________________________|__________________________|" << endl << endl;

            break;

        case 5:

            cout << " ___________________________________________________" << endl;
            cout << "|                        |                          |" << endl;
            cout << "|                        |                          |" << endl;
            cout << "|                        |        CINEMA XXI        |" << endl;
            cout << "|      The Sea Beast     |      PLAZA INDONESIA     |" << endl;
            cout << "|         (2022)         |         6th Floor        |" << endl;
            cout << "|                        |      Central Jakarta     |" << endl;
            cout << "|                        |                          |" << endl;
            cout << "|________________________|__________________________|" << endl << endl;

            break;

        default:

            cout << "\nPlease, enter a valid choices." << endl;

            break;


    }

    cout << "  Orderer Name : " << gName << endl;
    cout << "  Tickets      : ";

    for (int i = 1; i <= tickets; i++) {

        cout << bench << seats[i] << " ";

    }

    cout << "\n  Order Time   : " << currentDateTime() << endl;
    cout << "=====================================================" << endl << endl;

    cout << " -----------------------------------------" << endl;
    cout << "|     Thank you for ordering tickets      |" << endl;
    cout << " -----------------------------------------" << endl;


}

string currentDateTime() {

    time_t t_now = time(0);
    string dateTime = ctime(&t_now);

    return dateTime;

}
