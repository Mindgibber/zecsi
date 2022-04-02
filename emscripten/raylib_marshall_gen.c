#include "raylib.h"
#include "raymath.h"
#include "extras/raygui.h"
    
void mInitWindow(int width, int height, const char *title) 
 {
    InitWindow(width, height, title);
}

bool mWindowShouldClose(void) 
 {
    return WindowShouldClose();
}

void mCloseWindow(void) 
 {
    CloseWindow();
}

void mSetWindowMinSize(int width, int height) 
 {
    SetWindowMinSize(width, height);
}

void mSetWindowSize(int width, int height) 
 {
    SetWindowSize(width, height);
}

int mGetScreenWidth(void) 
 {
    return GetScreenWidth();
}

int mGetScreenHeight(void) 
 {
    return GetScreenHeight();
}

bool mIsCursorOnScreen(void) 
 {
    return IsCursorOnScreen();
}

void mClearBackground(Color *color) 
 {
    ClearBackground(*color);
}

void mBeginDrawing(void) 
 {
    BeginDrawing();
}

void mEndDrawing(void) 
 {
    EndDrawing();
}

void mBeginMode2D(Camera2D *camera) 
 {
    BeginMode2D(*camera);
}

void mEndMode2D(void) 
 {
    EndMode2D();
}

void mGetCameraMatrix2D(Matrix *out, Camera2D *camera) 
 {
    *out = GetCameraMatrix2D(*camera);
}

void mGetWorldToScreen2D(Vector2 *out, Vector2 *position, Camera2D *camera) 
 {
    *out = GetWorldToScreen2D(*position, *camera);
}

void mGetScreenToWorld2D(Vector2 *out, Vector2 *position, Camera2D *camera) 
 {
    *out = GetScreenToWorld2D(*position, *camera);
}

void mSetTargetFPS(int fps) 
 {
    SetTargetFPS(fps);
}

int mGetFPS(void) 
 {
    return GetFPS();
}

float mGetFrameTime(void) 
 {
    return GetFrameTime();
}

double mGetTime(void) 
 {
    return GetTime();
}

void mOpenURL(const char *url) 
 {
    OpenURL(url);
}

bool mIsKeyPressed(int key) 
 {
    return IsKeyPressed(key);
}

bool mIsKeyDown(int key) 
 {
    return IsKeyDown(key);
}

bool mIsKeyReleased(int key) 
 {
    return IsKeyReleased(key);
}

bool mIsKeyUp(int key) 
 {
    return IsKeyUp(key);
}

void mSetExitKey(int key) 
 {
    SetExitKey(key);
}

int mGetKeyPressed(void) 
 {
    return GetKeyPressed();
}

int mGetCharPressed(void) 
 {
    return GetCharPressed();
}

bool mIsMouseButtonPressed(int button) 
 {
    return IsMouseButtonPressed(button);
}

bool mIsMouseButtonDown(int button) 
 {
    return IsMouseButtonDown(button);
}

bool mIsMouseButtonReleased(int button) 
 {
    return IsMouseButtonReleased(button);
}

bool mIsMouseButtonUp(int button) 
 {
    return IsMouseButtonUp(button);
}

void mGetMousePosition(Vector2 *out) 
 {
    *out = GetMousePosition();
}

void mGetMouseDelta(Vector2 *out) 
 {
    *out = GetMouseDelta();
}

void mSetMouseOffset(int offsetX, int offsetY) 
 {
    SetMouseOffset(offsetX, offsetY);
}

void mSetMouseScale(float scaleX, float scaleY) 
 {
    SetMouseScale(scaleX, scaleY);
}

float mGetMouseWheelMove(void) 
 {
    return GetMouseWheelMove();
}

void mSetMouseCursor(int cursor) 
 {
    SetMouseCursor(cursor);
}

void mGetTouchPosition(Vector2 *out, int index) 
 {
    *out = GetTouchPosition(index);
}

int mGetTouchPointCount(void) 
 {
    return GetTouchPointCount();
}

void mDrawLineEx(Vector2 *startPos, Vector2 *endPos, float thick, Color *color) 
 {
    DrawLineEx(*startPos, *endPos, thick, *color);
}

void mDrawRectanglePro(Rectangle *rec, Vector2 *origin, float rotation, Color *color) 
 {
    DrawRectanglePro(*rec, *origin, rotation, *color);
}

void mLoadTexture(Texture2D *out, const char *fileName) 
 {
    *out = LoadTexture(fileName);
}

void mUnloadTexture(Texture2D *texture) 
 {
    UnloadTexture(*texture);
}

void mDrawTexturePro(Texture2D *texture, Rectangle *source, Rectangle *dest, Vector2 *origin, float rotation, Color *tint) 
 {
    DrawTexturePro(*texture, *source, *dest, *origin, rotation, *tint);
}

void mDrawFPS(int posX, int posY) 
 {
    DrawFPS(posX, posY);
}

void mDrawText(const char *text, int posX, int posY, int fontSize, Color *color) 
 {
    DrawText(text, posX, posY, fontSize, *color);
}
