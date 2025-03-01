from PetShop import PetShop


class Aksesoris(PetShop):
    __jenis = ""
    __bahan = ""
    __warna = ""

    def __init__(
        self,
        input_id="",
        input_nama="",
        input_harga=0,
        input_stok=0,
        input_jenis="",
        input_bahan="",
        input_warna="",
    ):
        super().__init__(input_id, input_nama, input_harga, input_stok)
        self.__jenis = input_jenis
        self.__bahan = input_bahan
        self.__warna = input_warna

    def set_jenis(self, input_jenis):
        self.__jenis = input_jenis

    def get_jenis(self):
        return self.__jenis

    def set_bahan(self, input_bahan):
        self.__bahan = input_bahan

    def get_bahan(self):
        return self.__bahan

    def set_warna(self, input_warna):
        self.__warna = input_warna

    def get_warna(self):
        return self.__warna
