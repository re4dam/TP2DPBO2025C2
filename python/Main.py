from Baju import Baju


produk = []

# Creating initial inventory items
temporary = Baju()
temporary.set_ID("1")
temporary.set_nama("Baju_Anjing_Polos")
temporary.set_harga(50000)
temporary.set_stok(10)
temporary.set_jenis("Baju")
temporary.set_bahan("Katun")
temporary.set_warna("Merah")
temporary.set_kategori("Anjing")
temporary.set_size("M")
temporary.set_merk("PetCo")
produk.append(temporary)

temporary = Baju()
temporary.set_ID("2")
temporary.set_nama("Baju_Kucing_Motif")
temporary.set_harga(60000)
temporary.set_stok(15)
temporary.set_jenis("Baju")
temporary.set_bahan("Sutra")
temporary.set_warna("Biru")
temporary.set_kategori("Kucing")
temporary.set_size("S")
temporary.set_merk("MeowStyle")
produk.append(temporary)

temporary = Baju()
temporary.set_ID("3")
temporary.set_nama("Jaket_Anjing_Waterproof")
temporary.set_harga(120000)
temporary.set_stok(8)
temporary.set_jenis("Baju")
temporary.set_bahan("Polyester")
temporary.set_warna("Hitam")
temporary.set_kategori("Anjing")
temporary.set_size("L")
temporary.set_merk("PetGear")
produk.append(temporary)

temporary = Baju()
temporary.set_ID("4")
temporary.set_nama("Kaos_Kucing_Nyaman")
temporary.set_harga(45000)
temporary.set_stok(20)
temporary.set_jenis("Baju")
temporary.set_bahan("Katun")
temporary.set_warna("Abu-Abu")
temporary.set_kategori("Kucing")
temporary.set_size("M")
temporary.set_merk("PawFashion")
produk.append(temporary)

temporary = Baju()
temporary.set_ID("5")
temporary.set_nama("Sweater_Anjing_Hangat")
temporary.set_harga(90000)
temporary.set_stok(12)
temporary.set_jenis("Baju")
temporary.set_bahan("Wol")
temporary.set_warna("Coklat")
temporary.set_kategori("Anjing")
temporary.set_size("XL")
temporary.set_merk("DoggyWear")
produk.append(temporary)

# Input new data
try:
    num = int(input("Masukkan jumlah data baru: "))

    for it in range(num):
        ID = input("Masukkan ID: ")

        print("Masukkan Nama, Harga, dan Stok (secara berurut):")
        print("Untuk nama produk tidak menerima spasi")
        namaProduk = input()
        harga = int(input())
        stok = int(input())

        print("Masukkan Jenis, Bahan, dan Warna (secara berurut):")
        Jenis = input()
        Bahan = input()
        Warna = input()

        print("Masukkan Kategori, Size, dan Merk (secara berurut):")
        Kategori = input()
        Size = input()
        Merk = input()

        temporary = Baju()
        temporary.set_ID(ID)
        temporary.set_nama(namaProduk)
        temporary.set_harga(harga)
        temporary.set_stok(stok)
        temporary.set_jenis(Jenis)
        temporary.set_bahan(Bahan)
        temporary.set_warna(Warna)
        temporary.set_kategori(Kategori)
        temporary.set_size(Size)
        temporary.set_merk(Merk)
        produk.append(temporary)
except ValueError:
    print("Input tidak valid. Masukkan angka untuk harga dan stok.")

# Determining column widths
header = [2, 4, 5, 4, 5, 5, 5, 8, 4, 4]  # Initial widths

for product in produk:
    # ID produk
    if header[0] < len(product.get_ID()):
        header[0] = len(product.get_ID())
    # Nama produk
    if header[1] < len(product.get_nama()):
        header[1] = len(product.get_nama())
    # Harga produk
    panjang = len(str(product.get_harga()))
    if header[2] < panjang:
        header[2] = panjang
    # Stok produk
    panjang = len(str(product.get_stok()))
    if header[3] < panjang:
        header[3] = panjang
    # Jenis produk
    if header[4] < len(product.get_jenis()):
        header[4] = len(product.get_jenis())
    # Bahan produk
    if header[5] < len(product.get_bahan()):
        header[5] = len(product.get_bahan())
    # Warna produk
    if header[6] < len(product.get_warna()):
        header[6] = len(product.get_warna())
    # Kategori produk
    if header[7] < len(product.get_kategori()):
        header[7] = len(product.get_kategori())
    # Size produk
    if header[8] < len(product.get_size()):
        header[8] = len(product.get_size())
    # Merk produk
    if header[9] < len(product.get_merk()):
        header[9] = len(product.get_merk())

# Calculate table width
sum_width = 5
for width in header:
    sum_width += width

# Print table header
print("-" * (sum_width + 26))

# Print column headers
print(
    f"| ID{' ' * (header[0] - 1)}| Nama{' ' * (header[1] - 3)}| Harga{' ' * (header[2] - 4)}| Stok{' ' * (header[3] - 3)}| Jenis{' ' * (header[4] - 4)}| Bahan{' ' * (header[5] - 4)}| Warna{' ' * (header[6] - 4)}| Kategori{' ' * (header[7] - 7)}| Size{' ' * (header[8] - 3)}| Merk{' ' * (header[9] - 3)} |"
)

# Print separator
print("-" * (sum_width + 26))

# Print each product
for product in produk:
    # ID
    id_str = product.get_ID()
    id_padding = " " * (header[0] - len(id_str))

    # Nama Produk
    nama_str = product.get_nama()
    nama_padding = " " * (header[1] - len(nama_str))

    # Harga
    harga_str = str(product.get_harga())
    harga_padding = " " * (header[2] - len(harga_str))

    # Stok
    stok_str = str(product.get_stok())
    stok_padding = " " * (header[3] - len(stok_str))

    # Jenis
    jenis_str = product.get_jenis()
    jenis_padding = " " * (header[4] - len(jenis_str))

    # Bahan
    bahan_str = product.get_bahan()
    bahan_padding = " " * (header[5] - len(bahan_str))

    # Warna
    warna_str = product.get_warna()
    warna_padding = " " * (header[6] - len(warna_str))

    # Kategori
    kategori_str = product.get_kategori()
    kategori_padding = " " * (header[7] - len(kategori_str))

    # Size
    size_str = product.get_size()
    size_padding = " " * (header[8] - len(size_str))

    # Merk
    merk_str = product.get_merk()
    merk_padding = " " * (header[9] - len(merk_str))

    # Print the row
    print(
        f"| {id_str}{id_padding} | {nama_str}{nama_padding} | {harga_str}{harga_padding} | {stok_str}{stok_padding} | {jenis_str}{jenis_padding} | {bahan_str}{bahan_padding} | {warna_str}{warna_padding} | {kategori_str}{kategori_padding} | {size_str}{size_padding} | {merk_str}{merk_padding} |"
    )

# Print table footer
print("-" * (sum_width + 26))
