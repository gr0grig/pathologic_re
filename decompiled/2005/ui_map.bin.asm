GlobalVarCount = 2
	G_VAR_0 float 
	G_VAR_1 float 

Strings:
	Map not found
	ui/ui_player.png
	GetSize
	GetMapParams
	ConvertToMapCoordinates
	map_chertez_force
	tavro
	GetName
	pt_gmap_
	indoor map: pt_gmap_
	outdoor map
	default
	map_open
	map_chertez_state
	ui\ui_chertez_danko_bg.tex
	ui\ui_chertez_danko_
	ui\ui_chertez_burah_bg.tex
	ui\ui_chertez_burah_
	ui\ui_chertez_klara_bg.tex
	ui\ui_chertez_klara_
	clear
	GetMarkCount
	GetMark
	GetLocator
	add
	GetObjectFromPoint
	GetObjectID
	CreateObjectHighlight
	GetType
	quest_mark
	mainquest_mark
	info_mark
	Render
	Blit
	drag
	button_plus
	button_minus
	ConvertToWorldCoordinates
	SetMapParams
	branch
	Region
	State
	Can't find main outdoor scene
	RMap

Import:
	GetMap (1 args)
	Trace (1 args)
	CreatePolyImage (4 args)
	GetWindowSize (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	SendMessage (2 args)
	CreateObjectVector (1 args)
	GetMainOutdoorScene (1 args)
	GetActiveScene (1 args)
	GetPlayerMapPos (2 args)
	ShowCursor (0 args)
	SetCursor (1 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	SetBackground (1 args)
	EnableClipping (1 args)
	CaptureKeyboard (0 args)
	PlaySound (1 args)
	ProcessEvents (0 args)
	LoadImage (1 args)
	SetRegionColor (5 args)
	GetStringByID (2 args)
	SetTooltip (2 args)
	SetTooltip (3 args)
	Blit (3 args)
	ClientToScreen (2 args)
	RenderMap (8 args)
	RenderRegions (8 args)
	ScreenToClient (2 args)
	GetScreenSize (2 args)
	StretchBlit (6 args)
	GetPlayerMapAngle (1 args)
	DestroyWindow (0 args)
	GetGameTime (1 args)

RunOp = 0x11
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, int, int, int, int, int, int, int, float, float, int, float, float, float, bool, bool, bool, bool, bool, object, object, object, object, object, cvector, string) Params = 0
		EVENT_1 Op = 0x132 Vars = (float)
		EVENT_0 Op = 0x26d Vars = ()
		EVENT_11 Op = 0x2a2 Vars = (int, int)
		EVENT_12 Op = 0x2b7 Vars = (int, int, bool)
		EVENT_8 Op = 0x2bd Vars = (int, int)
		EVENT_10 Op = 0x2ca Vars = ()
		EVENT_15 Op = 0x2cc Vars = (int, int, float)
		EVENT_200 Op = 0x30c Vars = (int, string, object)
		EVENT_101 Op = 0x330 Vars = (int)


0x0: PushEmpty(bool)
0x1: Stack[-1] = (bool) 0
0x2: Push((int) 2)
0x3: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x4: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0x5: PushEmpty(int)
0x6: Call2 0x350

0x7: Pop(0)
0x8: Push((int) 8)
0x9: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0xb: Stack[-1] = (bool) 1
0xc: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xd: Stack[-1] = (bool) 1
0xe: Return(); Pop(0)

0xf: Stack[-1] = (bool) 0
0x10: Return(); Pop(0)

0x11: PushEmpty(float, float, int, object, string, float, float, float, float, float, float, int, object, string, float, float, float, float)
0x12: @ GetMap(Stack[-22])
0x13: Pop(0)
0x14: Pop(0); Push((bool) Stack[22 + Tasks[-1].StackPointer] == 0)
0x15: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x16: Push("Map not found")
0x17: @ Trace(Stack[-1])
0x18: Pop(1)
0x19: Return(); Pop(18)

0x1a: Push((int) 16)
0x1b: Push((int) 16)
0x1c: Push("ui/ui_player.png")
0x1d: @ CreatePolyImage(Stack[-24], Stack[-3], Stack[-2], Stack[-1])
0x1e: Pop(3)
0x1f: @@ GetSize(Stack[-1], Stack[-2])
0x20: Pop(0)
0x21: @@ GetMapParams(Stack[-9], Stack[-8], Stack[-14])
0x22: Pop(0)
0x23: @@ ConvertToMapCoordinates(Stack[-9], Stack[-8])
0x24: Pop(0)
0x25: Stack[12 + Tasks[-1].StackPointer] = Stack[-9]
0x26: Stack[13 + Tasks[-1].StackPointer] = Stack[-8]
0x27: Stack[16 + Tasks[-1].StackPointer] = (bool)1
0x28: @ GetWindowSize(Stack[-3], Stack[-4])
0x29: Pop(0)
0x2a: Push(GlobalVars[0])
0x2b: Push((float)2048.0)
0x2c: Stack[-2] = Stack[3 + Tasks[-1].StackPointer] / Stack[-1]; Pop(1);
0x2d: GlobalVars[0] = Stack[-1]; Pop(1)
0x2e: Push(GlobalVars[1])
0x2f: Push(GlobalVars[0])
0x30: Stack[-2] = Stack[-1]
0x31: Pop(1)
0x32: GlobalVars[1] = Stack[-1]; Pop(1)
0x33: Stack[19 + Tasks[-1].StackPointer] = (bool)0
0x34: Push((int) 0)
0x35: Pop(1); Push((bool) Stack[14 + Tasks[-1].StackPointer] < Stack[-1])
0x36: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x37: Stack[18 + Tasks[-1].StackPointer] = (bool)1
0x38: PushEmpty()
0x39: Call2 0xa4

0x3a: Pop(0)
0x3b: Stack[14 + Tasks[-1].StackPointer] = (int)2
0x3c: Push("map_chertez_force")
0x3d: @ GetVariable(Stack[-1], Stack[-8])
0x3e: Pop(1)
0x3f: Push(Stack[-7])
0x40: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x41: Stack[18 + Tasks[-1].StackPointer] = (bool)1
0x42: PushEmpty()
0x43: Call2 0xa4

0x44: Pop(0)
0x45: Push("map_chertez_force")
0x46: Push((int) 0)
0x47: @ SetVariable(Stack[-2], Stack[-1])
0x48: Pop(2)
0x49: Push( Stack[18 + Tasks[-1].StackPointer] )
0x4a: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4b: Push((int) 1)
0x4c: GOTO 0x4e

0x4d: Push((int) 0)
0x4e: Push("tavro")
0x4f: @ SendMessage(Stack[-2], Stack[-1])
0x50: Pop(2)
0x51: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x52: Stack[5 + Tasks[-1].StackPointer] = (int)-1
0x53: Stack[6 + Tasks[-1].StackPointer] = (int)-1
0x54: Stack[15 + Tasks[-1].StackPointer] = (bool)0
0x55: Stack[23 + Tasks[-1].StackPointer] = 0
0x56: Stack[11 + Tasks[-1].StackPointer] = (int)-1
0x57: @ CreateObjectVector(Stack[-20])
0x58: Pop(0)
0x59: @ GetMainOutdoorScene(Stack[-6])
0x5a: Pop(0)
0x5b: @ GetActiveScene(Stack[-21])
0x5c: Pop(0)
0x5d: Pop(0); Push((bool) Stack[-6] != Stack[21 + Tasks[-1].StackPointer])
0x5e: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x5f: Stack[17 + Tasks[-1].StackPointer] = (bool)1
0x60: @@ GetName(Stack[-5])
0x61: Pop(0)
0x62: PushEmpty(cvector, string)
0x63: Push("pt_gmap_")
0x64: Stack[-2] = Stack[-1] + Stack[-8]; Pop(1);
0x65: Call2 0x383

0x66: Stack[25 + Tasks[-1].StackPointer] = Stack[-2]
0x67: Pop(2)
0x68: Push(CvectorIndex(Stack[-25], 0))
0x69: Stack[-5] = Stack[-1]
0x6a: Pop(1)
0x6b: Push(CvectorIndex(Stack[-25], 2))
0x6c: Stack[-4] = Stack[-1]
0x6d: Pop(1)
0x6e: @@ ConvertToMapCoordinates(Stack[-4], Stack[-3])
0x6f: Pop(0)
0x70: Push(CvectorIndex(Stack[-25], 0))
0x71: Stack[-1] = Stack[-5]
0x72: CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 0) = Stack[-1];
0x73: Push(CvectorIndex(Stack[-25], 2))
0x74: Stack[-1] = Stack[-4]
0x75: CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 2) = Stack[-1];
0x76: Push("indoor map: pt_gmap_")
0x77: Pop(1); Push(Stack[-1] + Stack[-6]);
0x78: @ Trace(Stack[-1])
0x79: Pop(1)
0x7a: GOTO 0x87

0x7b: Push("outdoor map")
0x7c: @ Trace(Stack[-1])
0x7d: Pop(1)
0x7e: Stack[17 + Tasks[-1].StackPointer] = (bool)0
0x7f: @ GetPlayerMapPos(Stack[-2], Stack[-1])
0x80: Pop(0)
0x81: Push(CvectorIndex(Stack[-25], 0))
0x82: Stack[-1] = Stack[-3]
0x83: CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 0) = Stack[-1];
0x84: Push(CvectorIndex(Stack[-25], 2))
0x85: Stack[-1] = Stack[-2]
0x86: CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 2) = Stack[-1];
0x87: PushEmpty()
0x88: Call2 0xea

0x89: Pop(0)
0x8a: @ ShowCursor()
0x8b: Pop(0)
0x8c: Push("default")
0x8d: @ SetCursor(Stack[-1])
0x8e: Pop(1)
0x8f: Push((bool) 1)
0x90: @ SetOwnerDraw(Stack[-1])
0x91: Pop(1)
0x92: Push((bool) 1)
0x93: @ SetNeedUpdate(Stack[-1])
0x94: Pop(1)
0x95: Push("default")
0x96: @ SetBackground(Stack[-1])
0x97: Pop(1)
0x98: Push((bool) 1)
0x99: @ EnableClipping(Stack[-1])
0x9a: Pop(1)
0x9b: @ CaptureKeyboard()
0x9c: Pop(0)
0x9d: Push("map_open")
0x9e: @ PlaySound(Stack[-1])
0x9f: Pop(1)
0xa0: @ ProcessEvents()
0xa1: Pop(0)
0xa2: Return(); Pop(18)

0xa3: Stack[-6] = 0
0xa4: PushEmpty(int, int)
0xa5: Push( Stack[19 + Tasks[-1].StackPointer] )
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: Return(); Pop(2)

0xa8: Push("map_chertez_state")
0xa9: @ GetVariable(Stack[-1], Stack[-2])
0xaa: Pop(1)
0xab: PushEmpty(int)
0xac: Call2 0x34a

0xad: Pop(0)
0xae: Push((int) 0)
0xaf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xb1: Stack[26 + Tasks[-1].StackPointer] = "ui\ui_chertez_danko_bg.tex"
0xb2: PushEmpty(bool)
0xb3: Stack[-1] = (bool) 0
0xb4: Push((int) 1)
0xb5: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb7: Push((int) 6)
0xb8: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Stack[-1] = (bool) 1
0xbb: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbc: Push("ui\ui_chertez_danko_")
0xbd: Pop(1); Push(Stack[-1] + Stack[-2]);
0xbe: Push(".tex")
0xbf: Stack[26 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0xc0: GOTO 0xe6

0xc1: PushEmpty(int)
0xc2: Call2 0x34a

0xc3: Pop(0)
0xc4: Push((int) 1)
0xc5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xc7: Stack[26 + Tasks[-1].StackPointer] = "ui\ui_chertez_burah_bg.tex"
0xc8: PushEmpty(bool)
0xc9: Stack[-1] = (bool) 0
0xca: Push((int) 1)
0xcb: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcd: Push((int) 6)
0xce: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xd0: Stack[-1] = (bool) 1
0xd1: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd2: Push("ui\ui_chertez_burah_")
0xd3: Pop(1); Push(Stack[-1] + Stack[-2]);
0xd4: Push(".tex")
0xd5: Stack[26 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0xd6: GOTO 0xe6

0xd7: Stack[26 + Tasks[-1].StackPointer] = "ui\ui_chertez_klara_bg.tex"
0xd8: PushEmpty(bool)
0xd9: Stack[-1] = (bool) 0
0xda: Push((int) 1)
0xdb: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdd: Push((int) 6)
0xde: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: Stack[-1] = (bool) 1
0xe1: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe2: Push("ui\ui_chertez_klara_")
0xe3: Pop(1); Push(Stack[-1] + Stack[-2]);
0xe4: Push(".tex")
0xe5: Stack[26 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0xe6: @ LoadImage(Stack[-26])
0xe7: Pop(0)
0xe8: Stack[19 + Tasks[-1].StackPointer] = (bool)1
0xe9: Return(); Pop(2)

0xea: PushEmpty(int, int)
0xeb: Stack[-1] = (int) 0
0xec: Push((int) 16)
0xed: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0xef: PushEmpty(bool, int)
0xf0: Stack[-1] = Stack[-3]
0xf1: Call2 0x35f

0xf2: Pop(1)
0xf3: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf4: Push((float)0.5)
0xf5: Push((float)0.5)
0xf6: Push((float)0.5)
0xf7: Push((float)0.0)
0xf8: @ SetRegionColor(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf9: Pop(4)
0xfa: GOTO 0x112

0xfb: PushEmpty(bool, int)
0xfc: Stack[-1] = Stack[-3]
0xfd: Call2 0x36b

0xfe: Pop(1)
0xff: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x100: Push((float)0.5)
0x101: Push((float)0.0)
0x102: Push((float)0.0)
0x103: Push((float)0.5)
0x104: @ SetRegionColor(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(4)
0x106: GOTO 0x112

0x107: PushEmpty(bool, int)
0x108: Stack[-1] = Stack[-3]
0x109: Call2 0x377

0x10a: Pop(1)
0x10b: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10c: Push((float)0.0)
0x10d: Push((float)0.0)
0x10e: Push((float)0.0)
0x10f: Push((float)0.5)
0x110: @ SetRegionColor(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(4)
0x112: Push((int) 1)
0x113: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x114: GOTO 0xec

0x115: Return(); Pop(2)

0x116: PushEmpty()
0x117: Push((int) 2)
0x118: Pop(1); Push(Stack[3 + StackPtr] / Stack[-1]);
0x119: Pop(1); Push(Stack[-2] - Stack[-1]);
0x11a: Pop(1); Push(Stack[-1] / Stack[14 + StackPtr]);
0x11b: Stack[-3] = Stack[12 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x11c: Return(); Pop(0)

0x11d: PushEmpty()
0x11e: Push((int) 2)
0x11f: Pop(1); Push(Stack[4 + StackPtr] / Stack[-1]);
0x120: Pop(1); Push(Stack[-2] - Stack[-1]);
0x121: Pop(1); Push(Stack[-1] / Stack[14 + StackPtr]);
0x122: Stack[-3] = Stack[13 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x123: Return(); Pop(0)

0x124: PushEmpty()
0x125: Pop(0); Push(Stack[-1] - Stack[12 + StackPtr]);
0x126: Pop(1); Push(Stack[-1] * Stack[14 + StackPtr]);
0x127: Push((int) 2)
0x128: Pop(1); Push(Stack[3 + StackPtr] / Stack[-1]);
0x129: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x12a: Return(); Pop(0)

0x12b: PushEmpty()
0x12c: Pop(0); Push(Stack[-1] - Stack[13 + StackPtr]);
0x12d: Pop(1); Push(Stack[-1] * Stack[14 + StackPtr]);
0x12e: Push((int) 2)
0x12f: Pop(1); Push(Stack[4 + StackPtr] / Stack[-1]);
0x130: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x131: Return(); Pop(0)

0x132: PushEmpty(float, float, float, float, float, float, float, float, int, int, int, object, string, cvector, int, int, float, float, string, float, float, float, float, float, float, float, float, int, int, int, object, string, cvector, int, int, float, float, string)
0x133: Pop(0); Push(Stack[3 + StackPtr] / Stack[14 + StackPtr]);
0x134: Push((int) 2)
0x135: Pop(2); Push(Stack[-2] / Stack[-1]);
0x136: Stack[-20] = Stack[12 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x137: Pop(0); Push(Stack[3 + StackPtr] / Stack[14 + StackPtr]);
0x138: Push((int) 2)
0x139: Pop(2); Push(Stack[-2] / Stack[-1]);
0x13a: Stack[-19] = Stack[12 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x13b: Pop(0); Push(Stack[4 + StackPtr] / Stack[14 + StackPtr]);
0x13c: Push((int) 2)
0x13d: Pop(2); Push(Stack[-2] / Stack[-1]);
0x13e: Stack[-18] = Stack[13 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x13f: Pop(0); Push(Stack[4 + StackPtr] / Stack[14 + StackPtr]);
0x140: Push((int) 2)
0x141: Pop(2); Push(Stack[-2] / Stack[-1]);
0x142: Stack[-17] = Stack[13 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x143: Stack[-15] = (int) 0
0x144: Stack[-14] = (int) 0
0x145: Push((int) 0)
0x146: Pop(1); Push((bool) Stack[-20] < Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x148: Stack[-15] = -Stack[-19]; Pop(0);
0x149: GOTO 0x14f

0x14a: Push((int) 2048)
0x14b: Pop(1); Push((bool) Stack[-19] > Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14d: Push((int) 2048)
0x14e: Stack[-16] = Stack[-1] - Stack[-19]; Pop(1);
0x14f: Push((int) 0)
0x150: Pop(1); Push((bool) Stack[-18] < Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x152: Stack[-14] = -Stack[-17]; Pop(0);
0x153: GOTO 0x159

0x154: Push((int) 2048)
0x155: Pop(1); Push((bool) Stack[-17] > Stack[-1])
0x156: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x157: Push((int) 2048)
0x158: Stack[-15] = Stack[-1] - Stack[-17]; Pop(1);
0x159: Stack[12 + Tasks[-1].StackPointer] = Stack[12 + Tasks[-1].StackPointer] + Stack[-15]; Pop(0);
0x15a: Stack[13 + Tasks[-1].StackPointer] = Stack[13 + Tasks[-1].StackPointer] + Stack[-14]; Pop(0);
0x15b: PushEmpty(bool)
0x15c: Stack[-1] = (bool) 0
0x15d: PushEmpty(bool)
0x15e: Call2 0x0

0x15f: Pop(0)
0x160: Pop(1); Push((bool) Stack[-1] == 0)
0x161: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x162: Pop(0); Push((bool) Stack[18 + Tasks[-1].StackPointer] == 0)
0x163: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x164: Stack[-1] = (bool) 1
0x165: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x166: @@ clear()
0x167: Pop(0)
0x168: Stack[-10] = (int) 0
0x169: @@ GetMarkCount(Stack[-11])
0x16a: Pop(0)
0x16b: Stack[-9] = (int) 0
0x16c: Pop(0); Push((bool) Stack[-9] < Stack[-11])
0x16d: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x16e: @@ GetMark(Stack[-9], Stack[-8])
0x16f: Pop(0)
0x170: @@ GetLocator(Stack[-7])
0x171: Pop(0)
0x172: PushEmpty(cvector, string)
0x173: Stack[-1] = Stack[-9]
0x174: Call2 0x383

0x175: Stack[-8] = Stack[-2]
0x176: Pop(2)
0x177: Push(CvectorIndex(Stack[-6], 0))
0x178: Stack[-14] = Stack[-1]
0x179: Pop(1)
0x17a: Push(CvectorIndex(Stack[-6], 2))
0x17b: Stack[-13] = Stack[-1]
0x17c: Pop(1)
0x17d: @@ ConvertToMapCoordinates(Stack[-13], Stack[-12])
0x17e: Pop(0)
0x17f: PushEmpty(int, float)
0x180: Stack[-1] = Stack[-15]
0x181: Call2 0x124

0x182: Stack[-15] = Stack[-2]
0x183: Pop(2)
0x184: PushEmpty(int, float)
0x185: Stack[-1] = Stack[-14]
0x186: Call2 0x12b

0x187: Stack[-14] = Stack[-2]
0x188: Pop(2)
0x189: Pop(0); Push(Stack[-13] - Stack[5 + StackPtr]);
0x18a: Pop(0); Push(Stack[-14] - Stack[5 + StackPtr]);
0x18b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x18c: Pop(0); Push(Stack[-13] - Stack[6 + StackPtr]);
0x18d: Pop(0); Push(Stack[-14] - Stack[6 + StackPtr]);
0x18e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x18f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x190: Push((int) 900)
0x191: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x193: @@ add(Stack[-8])
0x194: Pop(0)
0x195: Push((int) 1)
0x196: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x197: Stack[-8] = 0
0x198: Push((int) 1)
0x199: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x19a: GOTO 0x16c

0x19b: Pop(0); Push((bool) Stack[-10] == 0)
0x19c: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x19d: PushEmpty(float, int)
0x19e: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0x19f: Call2 0x116

0x1a0: Stack[-5] = Stack[-2]
0x1a1: Pop(2)
0x1a2: PushEmpty(float, int)
0x1a3: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0x1a4: Call2 0x11d

0x1a5: Stack[-4] = Stack[-2]
0x1a6: Pop(2)
0x1a7: @@ GetObjectFromPoint(Stack[-5], Stack[-3], Stack[-2])
0x1a8: Pop(0)
0x1a9: Push((int) 0)
0x1aa: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ac: @@ GetObjectID(Stack[-4], Stack[-5])
0x1ad: Pop(0)
0x1ae: Push((int) 100000)
0x1af: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1b0: @ GetStringByID(Stack[-2], Stack[-1])
0x1b1: Pop(1)
0x1b2: Push((int) 5)
0x1b3: @ SetTooltip(Stack[-1], Stack[-2])
0x1b4: Pop(1)
0x1b5: Pop(0); Push((bool) Stack[11 + Tasks[-1].StackPointer] != Stack[-5])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b7: @@ CreateObjectHighlight(Stack[-23], Stack[-5])
0x1b8: Pop(0)
0x1b9: Stack[11 + Tasks[-1].StackPointer] = Stack[-5]
0x1ba: GOTO 0x1c1

0x1bb: Push((int) -1)
0x1bc: Push("")
0x1bd: @ SetTooltip(Stack[-2], Stack[-1])
0x1be: Pop(2)
0x1bf: Stack[23 + Tasks[-1].StackPointer] = 0
0x1c0: Stack[11 + Tasks[-1].StackPointer] = (int)-1
0x1c1: GOTO 0x1c8

0x1c2: Push((int) 2)
0x1c3: Push("")
0x1c4: @ SetTooltip(Stack[-2], Stack[-1], Stack[-20])
0x1c5: Pop(2)
0x1c6: Stack[23 + Tasks[-1].StackPointer] = 0
0x1c7: Stack[11 + Tasks[-1].StackPointer] = (int)-1
0x1c8: GOTO 0x1cf

0x1c9: Push((int) -1)
0x1ca: Push("")
0x1cb: @ SetTooltip(Stack[-2], Stack[-1])
0x1cc: Pop(2)
0x1cd: Stack[11 + Tasks[-1].StackPointer] = (int)-1
0x1ce: Stack[23 + Tasks[-1].StackPointer] = 0
0x1cf: Return(); Pop(38)

0x1d0: PushEmpty(float, float, int, int, object, string, int, cvector, float, float, int, int, object, string, int, cvector)
0x1d1: @@ GetMarkCount(Stack[-6])
0x1d2: Pop(0)
0x1d3: Stack[-5] = (int) 0
0x1d4: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x1d5: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x1d6: @@ GetMark(Stack[-5], Stack[-4])
0x1d7: Pop(0)
0x1d8: @@ GetLocator(Stack[-3])
0x1d9: Pop(0)
0x1da: @@ GetType(Stack[-2])
0x1db: Pop(0)
0x1dc: PushEmpty(cvector, string)
0x1dd: Stack[-1] = Stack[-5]
0x1de: Call2 0x383

0x1df: Stack[-3] = Stack[-2]
0x1e0: Pop(2)
0x1e1: Push(CvectorIndex(Stack[-1], 0))
0x1e2: Stack[-9] = Stack[-1]
0x1e3: Pop(1)
0x1e4: Push(CvectorIndex(Stack[-1], 2))
0x1e5: Stack[-8] = Stack[-1]
0x1e6: Pop(1)
0x1e7: @@ ConvertToMapCoordinates(Stack[-8], Stack[-7])
0x1e8: Pop(0)
0x1e9: PushEmpty(int, float)
0x1ea: Stack[-1] = Stack[-10]
0x1eb: Call2 0x124

0x1ec: Stack[-10] = Stack[-2]
0x1ed: Pop(2)
0x1ee: PushEmpty(int, float)
0x1ef: Stack[-1] = Stack[-9]
0x1f0: Call2 0x12b

0x1f1: Stack[-9] = Stack[-2]
0x1f2: Pop(2)
0x1f3: Pop(0); Push((bool) Stack[-2] == Stack[-17])
0x1f4: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x1f5: Push((int) 0)
0x1f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f8: Push("quest_mark")
0x1f9: Push((int) 16)
0x1fa: Pop(1); Push(Stack[-10] - Stack[-1]);
0x1fb: Push((int) 16)
0x1fc: Pop(1); Push(Stack[-10] - Stack[-1]);
0x1fd: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(3)
0x1ff: Push((int) 1)
0x200: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x202: Push("mainquest_mark")
0x203: Push((int) 16)
0x204: Pop(1); Push(Stack[-10] - Stack[-1]);
0x205: Push((int) 16)
0x206: Pop(1); Push(Stack[-10] - Stack[-1]);
0x207: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x208: Pop(3)
0x209: Push((int) 3)
0x20a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20c: Push("info_mark")
0x20d: Push((int) 16)
0x20e: Pop(1); Push(Stack[-10] - Stack[-1]);
0x20f: Push((int) 16)
0x210: Pop(1); Push(Stack[-10] - Stack[-1]);
0x211: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x212: Pop(3)
0x213: Stack[-4] = 0
0x214: Push((int) 1)
0x215: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x216: GOTO 0x1d4

0x217: Return(); Pop(16)

0x218: PushEmpty(float, float, float, float, float, int, int, float, float, float, float, float, int, int)
0x219: PushEmpty(bool)
0x21a: Call2 0x0

0x21b: Pop(0)
0x21c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21d: Return(); Pop(14)

0x21e: Stack[-7] = Stack[14 + Tasks[-1].StackPointer]
0x21f: Push(GlobalVars[0])
0x220: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x222: Push(GlobalVars[0])
0x223: Stack[-8] = Stack[-1]
0x224: Pop(1)
0x225: Pop(0); Push(Stack[3 + StackPtr] / Stack[-7]);
0x226: Push((int) 2)
0x227: Pop(2); Push(Stack[-2] / Stack[-1]);
0x228: Stack[-7] = Stack[12 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x229: Pop(0); Push(Stack[3 + StackPtr] / Stack[-7]);
0x22a: Push((int) 2)
0x22b: Pop(2); Push(Stack[-2] / Stack[-1]);
0x22c: Stack[-6] = Stack[12 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x22d: Pop(0); Push(Stack[4 + StackPtr] / Stack[-7]);
0x22e: Push((int) 2)
0x22f: Pop(2); Push(Stack[-2] / Stack[-1]);
0x230: Stack[-5] = Stack[13 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x231: Pop(0); Push(Stack[4 + StackPtr] / Stack[-7]);
0x232: Push((int) 2)
0x233: Pop(2); Push(Stack[-2] / Stack[-1]);
0x234: Stack[-4] = Stack[13 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x235: Stack[-2] = (int) 0
0x236: Stack[-1] = (int) 0
0x237: @ ClientToScreen(Stack[-2], Stack[-1])
0x238: Pop(0)
0x239: Pop(0); Push(Stack[3 + StackPtr] + Stack[-2]);
0x23a: Pop(0); Push(Stack[4 + StackPtr] + Stack[-2]);
0x23b: @ RenderMap(Stack[-4], Stack[-3], Stack[-2], Stack[-1], Stack[-8], Stack[-6], Stack[-7], Stack[-5])
0x23c: Pop(2)
0x23d: PushEmpty(bool)
0x23e: Call2 0x394

0x23f: Pop(0)
0x240: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x241: Pop(0); Push(Stack[3 + StackPtr] + Stack[-2]);
0x242: Pop(0); Push(Stack[4 + StackPtr] + Stack[-2]);
0x243: @ RenderRegions(Stack[-4], Stack[-3], Stack[-2], Stack[-1], Stack[-8], Stack[-6], Stack[-7], Stack[-5])
0x244: Pop(2)
0x245: Push( Stack[23 + Tasks[-1].StackPointer] )
0x246: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x247: Pop(0); Push(Stack[3 + StackPtr] + Stack[-2]);
0x248: Pop(0); Push(Stack[4 + StackPtr] + Stack[-2]);
0x249: @@ Render(Stack[-4], Stack[-3], Stack[-2], Stack[-1], Stack[-8], Stack[-6], Stack[-7], Stack[-5])
0x24a: Pop(2)
0x24b: PushEmpty(object, int)
0x24c: Stack[-2] = Stack[22 + Tasks[-1].StackPointer]
0x24d: Stack[-1] = (int) 3
0x24e: Call2 0x1d0

0x24f: Pop(2)
0x250: PushEmpty(object, int)
0x251: Stack[-2] = Stack[22 + Tasks[-1].StackPointer]
0x252: Stack[-1] = (int) 0
0x253: Call2 0x1d0

0x254: Pop(2)
0x255: PushEmpty(object, int)
0x256: Stack[-2] = Stack[22 + Tasks[-1].StackPointer]
0x257: Stack[-1] = (int) 1
0x258: Call2 0x1d0

0x259: Pop(2)
0x25a: PushEmpty()
0x25b: Call2 0x277

0x25c: Pop(0)
0x25d: Return(); Pop(14)

0x25e: PushEmpty(int, int, int, int, float, int, int, int, int, float)
0x25f: Stack[-5] = (int) 0
0x260: Stack[-4] = (int) 0
0x261: @ ScreenToClient(Stack[-5], Stack[-4])
0x262: Pop(0)
0x263: @ GetScreenSize(Stack[-3], Stack[-2])
0x264: Pop(0)
0x265: Push((float)768.0)
0x266: Stack[-2] = Stack[-3] / Stack[-1]; Pop(1);
0x267: Push((int) 1024)
0x268: Pop(1); Push(Stack[-2] * Stack[-1]);
0x269: Push((int) 1)
0x26a: @ StretchBlit(Stack[-26], Stack[-7], Stack[-6], Stack[-5], Stack[-2], Stack[-1])
0x26b: Pop(2)
0x26c: Return(); Pop(10)

0x26d: Push( Stack[18 + Tasks[-1].StackPointer] )
0x26e: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26f: PushEmpty()
0x270: Call2 0x25e

0x271: Pop(0)
0x272: GOTO 0x276

0x273: PushEmpty()
0x274: Call2 0x218

0x275: Pop(0)
0x276: Return(); Pop(0)

0x277: PushEmpty(float, float, float, float, float, float)
0x278: Pop(0); Push((bool) Stack[17 + Tasks[-1].StackPointer] == 0)
0x279: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x27a: @ GetPlayerMapAngle(Stack[-1])
0x27b: Pop(0)
0x27c: PushEmpty(int, float)
0x27d: Push(CvectorIndex(Stack[-25], 0))
0x27e: Stack[-2] = Stack[-1]
0x27f: Pop(1)
0x280: Call2 0x124

0x281: Stack[-5] = Stack[-2]
0x282: Pop(2)
0x283: PushEmpty(int, float)
0x284: Push(CvectorIndex(Stack[-25], 2))
0x285: Stack[-2] = Stack[-1]
0x286: Pop(1)
0x287: Call2 0x12b

0x288: Stack[-4] = Stack[-2]
0x289: Pop(2)
0x28a: @ ClientToScreen(Stack[-3], Stack[-2])
0x28b: Pop(0)
0x28c: @@ Blit(Stack[-3], Stack[-2], Stack[-1])
0x28d: Pop(0)
0x28e: GOTO 0x2a1

0x28f: PushEmpty(int, float)
0x290: Push(CvectorIndex(Stack[-25], 0))
0x291: Stack[-2] = Stack[-1]
0x292: Pop(1)
0x293: Call2 0x124

0x294: Stack[-5] = Stack[-2]
0x295: Pop(2)
0x296: PushEmpty(int, float)
0x297: Push(CvectorIndex(Stack[-25], 2))
0x298: Stack[-2] = Stack[-1]
0x299: Pop(1)
0x29a: Call2 0x12b

0x29b: Stack[-4] = Stack[-2]
0x29c: Pop(2)
0x29d: @ ClientToScreen(Stack[-3], Stack[-2])
0x29e: Pop(0)
0x29f: @@ Blit(Stack[-3], Stack[-2])
0x2a0: Pop(0)
0x2a1: Return(); Pop(6)

0x2a2: PushEmpty()
0x2a3: PushEmpty(bool)
0x2a4: Stack[-1] = (bool) 1
0x2a5: PushEmpty(bool)
0x2a6: Call2 0x0

0x2a7: Pop(0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a9: Push( Stack[18 + Tasks[-1].StackPointer] )
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2ab: Stack[-1] = (bool) 0
0x2ac: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ad: Return(); Pop(0)

0x2ae: Stack[15 + Tasks[-1].StackPointer] = (bool)1
0x2af: Stack[7 + Tasks[-1].StackPointer] = Stack[-2]
0x2b0: Stack[8 + Tasks[-1].StackPointer] = Stack[-1]
0x2b1: Stack[9 + Tasks[-1].StackPointer] = Stack[12 + Tasks[-1].StackPointer]
0x2b2: Stack[10 + Tasks[-1].StackPointer] = Stack[13 + Tasks[-1].StackPointer]
0x2b3: Push("drag")
0x2b4: @ SetCursor(Stack[-1])
0x2b5: Pop(1)
0x2b6: Return(); Pop(0)

0x2b7: PushEmpty()
0x2b8: Stack[15 + Tasks[-1].StackPointer] = (bool)0
0x2b9: Push("default")
0x2ba: @ SetCursor(Stack[-1])
0x2bb: Pop(1)
0x2bc: Return(); Pop(0)

0x2bd: PushEmpty()
0x2be: Stack[5 + Tasks[-1].StackPointer] = Stack[-2]
0x2bf: Stack[6 + Tasks[-1].StackPointer] = Stack[-1]
0x2c0: Stack[16 + Tasks[-1].StackPointer] = (bool)0
0x2c1: Push( Stack[15 + Tasks[-1].StackPointer] )
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c3: Pop(0); Push(Stack[7 + StackPtr] - Stack[-2]);
0x2c4: Pop(1); Push(Stack[-1] / Stack[14 + StackPtr]);
0x2c5: Stack[12 + Tasks[-1].StackPointer] = Stack[9 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2c6: Pop(0); Push(Stack[8 + StackPtr] - Stack[-1]);
0x2c7: Pop(1); Push(Stack[-1] / Stack[14 + StackPtr]);
0x2c8: Stack[13 + Tasks[-1].StackPointer] = Stack[10 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2c9: Return(); Pop(0)

0x2ca: Stack[16 + Tasks[-1].StackPointer] = (bool)1
0x2cb: Return(); Pop(0)

0x2cc: PushEmpty(int, int, int, int)
0x2cd: Push( Stack[18 + Tasks[-1].StackPointer] )
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2cf: Return(); Pop(4)

0x2d0: Push((int) 0)
0x2d1: Pop(1); Push((bool) Stack[-6] > Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d3: Stack[-2] = (int) 0
0x2d4: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d6: PushEmpty(float)
0x2d7: Stack[-1] = (float) 1.1
0x2d8: Call2 0x2ea

0x2d9: Pop(1)
0x2da: Push((int) 1)
0x2db: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2dc: GOTO 0x2d4

0x2dd: GOTO 0x2e9

0x2de: Stack[-1] = (int) 0
0x2df: Pop(0); Push(( -Stack[-5])
0x2e0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e2: PushEmpty(float)
0x2e3: Stack[-1] = (float) 1.1
0x2e4: Call2 0x2fa

0x2e5: Pop(1)
0x2e6: Push((int) 1)
0x2e7: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2e8: GOTO 0x2df

0x2e9: Return(); Pop(4)

0x2ea: PushEmpty()
0x2eb: Push( Stack[18 + Tasks[-1].StackPointer] )
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ed: Return(); Pop(0)

0x2ee: Stack[14 + Tasks[-1].StackPointer] = Stack[14 + Tasks[-1].StackPointer] * Stack[-1]; Pop(0);
0x2ef: Push((float)2.0)
0x2f0: Pop(1); Push((bool) Stack[14 + Tasks[-1].StackPointer] > Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f2: Stack[14 + Tasks[-1].StackPointer] = (float)2.0
0x2f3: Push((int) -1)
0x2f4: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2f5: Push((int) 0)
0x2f6: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] < Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f8: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x2f9: Return(); Pop(0)

0x2fa: PushEmpty()
0x2fb: Push( Stack[18 + Tasks[-1].StackPointer] )
0x2fc: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fd: Return(); Pop(0)

0x2fe: Stack[14 + Tasks[-1].StackPointer] = Stack[14 + Tasks[-1].StackPointer] / Stack[-1]; Pop(0);
0x2ff: Push(GlobalVars[0])
0x300: Pop(1); Push((bool) Stack[14 + Tasks[-1].StackPointer] < Stack[-1])
0x301: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x302: Push(GlobalVars[0])
0x303: Stack[14 + Tasks[-1].StackPointer] = Stack[-1]
0x304: Pop(1)
0x305: Push((int) 1)
0x306: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x307: Push((int) 2)
0x308: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x30a: Stack[0 + Tasks[-1].StackPointer] = (int)2
0x30b: Return(); Pop(0)

0x30c: PushEmpty()
0x30d: Push("button_plus")
0x30e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x310: PushEmpty(float)
0x311: Stack[-1] = (float) 1.4
0x312: Call2 0x2ea

0x313: Pop(1)
0x314: GOTO 0x32f

0x315: Push("button_minus")
0x316: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x318: PushEmpty(float)
0x319: Stack[-1] = (float) 1.4
0x31a: Call2 0x2fa

0x31b: Pop(1)
0x31c: GOTO 0x32f

0x31d: Push("tavro")
0x31e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31f: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x320: Push((int) 0)
0x321: Stack[18 + Tasks[-1].StackPointer] = Stack[-4] == Stack[-1]; Pop(1);
0x322: Push( Stack[18 + Tasks[-1].StackPointer] )
0x323: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x324: Push((int) 1)
0x325: GOTO 0x327

0x326: Push((int) 0)
0x327: Push("tavro")
0x328: @ SendMessage(Stack[-2], Stack[-1])
0x329: Pop(2)
0x32a: Push( Stack[18 + Tasks[-1].StackPointer] )
0x32b: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32c: PushEmpty()
0x32d: Call2 0xa4

0x32e: Pop(0)
0x32f: Return(); Pop(0)

0x330: PushEmpty(float, float, float, float)
0x331: Push((int) 107)
0x332: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x333: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x334: PushEmpty(float)
0x335: Stack[-1] = (float) 1.4
0x336: Call2 0x2ea

0x337: Pop(1)
0x338: Return(); Pop(4)

0x339: Push((int) 109)
0x33a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33c: PushEmpty(float)
0x33d: Stack[-1] = (float) 1.4
0x33e: Call2 0x2fa

0x33f: Pop(1)
0x340: Return(); Pop(4)

0x341: Stack[-2] = Stack[12 + Tasks[-1].StackPointer]
0x342: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0x343: @@ ConvertToWorldCoordinates(Stack[-2], Stack[-1])
0x344: Pop(0)
0x345: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-14])
0x346: Pop(0)
0x347: @ DestroyWindow()
0x348: Pop(0)
0x349: Return(); Pop(4)

0x34a: PushEmpty(int, int)
0x34b: Push("branch")
0x34c: @ GetVariable(Stack[-1], Stack[-2])
0x34d: Pop(1)
0x34e: Stack[-3] = Stack[-1]
0x34f: Return(); Pop(2)

0x350: PushEmpty(float, float)
0x351: @ GetGameTime(Stack[-1])
0x352: Pop(0)
0x353: Push((int) 1)
0x354: PushEmpty(int)
0x355: Push((int) 24)
0x356: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x357: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x358: Return(); Pop(2)

0x359: PushEmpty()
0x35a: Push("Region")
0x35b: Pop(1); Push(Stack[-1] + Stack[-2]);
0x35c: Push("State")
0x35d: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x35e: Return(); Pop(0)

0x35f: PushEmpty(int, int)
0x360: PushEmpty(string, int)
0x361: Stack[-1] = Stack[-5]
0x362: Call2 0x359

0x363: Pop(1)
0x364: @ GetVariable(Stack[-1], Stack[-2])
0x365: Pop(1)
0x366: Push((int) 3)
0x367: Pop(1); Push(Stack[-2] & Stack[-1]);
0x368: Push((int) 0)
0x369: Stack[-6] = Stack[-2] == Stack[-1]; Pop(2);
0x36a: Return(); Pop(2)

0x36b: PushEmpty(int, int)
0x36c: PushEmpty(string, int)
0x36d: Stack[-1] = Stack[-5]
0x36e: Call2 0x359

0x36f: Pop(1)
0x370: @ GetVariable(Stack[-1], Stack[-2])
0x371: Pop(1)
0x372: Push((int) 3)
0x373: Pop(1); Push(Stack[-2] & Stack[-1]);
0x374: Push((int) 1)
0x375: Stack[-6] = Stack[-2] == Stack[-1]; Pop(2);
0x376: Return(); Pop(2)

0x377: PushEmpty(int, int)
0x378: PushEmpty(string, int)
0x379: Stack[-1] = Stack[-5]
0x37a: Call2 0x359

0x37b: Pop(1)
0x37c: @ GetVariable(Stack[-1], Stack[-2])
0x37d: Pop(1)
0x37e: Push((int) 3)
0x37f: Pop(1); Push(Stack[-2] & Stack[-1]);
0x380: Push((int) 2)
0x381: Stack[-6] = Stack[-2] == Stack[-1]; Pop(2);
0x382: Return(); Pop(2)

0x383: PushEmpty(cvector, cvector, object, object, bool, cvector, cvector, object, object, bool)
0x384: @ GetMainOutdoorScene(Stack[-3])
0x385: Pop(0)
0x386: Pop(0); Push((bool) Stack[-3] == 0)
0x387: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x388: Push("Can't find main outdoor scene")
0x389: @ Trace(Stack[-1])
0x38a: Pop(1)
0x38b: Stack[-5] = CVector(0.0, 0.0, 0.0)
0x38c: Stack[-12] = Stack[-5]
0x38d: Return(); Pop(10)

0x38e: @@ GetLocator(Stack[-11], Stack[-1], Stack[-5], Stack[-4])
0x38f: Pop(0)
0x390: Stack[-12] = Stack[-5]
0x391: Return(); Pop(10)

0x392: Stack[-2] = 0
0x393: Stack[-3] = 0
0x394: PushEmpty(int, int, int, int)
0x395: PushEmpty(int)
0x396: Call2 0x350

0x397: Stack[-3] = Stack[-1]
0x398: Pop(1)
0x399: Push("RMap")
0x39a: Pop(1); Push(Stack[-1] + Stack[-3]);
0x39b: @ GetVariable(Stack[-1], Stack[-2])
0x39c: Pop(1)
0x39d: Push((int) 0)
0x39e: Stack[-6] = Stack[-2] != Stack[-1]; Pop(1);
0x39f: Return(); Pop(4)

