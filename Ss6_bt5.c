#include <stdio.h>
int main(){
	int month;
	int year;
	int days;
	printf("nhap thang vao (1-12): ");
	scanf("%d",&month);
	printf("nhap nam vao: ");
	scanf("%d",&year);
	if (month < 1 || month > 12) {
        printf("thang khon hop le!\n");
 	} else {
	
		if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
			days = 31;
		}else if (month == 4 || month == 6 || month == 9 || month == 11) {
            	days = 30;
		}else{
			if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
				days = 29;
			}else {
            	days = 28;
	    	}
		}
		printf("thang %d nam %d co %d ngay\n",month,year,days);
	}
	return 0;
}
