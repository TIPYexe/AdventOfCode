#include <iostream>
#include <fstream>
#include <string.h>

int main() {

   std::ifstream fin;
   fin.open("F:\\OJI\\cppreference\\Advent of code\\input.txt");
   std::string rand;
   std::string key_words = "byriyreyrhgthcleclpid";
   int nr=0;

    while(fin){

        std::getline(fin, rand);
        int aux = 0;

        while( !rand.empty() ){
            for(int i=0; i < key_words.length(); i+=3)
                if(strstr(rand.c_str(), key_words.substr(i, 3).c_str())!=NULL)
                    aux++;
        std::getline(fin, rand);
        }

        if(aux>=7)
            nr++;
    }

    std::cout<<nr;
}
