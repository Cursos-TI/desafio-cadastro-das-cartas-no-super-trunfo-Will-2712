#include <stdio.h>

int main() {
//Criei o arquivo char para colocar a informação"carta" essa vai ser a primeira informação e identificação de qual é a carta de n1.
    char carta = '4';
//AQUI COMECEIA USAR ARRAYS
    char estado [3] = "BA";
    char codigo [05] = "A04";
    char cidade [20] = "BAHIA";
//aqui em população usei "float" ao invés do "int" porque o float me ajuda na impressão conforme eu quero(com caracteres e ponto)assim facilitando a informação na carta "ao meu ver".
    float populacao = 14.850;
//daqui em diante, segui as informações dadas na aula.
    float area = 567.295;
//Aqui como são números inteiros, utilizei o "int" para dar a informação e para sair corretamente na impressão.
    int pib = 349;
    int ponto = 13;
//nas impressões, segui o padrão informado nas aulas, fui alternando cada modo (%e%d%fetc para ver como ficava, assim cheguei na conclusão de usar o float ao invés do int na população, e após a impressão acrescentei o texto conforme achei correto.
    printf("Carta:%c\n", carta);
    printf("Estado:%s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade:%s\n", cidade);
    printf("População: %.3f milhões de habitantes\n", populacao);
    printf("Área : %.3f km²\n", area);
    printf("PIB: %d Bilhões de Reais\n", pib);
    printf("Número de Pontos Turísticos: %i\n", ponto);
//com esse padrão, vou criar as demais cartas, alterar as informações e o que for necessário nas impressões.
    return 0;
}