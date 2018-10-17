// prog3WhichLangMacbeth.cpp
//    Use letter frequency counts to determine what language text is in.
//
// Author: Shawn Flesher and Orkhon
// Date: Oct 2, 2018
// Class: CS 141, Fall 2018
// Language: C++
//
// Translations of Macbeth were created online using Google translate, starting with the
// English version at http://shakespeare.mit.edu/macbeth/full.html
// To trigger the translation option, I went to the Chrome browser / Settings / Language
// option and changed the default language, which triggered showing the translation option
// for the English Macbeth page when it was displayed.  The translated text was then
// copy/pasted into a text file and saved.  The texts are stored using the multi-byte
// UTF-8 format, explained at https://en.wikipedia.org/wiki/UTF-8, though here we are
// not attempting to count more than the first 128 alphabetical characters.
//
/* Results of running the final version of the program are shown below.

		Program 3: Which Language

		Letter Frequency Counts:
			 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span
		A:   6018  9416  6544  5068  7541  8935  9939 10052
		B:   1464   448  1081  2060  1746  1221  1173  1387
		C:   2144   636  3028  3126  1014  3865  2855  3222
		D:   3331  1013  2698  4592  2265  2945  3687  3815
		E:   9270  7187 12782 14779  8280  9364 10551 10861
		F:   1701   297  1101  1464   932  1099  1039   653
		G:   1333   187   772  2503  2975  1423   983   936
		H:   5244  2384  1004  4775  1687  1485  1413  1263
		I:   4653  8022  5583  7062  2961  8128  4179  3964
		J:     38  1331   538   148  1049     5   216   429
		K:    691  3952    28  1080  3551    51    19    18
		L:   3294  4648  4240  3089  4658  4814  2082  3985
		M:   2481  3526  3269  2861  3812  2790  4415  3021
		N:   4987  7958  5958  9026  4725  5966  4455  5704
		O:   6054  4219  5315  2208  3529  8668  8898  7605
		P:   1000  1331  2297   466   448  2060  1862  1842
		Q:    121    78   907    84    77   548   954   883
		R:   4518  1784  5986  5955  2802  5357  5328  5706
		S:   4943  5425  6898  5852  4538  4863  6774  6468
		T:   7055  7620  6025  5477  5632  5373  3729  3932
		U:   2590  4226  5373  3327   963  3081  3840  3591
		V:    657  1784  1566   661  1297  1287  1351   893
		W:   1926   120    78  1797   138   141    68    61
		X:    112    45   328    89    49    42   260    91
		Y:   1637  1403   247   169  1998   216    65   891
		Z:     15     3   343   939  2742   490   314   301

		Letter frequency order:
			 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span
		    	E     A     E     E     E     E     E     E
				T     I     S     N     A     A     A     A
				O     N     A     I     T     O     O     O
				A     T     T     R     N     I     S     S
				H     E     R     S     L     N     R     R
				N     S     N     T     S     T     N     N
				S     L     I     A     M     R     M     L
				I     U     U     H     K     S     I     I
				R     O     O     D     O     L     U     T
				D     K     L     U     G     C     T     D
				L     M     M     C     I     U     D     U
				U     H     C     L     R     D     C     C
				M     R     D     M     Z     M     L     M
				C     V     P     G     D     P     P     P
				W     Y     V     O     Y     H     H     B
				F     J     F     B     B     G     V     H
				Y     P     B     W     H     V     B     G
				B     D     H     F     V     B     F     V
				G     C     Q     K     J     F     G     Y
				P     B     G     Z     C     Q     Q     Q
				K     F     J     V     U     Z     Z     F
				V     G     Z     P     F     Y     X     J
				Q     W     X     Y     P     W     J     Z
				X     Q     Y     J     W     K     W     X
				J     X     W     X     Q     X     Y     W
				Z     Z     K     Q     X     J     K     K

		Copy and paste a paragraph of text to be analyzed, followed by ^z (PC) or ^d (Mac): 
		Ma per arrivare a un agreement bisogna essere in due. E dato che il governo intende 
		resistere sui numeri della manovra, è necessario offrire garanzie all’Europa e ai 
		mercati. Perciò sono stati stabiliti due capisaldi: uno tecnico, l’altro più politico. 
		La riduzione strutturale del debito viene fissato come un «obiettivo strategico», 
		non a caso sottolineato da Di Maio dopo il vertice. La linea dell’esecutivo è che 
		per far ripartire l’Italia sia necessario «cambiare approccio» con una manovra 
		espansiva «dopo anni di cure rigoriste senza risultati», ma s

		A:51 B:5 C:20 D:15 E:55 F:4 G:6 H:2 I:54 J:0 K:0 L:22 M:10 N:29 O:39 P:13 Q:0 R:37 S:28 T:31 U:15 V:9 W:0 X:0 Y:0 Z:3 

		Letter frequency order:
			 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span  User
				E     A     E     E     E     E     E     E     E
				T     I     S     N     A     A     A     A     I
				O     N     A     I     T     O     O     O     A
				A     T     T     R     N     I     S     S     O
				H     E     R     S     L     N     R     R     R
				N     S     N     T     S     T     N     N     T
				S     L     I     A     M     R     M     L     N
				I     U     U     H     K     S     I     I     S
				R     O     O     D     O     L     U     T     L
				D     K     L     U     G     C     T     D     C
				L     M     M     C     I     U     D     U     D
				U     H     C     L     R     D     C     C     U
				M     R     D     M     Z     M     L     M     P
				C     V     P     G     D     P     P     P     M
				W     Y     V     O     Y     H     H     B     V
				F     J     F     B     B     G     V     H     G
				Y     P     B     W     H     V     B     G     B
				B     D     H     F     V     B     F     V     F
				G     C     Q     K     J     F     G     Y     Z
				P     B     G     Z     C     Q     Q     Q     H
				K     F     J     V     U     Z     Z     F     J
				V     G     Z     P     F     Y     X     J     K
				Q     W     X     Y     P     W     J     Z     Q
				X     Q     Y     J     W     K     W     X     W
				J     X     W     X     Q     X     Y     W     X
				Z     Z     K     Q     X     J     K     K     Y

				60    78    16    50    94    10    18    13  <--- Difference (This line is not part of expected output, but is helpful!)

		Language is Italian
 
 */
#include <iostream>
#include<string>
#include<cctype>
#include<fstream>
#include<iomanip>
#include<cstdlib>
using namespace std;

const int NUM_LANGUAGES = 9;                                           //The number of languages being tested NOTE: This includes the user input col
//const int NUM_LANGUAGES_WITH_USER_INPUT = NUM_LANGUAGES + 1;          //The number of languages plus one (the one is used for the user input) 
const int NUM_LETTERS = 26;                                            //The number of letters in the english alphabet.

//NOTE: descriptions are above function names in definitions. 	  
void extractLetters(string[], int[][NUM_LANGUAGES] );
void countLetters(int[][NUM_LANGUAGES], char, int);
void displayLetterCount(int[][NUM_LANGUAGES], string[]);
void sortLetters(int[][NUM_LANGUAGES]);
void displaySortedLetters(int[][NUM_LANGUAGES], string[], bool includeUserData = false);
//void getUserData()

int main(){
	                                                                    
	string languages[] = {"Engl",  "Finn",  "Fren",  "Germ",  "Hung",  "Ital",  "Port",  "Span", "User"};     //The eight languages that this program will test for. 
	string fileNames[] = {"MacbethEnglish.txt", "MacbethFinnish.txt", "MacbethFrench.txt",            //The names of the files containing all the translations of Macbeth
				          "MacbethGerman.txt","MacbethHungarian.txt", "MacbethItalian.txt", 
						  "MacbethPortuguese.txt", "MacbethSpanish.txt"};
	int numLetters[NUM_LETTERS] [NUM_LANGUAGES];                                                      //Two dimenstional array that holds the language and the letter
	int userMenuChoice;                                                                               //Holds the user's choice for the start menu
	                                                
	
	
	//This nested for loop expression initializes all of the contents of numLetters to 0
	for(int col = 0; col < (NUM_LANGUAGES); col++){
		for(int row = 0; row < (NUM_LETTERS); row ++){
		numLetters[row][col] = 0;
		}
	}
	
	//Display the title of the program and the menu options. Get the users choice
	cout << "Program 3: Which Language" << endl; 
	cout << endl; 
	
	cout << "Select from the following stages of output to display:\n";
	cout << "   " << "1. Letter frequency counts\n";
	cout << "   " << "2. Letter frequency order\n"; 
	cout << "   " << "3. Get user input and display frequency counts\n";
	cout << "   " << "4. Get user input, display frequency counts, and display language\n";
	cout << "   " << "0. Exit the program\n"; 
	
	cout << "Your choice --> ";
	cin >> userMenuChoice; 
	cout << endl;
	
	//The leters are extracted from the files before the switch statement that chooses what information to show
	//Only runs if the choice isn't exit
	if(userMenuChoice != 0){
	extractLetters(fileNames, numLetters);
	}
	
	//This series of if statements adds on the different graphs and tables associated with each menu option
	if(userMenuChoice == 0){
        exit(-1);
	}
	
	//Stage 1
	if(userMenuChoice > 0){
		cout << "Letter Frequency Counts:\n";
		displayLetterCount(numLetters, languages);
		cout << endl;
	}
	
	//Stage 2
	if(userMenuChoice > 1){
		cout << "Letter frequency order:\n";
		sortLetters(numLetters);
		displaySortedLetters(numLetters, languages);
	    cout << endl;
	}
	
	//Stage 3
	if(userMenuChoice > 2){
		displaySortedLetters(numLetters, languages, true);
	}
	
	//Stage 4
	if(userMenuChoice > 3){
		
	}
		
	return 0; 
}

/********************************************************************
 * This function is used to open each file and extract the characters
 * one by one. Inside of this funciton it also calls the countLetter()
 * function to count those characters into a two dimensional array.
 *
 ********************************************************************/

void extractLetters(string fileName[], int numLetters[][NUM_LANGUAGES]){
	
	char letter = ' ';               //Temporarily holds each letter when it is extracted
	ifstream extract;                //The name of the stream of data from each file
	
	//This loop is used to iterate each language file name. For each fileName it will open the file, count the characters, and close the file stream
	for(int langIndexVal = 0; langIndexVal < (NUM_LANGUAGES - 1); langIndexVal++ ){
	
	   //Open the file stream 
	   extract.open(fileName[langIndexVal].c_str());
	
	   //Check if the file opened correctly. If not, display warning and exit the program
	   if(!extract.is_open()){
		   cout << "File could not open. Exiting...\n";
		   exit(-1);
	   }
		
       //extract the letters and count them from each file while there are still characters extracting
	   while(extract >> letter){
	      	countLetters(numLetters, letter, langIndexVal);
       }
       
       //Close the file stream
       extract.close();
  }
}

/*********************************************************
* This function is called from withing extractLetters()
* it accepts the 2D array as a parameter along with the 
* letter from the stream and the current column. Column 
* must be passed because because each language has every 
* letter in its column.
***********************************************************/
void countLetters(int numLetters[][NUM_LANGUAGES], char letter, int column){
	if(isalpha(letter)){
		letter = toupper(letter);
		numLetters[letter-'A'][column]++;
	}
}

/****************************************************
* This function displays the contents of numLetters 
* with the language headers
*
*****************************************************/
void displayLetterCount(int numLetters[][NUM_LANGUAGES], string languages[]){
	
	//The first language header is displayed first to get the width right
	cout << setw(9) << languages[0];
	
	//Each header is displayed
	for(int i = 1;i < (NUM_LANGUAGES - 1); i++){
		cout << setw(6) << languages[i];
	}
	cout << endl;
	
	//displays the letter and the number of letters counted for each language
	for(int row = 0; row < (NUM_LETTERS); row ++){
		cout << (char)(row+'A') << ": ";
		for(int col = 0; col < (NUM_LANGUAGES - 1); col++){
			cout << setw(6) << numLetters[row][col];
		}
		cout << endl;
	}
}

/*********************************************************
* This function examines the counts of the letters and
* orders them based on frequency. 
*********************************************************/
void sortLetters(int numLetters[][NUM_LANGUAGES]){
	
	int orderedLetters[NUM_LETTERS];          //This array is temporarily used to store the order of the letters before it is copied back into the proprt column of numLetters array
    int maxCount;                            //Set the Largest count to the first element.
    int indexOfMax;                          //Temporarily holds the value of the index of the most common letter (initialized to the first index
    
	//Iterates through this sorting process for each letter. 
    for(int col = 0; col < (NUM_LANGUAGES - 1); col++){
    	maxCount = numLetters[0][col];    
	    indexOfMax = 0;                    
	    
	    //for each pass of this loop one letter will be put into place. Therefore the loop must iterate NUM_LETTERS times.
	    for(int numLettersSorted = 0; numLettersSorted < NUM_LETTERS; numLettersSorted++){
	    	//Iterate through each row to find max
			for(int row = 0; row < NUM_LETTERS; row++){
	    		//if the current element of numLetters is bigger than the maxcount it becomes maxCount.
	    		if(numLetters[row][col] > maxCount){
	    			maxCount = numLetters[row][col]; 
	    			indexOfMax = row;
				}
			}
			orderedLetters[numLettersSorted] = indexOfMax;
			numLetters[indexOfMax][col] = -1;     //The value of the max letter is set to -1 so that it is ignored the next loop   
		    maxCount = 0;
	    }
	    
	    //replaces the letter counts in numLetters with the index values of the most frequent letters for each col
	    for(int i = 0; i < NUM_LETTERS; i++){
	    	numLetters[i][col] = orderedLetters[i];
		}
	}
}

/***********************************************************************************
*  After the letters are ordered based on frequency, this funciton displays them
*  NOTE: it uses the same numberArray as before ,but now it holds the index of the most 
*  frequent letters (which happens to be the distance from 'A'. This function MUST be run after 
*  orderLetters in order to work correctly
*
* NOTE: includeUserData has a default value of false. If true is passed in the function will include
*       The user data in the output of the sorted letters.
**********************************************************************************/
void displaySortedLetters(int numLetters[][NUM_LANGUAGES], string languages[], bool includeUserData){
	
	//set the number of columns equal to the number of languages. not including the user data
	int numCol = NUM_LANGUAGES - 1;
	
	//If true is passed into the function the number of columns is equal to the number of languages. This means that userData will be included.
	if(includeUserData){
        numCol = NUM_LANGUAGES;
	}
	//The first language header is displayed first to get the width right
	cout << setw(9) << languages[0];
	
	
	//Each header is displayed
	for(int i = 1;i < numCol; i++){
		cout << setw(6) << languages[i];
	}
	cout << endl;
	
	//displays the letter and the number of letters counted for each language
	for(int row = 0; row < (NUM_LETTERS); row ++){
		
		//These three spaces are so that the values line up better but still have width 6
	    cout << "   ";
	    
		for(int col = 0; col < (numCol); col++){
			cout << setw(6) << (char)(numLetters[row][col] + 'A');
		}
		cout << endl;
	}
}

