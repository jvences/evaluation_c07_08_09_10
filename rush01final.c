#include <unistd.h>

void ft_putchar (char c)
{
    write (1, &c, sizeof(c));
}

void rush (int x, int y){
	
	char error[30] = "nem pensar, tenta de novo";

	if ((x == 0) || (y == 0)){
		write(1, error, 21);
	}

	int a = 1;
	int b = 1;
	char bola = 'o';
	char traco = '-';
	char coluna = '|';
	char white_space = ' ';
	char quebralinha = '\n';

	while((a <= x) && (b <= y)){
		
		if((a == 1) || (a == x)) {
			ft_putchar ('/');
		}		
		if((a > 1) && (a <  x)){
			ft_putchar ('*');	
		}
		a++;	
	}
	if (y > 1){
		b++;
		while ((b > 1) && (b < y)){

			if ((b > 1) || (b < y)){
				ft_putchar (quebralinha);
		
				a = 1;

				while ((a <= x) && (b <= y)){
			
					if ((a == 1) || (a == x)){
						ft_putchar ('*');
					} 

					if ((a > 1) && (a < x)){
						ft_putchar (white_space);
					}

				a++;
		
				}
			}
		
			b++;

		}
		ft_putchar (quebralinha);
		a = 1;
		while(a <= x){
			
			if((a == 1) || (a == x)) {
				ft_putchar (bola);
			}

			if((a > 1) && (a < x)) {
				ft_putchar(traco);
			}
			a++;
		}

	}
	ft_putchar(quebralinha);
}

int main() {
    rush (10,0005);
}
