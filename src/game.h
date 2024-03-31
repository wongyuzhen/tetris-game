#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game {
public:
    Game();
    void Draw();
    void HandleInput();
    void MoveBlockDown();
    bool gameOver;
    int score;

private:
    void MoveBlockLeft();
    void MoveBlockRight();
    bool IsBlockOutside();
    void RotateBlock();
    void LockBlock();
    bool BlockFits();
    void Reset();
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    void UpdateScore(int LinesCleared, int moveDownPoints);
    std::vector<Block> blocks;
    Grid grid;
    Block currentBlock;
    Block nextBlock;
};