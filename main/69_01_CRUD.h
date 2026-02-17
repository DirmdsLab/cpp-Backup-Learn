#include <fstream>

namespace isekai {
    struct DataAnime{
    char judul[100];
    int eps;
    float ratting;
    char status[30];
    };

    // cek status file external
    void OpenFileCheck(std::fstream &, std::fstream &);
    int OpenFileCheckList(std::fstream &, std::fstream &);
    int OpenFileCheckList(std::fstream &);
    void CekStatusDataBase(std::fstream &);

    // Menu
    void Menu(std::fstream &);
    int MenuInput();

    // read data
    DataAnime ReadData(std::fstream &);

    // write data
    void WriteData(std::fstream &);

    // edit data
    void EditDataAnime(std::fstream &);

    // delete data
    void EditDataAnime(std::fstream &, int input);
    DataAnime ReadDataDel(std::fstream &, int input);
    void DeleteData(std::fstream &);

}


