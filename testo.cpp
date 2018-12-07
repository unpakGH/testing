#include <iostream>
#include <conio.h>
 
using namespace std;
 
int main(){
	int hewan,klasifikasi;
	float hasil;
	
	cout<<"=======Klasifikasi Hewan=========="<<endl;
	cout<<"==============================="<<endl;
	cout<<"+++++++++++++MENU++++++++++++++"<<endl;
	cout<<" 1. Hewan Vertebrata"<<endl;
	cout<<" 2. Hewan Invertebrata"<<endl;
	
	cout<<"=========================="<<endl;
	cout<<"Anda Memilih Nomor berapa =";
	cin>>klasifikasi;
	
	switch(klasifikasi)
	{
		case 1:
	cout<<"\n 1) Ikan (Pisces), yaitu Hewan yang hidup didalam air, bernafas dengan insang dengan alat gerak berupa sirip dan berkembang biak dengan cara bertelur.\n\n";	
	cout<<"\n 2) Amfibi (Amphibia), yaitu Hewan yang dapat hidup di dua alam (darat dan air), berdarah dingin (tidak dapat mengatur suhu badan sendiri) dan bernafas dengan paru-paru. Contoh Hewan Amfibi seperti Katak, Salamander dan kadal air. \n\n";
	cout<<"\n 3) Reptil (Reptilia), adalah hewan melata yang berdarah dingin dan memiliki sisik yang menutup tubuhnya. Contoh Hewan Reptil adalah buaya, kadal dan ular. \n\n";
	cout<<"\n 4) Burung (Aves), yaitu Hewan yang bisa terbang, Hewan Aves atau Burung ini memiliki bulu yang menutupi tubuhnya dengan alat gerak berupa kaki dan sayap. Meskipun Aves sering disebut sebagai hewan yang bisa terbang, ada beberapa jenis hewan yang tergolong dalam Aves tetapi tidak bisa terbang seperti Ayam, Bebek, Angsa dan Kalkun. \n\n";
	cout<<"\n 5) Hewan Menyusui (Mammalia), yaitu hewan yang memiliki kelenjar susu (betina) yang berfungsi untuk menghasilkan susu sebagai sumber makanan anaknya. Hewan Mammalia pada umumnya adalah hewan yang berdarah panas dan bereproduksi secara kawin. Hewan Menyusui atau mammalia ini ada yang hidup di darat dan ada juga hidup di air. Contoh Hewan Mammalia yang hidup di darat seperti Sapi, Domba, Monyet, Rusa, Kuda dan Gajah. Sedangkan Hewan Mammalia yang habitatnya di air seperti Paus, Lumba-lumba dan Duyung.\n\n";
	
		break;
		
	    case 2:
	cout<<"\n  1) Filum Protozoa, yaitu hewan yang bersel satu yang hidup di dalam air. Bentuk tubuh Protozoa sangat kecil yaitu berkisar antara 10-50 µm tetapi ada juga yang memiliki bentuk tubuh hingga 1mm. Sumber makanan Protozoa adalah hewan dan tumbuhan. Berdasarkan alat geraknya, Protozoa terbagi menjadi 4 kelas yaitu Kelas Rhizopoda (berkaki semu), kelas Flagellata (berbulu cambuk), kelas Cilliata (berambut getar), dan kelas Sporozoa (berspora).\n\n";	
	cout<<"\n  2) Filum Porifera atau hewan berpori, yaitu hewan air yang hidup di laut dengan bentuk tubuh seperti tumbuhan atau tabung berpori yang melekat pada suatu dasar laut dan dapat berpindah tempat dengan bebas. Sumber makanan Porifera adalah Bakteri dan Plankton. Filum Porifera terbagi menjadi 3 kelas yaitu Kelas Corcorea, kelas Hexactinelida dan Kelas Demospangia.\n\n";
	cout<<"\n  3) Filum Cnidaria, yaitu hewan yang memiliki sel penyengat yang dinamai knidosit yang digunakan untuk menangkap mangsa dan membela diri. Cnidaria dibagi menjadi 4 kelompok yaitu Anthozoa (anemone laut, koral, pena laut), Scyphozoa (Ubur-ubur), Cubozoa (ubur-ubur kotak) dan Hydrozoa. Filum Cnidari kebanyakan terdapat di lingkungan laut. Filum Cnidaria terkadang dikategori sebagai filum Coelenterata karena merupakan hewan berongga yang disebut dengan Coelenteron.\n\n";
	cout<<"\n  4) Filum Ctenophora yaitu hewan yang memiliki lubang-lubang kecil atau pori dihampir seluruh tubuhnya. Pori tersebut dapat menimbulkan racun yang digunakan untuk melumpuhkan mangsa atau musuhnya.Meskipun bentuknya seperti ubur-ubur, tetapi filum Coelenterata tidak memiliki sel penyengat (knidosit) seperti pada filmu Cnidaria. Filum Ctenophora terkadang dikategorikan sebagai filum Coelenterata karena merupakan hewan berongga yang disebut dengan Coelenteron.\n\n";
	cout<<"\n  5) Filum Platyhelminthes atau Cacing Pipih, yaitu hewan yang berbentuk cacing dengan tubuh pipih dan tidak bersegmen. Cacing pipih ini pada umumnya hidup di sungai, laut, danau ataupun sebagai parasit di tubuh organisme lain. Terdapat 3 kelas dalam filum Platyhelminthes yaitu Turbellaria (cacing berambut getar), Trematoda (Cacing Isap) dan Cestoda (cacing pita).\n\n";
	cout<<"\n  6) Filum Annelida (Cacing Gelang), yaitu cacing yang tubuhnya terdiri atas segmen-segmen seperti gelang dengan berbagai sistem organ yang baik dengan sistem peredaran darah tertutup. Filum Annelida terbagi menjadi 5 kelas yaitu Polychaeta (berambut banyak), Oligochaeta (berambut sedikit atau tidak ada rambut sama sekali), dan Hirudinea (menghisap darah). Contoh cacing jenis Filum Annelida diantaranya seperti cacing tanah, cacing pasir, cacing kipas dan lintah.\n\n";
	cout<<"\n  7) Filum Mollusca (Filum Moluska), yaitu hewan yang bertubuh lunak baik dilindungi oleh cangkang maupun yang tidak dilindungi oleh cangkang. Cangkang Filum Mollusca terdiri dari bahan kalsium (zat kapur). Filum Mollusca terdiri dari 3 kelas yakni P (memiliki 2 buah cangkang seperti kerang, tiram dan simping), Gastropoda (Siput baik yang bercangkang ataupun tidak), Cepalophoda (Gurita dan cumi-cumi), Scaphopoda dan  Amphineura.\n\n";
	cout<<"\n  8) Filum Artropoda, yaitu filum bertubuh segmen yang biasanya bersatu menjadi dua atau tiga daerah yang jelas, anggota tubuh bersegmen berpasangan dan simetri bilateral. Filum Artropda juga dikenal dengan sebutan hewan berbuku-buku. Filum Artropoda terbagi menjadi beberapa kelas, diantaranya adalah  Chelicerata (laba-laba, tungau, kalajengking),  Myriapoda (lipan), Krustasea (kepiting, lobster, udang) dan Hexapoda (serangga).\n\n";

	
	
		break;
		

		
		 
	}	
}
