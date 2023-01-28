#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Nama : Fahmi Imam Taufik
// Kelas : 1A - Teknik Informatika
// Universitas Muhammadiyah

struct cek{
	int ktp;
	char nm[50];
	int hasil;

};

int main (){

	struct cek covid[20];
	int j,k,pilih,nilai;
	char pilihan;
	
		printf("=========================================================================\n");
		printf("				COVID-19 INFORMATION			\n");
		printf(" 			Silahkan Cek Apakah Anda Perlu Ke Rumah Sakit	\n");
		printf("=========================================================================\n");
		
		j=0;
		do{
			printf("1. Masukan Data Baru\n");
			printf("2. Lihat Data Terakhir Disimpan\n");
			printf("3. Lihat Semua Data Tersimpan\n");
			printf("4. Keluar\n\n");
			printf("Masukan Pilihan Anda :");
			scanf("%d", &pilih);
			
			switch(pilih){
				case 1:
					fflush(stdin);
					printf(" Masukan Nomor KTP anda :");
					scanf("%d", & covid[j].ktp);
					printf(" Masukan Nama anda :");
					scanf("%d", & covid[j].nm);
					fgets(covid[j].nm, sizeof(covid[j].nm), stdin);
					
				
					printf("\nSilahkan Jawab Beberapa Pertanyaan Berikut dengan y untuk iya dan t untuk tidak\n");
					printf("\nPernah Melakukan kontak fisik dengan pasien Positif covid 19 atau berkunjung ke negara/daerah endemis covid-19 selama 14 hari (Y/T) :");
					scanf("%c", &pilihan);
					
					if(pilihan == 'y'){
						fflush(stdin);
						printf("Sedang Mengalami demam, pilek, batuk, dan sesak napas?(y/t) : \n");
						scanf("%c", &pilihan);
						
						if(pilihan == 'y'){
							covid[j].hasil= 1;
							printf("Silahkan Hubungi 119 EEXT 9 atau periksakan diri ke rumah sakit rujukan COVID-19 di dareah anda \n");
							printf ("\n");
						}else if(pilihan == 't'){
							fflush(stdin);
							printf("Karantina Diri anda selama 14 hari \n");
							printf("Selama 14 hari karantina diri, Apakah anda mengalami demam, pilek ,batuk, dan sesak napas?(y/t) :");
							scanf("%c", & pilihan);
						
						if(pilihan == 'y'){
							fflush(stdin);
							covid[j].hasil= 1;
							printf("Silahkan Hubungi 119 EEXT 9 atau periksakan diri ke rumah sakit rujukan COVID-19 di dareah anda \n");
							printf ("\n");
						}else if(pilihan == 't'){
							fflush(stdin);
							covid[j].hasil = 3;
							printf(" Anda Tidak Perlu Memeriksakan Diri Ke Rumah Sakit. Selalu Jaga Kesehatan Anda!  \n");
							printf ("\n");
					}			
				}
					
			}else if(pilihan =='t'){
				fflush(stdin);
				printf("sedang Mengalami Demam, Pilek, Batuk, dan Sesak Napas? (y/t) :");
				scanf("%c", & pilihan);
				
				if(pilihan == 'y'){
					fflush(stdin);
					covid[j].hasil= 2;
					printf("Periksakan diri ke dokter terdekat dan istirahat yang cukup \n");
				}else if(pilihan == 't'){
					fflush(stdin);
					covid[j].hasil = 3;
					printf(" Anda Tidak Perlu Memeriksakan Diri Ke Rumah Sakit. Selalu Jaga Kesehatan Anda!  \n");
					printf ("\n");
					
			}
		}
						
		nilai=j;
		j++;
		
		break;
		
	case 2:
		if(j==0){
			printf("Maaf Belum ada data \n");
		}else{
			
			printf("Nomor KTP\t: %d\n", covid[nilai].ktp);
			printf("Nama\t\t: %s", covid[nilai].nm);
			printf("Hasil\t: ");
			
			if(covid[nilai].hasil == 1){
				printf("Silahkan Hubungi 119 EEXT 9 atau periksakan diri ke rumah sakit rujukan COVID-19 di dareah anda \n");
				printf ("\n");				
			}else if(covid[nilai].hasil == 2){
				printf("Periksakan diri ke dokter terdekat dan istirahat yang cukup \n");
				printf ("\n");
			}else if(covid[nilai].hasil == 3){
				printf(" Anda Tidak Perlu Memeriksakan Diri Ke Rumah Sakit. Selalu Jaga Kesehatan Anda!  \n");
				printf ("\n");
			}
		}
		break;
		
	case 3:
		if(j==0){
			printf("Maaf Belum ada data\n");
		}else{
			for(k=0; k<j; k++){
				printf("Nomor KTP\t: %d\n", covid[nilai].ktp);
				printf("Nama\t\t: %s ", covid[nilai].nm);
				printf("Hasil\t: ");
				
			if(covid[k].hasil == 1){
				printf("Silahkan Hubungi 119 EEXT 9 atau periksakan diri ke rumah sakit rujukan COVID-19 di dareah anda \n");
				printf ("\n");				
			}else if(covid[k].hasil == 2){
				printf("Periksakan diri ke dokter terdekat dan istirahat yang cukup \n");
				printf ("\n");
			}else if(covid[k].hasil == 3){
				printf(" Anda Tidak Perlu Memeriksakan Diri Ke Rumah Sakit. Selalu Jaga Kesehatan Anda!  \n");
				printf ("\n");
			}
		}
	}
	break;
	
	case 4:
		printf("\nTerima Kasih, SEMOGA SEHAT SELALU\n");
		break;
		
	default:
		printf("\nMAAF, Inputan Tidak sesuai\n");
	}
}while(pilih!=4);

	return 0;
	
}

	
		

