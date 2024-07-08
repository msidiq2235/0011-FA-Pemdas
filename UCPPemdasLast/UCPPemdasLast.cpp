#include <iostream> 
using namespace std;

class MasukUniversitas {
protected:
    // isi access modifier disini 
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    float totalBiaya;
    // isi daftar variable yang dibutuhkan di bawah ini 

public:
    MasukUniversitas() {
        uangPendaftaran = 0;
        uangSemesterPertama = 0;
        uangBangunan = 0;
        totalBiaya = 0;
        // isi nilai default variable yang dibutuhkan di bawah ini 
    }
    
    virtual void namaJalurMasuk() = 0;
    virtual void hitungTotalBiaya() = 0;
    virtual void tampilkanTotalBiaya() = 0;
    virtual void input() = 0;
    
    // isi disini dengan fungsi virtual yang dibutuhkan 

    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = nilai;
    }
    float getUangPendaftaran() {
        return uangPendaftaran;
    }
    void setUangSemesterPertama(int nilai) {
        this->uangSemesterPertama = nilai;
    }
    float getUangSemesterPertama() {
        return uangPendaftaran;
    }
    void setUangBangunan(int nilai) {
        this->uangBangunan = nilai;
    }
    float getUangBangunan() {
        return uangBangunan;
    }
    void setTotalBiaya(int nilai) {
        this->totalBiaya = nilai;
    }
    int getTotalbiaya() {
        return totalBiaya;
    }
    // isi setter dan getter variable yang dibutuhkan di bawah ini 
    
  
};

class SNBT : public MasukUniversitas {
    // isi disini untuk melengkapi class SNBT 
    void namaJalurMasuk() override {
        cout << "Jalur masuk : SNBT" << endl;
    }

    void input() override {
        cout << "Masukkan uang pendaftaran" << endl;
        cin >> uangPendaftaran;
        cout << "Masukkan uang semester pertama" << endl;
        cin >> uangSemesterPertama;
        cout << "Masukkan uang bangunan" << endl;
        cin >> uangBangunan;
    }
};

class SNBP : public MasukUniversitas {
    // isi disini untuk melengkapi class SNBP 
    
};

int main() {
    // isi disini untuk fungsi main 

}