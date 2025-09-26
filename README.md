# 2025_2_Robotica
Projeto de robótica da turma período 2025/2

## Estrutura do Projeto

Este projeto está configurado para desenvolvimento com ESP32 usando PlatformIO e framework Arduino.

### Estrutura de Diretórios

```
2025_2_Robotica/
├── platformio.ini          # Configuração do PlatformIO
├── src/                     # Código fonte principal
│   └── main.cpp            # Arquivo principal do programa
├── include/                 # Arquivos de cabeçalho (.h)
├── lib/                     # Bibliotecas customizadas do projeto
├── test/                    # Testes unitários
└── README.md               # Este arquivo
```

## Requisitos

- [PlatformIO IDE](https://platformio.org/platformio-ide) ou PlatformIO Core
- Placa ESP32
- Cabo USB para programação

## Como Usar

### 1. Instalação do PlatformIO

#### Opção A: PlatformIO IDE (Recomendado)
- Instale o [Visual Studio Code](https://code.visualstudio.com/)
- Instale a extensão "PlatformIO IDE" no VS Code

#### Opção B: PlatformIO Core (Linha de comando)
```bash
pip install platformio
```

### 2. Configuração do Projeto

1. Clone este repositório:
```bash
git clone https://github.com/prof-Cleiton-Silvano/2025_2_Robotica.git
cd 2025_2_Robotica
```

2. Abra o projeto no PlatformIO IDE ou navegue até o diretório no terminal

### 3. Configuração da Porta Serial

Edite o arquivo `platformio.ini` e ajuste as linhas `upload_port` e `monitor_port` para a porta correta do seu ESP32:

- **Windows**: `COM3`, `COM4`, etc.
- **Linux**: `/dev/ttyUSB0`, `/dev/ttyUSB1`, etc.
- **macOS**: `/dev/cu.usbserial-*`

### 4. Compilação e Upload

#### Via PlatformIO IDE:
- Use os botões na barra inferior: ✓ (Build), → (Upload), 🔌 (Serial Monitor)

#### Via linha de comando:
```bash
# Compilar o projeto
pio run

# Fazer upload para o ESP32
pio run --target upload

# Monitorar saída serial
pio device monitor

# Compilar, fazer upload e monitorar em um comando
pio run --target upload && pio device monitor
```

### 5. Monitoramento Serial

O código exemplo pisca o LED interno e envia mensagens via serial a 115200 baud. Use o monitor serial para ver as mensagens.

## Adicionando Bibliotecas

Para adicionar uma biblioteca, edite o arquivo `platformio.ini` na seção `lib_deps`:

```ini
lib_deps = 
    bblanchon/ArduinoJson@^6.21.3
    adafruit/Adafruit Sensor@^1.1.7
```

Ou use o comando:
```bash
pio lib install "nome_da_biblioteca"
```

## Contribuindo

1. Faça um fork do projeto
2. Crie uma branch para sua feature (`git checkout -b feature/nova-feature`)
3. Commit suas mudanças (`git commit -am 'Adiciona nova feature'`)
4. Push para a branch (`git push origin feature/nova-feature`)
5. Abra um Pull Request

## Licença

Este projeto é para fins educacionais da disciplina de Robótica 2025/2.
