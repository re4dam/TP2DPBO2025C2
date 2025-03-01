import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<Baju> ArrayProduk = new ArrayList<>();
        Baju temporary = new Baju();
        String ID, namaProduk, jenis, bahan, warna, kategori, size, merk;
        int harga, stok;
        Scanner scanner = new Scanner(System.in);

        // Add initial products
        temporary.setID("1");
        temporary.setNama("Baju_Anjing_Polos");
        temporary.setHarga(50000);
        temporary.setStok(10);
        temporary.setJenis("Baju");
        temporary.setBahan("Katun");
        temporary.setWarna("Merah");
        temporary.setKategori("Anjing");
        temporary.setSize("M");
        temporary.setMerk("PetCo");
        ArrayProduk.add(temporary);

        temporary = new Baju(); // Create new object to avoid reference issues
        temporary.setID("2");
        temporary.setNama("Baju_Kucing_Motif");
        temporary.setHarga(60000);
        temporary.setStok(15);
        temporary.setJenis("Baju");
        temporary.setBahan("Sutra");
        temporary.setWarna("Biru");
        temporary.setKategori("Kucing");
        temporary.setSize("S");
        temporary.setMerk("MeowStyle");
        ArrayProduk.add(temporary);

        temporary = new Baju();
        temporary.setID("3");
        temporary.setNama("Jaket_Anjing_Waterproof");
        temporary.setHarga(120000);
        temporary.setStok(8);
        temporary.setJenis("Baju");
        temporary.setBahan("Polyester");
        temporary.setWarna("Hitam");
        temporary.setKategori("Anjing");
        temporary.setSize("L");
        temporary.setMerk("PetGear");
        ArrayProduk.add(temporary);

        temporary = new Baju();
        temporary.setID("4");
        temporary.setNama("Kaos_Kucing_Nyaman");
        temporary.setHarga(45000);
        temporary.setStok(20);
        temporary.setJenis("Baju");
        temporary.setBahan("Katun");
        temporary.setWarna("Abu-Abu");
        temporary.setKategori("Kucing");
        temporary.setSize("M");
        temporary.setMerk("PawFashion");
        ArrayProduk.add(temporary);

        temporary = new Baju();
        temporary.setID("5");
        temporary.setNama("Sweater_Anjing_Hangat");
        temporary.setHarga(90000);
        temporary.setStok(12);
        temporary.setJenis("Baju");
        temporary.setBahan("Wol");
        temporary.setWarna("Coklat");
        temporary.setKategori("Anjing");
        temporary.setSize("XL");
        temporary.setMerk("DoggyWear");
        ArrayProduk.add(temporary);

        // Input new data
        System.out.print("Masukkan jumlah data baru: ");
        int num = scanner.nextInt();

        for (int i = 0; i < num; i++) {
            temporary = new Baju();

            System.out.print("Masukkan ID: ");
            ID = scanner.next();

            System.out.println("Masukkan Nama, Harga, dan Stok (secara berurut):");
            System.out.println("Untuk nama produk tidak menerima spasi");
            namaProduk = scanner.next();
            harga = scanner.nextInt();
            stok = scanner.nextInt();

            System.out.println("Masukkan Jenis, Bahan, dan Warna (secara berurut):");
            jenis = scanner.next();
            bahan = scanner.next();
            warna = scanner.next();

            System.out.println("Masukkan Kategori, Size, dan Merk (secara berurut):");
            kategori = scanner.next();
            size = scanner.next();
            merk = scanner.next();

            temporary.setID(ID);
            temporary.setNama(namaProduk);
            temporary.setHarga(harga);
            temporary.setStok(stok);
            temporary.setJenis(jenis);
            temporary.setBahan(bahan);
            temporary.setWarna(warna);
            temporary.setKategori(kategori);
            temporary.setSize(size);
            temporary.setMerk(merk);
            ArrayProduk.add(temporary);
        }

        scanner.close();

        // Method to display the table
        int[] header = { 2, 4, 5, 4, 5, 5, 5, 8, 4, 4 };
        String panjang;

        // Calculate maximum width for each column
        for (int i = 0; i < ArrayProduk.size(); i++) {
            Baju product = ArrayProduk.get(i);

            // ID produk
            if (header[0] < product.getID().length())
                header[0] = product.getID().length();
            // Nama produk
            if (header[1] < product.getNama().length())
                header[1] = product.getNama().length();
            // Harga produk
            panjang = Integer.toString(product.getHarga());
            if (header[2] < panjang.length())
                header[2] = panjang.length();
            // Stok produk
            panjang = Integer.toString(product.getStok());
            if (header[3] < panjang.length())
                header[3] = panjang.length();
            // Jenis produk
            if (header[4] < product.getJenis().length())
                header[4] = product.getJenis().length();
            // Bahan produk
            if (header[5] < product.getBahan().length())
                header[5] = product.getBahan().length();
            // Warna produk
            if (header[6] < product.getWarna().length())
                header[6] = product.getWarna().length();
            // Kategori produk
            if (header[7] < product.getKategori().length())
                header[7] = product.getKategori().length();
            // Size produk
            if (header[8] < product.getSize().length())
                header[8] = product.getSize().length();
            // Merk produk
            if (header[9] < product.getMerk().length())
                header[9] = product.getMerk().length();
        }

        // Calculate total table width
        int sum = 6;
        for (int i = 0; i < 10; i++) {
            sum += header[i];
        }

        // Print top border
        for (int space = 0; space < sum + 26; space++) {
            System.out.print('-');
        }
        System.out.println();

        // Print column headers
        int space;
        System.out.print("| ID");
        for (space = 0; space < header[0] - 1; space++) {
            System.out.print(' ');
        }
        System.out.print("| Nama");
        for (space = 0; space < header[1] - 3; space++) {
            System.out.print(' ');
        }
        System.out.print("| Harga");
        for (space = 0; space < header[2] - 4; space++) {
            System.out.print(' ');
        }
        System.out.print("| Stok");
        for (space = 0; space < header[3] - 3; space++) {
            System.out.print(' ');
        }
        System.out.print("| Jenis");
        for (space = 0; space < header[4] - 4; space++) {
            System.out.print(' ');
        }
        System.out.print("| Bahan");
        for (space = 0; space < header[5] - 4; space++) {
            System.out.print(' ');
        }
        System.out.print("| Warna");
        for (space = 0; space < header[6] - 4; space++) {
            System.out.print(' ');
        }
        System.out.print("| Kategori");
        for (space = 0; space < header[7] - 7; space++) {
            System.out.print(' ');
        }
        System.out.print("| Size");
        for (space = 0; space < header[8] - 3; space++) {
            System.out.print(' ');
        }
        System.out.print("| Merk");
        for (space = 0; space < header[9] - 3; space++) {
            System.out.print(' ');
        }
        System.out.println(" |");

        // Print separator after headers
        for (int space2 = 0; space2 < sum + 26; space2++) {
            System.out.print('-');
        }
        System.out.println();

        // Print each product row
        for (int i = 0; i < ArrayProduk.size(); i++) {
            Baju product = ArrayProduk.get(i);

            // ID
            System.out.print("| ");
            System.out.print(product.getID());
            for (space = 0; space < (header[0] - product.getID().length()); space++) {
                System.out.print(" ");
            }
            System.out.print(' ');

            // namaProduk
            System.out.print("| ");
            System.out.print(product.getNama());
            for (space = 0; space < (header[1] - product.getNama().length()); space++) {
                System.out.print(" ");
            }
            System.out.print(' ');

            // Harga
            System.out.print("| ");
            System.out.print(product.getHarga());
            panjang = Integer.toString(product.getHarga());
            for (space = 0; space < (header[2] - panjang.length()); space++) {
                System.out.print(" ");
            }
            System.out.print(' ');

            // Stok
            System.out.print("| ");
            System.out.print(product.getStok());
            panjang = Integer.toString(product.getStok());
            for (space = 0; space < (header[3] - panjang.length()); space++) {
                System.out.print(" ");
            }
            System.out.print(' ');

            // Jenis
            System.out.print("| ");
            System.out.print(product.getJenis());
            for (space = 0; space < (header[4] - product.getJenis().length()); space++) {
                System.out.print(" ");
            }
            System.out.print(' ');

            // Bahan
            System.out.print("| ");
            System.out.print(product.getBahan());
            for (space = 0; space < (header[5] - product.getBahan().length()); space++) {
                System.out.print(" ");
            }
            System.out.print(' ');

            // Warna
            System.out.print("| ");
            System.out.print(product.getWarna());
            for (space = 0; space < (header[6] - product.getWarna().length()); space++) {
                System.out.print(" ");
            }
            System.out.print(' ');

            // Kategori
            System.out.print("| ");
            System.out.print(product.getKategori());
            for (space = 0; space < (header[7] - product.getKategori().length()); space++) {
                System.out.print(" ");
            }
            System.out.print(' ');

            // Size
            System.out.print("| ");
            System.out.print(product.getSize());
            for (space = 0; space < (header[8] - product.getSize().length()); space++) {
                System.out.print(" ");
            }
            System.out.print(' ');

            // Merk
            System.out.print("| ");
            System.out.print(product.getMerk());
            for (space = 0; space < (header[9] - product.getMerk().length()); space++) {
                System.out.print(" ");
            }
            System.out.print(' ');
            System.out.println(" |");
        }

        // Print bottom border
        for (int space3 = 0; space3 < sum + 26; space3++) {
            System.out.print('-');
        }
        System.out.println();
    }
}
