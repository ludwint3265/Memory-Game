#include "MemoryGame.hpp"
#include <string>
#include <cstdlib>
int main(){
   MemoryGame game;
   game.~MemoryGame();

   MemoryGame game2(3, 9);
   game2.~MemoryGame();

   std::string words[] = {"Hello", "Hi", "Hey"};
   int size = sizeof(words) / sizeof(words[0]);
   MemoryGame game3(words, 3, 9);
   game3.~MemoryGame();
   
   return 0;
}
