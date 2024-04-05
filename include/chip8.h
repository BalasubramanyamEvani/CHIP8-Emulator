#ifndef chip8_h
#define chip8_h

#include <cstdint>
#include <string>

#define MEMORY_SIZE 4096
#define NUM_REGISTERS 16
#define NUM_INPUTS 16
#define DISPLAY_RESOLUTION 2048  // 64 x 32

class Chip8 {
private:
    uint8_t memory[MEMORY_SIZE];          // 4k Memory
    uint8_t vreg[NUM_REGISTERS];          // 16 8-bit Registers V0 - VF
    uint8_t sp;                           // Stack  Pointer
    uint16_t pc;                          // Program Counter
    uint16_t I;                           // 12 bits address register
    uint8_t keypad[NUM_INPUTS];           // 16 Keys ranging from 0 to F
    uint8_t display[DISPLAY_RESOLUTION];  // Display
    uint8_t delay_timer;                  // Delay timer
    uint8_t sound_timer;                  // Sound timer

public:
    Chip8();                     // Constructor
    ~Chip8();                    // Destructor
    bool load(std::string rom);  // Loads ROM - Game
    void execute();              // Executes instruction
};

#endif
