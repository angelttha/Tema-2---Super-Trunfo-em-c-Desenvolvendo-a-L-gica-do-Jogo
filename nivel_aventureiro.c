#include <stdio.h>

int main(){ 
    //VARIAVEIS
    int opcao, cartas, super_poder;

//CARTA 1 (BRASIL)
char pais [50]= "Brasil";
char codigo_da_carta [50] = "1";
char nome_do_estado [50] = "São Paulo";
int populacao = 114500000;
float area_em_km = 1521;
float pib = 271975123100;
int numero_de_pontos_turisticos = 60; 
float densidade_populacional = 752826;
float pib_per_capital = 7270;

 float media;
   media = densidade_populacional / pib_per_capital;

//CARTA 2 (ESTADOS UNIDOS) 
char pais2 [50]= "Estados Unidos";
char codigo_da_carta2 [50] = "2";
char nome_do_estado2 [50] = "Nova York";
int populacao2 = 825800000 ;
float area_em_km2 = 7838;
float pib2 = 2000000000000;
int numero_de_pontos_turisticos2 = 75; 
float densidade_populacional2 = 1042967;
float pib_per_capital2 = 81630;
     
 float media2;
   media2 = densidade_populacional2 / pib_per_capital2;


    //MENU
    printf("***SUPER TRUNFO***\n");
    printf(" \n");

    printf("***Menu Inicial***\n");
    printf("1. iniciar o Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Executando o jogo...\n");
        printf(" \n");
        printf("**CARTAS**\n");
        printf("Escolha uma carta de 1 a 2: %d\n", cartas);
        scanf("%d", &cartas);

      switch (cartas)
      {
      case 1:
         //CARTA 1
      //Nome do país (string - usado apenas para exibir informações, não para comparação direta)
     printf("NOME DO PAIS - (%s)\n", pais);
     printf("NOME DO ESTADO - (%s)\n", nome_do_estado);

    //População (int)
     printf("POPULAÇÃO - (%d)\n",populacao);

    //Área (float)
    printf("ÁREA EM KM² - (%f)\n",area_em_km);

    //PIB (float)
    printf("PIB - (%f)\n",pib);

    //Número de pontos turísticos (int)
    printf("NÚMERO DE PONTOS TÚRISTICOS - (%d)\n",numero_de_pontos_turisticos);

    //Densidade demográfica (float - já calculada no desafio anterior).
    printf("DENSIDADE POPULACIONAL - (%f)\n", densidade_populacional);
    printf("PIB PER CAPITAL - (%f)\n", pib_per_capital);
    printf("DENSIDADE DEMOGRÁFICA - (%f)\n",media);

    //SUPER PODER
    printf("Entre com o número da sua carta para ver os resultados: %d\n",super_poder);
    scanf("%d",&super_poder);

printf(" \n");
        break;

      case 2:
      //CARTA 2
      //Nome do país (string - usado apenas para exibir informações, não para comparação direta)
      printf("NOME DO PAIS - (%s)\n", pais2);
      printf("NOME DO ESTADO - (%s)\n", nome_do_estado2);

     //População (int)
     printf("POPULAÇÃO - (%d)\n",populacao2);

    //Área (float)
    printf("ÁREA EM KM² - (%f)\n",area_em_km2);

    //PIB (float)
    printf("PIB - (%f)\n",pib2);

    //Número de pontos turísticos (int)
    printf("NÚMERO DE PONTOS TÚRISTICOS - (%d)\n",numero_de_pontos_turisticos2);

    //Densidade demográfica (float - já calculada no desafio anterior).
    printf("DENSIDADE POPULACIONAL - (%f)\n", densidade_populacional);
    printf("PIB PER CAPITAL - (%f)\n", pib_per_capital);
    printf("DENSIDADE DEMOGRÁFICA - (%f)\n",media);

    //SUPER PODER
    printf("Entre com o número da sua carta para ver os resultados:%d\n",super_poder);
    scanf("%d",&super_poder);

        break;

      default:
        printf("Opção inválida\n");
        break;
      } 

      switch (super_poder)
      {
      case 1:
      printf("***SUPER PODER***\n");
      printf("    \n");
    
      printf("**COMPARAÇÃO DE CARTAS**\n");
      
      printf("ATRIBUITO : POPULAÇÃO\n");
      printf("Carta 1 - São Paulo(SP) : 114500000\n");
      printf("Carta 2 - Nova York(NY) : 825800000\n");

      printf("    \n");
  
      printf("ATRIBUITO : ÁREA EM KM2\n");
      printf("Carta 1 - São Paulo(SP) : 1521\n");
      printf("Carta 2 - Nova York(NY) : 7838\n");

      printf("    \n");
  
    printf("ATRIBUITO : PIB\n");
    printf("Carta 1 - São Paulo(SP) : 271975123100\n");
    printf("Carta 2 - Nova York(NY) : 2000000000000\n");

    printf("    \n");
  
    printf("ATRIBUITO : NÚMERO DE PONTOS TÚRISTICOS\n");
    printf("Carta 1 - São Paulo(SP) : 60\n");
    printf("Carta 2 - Nova York(NY) : 75\n");

    printf("    \n");
  
    printf("ATRIBUITO : DENSIDADE POPULACIONAL\n");
    printf("Carta 1 - São Paulo(SP) : 752826\n");
    printf("Carta 2 - Nova York(NY) : 1042967\n");

    printf("    \n");
  
    printf("ATRIBUITO : PIB PE CAPITAL\n");
    printf("Carta 1 - São Paulo(SP) : 7270\n");
    printf("Carta 2 - Nova York(NY) : 81630\n");



    printf("________\n");
    printf(" \n");

  if (populacao,area_em_km,pib,numero_de_pontos_turisticos,pib_per_capital,densidade_populacional >= populacao2,area_em_km2,pib2,numero_de_pontos_turisticos2,pib_per_capital2,densidade_populacional2)
  {
    printf("***SUPER PODER*** - CARTA 1 VENCEU!\n");
  } 
  else if (populacao,area_em_km,pib,numero_de_pontos_turisticos,pib_per_capital,densidade_populacional == populacao2,area_em_km2,pib2,numero_de_pontos_turisticos2,pib_per_capital2,densidade_populacional2)
     {
        printf("DEU EMPATE!\n");
     }
 else
  {
    printf("***SUPER P0DER*** - CARTA 2 VENCEU!\n");
  }

        break;
        
        case 2:
        printf("***SUPER PODER***\n");
        printf("    \n");
      
        printf("**COMPARAÇÃO DE CARTAS**\n");
        
        printf("ATRIBUITO : POPULAÇÃO\n");
        printf("Carta 1 - São Paulo(SP) : 114500000\n");
        printf("Carta 2 - Nova York(NY) : 825800000\n");
  
        printf("    \n");
    
        printf("ATRIBUITO : ÁREA EM KM2\n");
        printf("Carta 1 - São Paulo(SP) : 1521\n");
        printf("Carta 2 - Nova York(NY) : 7838\n");
  
        printf("    \n");
    
      printf("ATRIBUITO : PIB\n");
      printf("Carta 1 - São Paulo(SP) : 271975123100\n");
      printf("Carta 2 - Nova York(NY) : 2000000000000\n");
  
      printf("    \n");
    
      printf("ATRIBUITO : NÚMERO DE PONTOS TÚRISTICOS\n");
      printf("Carta 1 - São Paulo(SP) : 60\n");
      printf("Carta 2 - Nova York(NY) : 75\n");
  
      printf("    \n");
    
      printf("ATRIBUITO : DENSIDADE POPULACIONAL\n");
      printf("Carta 1 - São Paulo(SP) : 752826\n");
      printf("Carta 2 - Nova York(NY) : 1042967\n");
  
      printf("    \n");
    
      printf("ATRIBUITO : PIB PE CAPITAL\n");
      printf("Carta 1 - São Paulo(SP) : 7270\n");
      printf("Carta 2 - Nova York(NY) : 81630\n");
  
  
  
      printf("________\n");
      printf(" \n");
  
    if (populacao,area_em_km,pib,numero_de_pontos_turisticos,pib_per_capital,densidade_populacional >= populacao2,area_em_km2,pib2,numero_de_pontos_turisticos2,pib_per_capital2,densidade_populacional2)
    {
      printf("***SUPER PODER*** - CARTA 1 VENCEU!\n");
    } 
    else if (populacao,area_em_km,pib,numero_de_pontos_turisticos,pib_per_capital,densidade_populacional == populacao2,area_em_km2,pib2,numero_de_pontos_turisticos2,pib_per_capital2,densidade_populacional2)
       {
          printf("DEU EMPATE!\n");
       }
   else
    {
      printf("***SUPER P0DER*** - CARTA 2 VENCEU!\n");
    }
    break;

}

    case 2:
        printf("**REGRAS**\n");
   
        printf("No Super Trunfo, jogadores competem usando cartas com diferentes atributos. "); 
        printf("Um jogador escolhe um    atributo de sua carta e o outro jogador compara o mesmo atributo de sua própria carta.");
        printf(" Quem tiver o  valor mais alto para o atributo escolhido vence a rodada e leva as cartas do adversário.\n");
        printf(" \n");
        break;

    case 3:
        printf("Saindo do jogo\n");
        break;    
    default:
        printf("Opção inválida.\n");
        break;
    }

    return 0;
}
