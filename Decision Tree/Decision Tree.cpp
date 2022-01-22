#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string GetASagaBegins() {
    string aSagaBegins;
    cout << "You grew up on a wasteland of a planet. Old Ben gave you your father's lightsaber and has given you the chance to go on some grand adventure to save the galaxy, what do you do?" << endl;
    cout << "a) Stay home where it is safe and become a lonely moisture farmer." << endl;
    cout << "or" << endl;
    cout << "b) Join old Ben Kenobi to return some droids to the Rebel Alliance." << endl << endl;
    cin >> aSagaBegins;
    return aSagaBegins;
}

string GetMoistureFarmer() {
    string moistureFarmer;
    cout << "You selected a)" << endl;
    cout << "As you spend time building your farm and starting from scratch, you try to think of ways to improve your farm. Do you:" << endl;
    cout << "a) Just give up and work for your dad?" << endl;
    cout << "or" << endl;
    cout << "b) Try your best to build your own farm from scratch?" << endl << endl;
    cin >> moistureFarmer;
    return moistureFarmer;
}

string GetAdventureBegins() {
    string adventureBegins;
    cout << "You selected b)" << endl;
    cout << "You go to Mos Eisley and hire Han Solo and Chewbacca. You're on your way to Alderaan, but when you get there it's gone! Do you:" << endl;
    cout << "a) Go to the small moon to rest as you think of a plan." << endl;
    cout << "or" << endl;
    cout << "b) Figure some other way to pay Han Solo for the ride." << endl << endl;
    cin >> adventureBegins;
    return adventureBegins;
}

string GetThatsNoMoon() {
    string thatsNoMoon;
    cout << "You selected a)" << endl;
    cout << "That's no moon! It's a massive battle station and you have been caught in it's tractor beam! ";
    cout << "You are able to sneak in and find out that the Princess is on board. Do you:" << endl;
    cout << "a) Save the princess!!" << endl;
    cout << "or" << endl;
    cout << "b) Just focus on getting out alive." << endl << endl;
    cin >> thatsNoMoon;
    return thatsNoMoon;
}

string GetRescueMission() {
    string rescueMission;
    cout << "You selected a)" << endl;
    cout << "You found the princess and have barely made it back to your ship when you see old Ben fighting Darth Vader and losing! Do you:" << endl;
    cout << "a) Use this chance to escape. Don't let his death be a waste!" << endl;
    cout << "or" << endl;
    cout << "b) Rush in and try to avenge him! Nobody can hurt crazy Ben and get away with it!" << endl << endl;
    cin >> rescueMission;
    return rescueMission;
}

int main() {
    string aSagaBegins;
    string moistureFarmer;
    string adventureBegins;
    string thatsNoMoon;
    string rescueMission;
    string inputRestart;
    string diceRoll;
    string letsTryAgain;
    int numCredits = 1000;
    int numSeason = 0;
    int extraCredits = 0;
    double landBought = 0.0;
    double workersHired = 0.0;
    double landOwned = 0.0;
    double numEmployees = 0.0;
    int d20;
    srand(time(0));

    do {
        aSagaBegins = "z";
        moistureFarmer = "z";
        adventureBegins = "z";
        thatsNoMoon = "z";
        rescueMission = "z";
        inputRestart = "z";
        d20 = 0;
        numCredits = 1000;
        extraCredits = 0;
        landOwned = 0.0;
        numEmployees = 0.0;

        aSagaBegins = GetASagaBegins();

        if (aSagaBegins == "a") {
            moistureFarmer = GetMoistureFarmer();

            if (moistureFarmer == "a") {
                cout << "You selected a)" << endl;
                cout << "As you live the simple life farming with your family you marry a girl from down the street." << endl;
                cout << "You continue to live the easy life with your family farm and your family. You grow old and leave your farm to your children." << endl;
                cout << "THE END" << endl << endl;
            }
            else {
                cout << "You selected b)" << endl;
                cout << "You have " << numCredits << " credits. It cost 20 credits for an acre of land and 50 credits to hire a worker." << endl;
                cout << "You have 3 seasons to prepare your farm. Be wise." << endl << endl;
                do {
                    numSeason += 1;
                    extraCredits = (100 + (landOwned * 50) + (numEmployees * 25));
                    cout << "The season has been good, you gain " << extraCredits << " credits for your work." << endl;
                    numCredits += extraCredits;
                    cout << "You now have " << numCredits << " credits." << endl;
                    cout << "How many acres do you want buy?" << endl;
                    cin >> landBought;
                    numCredits -= (landBought * 20);
                    landOwned += landBought;
                    cout << "How many more workers do you hire?" << endl;
                    cin >> workersHired;
                    numEmployees += workersHired;
                    numCredits -= (workersHired * 50);
                    cout << "You have " << numCredits << " left." << endl;
                    cout << "You own " << landOwned << " acre(s) of land." << endl;
                    cout << "You have " << numEmployees << " hired worker(s)." << endl;
                    cout << "End of the Season." << endl << endl;
                } while (numSeason < 3);
                if (landOwned / numEmployees < 1.5) {
                    cout << "You have to many employees and not enough land for them to work, they begin to get lazy." << endl;
                    cout << "They decide that they don't want to work for you anymore and form a coup to remove you." << endl;
                    cout << "You are now homeless with nothing." << endl;
                    cout << "THE END" << endl << endl;
                }
                else if (landOwned / numEmployees > 2.5) {
                    cout << "You have to much land and not enough workers which causes you to have to work the fields yourself." << endl;
                    cout << "You are forced to work all your days and meet your untimely demise in a farming accident." << endl;
                    cout << "THE END" << endl << endl;
                }
                else {
                    cout << "You have raised your farm well. You continue to grow and expand, buying more land and more workers." << endl;
                    cout << "You quickly grow a farming empire to reign over the galaxy!!" << endl;
                    cout << "THE END" << endl << endl;
                }
            }
        }
        else {
            adventureBegins = GetAdventureBegins();

            if (adventureBegins == "a") {
                thatsNoMoon = GetThatsNoMoon();

                if (thatsNoMoon == "a") {
                    rescueMission = GetRescueMission();

                    if (rescueMission == "a") {
                        cout << "You selected a)" << endl;
                        cout << "Congratulations! You have saved the princess and escaped with your lives!" << endl;
                        cout << "Now it is time to reconvene with the Rebel Alliance with these plans!" << endl;
                        cout << "To be continued..." << endl << endl;
                    }
                    else {
                        cout << "You selected b)" << endl;
                        cout << "You rush in but you see Old Ben get cut in half and totally disappear total wizard-like." << endl;
                        cout << "You have your father's lightsaber so you believe you may have a chance to win this fight." << endl;
                        cout << "You rush in and try those crazy moves you've seen on TV and pray you may have a chance to win." << endl;

                        do {
                            letsTryAgain = "z";
                            cout << "Roll a d20 for a Luck skill check (hit any key then enter to roll)." << endl << endl;
                            cin >> diceRoll;
                            d20 = rand() % 19;

                            while ((d20 >= 14) && (d20 < 19)) {
                                d20 += 1;
                                cout << "You rolled a " << d20 << endl;
                                cout << "In your frantic swinging you catch Darth Vader off guard and cut off his arms." << endl;
                                cout << "Being disarmed and totally in shock he falls to his knees as you pick up his lightsaber and hold both to his throat." << endl;
                                cout << "You ask him if he has any last words. He calls out, \"LONG LIVE THE EMPIRE!!\" as you silence him with a quick pull from your lightsabers." << endl;
                                cout << "With Darth Vader defeated, the storm troopers just stand in awe as you get on your ship and leave to join the Rebel Alliance with the princess.";
                                cout << endl << "To be continued..." << endl << endl;
                                d20 = 20;
                            }
                            while (d20 == 19) {
                                d20 += 1;
                                cout << "You rolled a " << d20 << endl;
                                cout << "As you frantically swing your lightsaber you accidentally throw it straight down and it sinks through the floor." << endl;
                                cout << "Darth Vader force chokes you and begins to monologue about your ignorance in the ways of the force." << endl;
                                cout << "As you are struggling to breathe you hear an explosion off in the distance as the Death Star begins to tremble." << endl;
                                cout << "Your lightsaber dropped all the way to the main power supply and destroyed it! The Death Star is going to explode!" << endl;
                                cout << "Darth Vader drops you as he realizes what's happening and makes a break for his personal Tie Fighter." << endl;
                                cout << "You and your crew take advantage of the chaos and make your escape, the Death Star exploding off on the distance behind you." << endl;
                                cout << "With the Death Star miraculously destroyed, you head off to the Rebel Alliance with the good news." << endl;
                                cout << "THE END (that was sudden)" << endl << endl;
                                d20 = 20;
                            }
                            while (d20 < 14) {
                                d20 += 1;
                                cout << "You rolled a " << d20 << endl;
                                cout << "Darth Vader easily blocks all of your attempts to hit him, quickly disarming you (literally)." << endl;
                                cout << "Darth Vader captures you and kills your friends. There is no escape." << endl;
                                cout << "THE END" << endl << endl;
                                d20 = 20;
                            }

                            cout << "Would you like to roll again for another chance to fight Darth Vader?" << endl << endl;
                            cin >> letsTryAgain;
                        } while (letsTryAgain == "Yes" || letsTryAgain == "yes");
                    }
                }
                else {
                    cout << "You selected b)" << endl;
                    cout << "Ben goes off to turn off the tractor beam and you are able to make it out alive, but Ben died in a fight with Darth Vader." << endl;
                    cout << "Now you must figure out some other way to deliver the message but you have no idea where to start." << endl;
                    cout << "THE END" << endl << endl;
                }
            }
            else {
                cout << "You selected b)" << endl;
                cout << "With Han Solo wanting to be paid you must find ways of making money. You go on a quest robing the rich in order ";
                cout << "to make enough money to pay off Han. You go on a long quest becoming rich while the Empire looms on oppressing the weak." << endl;
                cout << "THE END" << endl << endl;
            }
        }

        cout << "Would you like to try again from the beginning?" << endl << endl;
        cin >> inputRestart;
    } while (inputRestart == "Yes" || inputRestart == "yes");

    cout << "You entered negatively." << endl << "Time to take a nap." << endl;

    return 0;
}
