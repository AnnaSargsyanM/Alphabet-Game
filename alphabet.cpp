//     This program asks user to input alphabetical character between A and F 
//     incusively and then outputs fruit, flower, country and animal 
//     starting with the same letter.
// 
//****************************************************************************************************


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char letter;

    cout << "Enter an alphabetical character between 'A' and 'F' "
            "inclusively, in any case: ";
    cin >> letter;

    switch (tolower(letter))
    {
    case 'a':
        cout << "The list of words is:" << endl;
        cout << "\tFruit   \t" << "Apricot" << endl;
        cout << "\tFlower  \t" << "Azalea" << endl;
        cout << "\tCountry \t" << "Armenia" << endl;
        cout << "\tAnimal  \t" << "Aardvark" << endl;
        break;

    case 'b':
        cout << "The list of words is:" << endl;
        cout << "\tFruit   \t" << "Blueberry" << endl;
        cout << "\tFlower  \t" << "Bluet" << endl;
        cout << "\tCountry \t" << "Belarus" << endl;
        cout << "\tAnimal  \t" << "Babirusa" << endl;
        break;

    case 'c':
        cout << "The list of words is:" << endl;
        cout << "\tFruit   \t" << "Cranberry" << endl;
        cout << "\tFlower  \t" << "Camellia" << endl;
        cout << "\tCountry \t" << "Cambodia" << endl;
        cout << "\tAnimal  \t" << "Caribou" << endl;
        break;

    case 'd':
        cout << "The list of words is:" << endl;
        cout << "\tFruit   \t" << "Durian" << endl;
        cout << "\tFlower  \t" << "Dahlia" << endl;
        cout << "\tCountry \t" << "Dominica" << endl;
        cout << "\tAnimal  \t" << "Dinosaur" << endl;
        break;

    case 'e':
        cout << "The list of words is:" << endl;
        cout << "\tFruit   \t" << "Elderberry" << endl;
        cout << "\tFlower  \t" << "Erica" << endl;
        cout << "\tCountry \t" << "Egypt" << endl;
        cout << "\tAnimal  \t" << "Egret" << endl;
        break;

    case 'f':
        cout << "The list of words is:" << endl;
        cout << "\tFruit   \t" << "Feijoa" << endl;
        cout << "\tFlower  \t" << "Feverfew" << endl;
        cout << "\tCountry \t" << "Fiji" << endl;
        cout << "\tAnimal  \t" << "Frog" << endl;
        break;

    }

    ofstream fout;
    fout.open("alphabet.txt");
    fout << "You entered the letter " << letter << endl;

    switch (tolower(letter))
    {
    case 'a':
        fout << "The list of words is:" << endl;
        fout << "\tFruit   \t" << "Apricot" << endl;
        fout << "\tFlower  \t" << "Azalea" << endl;
        fout << "\tCountry \t" << "Armenia" << endl;
        fout << "\tAnimal  \t" << "Aardvark" << endl;
        break;

    case 'b':
        fout << "The list of words is:" << endl;
        fout << "\tFruit   \t" << "Blueberry" << endl;
        fout << "\tFlower  \t" << "Bluet" << endl;
        fout << "\tCountry \t" << "Belarus" << endl;
        fout << "\tAnimal  \t" << "Babirusa" << endl;
        break;

    case 'c':
        fout << "The list of words is:" << endl;
        fout << "\tFruit   \t" << "Cranberry" << endl;
        fout << "\tFlower  \t" << "Camellia" << endl;
        fout << "\tCountry \t" << "Cambodia" << endl;
        fout << "\tAnimal  \t" << "Caribou" << endl;
        break;

    case 'd':
        fout << "The list of words is:" << endl;
        fout << "\tFruit   \t" << "Durian" << endl;
        fout << "\tFlower  \t" << "Dahlia" << endl;
        fout << "\tCountry \t" << "Dominica" << endl;
        fout << "\tAnimal  \t" << "Dinosaur" << endl;
        break;

    case 'e':
        fout << "The list of words is:" << endl;
        fout << "\tFruit   \t" << "Elderberry" << endl;
        fout << "\tFlower  \t" << "Erica" << endl;
        fout << "\tCountry \t" << "Egypt" << endl;
        fout << "\tAnimal  \t" << "Egret" << endl;
        break;

    case 'f':
        fout << "The list of words is:" << endl;
        fout << "\tFruit   \t" << "Feijoa" << endl;
        fout << "\tFlower  \t" << "Feverfew" << endl;
        fout << "\tCountry \t" << "Fiji" << endl;
        fout << "\tAnimal  \t" << "Frog" << endl;
        break;
    }


    return 0;
}

//****************************************************************************************************
/*

Enter an alphabetical character between 'A' and 'F' inclusively, in any case: B
The list of words is:
        Fruit           Blueberry
        Flower          Bluet
        Country         Belarus
        Animal          Babirusa

*/

/*

You entered the letter B
The list of words is:
    Fruit   	Blueberry
    Flower  	Bluet
    Country 	Belarus
    Animal  	Babirusa

*/
