class Book:
	def __init__(self, judul, pengarang, tahun_terbit, harga_beli, deskripsi):
		self._judul = judul
		self._pengarang = pengarang
		self._tahun_terbit = tahun_terbit
		self._harga_beli = harga_beli
		self._deskripsi = deskripsi
		self._harga_jual = int(self._harga_beli - (0.2 * self._harga_beli))

	# Getter Judul
	@property
	def judul(self):
		return self._judul

	# Getter Pengarang
	@property
	def pengarang(self):
		return self._pengarang

	# Getter Tahun Terbit
	@property
	def tahun_terbit(self):
		return self._tahun_terbit

	# Getter Harga Beli
	@property
	def harga_beli(self):
		return self._harga_beli

	# Getter Harga Jual
	@property
	def harga_jual(self):
		return self._harga_jual

	# Getter Deskripsi
	@property
	def deskripsi(self):
		return self._deskripsi


def main():
	books = [Book("Laskar Pelangi", "Andrea Hirata", "2005", 90000,
                      "Laskar pelangi merupakan novel fiksi yang ditulis oleh Andrea Hirata. Novel tersebut mengisahkan tentang"
                      "kehidupan 10 anak di Pulau Belitung,Provinsi Bangka Belitung yang saling bersahabat. Orang tua mereka"
                      "memiliki profesi yang sama, yaitu penambang timah. Meskipun hidup di tengah kemiskinan, namun mereka tetap"
                      "bersekolah untuk menimba ilmu. Keadaan sekolah mereka cukup memprihatinkan dan tidak layak huni."
                      "Hal ini mendapat teguran dari pemerintah untuk menutup sekolah tersebut karena jumlah muridnya yang sedikit,"
                      "yaitu hanya 10 orang. Waktu itu, sekolah nyaris ditutup karena pada saat penerimaan peserta didik baru hanya"
                      "ada 9 orang siswa. Lalu, harun datang sehingga sekolah tidak jadi ditutup. Ibu Muslimah merupakan sosok guru"
                      "yang penyabar dalam mendidik para siswa. Meskipun beliau hanyalah lulusan SMP, namun beliau memiliki tekad"
                      "yang kuat untuk mendedikasikan diri di dunia pendidikan."),

                 Book("Perahu Kertas", "Dewi Lestari", "2010", 80000,
	              "Perahu Kertas, sebuah novel fiksi karangan penulis wanita Dewi Lestari atau biasa dipanggil Dee."
                      "Dalam bukunya cerita dimulai dengan kisah seorang pria bernama Keenan. Ia adalah remaja yang telah menyelesaikan"
                      "pendidikan tingkat SMA di Amsterdam, Belanda.Keenan memiliki cita-cita menjadi seorang seniman pelukis."
                      "Namun ayahnya tidak mendukung cita-cita anaknya itu. Ayahnya lebih mendukung Keenan untuk mengambil"
                      "studi perguruan tinggi di fakultas ekonomi. Dengan terpaksa Keenan mengalah dengan keputusan ayahnya."
                      "Dalam ceritanya ada seorang wanita bernama Kugy. Ia adalah gadis yang ceria dan riang, seorang yang sangat menyukai dongeng."
                      "Sejak kecil memang Kugy mempunyai cita-cita menjadi penulis dongeng. Di dalam sifatnya yang selalu ceria dan riang,"
                      "Kugy mempunyai kebiasaan aneh, yaitu mengirimkan surat dengan dilipat dan dihanyutkan ke laut untuk Dewa Neptunus."),
                 
	         Book("Negeri 5 Menara", "Ahmad Fuadi", "2009", 70000,
	              "Novel 5 Menara, karya sastra miliki Ahmad Fuadi yang telah diangkat ke film layar lebar. Mengusung tema religius dan moralitas."
                      "Tokoh utama dalam novel ini bernama Alif. Alif lahir di tanah Minangkabau, ia dilahirkan di pinggir Danau Maninjau"
                      "dan tidak pernah ia menginjak tanah di luar Minangkabau. Sejak kecil, Alif memiliki cita-cita menjadi B. J. Habibie. Karena itu"
                      "ia sudah berencana setelah lulus SMP ingin melanjutkan pendidikan ke SMU negeri di Padang, dengan harapan dapat memudahkan"
                      "langkahnya untuk menorobos kuliah di jurusan yang sesuai. Di sisi lain, Amak Alif menginginkan ia jadi penerus Buya Hamka,"
                      "membuat mimpi dan harapan Alif kandas. Alif diberi pilihan, ingin sekolah agama atau menuntut ilmu di pondok pesantren."
                      "Sempat kesal, namun akhirnya Alif ikhlas, karena ia tak ingin mengecawakan harapan orang tuanya, terutama ibu."
                      "Alif pun menuruti keinginan ibunya dan masuk pondok. Alif mendapatkan saran dari pamannya yang di Cairo untuk melanjutkan"
                      "di pondok yang ada di Jawa Timur, yaitu Pondok Madani (Pondok Pesantren Modern Gontor).")]

	total_hb = list()
	total_hj = list()
	for book in books:
		print("Judul:", book.judul)
		print("Pengarang:", book.pengarang)
		print("Tahun Terbit:", book.tahun_terbit)
		print("Harga Beli: Rp." + str(book.harga_beli))
		total_hb.append(book.harga_beli)
		print("Harga Jual: Rp." + str(book.harga_jual))
		total_hj.append(book.harga_jual)
		print("Deskripsi:\n",(book.deskripsi), end="\n\n")

	print("Total Harga Beli Buku: Rp." + str(sum(total_hb)))
	print("Total Harga Jual Buku: Rp." + str(sum(total_hj)))


if __name__ == "__main__":
	main()
