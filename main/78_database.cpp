#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// latihan database sederhana pakai class 
// Pahami aja :)

class Anime{
    public:
        string judul;
        string musim_keluar;
        string studio;
        string eps;

        Anime(string InputJudul, string InputMusim, string InputStudio, string InputEps){
            Anime::judul = InputJudul;
            Anime::musim_keluar = InputMusim;
            Anime::studio = InputStudio;
            Anime::eps = InputEps;
        }

        string LemparKeIsekaiSebelah(){
            return  judul + "\t" + musim_keluar + "\t" + studio + "\t" + eps + "\n";
        }

};

class DataBaseAnime{
    public:
    ofstream outFile;
    ifstream inFile;
    string FileName;
        DataBaseAnime(const char* FileName){
            DataBaseAnime::FileName = FileName;
        }

        void WriteData(Anime Data){
            outFile.open(DataBaseAnime::FileName, ios::app);
            outFile << Data.LemparKeIsekaiSebelah();
            outFile.close();
        }

        void ReadData(Anime Data){
            WriteData(Data);
            
            inFile.open(DataBaseAnime::FileName);
            string output;

            cout << "List Data" << endl;
            cout << "Judul\tMusim\tStudio\tEps" << endl;
            do {
                getline(inFile,output);
                cout << output << endl;
            } while (!inFile.eof());
            
            
            inFile.close();
        }
};




int main(){
    string InputJudul, InputMusim, InputStudio, InputEps;

    cout << "Masukan Judul : ";
    cin >> InputJudul;
    cout << "Musim Keluar  : ";
    cin >> InputMusim;
    cout << "Nama Studio   : ";
    cin >> InputStudio;
    cout << "Jumlah Eps    : ";
    cin >> InputEps;

    Anime InputData(InputJudul,InputMusim,InputStudio,InputEps);
    DataBaseAnime DataAnime("Data.txt");
    DataAnime.ReadData(InputData);


    return 0;
}
