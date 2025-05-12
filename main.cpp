#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

char getComputerChoice() {

    char choices[4] = {'A', 'S', 'P', 'U'};
    return choices[rand() % 4];
}

string checkWinner(char player, char computer) {

    if (player == computer) {
        return "Neizskirts!";
    }

    if (player == 'A' && computer == 'S') {
        return "Tu uzvareji!";
    }


    if (player == 'S' && computer == 'P') {
        return "Tu uzvareji!";
    }


    if (player == 'P' && computer == 'A') {
        return "Tu uzvareji!";
    }


    if (player == 'U' && computer == 'P') {
        return "Tu uzvareji!";
    }


    if (player == 'A' && computer == 'U') {
        return "Tu uzvareji! ";
    }


    if (player == 'U' && computer == 'S') {
        return "Tu uzvareji! ";
    }


    return "Tu zaudeji. Dators uzvareja.";
}


void printScore(int playerScore, int computerScore) {

    cout << "Rezultats: Tu - " << playerScore << " | Dators - " << computerScore << endl;
}

void playGame() {

    int playerScore = 0, computerScore = 0;

    while (playerScore < 3 && computerScore < 3) {

        char playerChoice;

        cout << "Izvelies (A - akmens, S - skeres, P - papirs, U - udens): ";
        cin >> playerChoice;

        playerChoice = toupper(playerChoice);

        if (playerChoice != 'A' && playerChoice != 'S' && playerChoice != 'P' && playerChoice != 'U') {

            cout << "Nederiga izvele! Megini velreiz." << endl;

            continue;
        }

        char computerChoice = getComputerChoice();

        cout << "Dators izvelejas: " << computerChoice << endl;

        string result = checkWinner(playerChoice, computerChoice);
        cout << result << endl;

        if (result == "Tu uzvareji!") playerScore++;

        else if (result == "Tu zaudeji.") computerScore++;

        printScore(playerScore, computerScore);
    }

    if (playerScore == 3){ cout << " _____        _                        _                      _       _       " << endl;
cout << "|_   _|   _  (_) ___  __ _ _   ___   _(_)  _ __ ___   ___  __| | __ _| |_   _ " << endl;
cout << "  | || | | | | |/ _ \\/ _` | | | \\ \\ / / | | '_ ` _ \\ / _ \\/ _` |/ _` | | | | |" << endl;
cout << "  | || |_| | | |  __/ (_| | |_| |\\ V /| | | | | | | |  __/ (_| | (_| | | |_| |" << endl;
cout << "  |_| \\__,_| |_|\\___|\\__, |\\__,_| \\_/ |_| |_| |_| |_|\\___|\\__,_|\\__,_|_|\\__,_|" << endl;
cout << "                     |___/                                             )_)              " << endl;

   }else cout << "Tu neieguvi medalu." << endl;
cout << " ______       _     _ _            _ " << endl;
cout << "(_____ \\     | |   | (_)          | |" << endl;
cout <<    "   _____) _____| | __| |_ _____  ___| |" << endl;
cout << "|  ____(____ | |/ _  | | ___ |/___|_|" << endl;
cout << "| |    / ___ | ( (_| | | ____|___ |_" << endl;
cout << "|_|    \\_____|\\_\\____|_|_____(___/|_|" << endl;


    char restart;

    cout << "Vai velaties spelet velreiz? (Ja/Ne): ";
    cin >> restart;


    restart = tolower(restart);


    if (restart == 'j') {
        cout << "Sakam jaunu speli!" << endl;
        playGame();

    }
    else if (restart == 'n') {

        cout << "Paldies par speli! Uz redzesanos!" << endl;
    }
    else {

        cout << "Ievadita atbilde nav saprotama. Ludzu, rakstiet 'Ja' vai 'Ne'." << endl;
    }
}

int main() {

    srand(time(0));


 cout << "   _   _                                     _                                           _                        _                  " << endl;
 cout << "  /_\\ | | ___ __ ___   ___ _ __  ___     ___| | _____ _ __ ___ ___     _ __   __ _ _ __ (_)_ __ ___     _   _  __| | ___ _ __  ___  / \\ " << endl;
 cout << " //_\\\\| |/ | '_ ` _ \\ / _ | '_ \\/ __|   / __| |/ / _ | '__/ _ / __|   | '_ \\ / _` | '_ \\| | '__/ __|   | | | |/ _` |/ _ | '_ \\/ __|/  /" << endl;
cout << "/  _  |   <| | | | | |  __| | | \\__ \\_  \\__ |   |  __| | |  __\\__ \\_  | |_) | (_| | |_) | | |  \\__ \\_  | |_| | (_| |  __| | | \\__ /\\_/" << endl;
cout << "\\_/ \\_|_|\\_|_| |_| |_|\\___|_| |_|___( ) |___|_|\\_\\___|_|  \\___|___( ) | .__/ \\__,_| .__/|_|_|  |___( )  \\__,_|\\__,_|\\___|_| |_|___\\/" << endl;
 cout <<    "                                   |/                            |/   |_|         |_|              |/                                  " << endl;
    cout << "Laipni lugts spele 'Akmens, skeres, papirs, udens'!" << endl;
    playGame();

    return 0;
}
