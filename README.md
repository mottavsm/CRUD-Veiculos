# Sistema de Gestão de Veículos em C

Este é um sistema simples de **gestão de veículos**, onde o usuário pode registrar, listar, buscar, alterar e excluir informações de veículos. O programa utiliza uma estrutura de dados (`struct`) para armazenar as informações dos veículos, como marca, modelo, ano, cor, preço e VIN (Número de Identificação do Veículo). Ele oferece um menu interativo para o gerenciamento de até 3 veículos.

## Funcionalidades principais:
- **Registrar Veículo**: Permite adicionar um novo veículo à lista (com limite de 3 veículos).
- **Listar Registros**: Exibe todos os veículos cadastrados.
- **Buscar Registro**: Permite buscar um veículo usando seu VIN e exibe suas informações.
- **Alterar Dados**: Permite atualizar as informações de um veículo com base no VIN.
- **Excluir Registro**: Permite excluir um veículo da lista com base no VIN.

## Estrutura de Dados:
- **Vehicle**: Cada veículo possui os seguintes campos:
  - `make` (Marca)
  - `model` (Modelo)
  - `year` (Ano)
  - `color` (Cor)
  - `price` (Preço)
  - `vin` (VIN - Número de Identificação do Veículo)

## Observações:
- O sistema limita o número de registros a **3 veículos**.
- As operações de busca, alteração e exclusão são feitas através do VIN.
- O código utiliza funções básicas de entrada e saída (como `printf`, `scanf`, `gets`), além de manipulação de strings (com `strcpy` e `strcmp`).
  
## Como usar:
1. Compile o código com um compilador C.
2. Execute o programa.
3. Escolha as opções do menu conforme necessário.

### Limitações:  
- O código usa a função `gets()` para leitura de strings, o que pode ser inseguro. É recomendado refatorar para usar funções mais seguras como `fgets()`.
- O número máximo de veículos cadastrados é fixado em **3**. Para aumentar isso, altere a constante `MAX_QTD`.

## Menu de opções:
- **1**: Registrar novo veículo.
- **2**: Listar todos os veículos registrados.
- **3**: Buscar um veículo pelo VIN.
- **4**: Alterar dados de um veículo.
- **5**: Excluir um veículo.
- **0**: Sair do programa.

Este projeto foi feito para fins educacionais e demonstra como gerenciar registros simples em C.
