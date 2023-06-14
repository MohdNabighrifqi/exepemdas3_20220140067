#include <iostream>
#include <vector>
using namespace std;

class buku;
class pengarang;
class penerbit;

class buku {
public :
	string namaBuku;
	vector <buku*> daftar_buku;

	buku(string pnamaBuku) :namaBuku (pnamaBuku) {}
	
	void tambahBuku(buku*);
	void cetakBuku();
	};

class pengarang {
public :
public:
	string namaPengarang;
	vector <penerbit*> daftar_penerbit;

	pengarang(string pNama) : namaPengarang(pNama) {}

	void tambahPenerbit(penerbit*);
	void cetakPenerbit();

};

class penerbit {
public:
	string namaPenerbit;
	vector <pengarang*> daftar_pengarang;
	
	penerbit(string pNama) : namaPenerbit(pNama) {}

	void tambahPengarang(pengarang*);
	void cetakPengarang();
};
void pengarang::tambahPenerbit(penerbit* pPenerbit)
{
	daftar_penerbit.push_back(pPenerbit);
}
void pengarang::cetakPenerbit() {
	cout << "daftar penerbit yang diikuti \"" << this->namaPengarang << "\":\n";
	for (auto& a : daftar_penerbit) {
		cout << a->namaPenerbit << "\n";
	}
	cout << endl;
}

void penerbit::tambahPengarang(pengarang* pPengarang)
{
	daftar_pengarang.push_back(pPengarang);
}

void penerbit::cetakPengarang() {
	cout << "daftar pengarang yang diikuti \"" << this->namaPenerbit << "\"n";
	for(auto& a : daftar_pengarang) {
		cout << a->namaPengarang << "\n";
	}
	cout << endl;
}

void buku::tambahBuku(buku* pnamaBuku) {
	daftar_buku.push_back(pnamaBuku);
}

void buku::cetakBuku() {
	cout << " daftar nama buku yang dikarang \"" << this->namaBuku << "\"n";
	for (auto& a : daftar_buku) {
		cout << a->namaBuku << "\n;";
	}
}


int main() {
	
	penerbit* varPenerbit1 = new penerbit("Gama Press");
	penerbit* varPenerbit2 = new penerbit("Intan Pariwara");

	pengarang* varpengarang1 = new pengarang("Joko");
	pengarang* varpengarang2 = new pengarang("Lia");
	pengarang* varpengarang3 = new pengarang("Giga");
	pengarang* varpengarang4 = new pengarang("Asroni");

	buku* varbuku1 = new buku("Fisika");
	buku* varbuku2 = new buku("Algoritma");
	buku* varbuku3 = new buku("Basisdata");
	buku* varbuku4 = new buku("Dasar Pemograman");
	buku* varbuku5 = new buku("Matematika");
	buku* varbuku6 = new buku("Multimedia1");

	return 0;
}