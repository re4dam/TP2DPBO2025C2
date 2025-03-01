class Aksesoris extends PetShop {
    private String jenis;
    private String bahan;
    private String warna;

    public Aksesoris() {
    }

    public Aksesoris(String inputJenis, String inputBahan, String inputWarna) {
        this.jenis = inputJenis;
        this.bahan = inputBahan;
        this.warna = inputWarna;
    }

    public void setJenis(String inputJenis) {
        this.jenis = inputJenis;
    }

    public String getJenis() {
        return this.jenis;
    }

    public void setBahan(String inputBahan) {
        this.bahan = inputBahan;
    }

    public String getBahan() {
        return this.bahan;
    }

    public void setWarna(String inputWarna) {
        this.warna = inputWarna;
    }

    public String getWarna() {
        return this.warna;
    }
}
