#include <iostream>
#include <ctime>
    void PrintIntroduction(int Difficulty) //no return type function is void
    {
        std::cout << "\n+ Praven Sehri'ne sizmaya calisan bir Rodok casususun, suanda bulman gereken casus sayisi:" << Difficulty;
        std::cout << "\n+ Icerideki adamlarinin kim oldugunu anlamak icin ona gizli rakamlari soyleyip gizli belgeleri almalisin...\n";
    }

    bool PlayGame(int Difficulty)
    {
    
    // Declare 3 number code
     PrintIntroduction(Difficulty);

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;   
    const int CodeC = rand() % Difficulty + Difficulty;
    // Print CodeSum and CodeProduct to the terminal
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    std::cout << "\n+ ""Soylemen gereken 3 tane gizli sifre var.\n";
    std::cout << "+ Toplamlari " << CodeSum << " olan rakamlarin sifreyi olusturabilecegini hatirliyorsun.\n";
    std::cout << "+ Ayni zamanda bu rakamlarin carpimlarinin cikmasi gereken sayi ise:" << CodeProduct << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the players guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n*** Tebrikler, dogru kisilere ulasabildin! Simdi digerlerini bulma vakti! ***\n";
        return true;
    }
    else 
    {
        std::cout << "\n*** Dogru sayilari soyleyemedin. Hatirlamaya calis. Baska birini bul. ***\n";
        return false;
    }
    
    // == Equality operator, && Logical "and" operator, \n = endl
    }



    // using namespace std; (namespace'i belirleyip her kodda std koymanı gerektirmez)
int main () 
{
    srand(time(NULL)); // create new random sequence based on time of day 

    int LevelDifficulty = 1;
    const int MaxDifficulty = 3;

    while (LevelDifficulty <= MaxDifficulty) // loop game until all levels complete
    {
        std::cout << rand() % 3 << "\n";
        bool bLevelComplete = PlayGame(LevelDifficulty);  // bool bir değere tekrar geri dönmesi sağlar. PlayGame içine >> if ve else içine >> return true ve return false eklenmelidir. PlayGame = bLevelComplete ile eşitlenir.
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
        
    }
    std::cout << "\n *** Tebrikler! Butun belgeleri ele gecirdin! Simdi lorduna donup odulunu alabilirsin ***\n";
    return 0;
}

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /* (uzun halli yorum satır başlangıcı)
    using namespace std; (namespace'i belirleyip her kodda std koymanı gerektirmez)
    */



    
    

	
	

