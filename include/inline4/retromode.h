#ifndef INLINE4_RETROMODE_H
#define INLINE4_RETROMODE_H

/*
** This file was auto generated by idltool 53.6.
**
** It provides compatibility to OS3 style library
** calls by substituting functions.
**
** Do not edit manually.
*/ 

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef EXEC_EXEC_H
#include <exec/exec.h>
#endif
#ifndef EXEC_INTERFACES_H
#include <exec/interfaces.h>
#endif

#ifndef LIBRARIES_RETROMODE_H
#include <libraries/retromode.h>
#endif
#include <interfaces/retromode.h>

/* Inline macros for Interface "main" */
#define retroAllocVideo(window) IRetroMode->retroAllocVideo((window)) 
#define retroFreeVideo(video) IRetroMode->retroFreeVideo((video)) 
#define retroClearVideo(video) IRetroMode->retroClearVideo((video)) 
#define retroDrawVideo(video) IRetroMode->retroDrawVideo((video)) 
#define retroDmaVideo(video) IRetroMode->retroDmaVideo((video)) 
#define retroOpenScreen(width, height, videomode) IRetroMode->retroOpenScreen((width), (height), (videomode)) 
#define retroCloseScreen(screen) IRetroMode->retroCloseScreen((screen)) 
#define retroApplyScreen(screen, video, scanlinex, scanliney, displayWidth, displayHeight) IRetroMode->retroApplyScreen((screen), (video), (scanlinex), (scanliney), (displayWidth), (displayHeight)) 
#define retroPixel(screen, x, y, color) IRetroMode->retroPixel((screen), (x), (y), (color)) 
#define retroPoint(screen, x, y) IRetroMode->retroPoint((screen), (x), (y)) 
#define retroFlash(screen, color, data) IRetroMode->retroFlash((screen), (color), (data)) 
#define retroCycleColorsUp(screen, delay, from_color, to_color, flags) IRetroMode->retroCycleColorsUp((screen), (delay), (from_color), (to_color), (flags)) 
#define retroCycleColorsDown(screen, delay, from_color, to_color, flags) IRetroMode->retroCycleColorsDown((screen), (delay), (from_color), (to_color), (flags)) 
#define retroBAR(screen, x0, y0, x1, y1, color) IRetroMode->retroBAR((screen), (x0), (y0), (x1), (y1), (color)) 
#define retroOrBAR(screen, x0, y0, x1, y1, or_mask) IRetroMode->retroOrBAR((screen), (x0), (y0), (x1), (y1), (or_mask)) 
#define retroXorBAR(screen, x0, y0, x1, y1, xor_mask) IRetroMode->retroXorBAR((screen), (x0), (y0), (x1), (y1), (xor_mask)) 
#define retroBox(screen, x0, y0, x1, y1, color) IRetroMode->retroBox((screen), (x0), (y0), (x1), (y1), (color)) 
#define retroOrBox(screen, x0, y0, x1, y1, or_mask) IRetroMode->retroOrBox((screen), (x0), (y0), (x1), (y1), (or_mask)) 
#define retroXorBox(screen, x0, y0, x1, y1, xor_mask) IRetroMode->retroXorBox((screen), (x0), (y0), (x1), (y1), (xor_mask)) 
#define retroShift(screen, x0, y0, x1, y1, bits) IRetroMode->retroShift((screen), (x0), (y0), (x1), (y1), (bits)) 
#define retroCircle(screen, x, y, r, color) IRetroMode->retroCircle((screen), (x), (y), (r), (color)) 
#define retroEclipse(screen, x, y, r1, r2, color) IRetroMode->retroEclipse((screen), (x), (y), (r1), (r2), (color)) 
#define retroOrCircle(screen, x, y, r, or_mask) IRetroMode->retroOrCircle((screen), (x), (y), (r), (or_mask)) 
#define retroXorCircle(screen, x, y, r, xor_mask) IRetroMode->retroXorCircle((screen), (x), (y), (r), (xor_mask)) 
#define retroScreenColor(screen, color, r, g, b) IRetroMode->retroScreenColor((screen), (color), (r), (g), (b)) 
#define retroScreenBlit(SourceScreen, fromX, fromY, width, height, screen, toX, toY) IRetroMode->retroScreenBlit((SourceScreen), (fromX), (fromY), (width), (height), (screen), (toX), (toY)) 
#define retroOrScreenBlit(SourceScreen, fromX, fromY, width, height, screen, toX, toY) IRetroMode->retroOrScreenBlit((SourceScreen), (fromX), (fromY), (width), (height), (screen), (toX), (toY)) 
#define retroXorScreenBlit(SourceScreen, fromX, fromY, width, height, screen, toX, toY) IRetroMode->retroXorScreenBlit((SourceScreen), (fromX), (fromY), (width), (height), (screen), (toX), (toY)) 
#define retroBitmapBlit(bitmap, fromX, fromY, width, height, screen, toX, toY) IRetroMode->retroBitmapBlit((bitmap), (fromX), (fromY), (width), (height), (screen), (toX), (toY)) 
#define retroOrBitmapBlit(bitmap, fromX, fromY, width, height, screen, toX, toY) IRetroMode->retroOrBitmapBlit((bitmap), (fromX), (fromY), (width), (height), (screen), (toX), (toY)) 
#define retroXorBitmapBlit(bitmap, fromX, fromY, width, height, screen, toX, toY) IRetroMode->retroXorBitmapBlit((bitmap), (fromX), (fromY), (width), (height), (screen), (toX), (toY)) 
#define retroAndClear(screen, x0, y0, x1, y1, and_mask) IRetroMode->retroAndClear((screen), (x0), (y0), (x1), (y1), (and_mask)) 
#define retroModeBadVideoSync(video, sync_offset, incRad, r) IRetroMode->retroModeBadVideoSync((video), (sync_offset), (incRad), (r)) 
#define AfterEffectScanline(video) IRetroMode->AfterEffectScanline((video)) 
#define AfterEffectAdjustRGB(video, red_shift, green_shift, blue_shift) IRetroMode->AfterEffectAdjustRGB((video), (red_shift), (green_shift), (blue_shift)) 
#define retroTriangle(screen, x1, y1, x2, y2, x3, y3, color) IRetroMode->retroTriangle((screen), (x1), (y1), (x2), (y2), (x3), (y3), (color)) 
#define retroOrTriangle(screen, x1, y1, x2, y2, x3, y3, or_color) IRetroMode->retroOrTriangle((screen), (x1), (y1), (x2), (y2), (x3), (y3), (or_color)) 
#define retroXorTriangle(screen, x1, y1, x2, y2, x3, y3, xor_color) IRetroMode->retroXorTriangle((screen), (x1), (y1), (x2), (y2), (x3), (y3), (xor_color)) 
#define retroLine(screen, x1, y1, x2, y2, color) IRetroMode->retroLine((screen), (x1), (y1), (x2), (y2), (color)) 
#define retroOrLine(screen, x1, y1, x2, y2, color) IRetroMode->retroOrLine((screen), (x1), (y1), (x2), (y2), (color)) 
#define retroXorLine(screen, x1, y1, x2, y2, color) IRetroMode->retroXorLine((screen), (x1), (y1), (x2), (y2), (color)) 
#define retroAllocFrame(screen, x1, y1, x2, y2, hotspotX, hotspotY) IRetroMode->retroAllocFrame((screen), (x1), (y1), (x2), (y2), (hotspotX), (hotspotY)) 
#define retroFreeFrame(frame) IRetroMode->retroFreeFrame((frame)) 
#define retroDrawFrame(frame, screen, X, Y) IRetroMode->retroDrawFrame((frame), (screen), (X), (Y)) 
#define retroDeleteFlash(screen, color) IRetroMode->retroDeleteFlash((screen), (color)) 
#define retroScreenOffset(screen, offsetx, offsety) IRetroMode->retroScreenOffset((screen), (offsetx), (offsety)) 
#define retroScreenDetach(screen) IRetroMode->retroScreenDetach((screen)) 
#define retroScreenToFront(screen) IRetroMode->retroScreenToFront((screen)) 
#define retroScreenToBack(screen) IRetroMode->retroScreenToBack((screen)) 
#define retroStar(screen, x, y, n, r0, r1, g, color) IRetroMode->retroStar((screen), (x), (y), (n), (r0), (r1), (g), (color)) 
#define retroOrStar(screen, x, y, n, r0, r1, g, color) IRetroMode->retroOrStar((screen), (x), (y), (n), (r0), (r1), (g), (color)) 
#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (__GNUC__ >= 3)
#define retroPolyLine(screen, ...) IRetroMode->retroPolyLine((screen), __VA_ARGS__) 
#elif (__GNUC__ == 2 && __GNUC_MINOR__ >= 95)
#define retroPolyLine(screen, vargs...) IRetroMode->retroPolyLine(screen, ## vargs) 
#endif
#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (__GNUC__ >= 3)
#define retroPolyGon(screen, ...) IRetroMode->retroPolyGon((screen), __VA_ARGS__) 
#elif (__GNUC__ == 2 && __GNUC_MINOR__ >= 95)
#define retroPolyGon(screen, vargs...) IRetroMode->retroPolyGon(screen, ## vargs) 
#endif
#define retroBoing(screen, x, y, r0, r1, color0, color1) IRetroMode->retroBoing((screen), (x), (y), (r0), (r1), (color0), (color1)) 
#define retroLoadABKSprite(filename) IRetroMode->retroLoadABKSprite((filename)) 
#define retroFreeSprite(sprite) IRetroMode->retroFreeSprite((sprite)) 
#define retroPasteSprite(screen, sprite, x, y, image) IRetroMode->retroPasteSprite((screen), (sprite), (x), (y), (image)) 
#define retroFill(screen, x, y, color) IRetroMode->retroFill((screen), (x), (y), (color)) 
#define retroOrFill(screen, x, y, and_mask, or_color) IRetroMode->retroOrFill((screen), (x), (y), (and_mask), (or_color)) 
#define retroBarRounded(screen, x0, y0, x1, y1, r, color) IRetroMode->retroBarRounded((screen), (x0), (y0), (x1), (y1), (r), (color)) 
#define retroOrBarRounded(screen, x0, y0, x1, y1, r, color) IRetroMode->retroOrBarRounded((screen), (x0), (y0), (x1), (y1), (r), (color)) 
#define retroXorBarRounded(screen, x0, y0, x1, y1, r, color) IRetroMode->retroXorBarRounded((screen), (x0), (y0), (x1), (y1), (r), (color)) 
#define retroThickLine(screen, x0, y0, x1, y1, thickness, color) IRetroMode->retroThickLine((screen), (x0), (y0), (x1), (y1), (thickness), (color)) 
#define retroZoom(fromScreen, x0, y0, x1, y1, toScreen, x2, y2, x3, y3) IRetroMode->retroZoom((fromScreen), (x0), (y0), (x1), (y1), (toScreen), (x2), (y2), (x3), (y3)) 
#define retroBobble(fromScreen, fromX, fromY, fromR, toScreen, toX, toY, toR) IRetroMode->retroBobble((fromScreen), (fromX), (fromY), (fromR), (toScreen), (toX), (toY), (toR)) 

#endif /* INLINE4_RETROMODE_H */
