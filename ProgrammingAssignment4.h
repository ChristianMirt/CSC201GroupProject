#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct footBallPlayerType
{
    string name;
    string position;
    int touchDowns;
    int catches;
    int passingYards;
    int receivingYards;
    int rushingYards;
};

const int MAX = 30;

int openFile(ifstream&);
int openOutFile(ofstream& out);
void showMenu();
void getData(ifstream& inf, footBallPlayerType list[], int& length);
void printPlayerData(footBallPlayerType list[], int length, int playerNum);
void printData(footBallPlayerType list[], int length);
void saveData(ofstream& outF, footBallPlayerType list[], int length);
int searchData(footBallPlayerType list[], int length, string n);
/// replace with function prototypes to:
void UpdateTouchDowns(int playerNum,footBallPlayerType list[],int newTouchDowns,int MAX);
void updateCatches(int, footBallPlayerType[], int, int);
void updatePassingYards(footBallPlayerType list[], int PassingYards, int playerNum,int length);
void updateRecevingYards(int player, footBallPlayerType FootBallList[], int RecYardAmt, int listSize);
int updateRushingYards( footBallPlayerType list[], int numRY, int numPlayer, int length);
