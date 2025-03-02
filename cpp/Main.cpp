#include "Baju.cpp"
#include <iostream>
#include <string>
#include <vector>

int main() {
    // Array of object
    vector<Baju> vector_produk;
    Baju temporary; // temporary object for input
    // temporary variable for each attributes of baju
    string ID, namaProduk, Jenis, Bahan, Warna, Kategori, Size, Merk;
    int harga, stok;

    // create first hardcode object
    temporary.setID("1");
    temporary.setNamaProduk("Baju_Anjing_Polos");
    temporary.setHargaProduk(50000);
    temporary.setStokProduk(10);
    temporary.setJenis("Baju");
    temporary.setBahan("Katun");
    temporary.setWarna("Merah");
    temporary.setKategori("Anjing");
    temporary.setSize("M");
    temporary.setMerk("PetCo");
    vector_produk.push_back(temporary);

    // create second hardcode object
    temporary.setID("2");
    temporary.setNamaProduk("Baju_Kucing_Motif");
    temporary.setHargaProduk(60000);
    temporary.setStokProduk(15);
    temporary.setJenis("Baju");
    temporary.setBahan("Sutra");
    temporary.setWarna("Biru");
    temporary.setKategori("Kucing");
    temporary.setSize("S");
    temporary.setMerk("MeowStyle");
    vector_produk.push_back(temporary);

    // create third hardcode object
    temporary.setID("3");
    temporary.setNamaProduk("Jaket_Anjing_Waterproof");
    temporary.setHargaProduk(120000);
    temporary.setStokProduk(8);
    temporary.setJenis("Baju");
    temporary.setBahan("Polyester");
    temporary.setWarna("Hitam");
    temporary.setKategori("Anjing");
    temporary.setSize("L");
    temporary.setMerk("PetGear");
    vector_produk.push_back(temporary);

    // create fourth hardcode object
    temporary.setID("4");
    temporary.setNamaProduk("Kaos_Kucing_Nyaman");
    temporary.setHargaProduk(45000);
    temporary.setStokProduk(20);
    temporary.setJenis("Baju");
    temporary.setBahan("Katun");
    temporary.setWarna("Abu-Abu");
    temporary.setKategori("Kucing");
    temporary.setSize("M");
    temporary.setMerk("PawFashion");
    vector_produk.push_back(temporary);

    // create fifth hardcode object
    temporary.setID("5");
    temporary.setNamaProduk("Sweater_Anjing_Hangat");
    temporary.setHargaProduk(90000);
    temporary.setStokProduk(12);
    temporary.setJenis("Baju");
    temporary.setBahan("Wol");
    temporary.setWarna("Coklat");
    temporary.setKategori("Anjing");
    temporary.setSize("XL");
    temporary.setMerk("DoggyWear");
    vector_produk.push_back(temporary);

    // insert jumlah data baru
    int it;
    int num;
    cout << "Masukkan jumlah data baru: ";
    cin >> num;

    // lakukan insert data baru sejumlah num
    for (it = 0; it < num; it++) {
        // masukkan id terlebih dahulu
        cout << "Masukkan ID: ";
        cin >> ID;

        // masukkan nama, harga, dan stok
        cout << "Masukkan Nama, Harga, dan Stok (secara berurut):" << endl;
        cout << "Untuk nama produk tidak menerima spasi" << endl;
        cin >> namaProduk >> harga >> stok;

        // masukkan jenis, bahan, dan warna
        cout << "Masukkan Jenis, Bahan, dan Warna (secara berurut):" << endl;
        cin >> Jenis >> Bahan >> Warna;

        // masukkan kategori, size, dan merk
        cout << "Masukkan Kategori, Size, dan Merk (secara berurut):" << endl;
        cin >> Kategori >> Size >> Merk;

        // insert inputs into object's attributes
        temporary.setID(ID);
        temporary.setNamaProduk(namaProduk);
        temporary.setHargaProduk(harga);
        temporary.setStokProduk(stok);
        temporary.setJenis(Jenis);
        temporary.setBahan(Bahan);
        temporary.setWarna(Warna);
        temporary.setKategori(Kategori);
        temporary.setSize(Size);
        temporary.setMerk(Merk);
        vector_produk.push_back(temporary);
    }

    vector<int> header = {2, 4, 5, 4, 5, 5, 5, 8, 4, 4};
    string panjang;
    for (it = 0; it < vector_produk.size(); it++) {
        // ID produk
        if (header[0] < vector_produk[it].getID().length())
            header[0] = vector_produk[it].getID().length();
        // Nama produk
        if (header[1] < vector_produk[it].getNamaProduk().length())
            header[1] = vector_produk[it].getNamaProduk().length();
        // Harga produk
        panjang = to_string(vector_produk[it].getHargaProduk()); // dirubah jadi string terlebih dahulu
        if (header[2] < panjang.length())
            header[2] = panjang.length();
        // Stok produk
        panjang = to_string(vector_produk[it].getStokProduk()); // dirubah jadi string terlebih dahulu
        if (header[3] < panjang.length())
            header[3] = panjang.length();
        // Jenis produk
        if (header[4] < vector_produk[it].getJenis().length())
            header[4] = vector_produk[it].getJenis().length();
        // Bahan produk
        if (header[5] < vector_produk[it].getBahan().length())
            header[5] = vector_produk[it].getBahan().length();
        // Warna produk
        if (header[6] < vector_produk[it].getWarna().length())
            header[6] = vector_produk[it].getWarna().length();
        // Kategori produk
        if (header[7] < vector_produk[it].getKategori().length())
            header[7] = vector_produk[it].getKategori().length();
        // Size produk
        if (header[8] < vector_produk[it].getSize().length())
            header[8] = vector_produk[it].getSize().length();
        // Merk produk
        if (header[9] < vector_produk[it].getMerk().length())
            header[9] = vector_produk[it].getMerk().length();
    }

    // Menghitung jumlah karakter untuk membuat garis tabel
    int sum = 6;
    for (it = 0; it < 10; it++) {
        sum += header[it];
    }

    // Membuat garis tabel
    for (int space = 0; space < sum + 26; space++) {
        cout << '-';
    }
    cout << endl;

    int space;
    cout << "| ID";
    for (space = 0; space < header[0] - 1; space++) {
        cout << ' ';
    }
    cout << "| Nama";
    for (space = 0; space < header[1] - 3; space++) {
        cout << ' ';
    }
    cout << "| Harga";
    for (space = 0; space < header[2] - 4; space++) {
        cout << ' ';
    }
    cout << "| Stok";
    for (space = 0; space < header[3] - 3; space++) {
        cout << ' ';
    }
    cout << "| Jenis";
    for (space = 0; space < header[4] - 4; space++) {
        cout << ' ';
    }
    cout << "| Bahan";
    for (space = 0; space < header[5] - 4; space++) {
        cout << ' ';
    }
    cout << "| Warna";
    for (space = 0; space < header[6] - 4; space++) {
        cout << ' ';
    }
    cout << "| Kategori";
    for (space = 0; space < header[7] - 7; space++) {
        cout << ' ';
    }
    cout << "| Size";
    for (space = 0; space < header[8] - 3; space++) {
        cout << ' ';
    }
    cout << "| Merk";
    for (space = 0; space < header[9] - 3; space++) {
        cout << ' ';
    }
    cout << " |" << endl;

    // Membuat garis tabel
    for (int space = 0; space < sum + 26; space++) {
        cout << '-';
    }
    cout << endl;

    for (it = 0; it < vector_produk.size(); it++) {
        // ID
        cout << "| ";
        cout << vector_produk[it].getID();
        for (space = 0; space < (header[0] - vector_produk[it].getID().length()); space++) {
            cout << " ";
        }
        cout << ' ';
        // namaProduk
        cout << "| ";
        cout << vector_produk[it].getNamaProduk();
        for (space = 0; space < (header[1] - vector_produk[it].getNamaProduk().length()); space++) {
            cout << " ";
        }
        cout << ' ';
        // Harga
        cout << "| ";
        cout << vector_produk[it].getHargaProduk();
        panjang = to_string(vector_produk[it].getHargaProduk());
        for (space = 0; space < (header[2] - panjang.length()); space++) {
            cout << " ";
        }
        cout << ' ';
        // Stok
        cout << "| ";
        cout << vector_produk[it].getStokProduk();
        panjang = to_string(vector_produk[it].getStokProduk());
        for (space = 0; space < (header[3] - panjang.length()); space++) {
            cout << " ";
        }
        cout << ' ';
        // Jenis
        cout << "| ";
        cout << vector_produk[it].getJenis();
        for (space = 0; space < (header[4] - vector_produk[it].getJenis().length()); space++) {
            cout << " ";
        }
        cout << ' ';
        // Bahan
        cout << "| ";
        cout << vector_produk[it].getBahan();
        for (space = 0; space < (header[5] - vector_produk[it].getBahan().length()); space++) {
            cout << " ";
        }
        cout << ' ';
        // Warna
        cout << "| ";
        cout << vector_produk[it].getWarna();
        for (space = 0; space < (header[6] - vector_produk[it].getWarna().length()); space++) {
            cout << " ";
        }
        cout << ' ';
        // Kategori
        cout << "| ";
        cout << vector_produk[it].getKategori();
        for (space = 0; space < (header[7] - vector_produk[it].getKategori().length()); space++) {
            cout << " ";
        }
        cout << ' ';
        // Size
        cout << "| ";
        cout << vector_produk[it].getSize();
        for (space = 0; space < (header[8] - vector_produk[it].getSize().length()); space++) {
            cout << " ";
        }
        cout << ' ';
        // Merk
        cout << "| ";
        cout << vector_produk[it].getMerk();
        for (space = 0; space < (header[9] - vector_produk[it].getMerk().length()); space++) {
            cout << " ";
        }
        cout << ' ';
        cout << " |" << endl;
    }

    // Membuat garis tabel
    for (int space = 0; space < sum + 26; space++) {
        cout << '-';
    }
    cout << endl;

    return 0;
}
