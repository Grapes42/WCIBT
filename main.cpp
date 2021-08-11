#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	
	string dishes[] = {"Beurre blanc",
    "Beurre fondue",
    "Beurre Maître d'Hôtel",
    "Beurre manié",
    "Beurre monté",
    "Beurre noir",
    "Beurre noisette",
    "Bread and butter pudding",
    "Buttered rice",
    "Butter cake",
    "Butter cookie",
    "Butter pecan",
    "Butter pie",
    "Butter tart",
    "Butter tea",
    "Butterbrot",
    "Buttercream",
    "Butterkuchen",
    "Buttermilk pie",
    "Butterscotch",
    "Buttery (bread)",
    "Chicken Kiev",
    "Chocolate butter",
    "Compound butter, or beurre composé",
    "Cookie butter",
    "Croissant",
    "Danish pastry",
    "Deep-fried butter",
    "Egg butter",
    "Garlic butter, or beurre à la bourguignonne",
    "Gooey butter cake",
    "Hard sauce",
    "Hollandaise sauce",
    "Karelian pasty",
    "Kouign-amann",
    "Linzer torte",
    "Pain aux raisins",
    "Pozharsky cutlet",
    "Popcorn",
    "Puff pastry",
    "Remonce",
    "Torpedo dessert"};
    
    
    size_t count = 0;
    for (size_t i = 0; i < sizeof(dishes)/sizeof(*dishes); i++)
        if (dishes[i] != "")
            count++;
    //cout << count << endl;
    
    cout << dishes[rand() % count-1 + 0] << endl;
    
    int waiter;
    cin >> waiter;
    
    return 0;
}
