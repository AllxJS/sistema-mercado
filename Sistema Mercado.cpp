//ALUNO: ALTAIR DE JESUS SANTOS JUNIOR

#include <stdio.h>
#include <locale.h> //Para usar setlocale

/* Este programa simula um caixa de mercado contendo um menu que direciona para cada um dos setores
com seus respectivos produtos */

//Declaração de funções 
void setores(); //Menu principal selecionar para setores
void bebidas(); //Setor de bebidas
void higiene(); //Setor de higiene
void limpeza(); //Setor de limpeza
void enlatados(); //Setor de enlatados
void cereais(); //Setor de cereais

typedef struct{ //Declaração de struct para armazenar variaveis 
   int quantidade; //Quantas unidades de um produto escolhido
   int outracompra; //Variavel usada na escolha de outra compra
   int codigo; //Numero que indentifica um determinado produto
   float mult; //Resultado de multiplicação
}inform; //Nome do tipo de variavel 

typedef struct{
   int quantidade; 
   int outracompra; 
   int codigo;
   float mult;
}bebida; 

typedef struct{ 
   int quantidade;
   int outracompra; 
   int codigo; 
   float mult; 
}higien; 

typedef struct{  
   int quantidade;
   int outracompra; 
   int codigo;
   float mult; 
}limp; 

typedef struct{  
   int quantidade; 
   int outracompra;
   int codigo;
   float mult; 
}enlatado; 

typedef struct{ 
   int quantidade; 
   int outracompra; 
   int codigo; 
   float mult;
}cereal; 

int main(){ //Função Principal
    
    setlocale(LC_ALL,"Portuguese");//Modificação de idioma para português
   	
	printf("\t\t******************************\n");   
  	printf("\t\t*           MERCADO          *\n");
  	printf("\t\t******************************\n"); 
   
   	setores();//Invoca função
    
    return 0;
}

void setores(){ //Função de Menu principal
       
    inform setor; //Declaração de variavel 
    
    do{
    	printf("\n\t\t|MENU DE SETORES|\n");
   		printf("\n1- Setor de Bebidas\n");
   		printf("2- Setor de Higiene\n");
    	printf("3- Setor de Limpeza\n");
    	printf("4- Setor de Enlatados\n");
    	printf("5- Setor de Cereais\n");
        printf("\nDigite o codigo do setor: ");
   		scanf("%i",&setor.codigo);
       
     switch(setor.codigo){ //De acordo com a escolha dos itens listados um caso sera executado 
        case 1: //Direciona ao setor de bebidas
        	bebidas();
        break;
        
        case 2: //Direciona ao setor de higiene
        	higiene();
        break;
        
        case 3: //Direciona ao setor de limpeza
        	limpeza();
        break;
        
        case 4: //Direciona ao setor de enlatados
        	enlatados();
        break;
        
        case 5: //Direciona ao setor de cereais
        	cereais();
        break;
        
        default:
        	printf("CODIGO INVALIDO!");
        	printf("Por favor, digite um codigo de 1 a 5\n");
    }
    }while(setor.codigo>5);
}

void bebidas(){ //Função do setor de bebidas

    bebida mercadoria1;
        
    printf("\n\t\t|BEBIDAS|\n");
    printf("\n1-Coca-Cola -> R$9,00\n");
    printf("2-Suco integral Aurora -> R$ 17,88\n");
    printf("3-Água mineral indaiá -> R$1,50\n");
    printf("4-Cerveja Spaten Munich Helles -> R$ 4,79\n");
    printf("5-Cerveja HEINEKEN -> R$9,49\n");    
    printf("\n\t\tBem vindo!\n");
    printf("\nDigite o codigo do produto: ");
    scanf("%i",&mercadoria1.codigo);
    
    switch(mercadoria1.codigo){ 
		case 1:
			printf("\nDigite a quantidade do produto: ");
       		scanf("%i",&mercadoria1.quantidade);
        	mercadoria1.mult=mercadoria1.quantidade*9.00; //Multiplica quantidade X Valor do produto
      	break;
      
	  	case 2:
        	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria1.quantidade);
        	mercadoria1.mult=mercadoria1.quantidade*17.88;
      	break;
       
	   	case 3:
	    	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria1.quantidade);
        	mercadoria1.mult=mercadoria1.quantidade*1.50;
       	break;
       	
       	case 4:
       		printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria1.quantidade);
        	mercadoria1.mult=mercadoria1.quantidade*4.79;
      	break;
      	
      	case 5:
        	printf("\nDigite a quantidade do produto: ");
       		scanf("%i",&mercadoria1.quantidade);
       		mercadoria1.mult=mercadoria1.quantidade*9.49;
		break;
				
		default:
       		printf("CODIGO INVALIDO!\n");
    }
     printf("\nDeseja fazer outra compra? 1-Sim 2-Não\n");
     scanf("%i",&mercadoria1.outracompra);
     
	 if(mercadoria1.outracompra==1){ //Informa valor a ser pago e retorna ao menu princinpal 
     	printf("\nO valor a ser pago é: R$%.2f\n",mercadoria1.mult);
     	return setores();
	}
		else if(mercadoria1.outracompra==2){ //Informa valor a ser pago e finaliza programa
	 		printf("\nO valor a ser pago é: R$%.2f\n",mercadoria1.mult);	
	}
	 		else if(mercadoria1.outracompra>2){ //Finaliza Programa
	 			printf("\nCODIGO INVALIDO!");
	}    
}

void higiene(){ //Função do setor de higiene

    higien mercadoria2;
            
    printf("\n\t\t|HIGIENE|\n");
    printf("\n1-Desodorante Aerosol Dove -> R$ 13,99\n");
    printf("2-Kit Shampoo + Condicionador L'Oréal Paris Elseve -> R$ 24,99\n");
    printf("3-Sabonete Líquido Basic -> R$ 14,99\n");
    printf("4-Absorvente basic -> R$ 16,99\n");
    printf("5-Escova Dental Oral B Pro Media -> R$ 2,99\n");    
    printf("\n\t\tBem vindo!\n");
    printf("\nDigite o codigo do produto: ");
    scanf("%i",&mercadoria2.codigo);
    
   switch(mercadoria2.codigo){     
		case 1:
			printf("\nDigite a quantidade do produto: ");
       		scanf("%i",&mercadoria2.quantidade);
       		mercadoria2.mult=mercadoria2.quantidade*13.99;
      	break;
      
	  	case 2:
        	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria2.quantidade);
        	mercadoria2.mult=mercadoria2.quantidade*24.99;
      	break;
       
	   	case 3:
	    	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria2.quantidade);
        	mercadoria2.mult=mercadoria2.quantidade*14.99;
       	break;
       	
       	case 4:
        	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria2.quantidade);
        	mercadoria2.mult=mercadoria2.quantidade*16.99;
      	break;
      	
      	case 5:
        	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria2.quantidade);
        	mercadoria2.mult=mercadoria2.quantidade*2.99;
		break;
				
		default:
        	printf("CODIGO INVALIDO!\n");
    }
    printf("\nDeseja fazer outra compra? 1-Sim 2-Não\n");
    scanf("%i",&mercadoria2.outracompra);    
   
   if(mercadoria2.outracompra==1){
    	printf("\nO valor a ser pago é: R$%.2f\n",mercadoria2.mult);
    	return setores();
	 }
	 else if(mercadoria2.outracompra==2){
	 	printf("\nO valor a ser pago é: R$%.2f\n",mercadoria2.mult);	
	 }
	 	else if(mercadoria2.outracompra>2){
	 		printf("\nCODIGO INVALIDO!");
	 }  	
}

void limpeza(){ //Função do setor de limpeza

    limp mercadoria3;
      
    printf("\n\t\t|LIMPEZA|\n");
    printf("\n1-Limpador Multiuso Uau -> R$4,99\n");
    printf("2-Sabão em Pó Omo -> R$10,00\n");
    printf("3-Sabonete Líquido Para Mãos Topbel -> R$19,50\n");
    printf("4-Desinfetante Uso Geral Pato Gel -> R$13,90\n");
    printf("5-Desodorizador Sanitário Pato Gel Adesivo -> R$10,50\n");   
    printf("\n\t\tBem vindo!\n");
    printf("\nDigite o codigo do produto: ");
    scanf("%i",&mercadoria3.codigo);
    
   switch(mercadoria3.codigo){     
		case 1:
			printf("\nDigite a quantidade do produto: ");
       		scanf("%i",&mercadoria3.quantidade);
        	mercadoria3.mult=mercadoria3.quantidade*4.99;
      	break;
      
	  	case 2:
        	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria3.quantidade);
        	mercadoria3.mult=mercadoria3.quantidade*10.00;
      	break;
       
	   	case 3:
	    	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria3.quantidade);
        	mercadoria3.mult=mercadoria3.quantidade*19.50;
       	break;
       	
       	case 4:
        	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria3.quantidade);
        	mercadoria3.mult=mercadoria3.quantidade*13.90;
      	break;
      	
      	case 5:
        	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria3.quantidade);
        	mercadoria3.mult=mercadoria3.quantidade*10.50;
		break;
				
		default:
        	printf("CODIGO INVALIDO!\n");
   }
    printf("\nDeseja fazer outra compra? 1-Sim 2-Não\n");
	scanf("%i",&mercadoria3.outracompra);
 
    if(mercadoria3.outracompra==1){
     	printf("\nO valor a ser pago é: R$%.2f\n",mercadoria3.mult);
     return setores();
	 }
	 else if(mercadoria3.outracompra==2){
	 	printf("\nO valor a ser pago é: R$%.2f\n",mercadoria3.mult);	
	 }
	 	else if(mercadoria3.outracompra>2){
	 		printf("\nCODIGO INVALIDO!");
	 }       
}

void enlatados(){ //Função do setor de enlatados

    enlatado mercadoria4;
       
    printf("\n\t\t|ENLATADOS|\n");
    printf("\n1-Milho Verde Quero Lata -> R$ 3,79\n");
    printf("2-Sardinha Gomes Da Costa Em Óleo -> R$ 5,79\n");
    printf("3-Ervilha Quero Lata -> R$ 3,15\n");
    printf("4-Palmito Kamoká Pupunha Inteiro -> R$ 19,99\n");
    printf("5-Azeitona Vale Fértil Verde Sem Caroço -> R$ 6,99\n");    
    printf("\n\t\tBem vindo!\n");
    printf("\nDigite o codigo do produto: ");
    scanf("%i",&mercadoria4.codigo);
    
   	switch(mercadoria4.codigo){     
		case 1:
			printf("\nDigite a quantidade do produto: ");
       		scanf("%i",&mercadoria4.quantidade);
        	mercadoria4.mult=mercadoria4.quantidade*3.79;
      	break;
      
	  	case 2:
        	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria4.quantidade);
        	mercadoria4.mult=mercadoria4.quantidade*5.79;
      	break;
       
	   	case 3:
	    	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria4.quantidade);
        	mercadoria4.mult=mercadoria4.quantidade*3.15;
       	break;
       	
       	case 4:
        	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria4.quantidade);
        	mercadoria4.mult=mercadoria4.quantidade*19.99;
      	break;
      	
      	case 5:
        	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria4.quantidade);
        	mercadoria4.mult=mercadoria4.quantidade*6.99;
		break;
				
		default:
        	printf("CODIGO INVALIDO!\n");
    }
    printf("\nDeseja fazer outra compra? 1-Sim 2-Não\n");
    scanf("%i",&mercadoria4.outracompra);
    
    if(mercadoria4.outracompra==1){
     	printf("\nO valor a ser pago é: R$%.2f\n",mercadoria4.mult);
     	return setores();
	 }
	 else if(mercadoria4.outracompra==2){
	 	printf("\nO valor a ser pago é: R$%.2f\n",mercadoria4.mult);	
	 }
	 	else if(mercadoria4.outracompra>2){
	 		printf("\nCODIGO INVALIDO!");
	 }    
}

void cereais(){ //Função do setor de cereais

    cereal mercadoria5;
       
    printf("\n\t\t|CEREAIS|\n");
    printf("\n1-Amendoim Pachá Grão -> R$7,99\n");
    printf("2-Canjica Pachá Branca Milho -> R$ 5,92\n");
    printf("3-Feijão Branco Pink -> R$ 7,99\n");
    printf("4-Arroz Camil Integral -> R$ 7,49\n");
    printf("5-Feijão Preto Pink -> R$ 9,59\n");   
    printf("\n\t\tBem vindo!\n");
    printf("\nDigite o codigo do produto: ");
    scanf("%i",&mercadoria5.codigo);
    
    switch(mercadoria5.codigo){     
		case 1:
			printf("\nDigite a quantidade do produto: ");
       		scanf("%i",&mercadoria5.quantidade);
        	mercadoria5.mult=mercadoria5.quantidade*7.99;
      	break;
      
	  	case 2:
        	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria5.quantidade);
        	mercadoria5.mult=mercadoria5.quantidade*5.92;
      	break;
       
	   	case 3:
	    	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria5.quantidade);
        	mercadoria5.mult=mercadoria5.quantidade*7.99;
       	break;
       	
       	case 4:
        	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria5.quantidade);
        	mercadoria5.mult=mercadoria5.quantidade*7.49;
      	break;
      	
      	case 5:
        	printf("\nDigite a quantidade do produto: ");
        	scanf("%i",&mercadoria5.quantidade);
        	mercadoria5.mult=mercadoria5.quantidade*9.59;
		break;
				
		default:
        	printf("CODIGO INVALIDO!\n");
    }
    printf("\nDeseja fazer outra compra? 1-Sim 2-Não\n");
    scanf("%i",&mercadoria5.outracompra);
  
   if(mercadoria5.outracompra==1){
     	printf("\nO valor a ser pago é: R$%.2f\n",mercadoria5.mult);
     	return setores();
	 }
	 else if(mercadoria5.outracompra==2){
	 	printf("\nO valor a ser pago é: R$%.2f\n",mercadoria5.mult);	
	 }
	 	else if(mercadoria5.outracompra>2){
	 		printf("\nCODIGO INVALIDO!");
	 }    
}


