#include "include/raylib.h"
#include "stdio.h"
#include "math.h"
#include "stdint.h"
#include "string.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);               // 60 fps frame-lock

    //window loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // variables

        // draw loop
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    if(IsKeyDown(KEY_ESCAPE))
        CloseWindow();

    return 0;
}