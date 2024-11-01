# PonderadaFarolOffline

# PonderadaArduino-Semana3
*Ponderada Arduino - Semana 2 (Projeto Farol)*

*Nome:* Raul Szpak
*Turma:* 12 
*Módulo:* 4 - Ciencia da Computação 

Este exercício envolvia construir e programar uma simulação de semáforo para garantir a segurança tanto de pedestres quanto de veículos, obedecendo à lógica de temporização de cada fase das luzes, desde a instalação dos LEDs até a programação da sequência adequada.

#

# Parte 1 - Montagem Física do Semáforo
Nesta fase, incluirei abaixo uma imagem que ilustra a construção física do projeto do semáforo.


[imagem](./imagem.jpg)

Comecei a montagem conectando a corrente positiva do Arduino aos LEDs, garantindo que cada um estivesse protegido com resistores para evitar sobrecarga. Em seguida, liguei os terminais negativos dos LEDs ao terra para completar o circuito. A sequência de LEDs foi organizada da seguinte forma:

LED vermelho
LED amarelo
LED verde

## Especificações dos Componentes Utilizados
Para complementar o entendimento do projeto, abaixo segue a lista dos componentes utilizados e a explicação de cada um deles


| Componente    | Especificação                             | Quantidade | Função                                                       |
|---------------|------------------------------------------|------------|--------------------------------------------------------------|
| ESP32         | ESP32                                    | 1          | Controla o funcionamento e a lógica do semáforo              |
| Protoboard    | Protoboard padrão                        | 1          | Base para a conexão e organização dos componentes            |
| LED Vermelho  | Tensão: 2V, Corrente: 20mA               | 1          | Representa a fase de "parar" no semáforo                     |
| LED Amarelo   | Tensão: 2V, Corrente: 20mA               | 1          | Representa a fase de "atenção" no semáforo                   |
| LED Verde     | Tensão: 2V, Corrente: 20mA               | 1          | Representa a fase de "seguir" no semáforo                    |
| Resistores    | 330Ω                                     | 3          | Limitam a corrente para proteger os LEDs                     |
| Cabos Jumper  | Cabos macho-macho                        | 4          | Conectam os componentes ao ESP32   e à protoboard            |
| Cabos Jumper  | Cabos macho-femea                        | 4          | Conectam os componentes ao ESP32                             |



# Parte 2: Programação e Lógica do Semáforo
Nesta etapa eu realizei o código para o projeto. O código fonte está no repositório e ele segue a seguinte regra para a sequência dos faróis.

[codigo](./semaforo.ino)

- 6 segundos no vermelho
- 2 segundos no amarelo
- 2 segundos no verde
- 2 segundos de pausa para separação de tempo do led verde
- +2 segundos no verde (simulando um tempo adicional para pedestres terminarem a travessia)
- 2 segundos no amarelo

# Parte 3: Avaliação de Pares 

### Tabela de Avaliação entre Pares

#### Avaliador: Lucca Henrique Pereira

|Critério|	Contempla (Pontos)|	Contempla Parcialmente (Pontos)	|Não Contempla (Pontos)	|Observações do Avaliador|
|-|-|-|-|-|
|Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores	|Até 3	|Até 1,5	|0 | Contempla (3 pontos)|	
|Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo	|Até 3	|Até 1,5	|0 | Contempla (3 pontos)|	
|Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) |	Até 3|	Até 1,5 |	0 | Contempla (3 pontos) |	
|Ir além: Implementou um componente de extra, fez com millis() ao invés do delay() e/ou usou ponteiros no código |	Até 1 |	Até 0,5 |	0 | Contempla (1 ponto)|

#### Avaliador: Raul Rezende Szpak

|Critério|	Contempla (Pontos)|	Contempla Parcialmente (Pontos)	|Não Contempla (Pontos)	|Observações do Avaliador|
|-|-|-|-|-|
|Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores	|Até 3	|Até 1,5	|0 | Contempla (3 pontos)|	
|Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo	|Até 3	|Até 1,5	|0 | Contempla (3 pontos)|	
|Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) |	Até 3|	Até 1,5 |	0 | Contempla (3 pontos) |	
|Ir além: Implementou um componente de extra, fez com millis() ao invés do delay() e/ou usou ponteiros no código |	Até 1 |	Até 0,5 |	0 | Contempla (1 ponto)|