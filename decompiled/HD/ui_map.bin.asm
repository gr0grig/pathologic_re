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
	GTASK_0 Vars = (int, int, int, int, int, int, int, int, int, int, int, int, float, float, float, bool, bool, bool, bool, bool, object, object, object, object, object, cvector, string, bool, bool, bool, bool, bool, bool) Params = 0
		EVENT_1 Op = 0x13e Vars = (float)
		EVENT_0 Op = 0x2b1 Vars = ()
		EVENT_11 Op = 0x2e6 Vars = (int, int)
		EVENT_12 Op = 0x2fb Vars = (int, int, bool)
		EVENT_8 Op = 0x301 Vars = (int, int)
		EVENT_10 Op = 0x30e Vars = ()
		EVENT_15 Op = 0x310 Vars = (int, int, float)
		EVENT_200 Op = 0x358 Vars = (int, string, object)
		EVENT_102 Op = 0x37c Vars = (int)
		EVENT_101 Op = 0x3b2 Vars = (int)
		EVENT_100 Op = 0x3e8 Vars = (int)


0x0: PushEmpty(bool)
0x1: Stack[-1] = (bool) 0
0x2: Push((int) 2)
0x3: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x4: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0x5: PushEmpty(int)
0x6: Call2 0x3f8

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

0x11: PushEmpty(float, float, int, object, string, int, int, int, int, float, float, int, object, string, int, int, int, int)
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
0x27: Stack[27 + Tasks[-1].StackPointer] = (bool)0
0x28: Stack[28 + Tasks[-1].StackPointer] = (bool)0
0x29: Stack[29 + Tasks[-1].StackPointer] = (bool)0
0x2a: Stack[30 + Tasks[-1].StackPointer] = (bool)0
0x2b: Stack[31 + Tasks[-1].StackPointer] = (bool)0
0x2c: Stack[32 + Tasks[-1].StackPointer] = (bool)0
0x2d: Stack[16 + Tasks[-1].StackPointer] = (bool)1
0x2e: @ GetWindowSize(Stack[-3], Stack[-4])
0x2f: Pop(0)
0x30: Push(GlobalVars[0])
0x31: Push((float)2048.0)
0x32: Stack[-2] = Stack[3 + Tasks[-1].StackPointer] / Stack[-1]; Pop(1);
0x33: GlobalVars[0] = Stack[-1]; Pop(1)
0x34: Push(GlobalVars[1])
0x35: Push(GlobalVars[0])
0x36: Stack[-2] = Stack[-1]
0x37: Pop(1)
0x38: GlobalVars[1] = Stack[-1]; Pop(1)
0x39: Stack[19 + Tasks[-1].StackPointer] = (bool)0
0x3a: Push((int) 0)
0x3b: Pop(1); Push((bool) Stack[14 + Tasks[-1].StackPointer] < Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3d: Stack[18 + Tasks[-1].StackPointer] = (bool)1
0x3e: PushEmpty()
0x3f: Call2 0xb0

0x40: Pop(0)
0x41: Stack[14 + Tasks[-1].StackPointer] = (int)2
0x42: Push(GlobalVars[0])
0x43: Pop(1); Push((bool) Stack[14 + Tasks[-1].StackPointer] < Stack[-1])
0x44: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x45: Push(GlobalVars[0])
0x46: Stack[14 + Tasks[-1].StackPointer] = Stack[-1]
0x47: Pop(1)
0x48: Push("map_chertez_force")
0x49: @ GetVariable(Stack[-1], Stack[-8])
0x4a: Pop(1)
0x4b: Push(Stack[-7])
0x4c: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x4d: Stack[18 + Tasks[-1].StackPointer] = (bool)1
0x4e: PushEmpty()
0x4f: Call2 0xb0

0x50: Pop(0)
0x51: Push("map_chertez_force")
0x52: Push((int) 0)
0x53: @ SetVariable(Stack[-2], Stack[-1])
0x54: Pop(2)
0x55: Push( Stack[18 + Tasks[-1].StackPointer] )
0x56: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x57: Push((int) 1)
0x58: GOTO 0x5a

0x59: Push((int) 0)
0x5a: Push("tavro")
0x5b: @ SendMessage(Stack[-2], Stack[-1])
0x5c: Pop(2)
0x5d: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x5e: Stack[5 + Tasks[-1].StackPointer] = (int)-1
0x5f: Stack[6 + Tasks[-1].StackPointer] = (int)-1
0x60: Stack[15 + Tasks[-1].StackPointer] = (bool)0
0x61: Stack[23 + Tasks[-1].StackPointer] = 0
0x62: Stack[11 + Tasks[-1].StackPointer] = (int)-1
0x63: @ CreateObjectVector(Stack[-20])
0x64: Pop(0)
0x65: @ GetMainOutdoorScene(Stack[-6])
0x66: Pop(0)
0x67: @ GetActiveScene(Stack[-21])
0x68: Pop(0)
0x69: Pop(0); Push((bool) Stack[-6] != Stack[21 + Tasks[-1].StackPointer])
0x6a: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x6b: Stack[17 + Tasks[-1].StackPointer] = (bool)1
0x6c: @@ GetName(Stack[-5])
0x6d: Pop(0)
0x6e: PushEmpty(cvector, string)
0x6f: Push("pt_gmap_")
0x70: Stack[-2] = Stack[-1] + Stack[-8]; Pop(1);
0x71: Call2 0x42b

0x72: Stack[25 + Tasks[-1].StackPointer] = Stack[-2]
0x73: Pop(2)
0x74: Push(CvectorIndex(Stack[-25], 0))
0x75: Stack[-5] = Stack[-1]
0x76: Pop(1)
0x77: Push(CvectorIndex(Stack[-25], 2))
0x78: Stack[-4] = Stack[-1]
0x79: Pop(1)
0x7a: @@ ConvertToMapCoordinates(Stack[-4], Stack[-3])
0x7b: Pop(0)
0x7c: Push(CvectorIndex(Stack[-25], 0))
0x7d: Stack[-1] = Stack[-5]
0x7e: CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 0) = Stack[-1];
0x7f: Push(CvectorIndex(Stack[-25], 2))
0x80: Stack[-1] = Stack[-4]
0x81: CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 2) = Stack[-1];
0x82: Push("indoor map: pt_gmap_")
0x83: Pop(1); Push(Stack[-1] + Stack[-6]);
0x84: @ Trace(Stack[-1])
0x85: Pop(1)
0x86: GOTO 0x93

0x87: Push("outdoor map")
0x88: @ Trace(Stack[-1])
0x89: Pop(1)
0x8a: Stack[17 + Tasks[-1].StackPointer] = (bool)0
0x8b: @ GetPlayerMapPos(Stack[-2], Stack[-1])
0x8c: Pop(0)
0x8d: Push(CvectorIndex(Stack[-25], 0))
0x8e: Stack[-1] = Stack[-3]
0x8f: CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 0) = Stack[-1];
0x90: Push(CvectorIndex(Stack[-25], 2))
0x91: Stack[-1] = Stack[-2]
0x92: CvectorIndex(Stack[25 + Tasks[-1].StackPointer], 2) = Stack[-1];
0x93: PushEmpty()
0x94: Call2 0xf6

0x95: Pop(0)
0x96: @ ShowCursor()
0x97: Pop(0)
0x98: Push("default")
0x99: @ SetCursor(Stack[-1])
0x9a: Pop(1)
0x9b: Push((bool) 1)
0x9c: @ SetOwnerDraw(Stack[-1])
0x9d: Pop(1)
0x9e: Push((bool) 1)
0x9f: @ SetNeedUpdate(Stack[-1])
0xa0: Pop(1)
0xa1: Push("default")
0xa2: @ SetBackground(Stack[-1])
0xa3: Pop(1)
0xa4: Push((bool) 1)
0xa5: @ EnableClipping(Stack[-1])
0xa6: Pop(1)
0xa7: @ CaptureKeyboard()
0xa8: Pop(0)
0xa9: Push("map_open")
0xaa: @ PlaySound(Stack[-1])
0xab: Pop(1)
0xac: @ ProcessEvents()
0xad: Pop(0)
0xae: Return(); Pop(18)

0xaf: Stack[-6] = 0
0xb0: PushEmpty(int, int)
0xb1: Push( Stack[19 + Tasks[-1].StackPointer] )
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: Return(); Pop(2)

0xb4: Push("map_chertez_state")
0xb5: @ GetVariable(Stack[-1], Stack[-2])
0xb6: Pop(1)
0xb7: PushEmpty(int)
0xb8: Call2 0x3f2

0xb9: Pop(0)
0xba: Push((int) 0)
0xbb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xbd: Stack[26 + Tasks[-1].StackPointer] = "ui\ui_chertez_danko_bg.tex"
0xbe: PushEmpty(bool)
0xbf: Stack[-1] = (bool) 0
0xc0: Push((int) 1)
0xc1: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc3: Push((int) 6)
0xc4: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: Stack[-1] = (bool) 1
0xc7: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc8: Push("ui\ui_chertez_danko_")
0xc9: Pop(1); Push(Stack[-1] + Stack[-2]);
0xca: Push(".tex")
0xcb: Stack[26 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0xcc: GOTO 0xf2

0xcd: PushEmpty(int)
0xce: Call2 0x3f2

0xcf: Pop(0)
0xd0: Push((int) 1)
0xd1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xd3: Stack[26 + Tasks[-1].StackPointer] = "ui\ui_chertez_burah_bg.tex"
0xd4: PushEmpty(bool)
0xd5: Stack[-1] = (bool) 0
0xd6: Push((int) 1)
0xd7: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd9: Push((int) 6)
0xda: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xdc: Stack[-1] = (bool) 1
0xdd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xde: Push("ui\ui_chertez_burah_")
0xdf: Pop(1); Push(Stack[-1] + Stack[-2]);
0xe0: Push(".tex")
0xe1: Stack[26 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0xe2: GOTO 0xf2

0xe3: Stack[26 + Tasks[-1].StackPointer] = "ui\ui_chertez_klara_bg.tex"
0xe4: PushEmpty(bool)
0xe5: Stack[-1] = (bool) 0
0xe6: Push((int) 1)
0xe7: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe9: Push((int) 6)
0xea: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xec: Stack[-1] = (bool) 1
0xed: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xee: Push("ui\ui_chertez_klara_")
0xef: Pop(1); Push(Stack[-1] + Stack[-2]);
0xf0: Push(".tex")
0xf1: Stack[26 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0xf2: @ LoadImage(Stack[-26])
0xf3: Pop(0)
0xf4: Stack[19 + Tasks[-1].StackPointer] = (bool)1
0xf5: Return(); Pop(2)

0xf6: PushEmpty(int, int)
0xf7: Stack[-1] = (int) 0
0xf8: Push((int) 16)
0xf9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0xfb: PushEmpty(bool, int)
0xfc: Stack[-1] = Stack[-3]
0xfd: Call2 0x407

0xfe: Pop(1)
0xff: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x100: Push((float)0.5)
0x101: Push((float)0.5)
0x102: Push((float)0.5)
0x103: Push((float)0.0)
0x104: @ SetRegionColor(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(4)
0x106: GOTO 0x11e

0x107: PushEmpty(bool, int)
0x108: Stack[-1] = Stack[-3]
0x109: Call2 0x413

0x10a: Pop(1)
0x10b: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10c: Push((float)0.5)
0x10d: Push((float)0.0)
0x10e: Push((float)0.0)
0x10f: Push((float)0.5)
0x110: @ SetRegionColor(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(4)
0x112: GOTO 0x11e

0x113: PushEmpty(bool, int)
0x114: Stack[-1] = Stack[-3]
0x115: Call2 0x41f

0x116: Pop(1)
0x117: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x118: Push((float)0.0)
0x119: Push((float)0.0)
0x11a: Push((float)0.0)
0x11b: Push((float)0.5)
0x11c: @ SetRegionColor(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(4)
0x11e: Push((int) 1)
0x11f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x120: GOTO 0xf8

0x121: Return(); Pop(2)

0x122: PushEmpty()
0x123: Push((int) 2)
0x124: Pop(1); Push(Stack[3 + StackPtr] / Stack[-1]);
0x125: Pop(1); Push(Stack[-2] - Stack[-1]);
0x126: Pop(1); Push(Stack[-1] / Stack[14 + StackPtr]);
0x127: Stack[-3] = Stack[12 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x128: Return(); Pop(0)

0x129: PushEmpty()
0x12a: Push((int) 2)
0x12b: Pop(1); Push(Stack[4 + StackPtr] / Stack[-1]);
0x12c: Pop(1); Push(Stack[-2] - Stack[-1]);
0x12d: Pop(1); Push(Stack[-1] / Stack[14 + StackPtr]);
0x12e: Stack[-3] = Stack[13 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x12f: Return(); Pop(0)

0x130: PushEmpty()
0x131: Pop(0); Push(Stack[-1] - Stack[12 + StackPtr]);
0x132: Pop(1); Push(Stack[-1] * Stack[14 + StackPtr]);
0x133: Push((int) 2)
0x134: Pop(1); Push(Stack[3 + StackPtr] / Stack[-1]);
0x135: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x136: Return(); Pop(0)

0x137: PushEmpty()
0x138: Pop(0); Push(Stack[-1] - Stack[13 + StackPtr]);
0x139: Pop(1); Push(Stack[-1] * Stack[14 + StackPtr]);
0x13a: Push((int) 2)
0x13b: Pop(1); Push(Stack[4 + StackPtr] / Stack[-1]);
0x13c: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x13d: Return(); Pop(0)

0x13e: PushEmpty(int, int, int, int, int, int, float, float, int, int, int, object, string, cvector, int, int, int, int, string, int, int, int, int, int, int, float, float, int, int, int, object, string, cvector, int, int, int, int, string)
0x13f: Push( Stack[30 + Tasks[-1].StackPointer] )
0x140: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x141: Push((int) 500)
0x142: Pop(1); Push(Stack[-1] * Stack[-40]);
0x143: Stack[12 + Tasks[-1].StackPointer] = Stack[12 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x144: Push( Stack[29 + Tasks[-1].StackPointer] )
0x145: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x146: Push((int) 500)
0x147: Pop(1); Push(Stack[-1] * Stack[-40]);
0x148: Stack[12 + Tasks[-1].StackPointer] = Stack[12 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x149: Push( Stack[27 + Tasks[-1].StackPointer] )
0x14a: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14b: Push((int) 500)
0x14c: Pop(1); Push(Stack[-1] * Stack[-40]);
0x14d: Stack[13 + Tasks[-1].StackPointer] = Stack[13 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x14e: Push( Stack[28 + Tasks[-1].StackPointer] )
0x14f: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x150: Push((int) 500)
0x151: Pop(1); Push(Stack[-1] * Stack[-40]);
0x152: Stack[13 + Tasks[-1].StackPointer] = Stack[13 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x153: Push( Stack[31 + Tasks[-1].StackPointer] )
0x154: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x155: Pop(0); Push((bool) Stack[18 + Tasks[-1].StackPointer] == 0)
0x156: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x157: Push((float)1.1)
0x158: Pop(1); Push(Stack[-1] * Stack[-40]);
0x159: Stack[14 + Tasks[-1].StackPointer] = Stack[14 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x15a: Push((float)2.0)
0x15b: Pop(1); Push((bool) Stack[14 + Tasks[-1].StackPointer] > Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15d: Stack[14 + Tasks[-1].StackPointer] = (float)2.0
0x15e: Push((int) -1)
0x15f: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x160: Push((int) 0)
0x161: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] < Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x163: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x164: Push( Stack[32 + Tasks[-1].StackPointer] )
0x165: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x166: Pop(0); Push((bool) Stack[18 + Tasks[-1].StackPointer] == 0)
0x167: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x168: Push((float)1.1)
0x169: Pop(1); Push(Stack[-1] * Stack[-40]);
0x16a: Stack[14 + Tasks[-1].StackPointer] = Stack[14 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x16b: Push(GlobalVars[0])
0x16c: Pop(1); Push((bool) Stack[14 + Tasks[-1].StackPointer] < Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x16e: Push(GlobalVars[0])
0x16f: Stack[14 + Tasks[-1].StackPointer] = Stack[-1]
0x170: Pop(1)
0x171: Push((int) 1)
0x172: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x173: Push((int) 2)
0x174: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x176: Stack[0 + Tasks[-1].StackPointer] = (int)2
0x177: Pop(0); Push(Stack[3 + StackPtr] / Stack[14 + StackPtr]);
0x178: Push((int) 2)
0x179: Pop(2); Push(Stack[-2] / Stack[-1]);
0x17a: Stack[-20] = Stack[12 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x17b: Pop(0); Push(Stack[3 + StackPtr] / Stack[14 + StackPtr]);
0x17c: Push((int) 2)
0x17d: Pop(2); Push(Stack[-2] / Stack[-1]);
0x17e: Stack[-19] = Stack[12 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x17f: Pop(0); Push(Stack[4 + StackPtr] / Stack[14 + StackPtr]);
0x180: Push((int) 2)
0x181: Pop(2); Push(Stack[-2] / Stack[-1]);
0x182: Stack[-18] = Stack[13 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x183: Pop(0); Push(Stack[4 + StackPtr] / Stack[14 + StackPtr]);
0x184: Push((int) 2)
0x185: Pop(2); Push(Stack[-2] / Stack[-1]);
0x186: Stack[-17] = Stack[13 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x187: Stack[-15] = (int) 0
0x188: Stack[-14] = (int) 0
0x189: Push((int) 0)
0x18a: Pop(1); Push((bool) Stack[-20] < Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18c: Stack[-15] = -Stack[-19]; Pop(0);
0x18d: GOTO 0x193

0x18e: Push((int) 2048)
0x18f: Pop(1); Push((bool) Stack[-19] > Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x191: Push((int) 2048)
0x192: Stack[-16] = Stack[-1] - Stack[-19]; Pop(1);
0x193: Push((int) 0)
0x194: Pop(1); Push((bool) Stack[-18] < Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x196: Stack[-14] = -Stack[-17]; Pop(0);
0x197: GOTO 0x19d

0x198: Push((int) 2048)
0x199: Pop(1); Push((bool) Stack[-17] > Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19b: Push((int) 2048)
0x19c: Stack[-15] = Stack[-1] - Stack[-17]; Pop(1);
0x19d: Stack[12 + Tasks[-1].StackPointer] = Stack[12 + Tasks[-1].StackPointer] + Stack[-15]; Pop(0);
0x19e: Stack[13 + Tasks[-1].StackPointer] = Stack[13 + Tasks[-1].StackPointer] + Stack[-14]; Pop(0);
0x19f: PushEmpty(bool)
0x1a0: Stack[-1] = (bool) 0
0x1a1: PushEmpty(bool)
0x1a2: Call2 0x0

0x1a3: Pop(0)
0x1a4: Pop(1); Push((bool) Stack[-1] == 0)
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a6: Pop(0); Push((bool) Stack[18 + Tasks[-1].StackPointer] == 0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: Stack[-1] = (bool) 1
0x1a9: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x1aa: @@ clear()
0x1ab: Pop(0)
0x1ac: Stack[-10] = (int) 0
0x1ad: @@ GetMarkCount(Stack[-11])
0x1ae: Pop(0)
0x1af: Stack[-9] = (int) 0
0x1b0: Pop(0); Push((bool) Stack[-9] < Stack[-11])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1b2: @@ GetMark(Stack[-9], Stack[-8])
0x1b3: Pop(0)
0x1b4: @@ GetLocator(Stack[-7])
0x1b5: Pop(0)
0x1b6: PushEmpty(cvector, string)
0x1b7: Stack[-1] = Stack[-9]
0x1b8: Call2 0x42b

0x1b9: Stack[-8] = Stack[-2]
0x1ba: Pop(2)
0x1bb: Push(CvectorIndex(Stack[-6], 0))
0x1bc: Stack[-14] = Stack[-1]
0x1bd: Pop(1)
0x1be: Push(CvectorIndex(Stack[-6], 2))
0x1bf: Stack[-13] = Stack[-1]
0x1c0: Pop(1)
0x1c1: @@ ConvertToMapCoordinates(Stack[-13], Stack[-12])
0x1c2: Pop(0)
0x1c3: PushEmpty(int, int)
0x1c4: Stack[-1] = Stack[-15]
0x1c5: Call2 0x130

0x1c6: Stack[-15] = Stack[-2]
0x1c7: Pop(2)
0x1c8: PushEmpty(int, int)
0x1c9: Stack[-1] = Stack[-14]
0x1ca: Call2 0x137

0x1cb: Stack[-14] = Stack[-2]
0x1cc: Pop(2)
0x1cd: Pop(0); Push(Stack[-13] - Stack[5 + StackPtr]);
0x1ce: Pop(0); Push(Stack[-14] - Stack[5 + StackPtr]);
0x1cf: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1d0: Pop(0); Push(Stack[-13] - Stack[6 + StackPtr]);
0x1d1: Pop(0); Push(Stack[-14] - Stack[6 + StackPtr]);
0x1d2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1d3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1d4: Push((int) 900)
0x1d5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d7: @@ add(Stack[-8])
0x1d8: Pop(0)
0x1d9: Push((int) 1)
0x1da: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x1db: Stack[-8] = 0
0x1dc: Push((int) 1)
0x1dd: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x1de: GOTO 0x1b0

0x1df: Pop(0); Push((bool) Stack[-10] == 0)
0x1e0: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1e1: PushEmpty(int, int)
0x1e2: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0x1e3: Call2 0x122

0x1e4: Stack[-5] = Stack[-2]
0x1e5: Pop(2)
0x1e6: PushEmpty(int, int)
0x1e7: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0x1e8: Call2 0x129

0x1e9: Stack[-4] = Stack[-2]
0x1ea: Pop(2)
0x1eb: @@ GetObjectFromPoint(Stack[-5], Stack[-3], Stack[-2])
0x1ec: Pop(0)
0x1ed: Push((int) 0)
0x1ee: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f0: @@ GetObjectID(Stack[-4], Stack[-5])
0x1f1: Pop(0)
0x1f2: Push((int) 100000)
0x1f3: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1f4: @ GetStringByID(Stack[-2], Stack[-1])
0x1f5: Pop(1)
0x1f6: Push((int) 5)
0x1f7: @ SetTooltip(Stack[-1], Stack[-2])
0x1f8: Pop(1)
0x1f9: Pop(0); Push((bool) Stack[11 + Tasks[-1].StackPointer] != Stack[-5])
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fb: @@ CreateObjectHighlight(Stack[-23], Stack[-5])
0x1fc: Pop(0)
0x1fd: Stack[11 + Tasks[-1].StackPointer] = Stack[-5]
0x1fe: GOTO 0x205

0x1ff: Push((int) -1)
0x200: Push("")
0x201: @ SetTooltip(Stack[-2], Stack[-1])
0x202: Pop(2)
0x203: Stack[23 + Tasks[-1].StackPointer] = 0
0x204: Stack[11 + Tasks[-1].StackPointer] = (int)-1
0x205: GOTO 0x20c

0x206: Push((int) 2)
0x207: Push("")
0x208: @ SetTooltip(Stack[-2], Stack[-1], Stack[-20])
0x209: Pop(2)
0x20a: Stack[23 + Tasks[-1].StackPointer] = 0
0x20b: Stack[11 + Tasks[-1].StackPointer] = (int)-1
0x20c: GOTO 0x213

0x20d: Push((int) -1)
0x20e: Push("")
0x20f: @ SetTooltip(Stack[-2], Stack[-1])
0x210: Pop(2)
0x211: Stack[11 + Tasks[-1].StackPointer] = (int)-1
0x212: Stack[23 + Tasks[-1].StackPointer] = 0
0x213: Return(); Pop(38)

0x214: PushEmpty(float, float, int, int, object, string, int, cvector, float, float, int, int, object, string, int, cvector)
0x215: @@ GetMarkCount(Stack[-6])
0x216: Pop(0)
0x217: Stack[-5] = (int) 0
0x218: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x219: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x21a: @@ GetMark(Stack[-5], Stack[-4])
0x21b: Pop(0)
0x21c: @@ GetLocator(Stack[-3])
0x21d: Pop(0)
0x21e: @@ GetType(Stack[-2])
0x21f: Pop(0)
0x220: PushEmpty(cvector, string)
0x221: Stack[-1] = Stack[-5]
0x222: Call2 0x42b

0x223: Stack[-3] = Stack[-2]
0x224: Pop(2)
0x225: Push(CvectorIndex(Stack[-1], 0))
0x226: Stack[-9] = Stack[-1]
0x227: Pop(1)
0x228: Push(CvectorIndex(Stack[-1], 2))
0x229: Stack[-8] = Stack[-1]
0x22a: Pop(1)
0x22b: @@ ConvertToMapCoordinates(Stack[-8], Stack[-7])
0x22c: Pop(0)
0x22d: PushEmpty(int, int)
0x22e: Stack[-1] = Stack[-10]
0x22f: Call2 0x130

0x230: Stack[-10] = Stack[-2]
0x231: Pop(2)
0x232: PushEmpty(int, int)
0x233: Stack[-1] = Stack[-9]
0x234: Call2 0x137

0x235: Stack[-9] = Stack[-2]
0x236: Pop(2)
0x237: Pop(0); Push((bool) Stack[-2] == Stack[-17])
0x238: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x239: Push((int) 0)
0x23a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23c: Push("quest_mark")
0x23d: Push((int) 16)
0x23e: Pop(1); Push(Stack[-10] - Stack[-1]);
0x23f: Push((int) 16)
0x240: Pop(1); Push(Stack[-10] - Stack[-1]);
0x241: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x242: Pop(3)
0x243: Push((int) 1)
0x244: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x246: Push("mainquest_mark")
0x247: Push((int) 16)
0x248: Pop(1); Push(Stack[-10] - Stack[-1]);
0x249: Push((int) 16)
0x24a: Pop(1); Push(Stack[-10] - Stack[-1]);
0x24b: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x24c: Pop(3)
0x24d: Push((int) 3)
0x24e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x250: Push("info_mark")
0x251: Push((int) 16)
0x252: Pop(1); Push(Stack[-10] - Stack[-1]);
0x253: Push((int) 16)
0x254: Pop(1); Push(Stack[-10] - Stack[-1]);
0x255: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x256: Pop(3)
0x257: Stack[-4] = 0
0x258: Push((int) 1)
0x259: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x25a: GOTO 0x218

0x25b: Return(); Pop(16)

0x25c: PushEmpty(float, int, int, int, int, int, int, float, int, int, int, int, int, int)
0x25d: PushEmpty(bool)
0x25e: Call2 0x0

0x25f: Pop(0)
0x260: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x261: Return(); Pop(14)

0x262: Stack[-7] = Stack[14 + Tasks[-1].StackPointer]
0x263: Push(GlobalVars[0])
0x264: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x266: Push(GlobalVars[0])
0x267: Stack[-8] = Stack[-1]
0x268: Pop(1)
0x269: Pop(0); Push(Stack[3 + StackPtr] / Stack[-7]);
0x26a: Push((int) 2)
0x26b: Pop(2); Push(Stack[-2] / Stack[-1]);
0x26c: Stack[-7] = Stack[12 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x26d: Pop(0); Push(Stack[3 + StackPtr] / Stack[-7]);
0x26e: Push((int) 2)
0x26f: Pop(2); Push(Stack[-2] / Stack[-1]);
0x270: Stack[-6] = Stack[12 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x271: Pop(0); Push(Stack[4 + StackPtr] / Stack[-7]);
0x272: Push((int) 2)
0x273: Pop(2); Push(Stack[-2] / Stack[-1]);
0x274: Stack[-5] = Stack[13 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x275: Pop(0); Push(Stack[4 + StackPtr] / Stack[-7]);
0x276: Push((int) 2)
0x277: Pop(2); Push(Stack[-2] / Stack[-1]);
0x278: Stack[-4] = Stack[13 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x279: Stack[-2] = (int) 0
0x27a: Stack[-1] = (int) 0
0x27b: @ ClientToScreen(Stack[-2], Stack[-1])
0x27c: Pop(0)
0x27d: Pop(0); Push(Stack[3 + StackPtr] + Stack[-2]);
0x27e: Pop(0); Push(Stack[4 + StackPtr] + Stack[-2]);
0x27f: @ RenderMap(Stack[-4], Stack[-3], Stack[-2], Stack[-1], Stack[-8], Stack[-6], Stack[-7], Stack[-5])
0x280: Pop(2)
0x281: PushEmpty(bool)
0x282: Call2 0x43c

0x283: Pop(0)
0x284: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x285: Pop(0); Push(Stack[3 + StackPtr] + Stack[-2]);
0x286: Pop(0); Push(Stack[4 + StackPtr] + Stack[-2]);
0x287: @ RenderRegions(Stack[-4], Stack[-3], Stack[-2], Stack[-1], Stack[-8], Stack[-6], Stack[-7], Stack[-5])
0x288: Pop(2)
0x289: Push( Stack[23 + Tasks[-1].StackPointer] )
0x28a: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28b: Pop(0); Push(Stack[3 + StackPtr] + Stack[-2]);
0x28c: Pop(0); Push(Stack[4 + StackPtr] + Stack[-2]);
0x28d: @@ Render(Stack[-4], Stack[-3], Stack[-2], Stack[-1], Stack[-8], Stack[-6], Stack[-7], Stack[-5])
0x28e: Pop(2)
0x28f: PushEmpty(object, int)
0x290: Stack[-2] = Stack[22 + Tasks[-1].StackPointer]
0x291: Stack[-1] = (int) 3
0x292: Call2 0x214

0x293: Pop(2)
0x294: PushEmpty(object, int)
0x295: Stack[-2] = Stack[22 + Tasks[-1].StackPointer]
0x296: Stack[-1] = (int) 0
0x297: Call2 0x214

0x298: Pop(2)
0x299: PushEmpty(object, int)
0x29a: Stack[-2] = Stack[22 + Tasks[-1].StackPointer]
0x29b: Stack[-1] = (int) 1
0x29c: Call2 0x214

0x29d: Pop(2)
0x29e: PushEmpty()
0x29f: Call2 0x2bb

0x2a0: Pop(0)
0x2a1: Return(); Pop(14)

0x2a2: PushEmpty(int, int, int, int, float, int, int, int, int, float)
0x2a3: Stack[-5] = (int) 0
0x2a4: Stack[-4] = (int) 0
0x2a5: @ ScreenToClient(Stack[-5], Stack[-4])
0x2a6: Pop(0)
0x2a7: @ GetScreenSize(Stack[-3], Stack[-2])
0x2a8: Pop(0)
0x2a9: Push((float)768.0)
0x2aa: Stack[-2] = Stack[-3] / Stack[-1]; Pop(1);
0x2ab: Push((int) 1024)
0x2ac: Pop(1); Push(Stack[-2] * Stack[-1]);
0x2ad: Push((int) 1)
0x2ae: @ StretchBlit(Stack[-26], Stack[-7], Stack[-6], Stack[-5], Stack[-2], Stack[-1])
0x2af: Pop(2)
0x2b0: Return(); Pop(10)

0x2b1: Push( Stack[18 + Tasks[-1].StackPointer] )
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b3: PushEmpty()
0x2b4: Call2 0x2a2

0x2b5: Pop(0)
0x2b6: GOTO 0x2ba

0x2b7: PushEmpty()
0x2b8: Call2 0x25c

0x2b9: Pop(0)
0x2ba: Return(); Pop(0)

0x2bb: PushEmpty(int, int, float, int, int, float)
0x2bc: Pop(0); Push((bool) Stack[17 + Tasks[-1].StackPointer] == 0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2be: @ GetPlayerMapAngle(Stack[-1])
0x2bf: Pop(0)
0x2c0: PushEmpty(int, int)
0x2c1: Push(CvectorIndex(Stack[-25], 0))
0x2c2: Stack[-2] = Stack[-1]
0x2c3: Pop(1)
0x2c4: Call2 0x130

0x2c5: Stack[-5] = Stack[-2]
0x2c6: Pop(2)
0x2c7: PushEmpty(int, int)
0x2c8: Push(CvectorIndex(Stack[-25], 2))
0x2c9: Stack[-2] = Stack[-1]
0x2ca: Pop(1)
0x2cb: Call2 0x137

0x2cc: Stack[-4] = Stack[-2]
0x2cd: Pop(2)
0x2ce: @ ClientToScreen(Stack[-3], Stack[-2])
0x2cf: Pop(0)
0x2d0: @@ Blit(Stack[-3], Stack[-2], Stack[-1])
0x2d1: Pop(0)
0x2d2: GOTO 0x2e5

0x2d3: PushEmpty(int, int)
0x2d4: Push(CvectorIndex(Stack[-25], 0))
0x2d5: Stack[-2] = Stack[-1]
0x2d6: Pop(1)
0x2d7: Call2 0x130

0x2d8: Stack[-5] = Stack[-2]
0x2d9: Pop(2)
0x2da: PushEmpty(int, int)
0x2db: Push(CvectorIndex(Stack[-25], 2))
0x2dc: Stack[-2] = Stack[-1]
0x2dd: Pop(1)
0x2de: Call2 0x137

0x2df: Stack[-4] = Stack[-2]
0x2e0: Pop(2)
0x2e1: @ ClientToScreen(Stack[-3], Stack[-2])
0x2e2: Pop(0)
0x2e3: @@ Blit(Stack[-3], Stack[-2])
0x2e4: Pop(0)
0x2e5: Return(); Pop(6)

0x2e6: PushEmpty()
0x2e7: PushEmpty(bool)
0x2e8: Stack[-1] = (bool) 1
0x2e9: PushEmpty(bool)
0x2ea: Call2 0x0

0x2eb: Pop(0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ed: Push( Stack[18 + Tasks[-1].StackPointer] )
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ef: Stack[-1] = (bool) 0
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f1: Return(); Pop(0)

0x2f2: Stack[15 + Tasks[-1].StackPointer] = (bool)1
0x2f3: Stack[7 + Tasks[-1].StackPointer] = Stack[-2]
0x2f4: Stack[8 + Tasks[-1].StackPointer] = Stack[-1]
0x2f5: Stack[9 + Tasks[-1].StackPointer] = Stack[12 + Tasks[-1].StackPointer]
0x2f6: Stack[10 + Tasks[-1].StackPointer] = Stack[13 + Tasks[-1].StackPointer]
0x2f7: Push("drag")
0x2f8: @ SetCursor(Stack[-1])
0x2f9: Pop(1)
0x2fa: Return(); Pop(0)

0x2fb: PushEmpty()
0x2fc: Stack[15 + Tasks[-1].StackPointer] = (bool)0
0x2fd: Push("default")
0x2fe: @ SetCursor(Stack[-1])
0x2ff: Pop(1)
0x300: Return(); Pop(0)

0x301: PushEmpty()
0x302: Stack[5 + Tasks[-1].StackPointer] = Stack[-2]
0x303: Stack[6 + Tasks[-1].StackPointer] = Stack[-1]
0x304: Stack[16 + Tasks[-1].StackPointer] = (bool)0
0x305: Push( Stack[15 + Tasks[-1].StackPointer] )
0x306: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x307: Pop(0); Push(Stack[7 + StackPtr] - Stack[-2]);
0x308: Pop(1); Push(Stack[-1] / Stack[14 + StackPtr]);
0x309: Stack[12 + Tasks[-1].StackPointer] = Stack[9 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x30a: Pop(0); Push(Stack[8 + StackPtr] - Stack[-1]);
0x30b: Pop(1); Push(Stack[-1] / Stack[14 + StackPtr]);
0x30c: Stack[13 + Tasks[-1].StackPointer] = Stack[10 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x30d: Return(); Pop(0)

0x30e: Stack[16 + Tasks[-1].StackPointer] = (bool)1
0x30f: Return(); Pop(0)

0x310: PushEmpty(int, int, int, int)
0x311: Push( Stack[18 + Tasks[-1].StackPointer] )
0x312: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x313: Return(); Pop(4)

0x314: Push((float)0.2)
0x315: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x317: GOTO 0x335

0x318: Push((float)-0.2)
0x319: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31b: GOTO 0x335

0x31c: Push((int) 0)
0x31d: Pop(1); Push((bool) Stack[-6] > Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x31f: Stack[-2] = (int) 0
0x320: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x321: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x322: PushEmpty(float)
0x323: Stack[-1] = (float) 1.1
0x324: Call2 0x336

0x325: Pop(1)
0x326: Push((int) 1)
0x327: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x328: GOTO 0x320

0x329: GOTO 0x335

0x32a: Stack[-1] = (int) 0
0x32b: Pop(0); Push(( -Stack[-5])
0x32c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x32e: PushEmpty(float)
0x32f: Stack[-1] = (float) 1.1
0x330: Call2 0x346

0x331: Pop(1)
0x332: Push((int) 1)
0x333: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x334: GOTO 0x32b

0x335: Return(); Pop(4)

0x336: PushEmpty()
0x337: Push( Stack[18 + Tasks[-1].StackPointer] )
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: Return(); Pop(0)

0x33a: Stack[14 + Tasks[-1].StackPointer] = Stack[14 + Tasks[-1].StackPointer] * Stack[-1]; Pop(0);
0x33b: Push((float)2.0)
0x33c: Pop(1); Push((bool) Stack[14 + Tasks[-1].StackPointer] > Stack[-1])
0x33d: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33e: Stack[14 + Tasks[-1].StackPointer] = (float)2.0
0x33f: Push((int) -1)
0x340: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x341: Push((int) 0)
0x342: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] < Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x344: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x345: Return(); Pop(0)

0x346: PushEmpty()
0x347: Push( Stack[18 + Tasks[-1].StackPointer] )
0x348: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x349: Return(); Pop(0)

0x34a: Stack[14 + Tasks[-1].StackPointer] = Stack[14 + Tasks[-1].StackPointer] / Stack[-1]; Pop(0);
0x34b: Push(GlobalVars[0])
0x34c: Pop(1); Push((bool) Stack[14 + Tasks[-1].StackPointer] < Stack[-1])
0x34d: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x34e: Push(GlobalVars[0])
0x34f: Stack[14 + Tasks[-1].StackPointer] = Stack[-1]
0x350: Pop(1)
0x351: Push((int) 1)
0x352: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x353: Push((int) 2)
0x354: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x355: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x356: Stack[0 + Tasks[-1].StackPointer] = (int)2
0x357: Return(); Pop(0)

0x358: PushEmpty()
0x359: Push("button_plus")
0x35a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35c: PushEmpty(float)
0x35d: Stack[-1] = (float) 1.4
0x35e: Call2 0x336

0x35f: Pop(1)
0x360: GOTO 0x37b

0x361: Push("button_minus")
0x362: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x364: PushEmpty(float)
0x365: Stack[-1] = (float) 1.4
0x366: Call2 0x346

0x367: Pop(1)
0x368: GOTO 0x37b

0x369: Push("tavro")
0x36a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x36c: Push((int) 0)
0x36d: Stack[18 + Tasks[-1].StackPointer] = Stack[-4] == Stack[-1]; Pop(1);
0x36e: Push( Stack[18 + Tasks[-1].StackPointer] )
0x36f: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x370: Push((int) 1)
0x371: GOTO 0x373

0x372: Push((int) 0)
0x373: Push("tavro")
0x374: @ SendMessage(Stack[-2], Stack[-1])
0x375: Pop(2)
0x376: Push( Stack[18 + Tasks[-1].StackPointer] )
0x377: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x378: PushEmpty()
0x379: Call2 0xb0

0x37a: Pop(0)
0x37b: Return(); Pop(0)

0x37c: PushEmpty()
0x37d: PushEmpty(bool)
0x37e: Stack[-1] = (bool) 1
0x37f: Push((int) 270)
0x380: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x381: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x382: Push((int) 271)
0x383: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x385: Stack[-1] = (bool) 0
0x386: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x387: Stack[30 + Tasks[-1].StackPointer] = (bool)0
0x388: PushEmpty(bool)
0x389: Stack[-1] = (bool) 1
0x38a: Push((int) 269)
0x38b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38c: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38d: Push((int) 273)
0x38e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x390: Stack[-1] = (bool) 0
0x391: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x392: Stack[29 + Tasks[-1].StackPointer] = (bool)0
0x393: PushEmpty(bool)
0x394: Stack[-1] = (bool) 1
0x395: Push((int) 267)
0x396: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x397: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x398: Push((int) 272)
0x399: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39a: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39b: Stack[-1] = (bool) 0
0x39c: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39d: Stack[27 + Tasks[-1].StackPointer] = (bool)0
0x39e: PushEmpty(bool)
0x39f: Stack[-1] = (bool) 1
0x3a0: Push((int) 268)
0x3a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a3: Push((int) 274)
0x3a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a6: Stack[-1] = (bool) 0
0x3a7: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a8: Stack[28 + Tasks[-1].StackPointer] = (bool)0
0x3a9: Push((int) 275)
0x3aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ac: Stack[31 + Tasks[-1].StackPointer] = (bool)0
0x3ad: Push((int) 276)
0x3ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3af: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3b0: Stack[32 + Tasks[-1].StackPointer] = (bool)0
0x3b1: Return(); Pop(0)

0x3b2: PushEmpty()
0x3b3: PushEmpty(bool)
0x3b4: Stack[-1] = (bool) 1
0x3b5: Push((int) 270)
0x3b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b7: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3b8: Push((int) 271)
0x3b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3bb: Stack[-1] = (bool) 0
0x3bc: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bd: Stack[30 + Tasks[-1].StackPointer] = (bool)1
0x3be: PushEmpty(bool)
0x3bf: Stack[-1] = (bool) 1
0x3c0: Push((int) 269)
0x3c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c3: Push((int) 273)
0x3c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c6: Stack[-1] = (bool) 0
0x3c7: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c8: Stack[29 + Tasks[-1].StackPointer] = (bool)1
0x3c9: PushEmpty(bool)
0x3ca: Stack[-1] = (bool) 1
0x3cb: Push((int) 267)
0x3cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3ce: Push((int) 272)
0x3cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d1: Stack[-1] = (bool) 0
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d3: Stack[27 + Tasks[-1].StackPointer] = (bool)1
0x3d4: PushEmpty(bool)
0x3d5: Stack[-1] = (bool) 1
0x3d6: Push((int) 268)
0x3d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3d9: Push((int) 274)
0x3da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3dc: Stack[-1] = (bool) 0
0x3dd: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3de: Stack[28 + Tasks[-1].StackPointer] = (bool)1
0x3df: Push((int) 275)
0x3e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e2: Stack[31 + Tasks[-1].StackPointer] = (bool)1
0x3e3: Push((int) 276)
0x3e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e6: Stack[32 + Tasks[-1].StackPointer] = (bool)1
0x3e7: Return(); Pop(0)

0x3e8: PushEmpty(int, int, int, int)
0x3e9: Stack[-2] = Stack[12 + Tasks[-1].StackPointer]
0x3ea: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0x3eb: @@ ConvertToWorldCoordinates(Stack[-2], Stack[-1])
0x3ec: Pop(0)
0x3ed: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-14])
0x3ee: Pop(0)
0x3ef: @ DestroyWindow()
0x3f0: Pop(0)
0x3f1: Return(); Pop(4)

0x3f2: PushEmpty(int, int)
0x3f3: Push("branch")
0x3f4: @ GetVariable(Stack[-1], Stack[-2])
0x3f5: Pop(1)
0x3f6: Stack[-3] = Stack[-1]
0x3f7: Return(); Pop(2)

0x3f8: PushEmpty(float, float)
0x3f9: @ GetGameTime(Stack[-1])
0x3fa: Pop(0)
0x3fb: Push((int) 1)
0x3fc: PushEmpty(int)
0x3fd: Push((int) 24)
0x3fe: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3ff: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x400: Return(); Pop(2)

0x401: PushEmpty()
0x402: Push("Region")
0x403: Pop(1); Push(Stack[-1] + Stack[-2]);
0x404: Push("State")
0x405: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x406: Return(); Pop(0)

0x407: PushEmpty(int, int)
0x408: PushEmpty(string, int)
0x409: Stack[-1] = Stack[-5]
0x40a: Call2 0x401

0x40b: Pop(1)
0x40c: @ GetVariable(Stack[-1], Stack[-2])
0x40d: Pop(1)
0x40e: Push((int) 3)
0x40f: Pop(1); Push(Stack[-2] & Stack[-1]);
0x410: Push((int) 0)
0x411: Stack[-6] = Stack[-2] == Stack[-1]; Pop(2);
0x412: Return(); Pop(2)

0x413: PushEmpty(int, int)
0x414: PushEmpty(string, int)
0x415: Stack[-1] = Stack[-5]
0x416: Call2 0x401

0x417: Pop(1)
0x418: @ GetVariable(Stack[-1], Stack[-2])
0x419: Pop(1)
0x41a: Push((int) 3)
0x41b: Pop(1); Push(Stack[-2] & Stack[-1]);
0x41c: Push((int) 1)
0x41d: Stack[-6] = Stack[-2] == Stack[-1]; Pop(2);
0x41e: Return(); Pop(2)

0x41f: PushEmpty(int, int)
0x420: PushEmpty(string, int)
0x421: Stack[-1] = Stack[-5]
0x422: Call2 0x401

0x423: Pop(1)
0x424: @ GetVariable(Stack[-1], Stack[-2])
0x425: Pop(1)
0x426: Push((int) 3)
0x427: Pop(1); Push(Stack[-2] & Stack[-1]);
0x428: Push((int) 2)
0x429: Stack[-6] = Stack[-2] == Stack[-1]; Pop(2);
0x42a: Return(); Pop(2)

0x42b: PushEmpty(cvector, cvector, object, object, bool, cvector, cvector, object, object, bool)
0x42c: @ GetMainOutdoorScene(Stack[-3])
0x42d: Pop(0)
0x42e: Pop(0); Push((bool) Stack[-3] == 0)
0x42f: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x430: Push("Can't find main outdoor scene")
0x431: @ Trace(Stack[-1])
0x432: Pop(1)
0x433: Stack[-5] = CVector(0.0, 0.0, 0.0)
0x434: Stack[-12] = Stack[-5]
0x435: Return(); Pop(10)

0x436: @@ GetLocator(Stack[-11], Stack[-1], Stack[-5], Stack[-4])
0x437: Pop(0)
0x438: Stack[-12] = Stack[-5]
0x439: Return(); Pop(10)

0x43a: Stack[-2] = 0
0x43b: Stack[-3] = 0
0x43c: PushEmpty(int, int, int, int)
0x43d: PushEmpty(int)
0x43e: Call2 0x3f8

0x43f: Stack[-3] = Stack[-1]
0x440: Pop(1)
0x441: Push("RMap")
0x442: Pop(1); Push(Stack[-1] + Stack[-3]);
0x443: @ GetVariable(Stack[-1], Stack[-2])
0x444: Pop(1)
0x445: Push((int) 0)
0x446: Stack[-6] = Stack[-2] != Stack[-1]; Pop(1);
0x447: Return(); Pop(4)

