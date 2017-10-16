#ifndef RETROMODE_INTERFACE_DEF_H
#define RETROMODE_INTERFACE_DEF_H

/*
** This file was machine generated by idltool 53.6.
** Do not edit
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

#ifdef __cplusplus
#ifdef __USE_AMIGAOS_NAMESPACE__
namespace AmigaOS {
#endif
extern "C" {
#endif

struct RetroModeIFace
{
	struct InterfaceData Data;

	ULONG APICALL (*Obtain)(struct RetroModeIFace *Self);
	ULONG APICALL (*Release)(struct RetroModeIFace *Self);
	void APICALL (*Expunge)(struct RetroModeIFace *Self);
	struct Interface * APICALL (*Clone)(struct RetroModeIFace *Self);
	struct retroVideo * APICALL (*retroAllocVideo)(struct RetroModeIFace *Self, struct Window * window);
	void APICALL (*retroFreeVideo)(struct RetroModeIFace *Self, struct retroVideo * video);
	void APICALL (*retroClearVideo)(struct RetroModeIFace *Self, struct retroVideo * video);
	void APICALL (*retroDrawVideo)(struct RetroModeIFace *Self, struct retroVideo * video);
	void APICALL (*retroDmaVideo)(struct RetroModeIFace *Self, struct retroVideo * video);
	void APICALL (*retroSetVideoColor)(struct RetroModeIFace *Self, struct retroVideo * video, struct retroRGB * RGB, int color, int from, int to);
	void APICALL (*retroApplyCopper)(struct RetroModeIFace *Self, struct retroVideo * video);
	struct retroScreen * APICALL (*retroOpenScreen)(struct RetroModeIFace *Self, int width, int height);
	void APICALL (*retroCloseScreen)(struct RetroModeIFace *Self, struct retroScreen * screen);
	void APICALL (*retroApplyScreen)(struct RetroModeIFace *Self, struct retroScreen * screen, struct retroVideo * video, int offsetx, int oppsety, int videomode);
	void APICALL (*retroPixel)(struct RetroModeIFace *Self, struct retroScreen * screen, int x, int y, unsigned char color);
	unsigned char APICALL (*retroPoint)(struct RetroModeIFace *Self, struct retroScreen * screen, int x, int y);
	struct retroFlashTable * APICALL (*retroFlash)(struct RetroModeIFace *Self, struct retroScreen * screen, unsigned char color, char * data);
	void APICALL (*retroCycleColorsUp)(struct RetroModeIFace *Self, struct retroScreen * screen, unsigned char from_color, unsigned char to_color);
	void APICALL (*retroCycleColorsDown)(struct RetroModeIFace *Self, struct retroScreen * screen, unsigned char from_color, unsigned char to_color);
	void APICALL (*retroBAR)(struct RetroModeIFace *Self, struct retroScreen * screen, int x0, int y0, int x1, int y1, unsigned char color);
	void APICALL (*retroOrBAR)(struct RetroModeIFace *Self, struct retroScreen * screen, int x0, int y0, int x1, int y1, unsigned char or_mask);
	void APICALL (*retroXorBAR)(struct RetroModeIFace *Self, struct retroScreen * screen, int x0, int y0, int x1, int y1, unsigned char xor_mask);
	void APICALL (*retroBox)(struct RetroModeIFace *Self, struct retroScreen * screen, int x0, int y0, int x1, int y1, unsigned char color);
	void APICALL (*retroOrBox)(struct RetroModeIFace *Self, struct retroScreen * screen, int x0, int y0, int x1, int y1, unsigned char or_mask);
	void APICALL (*retroXorBox)(struct RetroModeIFace *Self, struct retroScreen * screen, int x0, int y0, int x1, int y1, unsigned char xor_mask);
	void APICALL (*RetroShift)(struct RetroModeIFace *Self, struct retroScreen * screen, int x0, int y0, int x1, int y1, unsigned char bits);
	void APICALL (*retroCircle)(struct RetroModeIFace *Self, struct retroScreen * screen, int x, int y, int r, unsigned char color);
	void APICALL (*retroEclipse)(struct RetroModeIFace *Self, struct retroScreen * screen, int x, int y, int r1, int r2, unsigned char color);
	void APICALL (*retroOrCircle)(struct RetroModeIFace *Self, struct retroScreen * screen, int x, int y, int r, unsigned char or_mask);
	void APICALL (*retroXorCircle)(struct RetroModeIFace *Self, struct retroScreen * screen, int x, int y, int r, unsigned char xor_mask);
	void APICALL (*retroScreenColor)(struct RetroModeIFace *Self, struct retroScreen * screen, int color, unsigned char r, unsigned char g, unsigned char b);
	void APICALL (*retroOrBlit)(struct RetroModeIFace *Self, struct BitMap * bitmap, int fromX, int fromY, int width, int heigh, struct retroScreen * screen, int toX, int toY);
	void APICALL (*retroAndClear)(struct RetroModeIFace *Self, struct retroScreen * screen, int x0, int y0, int x1, int y1, unsigned char and_mask);
	void APICALL (*retroModeBadVideoSync)(struct RetroModeIFace *Self, struct retroVideo * video, double sync_offset, double incRad, double r);
	void APICALL (*AfterEffectScanline)(struct RetroModeIFace *Self, struct retroVideo * video);
	void APICALL (*AfterEffectAdjustRGB)(struct RetroModeIFace *Self, struct retroVideo * video, unsigned int red_shift, unsigned int green_shift, unsigned int blue_shift);
	void APICALL (*retroTriangle)(struct RetroModeIFace *Self, struct retroScreen * screen, int x1, int y1, int x2, int y2, int x3, int y3, unsigned char color);
	void APICALL (*retroOrTriangle)(struct RetroModeIFace *Self, struct retroScreen * screen, int x1, int y1, int x2, int y2, int x3, int y3, unsigned char color);
	void APICALL (*retroXorTriangle)(struct RetroModeIFace *Self, struct retroScreen * screen, int x1, int y1, int x2, int y2, int x3, int y3, unsigned char color);
	void APICALL (*retroLine)(struct RetroModeIFace *Self, struct retroScreen * screen, int x1, int y1, int x2, int y2, unsigned char color);
	void APICALL (*retroOrLine)(struct RetroModeIFace *Self, struct retroScreen * screen, int x1, int y1, int x2, int y2, unsigned char color);
	void APICALL (*retroXorLine)(struct RetroModeIFace *Self, struct retroScreen * screen, int x1, int y1, int x2, int y2, unsigned char color);
};

#ifdef __cplusplus
}
#ifdef __USE_AMIGAOS_NAMESPACE__
}
#endif
#endif

#endif /* RETROMODE_INTERFACE_DEF_H */
