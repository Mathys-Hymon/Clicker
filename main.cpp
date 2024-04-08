#include "raylib.h"
#include <iostream>

using namespace std;

int main() {

    InitWindow(300, 300, "My first Raylib window!");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}