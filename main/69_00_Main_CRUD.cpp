#include <iostream>
#include <fstream>
#include "69_01_CRUD.h"

// Lanjutan latihan (multy file)

int main(){
    // open file
    std::fstream DataAnimeFile, LogAnime;
    int TotalData = isekai::OpenFileCheckList(DataAnimeFile,LogAnime);

    DataAnimeFile.open("dataanime.bin", std::ios::out | std::ios::in | std::ios::binary);
    LogAnime.open("loganime.log", std::ios::trunc | std::ios::out);
    isekai::OpenFileCheck(DataAnimeFile,LogAnime); // cek file
    isekai::OpenFileCheckList(DataAnimeFile,LogAnime); // cek total data for log

    // awal
    BackToMenuPoint:
    isekai::Menu(DataAnimeFile);
    int opsi = isekai::MenuInput();
    char BackToMenu;

    // inti program
    enum { List = 1, Add, Edit, Delete, Exit};
    while (opsi != Exit){
        switch (opsi){
        case List:
            std::cout << "List Anime" << std::endl;
            isekai::ReadData(DataAnimeFile);
            break;
        case Add:
            std::cout << "Add Anime" << std::endl;
            isekai::WriteData(DataAnimeFile);
            break;
        case Edit:
            std::cout << "Edit Anime" << std::endl;
            isekai::EditDataAnime(DataAnimeFile);
            break;
        case Delete:
            std::cout << "Delete Anime" << std::endl;
            isekai::DeleteData(DataAnimeFile);
            break;
        default:
            std::cout << "Sepertinya ada kesalahan" << std::endl;
            break;
        }
        std::cout << "Kembali Ke Menu? (y,n) : ";
        std::cin >> BackToMenu;
        if (BackToMenu == 'y' | BackToMenu == 'Y'){
            goto BackToMenuPoint;
        } else {
            break;
        }
    }
    LogAnime.close();
    DataAnimeFile.close();
    return 0;
}