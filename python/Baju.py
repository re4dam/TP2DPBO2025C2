from Aksesoris import Aksesoris


class Baju(Aksesoris):
    __kategori = ""
    __size = ""
    __merk = ""

    def __init__(
        self,
        input_id="",
        input_nama="",
        input_harga=0,
        input_stok=0,
        input_jenis="",
        input_bahan="",
        input_warna="",
        input_kategori="",
        input_size="",
        input_merk="",
    ):
        super().__init__(
            input_id,
            input_nama,
            input_harga,
            input_stok,
            input_jenis,
            input_bahan,
            input_warna,
        )
        self.__kategori = input_kategori
        self.__size = input_size
        self.__merk = input_merk

    def set_kategori(self, input_kategori):
        self.__kategori = input_kategori

    def get_kategori(self):
        return self.__kategori

    def set_size(self, input_size):
        self.__size = input_size

    def get_size(self):
        return self.__size

    def set_merk(self, input_merk):
        self.__merk = input_merk

    def get_merk(self):
        return self.__merk
