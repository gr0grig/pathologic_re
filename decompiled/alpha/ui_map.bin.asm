GlobalVarCount = 2
	G_VAR_0 float 
	G_VAR_1 float 

Strings:
	Map not found
	GetSize
	GetMapParams
	ConvertToMapCoordinates
	GetName
	pt_gmap_
	indoor map: pt_gmap_
	outdoor map
	default
	map_open
	clear
	GetMarkCount
	GetMark
	GetLocator
	add
	GetObjectFromPoint
	GetObjectID
	CreateObjectHighlight
	Render
	GetType
	quest_mark
	mainquest_mark
	info_mark
	player
	player0
	drag
	button_plus
	button_minus
	ConvertToWorldCoordinates
	SetMapParams
	Can't find main outdoor scene

Import:
	GetMap (1 args)
	Trace (1 args)
	GetWindowSize (2 args)
	CreateObjectVector (1 args)
	GetMainOutdoorScene (1 args)
	GetActiveScene (1 args)
	GetPlayerMapPos (2 args)
	ShowCursor (0 args)
	SetCursor (1 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	SetBackground (1 args)
	CaptureKeyboard (0 args)
	PlaySound (1 args)
	ProcessEvents (0 args)
	GetStringByID (2 args)
	SetTooltip (2 args)
	SetTooltip (3 args)
	ClientToScreen (2 args)
	RenderMap (8 args)
	Blit (3 args)
	GetPlayerMapAngle (1 args)
	DestroyWindow (0 args)

RunOp = 0x9
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, int, int, int, int, int, int, int, int, int, float, float, float, bool, bool, bool, object, object, object, object, cvector) Params = 0
		EVENT_1 Op = 0x8e Vars = (float)
		EVENT_0 Op = 0x11a Vars = ()
		EVENT_11 Op = 0x1b7 Vars = (int, int)
		EVENT_12 Op = 0x1c6 Vars = (int, int, bool)
		EVENT_8 Op = 0x1cc Vars = (int, int)
		EVENT_10 Op = 0x1d9 Vars = ()
		EVENT_200 Op = 0x1eb Vars = (int, string, object)
		EVENT_101 Op = 0x1f9 Vars = (int)


0x0: Push(GlobalVars[0])
0x1: Push((float)0.01)
0x2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3: Pop(1); Push((bool) Stack[13 + Tasks[-1].StackPointer] < Stack[-1])
0x4: IF (Stack[-1] == 0) GOTO 0x7; Pop(1)

0x5: Stack[-1] = (bool) 1
0x6: Return(); Pop(0)

0x7: Stack[-1] = (bool) 0
0x8: Return(); Pop(0)

0x9: PushEmpty(float, float, object, string, int, int, int, int, float, float, object, string, int, int, int, int)
0xa: @ GetMap(Stack[-19])
0xb: Pop(0)
0xc: Pop(0); Push((bool) Stack[19 + Tasks[-1].StackPointer] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xe: Push("Map not found")
0xf: @ Trace(Stack[-1])
0x10: Pop(1)
0x11: Return(); Pop(16)

0x12: @@ GetSize(Stack[-0], Stack[-1])
0x13: Pop(0)
0x14: @@ GetMapParams(Stack[-8], Stack[-7], Stack[-13])
0x15: Pop(0)
0x16: @@ ConvertToMapCoordinates(Stack[-8], Stack[-7])
0x17: Pop(0)
0x18: Stack[11 + Tasks[-1].StackPointer] = Stack[-8]
0x19: Stack[12 + Tasks[-1].StackPointer] = Stack[-7]
0x1a: Stack[15 + Tasks[-1].StackPointer] = (bool)1
0x1b: @ GetWindowSize(Stack[-2], Stack[-3])
0x1c: Pop(0)
0x1d: Push(GlobalVars[0])
0x1e: Push((float)2048.0)
0x1f: Stack[-2] = Stack[2 + Tasks[-1].StackPointer] / Stack[-1]; Pop(1);
0x20: GlobalVars[0] = Stack[-1]; Pop(1)
0x21: Push(GlobalVars[1])
0x22: Push(GlobalVars[0])
0x23: Stack[-2] = Stack[-1]
0x24: Pop(1)
0x25: GlobalVars[1] = Stack[-1]; Pop(1)
0x26: Stack[4 + Tasks[-1].StackPointer] = (int)-1
0x27: Stack[5 + Tasks[-1].StackPointer] = (int)-1
0x28: Stack[14 + Tasks[-1].StackPointer] = (bool)0
0x29: Stack[20 + Tasks[-1].StackPointer] = 0
0x2a: Stack[10 + Tasks[-1].StackPointer] = (int)-1
0x2b: @ CreateObjectVector(Stack[-17])
0x2c: Pop(0)
0x2d: @ GetMainOutdoorScene(Stack[-6])
0x2e: Pop(0)
0x2f: @ GetActiveScene(Stack[-18])
0x30: Pop(0)
0x31: Pop(0); Push((bool) Stack[-6] != Stack[18 + Tasks[-1].StackPointer])
0x32: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x33: Stack[16 + Tasks[-1].StackPointer] = (bool)1
0x34: @@ GetName(Stack[-5])
0x35: Pop(0)
0x36: PushEmpty(cvector, string)
0x37: Push("pt_gmap_")
0x38: Stack[-2] = Stack[-1] + Stack[-8]; Pop(1);
0x39: Call 0x211

0x3a: Stack[21 + Tasks[-1].StackPointer] = Stack[-2]
0x3b: Pop(2)
0x3c: Push(CvectorIndex(Stack[-21], 0))
0x3d: Stack[-5] = Stack[-1]
0x3e: Pop(1)
0x3f: Push(CvectorIndex(Stack[-21], 2))
0x40: Stack[-4] = Stack[-1]
0x41: Pop(1)
0x42: @@ ConvertToMapCoordinates(Stack[-4], Stack[-3])
0x43: Pop(0)
0x44: Push(CvectorIndex(Stack[-21], 0))
0x45: Stack[-1] = Stack[-5]
0x46: CvectorIndex(Stack[21 + Tasks[-1].StackPointer], 0) = Stack[-1];
0x47: Push(CvectorIndex(Stack[-21], 2))
0x48: Stack[-1] = Stack[-4]
0x49: CvectorIndex(Stack[21 + Tasks[-1].StackPointer], 2) = Stack[-1];
0x4a: Push("indoor map: pt_gmap_")
0x4b: Pop(1); Push(Stack[-1] + Stack[-6]);
0x4c: @ Trace(Stack[-1])
0x4d: Pop(1)
0x4e: GOTO 0x5b

0x4f: Push("outdoor map")
0x50: @ Trace(Stack[-1])
0x51: Pop(1)
0x52: Stack[16 + Tasks[-1].StackPointer] = (bool)0
0x53: @ GetPlayerMapPos(Stack[-2], Stack[-1])
0x54: Pop(0)
0x55: Push(CvectorIndex(Stack[-21], 0))
0x56: Stack[-1] = Stack[-3]
0x57: CvectorIndex(Stack[21 + Tasks[-1].StackPointer], 0) = Stack[-1];
0x58: Push(CvectorIndex(Stack[-21], 2))
0x59: Stack[-1] = Stack[-2]
0x5a: CvectorIndex(Stack[21 + Tasks[-1].StackPointer], 2) = Stack[-1];
0x5b: @ ShowCursor()
0x5c: Pop(0)
0x5d: Push("default")
0x5e: @ SetCursor(Stack[-1])
0x5f: Pop(1)
0x60: Push((bool) 1)
0x61: @ SetOwnerDraw(Stack[-1])
0x62: Pop(1)
0x63: Push((bool) 1)
0x64: @ SetNeedUpdate(Stack[-1])
0x65: Pop(1)
0x66: Push("default")
0x67: @ SetBackground(Stack[-1])
0x68: Pop(1)
0x69: @ CaptureKeyboard()
0x6a: Pop(0)
0x6b: Push("map_open")
0x6c: @ PlaySound(Stack[-1])
0x6d: Pop(1)
0x6e: @ ProcessEvents()
0x6f: Pop(0)
0x70: Return(); Pop(16)

0x71: Stack[-6] = 0
0x72: PushEmpty()
0x73: Push((int) 2)
0x74: Pop(1); Push(Stack[2 + StackPtr] / Stack[-1]);
0x75: Pop(1); Push(Stack[-2] - Stack[-1]);
0x76: Pop(1); Push(Stack[-1] / Stack[13 + StackPtr]);
0x77: Stack[-3] = Stack[11 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x78: Return(); Pop(0)

0x79: PushEmpty()
0x7a: Push((int) 2)
0x7b: Pop(1); Push(Stack[3 + StackPtr] / Stack[-1]);
0x7c: Pop(1); Push(Stack[-2] - Stack[-1]);
0x7d: Pop(1); Push(Stack[-1] / Stack[13 + StackPtr]);
0x7e: Stack[-3] = Stack[12 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x7f: Return(); Pop(0)

0x80: PushEmpty()
0x81: Pop(0); Push(Stack[-1] - Stack[11 + StackPtr]);
0x82: Pop(1); Push(Stack[-1] * Stack[13 + StackPtr]);
0x83: Push((int) 2)
0x84: Pop(1); Push(Stack[2 + StackPtr] / Stack[-1]);
0x85: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x86: Return(); Pop(0)

0x87: PushEmpty()
0x88: Pop(0); Push(Stack[-1] - Stack[12 + StackPtr]);
0x89: Pop(1); Push(Stack[-1] * Stack[13 + StackPtr]);
0x8a: Push((int) 2)
0x8b: Pop(1); Push(Stack[3 + StackPtr] / Stack[-1]);
0x8c: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x8d: Return(); Pop(0)

0x8e: PushEmpty(int, int, int, int, int, int, float, float, int, int, int, object, string, cvector, int, int, int, int, string, int, int, int, int, int, int, float, float, int, int, int, object, string, cvector, int, int, int, int, string)
0x8f: Pop(0); Push(Stack[2 + StackPtr] / Stack[13 + StackPtr]);
0x90: Push((int) 2)
0x91: Pop(2); Push(Stack[-2] / Stack[-1]);
0x92: Stack[-20] = Stack[11 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x93: Pop(0); Push(Stack[2 + StackPtr] / Stack[13 + StackPtr]);
0x94: Push((int) 2)
0x95: Pop(2); Push(Stack[-2] / Stack[-1]);
0x96: Stack[-19] = Stack[11 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x97: Pop(0); Push(Stack[3 + StackPtr] / Stack[13 + StackPtr]);
0x98: Push((int) 2)
0x99: Pop(2); Push(Stack[-2] / Stack[-1]);
0x9a: Stack[-18] = Stack[12 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x9b: Pop(0); Push(Stack[3 + StackPtr] / Stack[13 + StackPtr]);
0x9c: Push((int) 2)
0x9d: Pop(2); Push(Stack[-2] / Stack[-1]);
0x9e: Stack[-17] = Stack[12 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x9f: Stack[-15] = (int) 0
0xa0: Stack[-14] = (int) 0
0xa1: Push((int) 0)
0xa2: Pop(1); Push((bool) Stack[-20] < Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa4: Stack[-15] = -Stack[-19]; Pop(0);
0xa5: GOTO 0xab

0xa6: Push((int) 2048)
0xa7: Pop(1); Push((bool) Stack[-19] > Stack[-1])
0xa8: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa9: Push((int) 2048)
0xaa: Stack[-16] = Stack[-1] - Stack[-19]; Pop(1);
0xab: Push((int) 0)
0xac: Pop(1); Push((bool) Stack[-18] < Stack[-1])
0xad: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xae: Stack[-14] = -Stack[-17]; Pop(0);
0xaf: GOTO 0xb5

0xb0: Push((int) 2048)
0xb1: Pop(1); Push((bool) Stack[-17] > Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: Push((int) 2048)
0xb4: Stack[-15] = Stack[-1] - Stack[-17]; Pop(1);
0xb5: Stack[11 + Tasks[-1].StackPointer] = Stack[11 + Tasks[-1].StackPointer] + Stack[-15]; Pop(0);
0xb6: Stack[12 + Tasks[-1].StackPointer] = Stack[12 + Tasks[-1].StackPointer] + Stack[-14]; Pop(0);
0xb7: @@ clear()
0xb8: Pop(0)
0xb9: Stack[-10] = (int) 0
0xba: @@ GetMarkCount(Stack[-11])
0xbb: Pop(0)
0xbc: Stack[-9] = (int) 0
0xbd: Pop(0); Push((bool) Stack[-9] < Stack[-11])
0xbe: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xbf: @@ GetMark(Stack[-9], Stack[-8])
0xc0: Pop(0)
0xc1: @@ GetLocator(Stack[-7])
0xc2: Pop(0)
0xc3: PushEmpty(cvector, string)
0xc4: Stack[-1] = Stack[-9]
0xc5: Call 0x211

0xc6: Stack[-8] = Stack[-2]
0xc7: Pop(2)
0xc8: Push(CvectorIndex(Stack[-6], 0))
0xc9: Stack[-14] = Stack[-1]
0xca: Pop(1)
0xcb: Push(CvectorIndex(Stack[-6], 2))
0xcc: Stack[-13] = Stack[-1]
0xcd: Pop(1)
0xce: @@ ConvertToMapCoordinates(Stack[-13], Stack[-12])
0xcf: Pop(0)
0xd0: PushEmpty(int, int)
0xd1: Stack[-1] = Stack[-15]
0xd2: Call 0x80

0xd3: Stack[-15] = Stack[-2]
0xd4: Pop(2)
0xd5: PushEmpty(int, int)
0xd6: Stack[-1] = Stack[-14]
0xd7: Call 0x87

0xd8: Stack[-14] = Stack[-2]
0xd9: Pop(2)
0xda: Pop(0); Push(Stack[-13] - Stack[4 + StackPtr]);
0xdb: Pop(0); Push(Stack[-14] - Stack[4 + StackPtr]);
0xdc: Pop(2); Push(Stack[-2] * Stack[-1]);
0xdd: Pop(0); Push(Stack[-13] - Stack[5 + StackPtr]);
0xde: Pop(0); Push(Stack[-14] - Stack[5 + StackPtr]);
0xdf: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe1: Push((int) 900)
0xe2: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe4: @@ add(Stack[-8])
0xe5: Pop(0)
0xe6: Push((int) 1)
0xe7: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0xe8: Stack[-8] = 0
0xe9: Push((int) 1)
0xea: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0xeb: GOTO 0xbd

0xec: Pop(0); Push((bool) Stack[-10] == 0)
0xed: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xee: PushEmpty(int, int)
0xef: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0xf0: Call 0x72

0xf1: Stack[-5] = Stack[-2]
0xf2: Pop(2)
0xf3: PushEmpty(int, int)
0xf4: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0xf5: Call 0x79

0xf6: Stack[-4] = Stack[-2]
0xf7: Pop(2)
0xf8: @@ GetObjectFromPoint(Stack[-5], Stack[-3], Stack[-2])
0xf9: Pop(0)
0xfa: Push((int) 0)
0xfb: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xfd: @@ GetObjectID(Stack[-4], Stack[-5])
0xfe: Pop(0)
0xff: Push((int) 100000)
0x100: Pop(1); Push(Stack[-5] + Stack[-1]);
0x101: @ GetStringByID(Stack[-2], Stack[-1])
0x102: Pop(1)
0x103: Push((int) 5)
0x104: @ SetTooltip(Stack[-1], Stack[-2])
0x105: Pop(1)
0x106: Pop(0); Push((bool) Stack[10 + Tasks[-1].StackPointer] != Stack[-5])
0x107: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x108: @@ CreateObjectHighlight(Stack[-20], Stack[-5])
0x109: Pop(0)
0x10a: Stack[10 + Tasks[-1].StackPointer] = Stack[-5]
0x10b: GOTO 0x112

0x10c: Push((int) -1)
0x10d: Push("")
0x10e: @ SetTooltip(Stack[-2], Stack[-1])
0x10f: Pop(2)
0x110: Stack[20 + Tasks[-1].StackPointer] = 0
0x111: Stack[10 + Tasks[-1].StackPointer] = (int)-1
0x112: GOTO 0x119

0x113: Push((int) 2)
0x114: Push("")
0x115: @ SetTooltip(Stack[-2], Stack[-1], Stack[-17])
0x116: Pop(2)
0x117: Stack[20 + Tasks[-1].StackPointer] = 0
0x118: Stack[10 + Tasks[-1].StackPointer] = (int)-1
0x119: Return(); Pop(38)

0x11a: PushEmpty(int, int, int, int, int, int, float, float, int, int, object, string, int, cvector, float, int, int, int, int, int, int, int, float, float, int, int, object, string, int, cvector, float, int)
0x11b: PushEmpty(bool)
0x11c: Call 0x0

0x11d: Pop(0)
0x11e: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11f: Return(); Pop(32)

0x120: Pop(0); Push(Stack[2 + StackPtr] / Stack[13 + StackPtr]);
0x121: Push((int) 2)
0x122: Pop(2); Push(Stack[-2] / Stack[-1]);
0x123: Stack[-17] = Stack[11 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x124: Pop(0); Push(Stack[2 + StackPtr] / Stack[13 + StackPtr]);
0x125: Push((int) 2)
0x126: Pop(2); Push(Stack[-2] / Stack[-1]);
0x127: Stack[-16] = Stack[11 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x128: Pop(0); Push(Stack[3 + StackPtr] / Stack[13 + StackPtr]);
0x129: Push((int) 2)
0x12a: Pop(2); Push(Stack[-2] / Stack[-1]);
0x12b: Stack[-15] = Stack[12 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x12c: Pop(0); Push(Stack[3 + StackPtr] / Stack[13 + StackPtr]);
0x12d: Push((int) 2)
0x12e: Pop(2); Push(Stack[-2] / Stack[-1]);
0x12f: Stack[-14] = Stack[12 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x130: Stack[-12] = (int) 0
0x131: Stack[-11] = (int) 0
0x132: @ ClientToScreen(Stack[-12], Stack[-11])
0x133: Pop(0)
0x134: Pop(0); Push(Stack[2 + StackPtr] + Stack[-12]);
0x135: Pop(0); Push(Stack[3 + StackPtr] + Stack[-12]);
0x136: @ RenderMap(Stack[-14], Stack[-13], Stack[-2], Stack[-1], Stack[-18], Stack[-16], Stack[-17], Stack[-15])
0x137: Pop(2)
0x138: Push( Stack[20 + Tasks[-1].StackPointer] )
0x139: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13a: Pop(0); Push(Stack[2 + StackPtr] + Stack[-12]);
0x13b: Pop(0); Push(Stack[3 + StackPtr] + Stack[-12]);
0x13c: @@ Render(Stack[-14], Stack[-13], Stack[-2], Stack[-1], Stack[-18], Stack[-16], Stack[-17], Stack[-15])
0x13d: Pop(2)
0x13e: @@ GetMarkCount(Stack[-8])
0x13f: Pop(0)
0x140: Stack[-7] = (int) 0
0x141: Pop(0); Push((bool) Stack[-7] < Stack[-8])
0x142: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x143: @@ GetMark(Stack[-7], Stack[-6])
0x144: Pop(0)
0x145: @@ GetLocator(Stack[-5])
0x146: Pop(0)
0x147: @@ GetType(Stack[-4])
0x148: Pop(0)
0x149: PushEmpty(cvector, string)
0x14a: Stack[-1] = Stack[-7]
0x14b: Call 0x211

0x14c: Stack[-5] = Stack[-2]
0x14d: Pop(2)
0x14e: Push(CvectorIndex(Stack[-3], 0))
0x14f: Stack[-11] = Stack[-1]
0x150: Pop(1)
0x151: Push(CvectorIndex(Stack[-3], 2))
0x152: Stack[-10] = Stack[-1]
0x153: Pop(1)
0x154: @@ ConvertToMapCoordinates(Stack[-10], Stack[-9])
0x155: Pop(0)
0x156: PushEmpty(int, int)
0x157: Stack[-1] = Stack[-12]
0x158: Call 0x80

0x159: Stack[-12] = Stack[-2]
0x15a: Pop(2)
0x15b: PushEmpty(int, int)
0x15c: Stack[-1] = Stack[-11]
0x15d: Call 0x87

0x15e: Stack[-11] = Stack[-2]
0x15f: Pop(2)
0x160: Push((int) 0)
0x161: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x163: Push("quest_mark")
0x164: Push((int) 16)
0x165: Pop(1); Push(Stack[-12] - Stack[-1]);
0x166: Push((int) 16)
0x167: Pop(1); Push(Stack[-12] - Stack[-1]);
0x168: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x169: Pop(3)
0x16a: Push((int) 1)
0x16b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x16d: Push("mainquest_mark")
0x16e: Push((int) 16)
0x16f: Pop(1); Push(Stack[-12] - Stack[-1]);
0x170: Push((int) 16)
0x171: Pop(1); Push(Stack[-12] - Stack[-1]);
0x172: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Push((int) 3)
0x175: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x177: Push("info_mark")
0x178: Push((int) 16)
0x179: Pop(1); Push(Stack[-12] - Stack[-1]);
0x17a: Push((int) 16)
0x17b: Pop(1); Push(Stack[-12] - Stack[-1]);
0x17c: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x17d: Pop(3)
0x17e: Stack[-6] = 0
0x17f: Push((int) 1)
0x180: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x181: GOTO 0x141

0x182: Pop(0); Push((bool) Stack[16 + Tasks[-1].StackPointer] == 0)
0x183: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x184: @ GetPlayerMapAngle(Stack[-2])
0x185: Pop(0)
0x186: Push((float)6.28)
0x187: Pop(1); Push(Stack[-3] / Stack[-1]);
0x188: Push((int) 16)
0x189: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x18a: PushEmpty(int, int)
0x18b: Push(CvectorIndex(Stack[-21], 0))
0x18c: Stack[-2] = Stack[-1]
0x18d: Pop(1)
0x18e: Call 0x80

0x18f: Stack[-12] = Stack[-2]
0x190: Pop(2)
0x191: PushEmpty(int, int)
0x192: Push(CvectorIndex(Stack[-21], 2))
0x193: Stack[-2] = Stack[-1]
0x194: Pop(1)
0x195: Call 0x87

0x196: Stack[-11] = Stack[-2]
0x197: Pop(2)
0x198: Push("player")
0x199: Pop(1); Push(Stack[-1] + Stack[-2]);
0x19a: Push((int) 8)
0x19b: Pop(1); Push(Stack[-12] - Stack[-1]);
0x19c: Push((int) 8)
0x19d: Pop(1); Push(Stack[-12] - Stack[-1]);
0x19e: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x19f: Pop(3)
0x1a0: GOTO 0x1b6

0x1a1: PushEmpty(int, int)
0x1a2: Push(CvectorIndex(Stack[-21], 0))
0x1a3: Stack[-2] = Stack[-1]
0x1a4: Pop(1)
0x1a5: Call 0x80

0x1a6: Stack[-12] = Stack[-2]
0x1a7: Pop(2)
0x1a8: PushEmpty(int, int)
0x1a9: Push(CvectorIndex(Stack[-21], 2))
0x1aa: Stack[-2] = Stack[-1]
0x1ab: Pop(1)
0x1ac: Call 0x87

0x1ad: Stack[-11] = Stack[-2]
0x1ae: Pop(2)
0x1af: Push("player0")
0x1b0: Push((int) 8)
0x1b1: Pop(1); Push(Stack[-12] - Stack[-1]);
0x1b2: Push((int) 8)
0x1b3: Pop(1); Push(Stack[-12] - Stack[-1]);
0x1b4: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x1b5: Pop(3)
0x1b6: Return(); Pop(32)

0x1b7: PushEmpty()
0x1b8: PushEmpty(bool)
0x1b9: Call 0x0

0x1ba: Pop(0)
0x1bb: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bc: Return(); Pop(0)

0x1bd: Stack[14 + Tasks[-1].StackPointer] = (bool)1
0x1be: Stack[6 + Tasks[-1].StackPointer] = Stack[-2]
0x1bf: Stack[7 + Tasks[-1].StackPointer] = Stack[-1]
0x1c0: Stack[8 + Tasks[-1].StackPointer] = Stack[11 + Tasks[-1].StackPointer]
0x1c1: Stack[9 + Tasks[-1].StackPointer] = Stack[12 + Tasks[-1].StackPointer]
0x1c2: Push("drag")
0x1c3: @ SetCursor(Stack[-1])
0x1c4: Pop(1)
0x1c5: Return(); Pop(0)

0x1c6: PushEmpty()
0x1c7: Stack[14 + Tasks[-1].StackPointer] = (bool)0
0x1c8: Push("default")
0x1c9: @ SetCursor(Stack[-1])
0x1ca: Pop(1)
0x1cb: Return(); Pop(0)

0x1cc: PushEmpty()
0x1cd: Stack[4 + Tasks[-1].StackPointer] = Stack[-2]
0x1ce: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x1cf: Stack[15 + Tasks[-1].StackPointer] = (bool)0
0x1d0: Push( Stack[14 + Tasks[-1].StackPointer] )
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d2: Pop(0); Push(Stack[6 + StackPtr] - Stack[-2]);
0x1d3: Pop(1); Push(Stack[-1] / Stack[13 + StackPtr]);
0x1d4: Stack[11 + Tasks[-1].StackPointer] = Stack[8 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1d5: Pop(0); Push(Stack[7 + StackPtr] - Stack[-1]);
0x1d6: Pop(1); Push(Stack[-1] / Stack[13 + StackPtr]);
0x1d7: Stack[12 + Tasks[-1].StackPointer] = Stack[9 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1d8: Return(); Pop(0)

0x1d9: Stack[15 + Tasks[-1].StackPointer] = (bool)1
0x1da: Return(); Pop(0)

0x1db: Push((float)1.4)
0x1dc: Stack[13 + Tasks[-1].StackPointer] = Stack[13 + Tasks[-1].StackPointer] * Stack[-1]; Pop(1);
0x1dd: Push((float)2.0)
0x1de: Pop(1); Push((bool) Stack[13 + Tasks[-1].StackPointer] > Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1e0: Stack[13 + Tasks[-1].StackPointer] = (float)2.0
0x1e1: Return(); Pop(0)

0x1e2: Push((float)1.4)
0x1e3: Stack[13 + Tasks[-1].StackPointer] = Stack[13 + Tasks[-1].StackPointer] / Stack[-1]; Pop(1);
0x1e4: Push(GlobalVars[0])
0x1e5: Pop(1); Push((bool) Stack[13 + Tasks[-1].StackPointer] < Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e7: Push(GlobalVars[0])
0x1e8: Stack[13 + Tasks[-1].StackPointer] = Stack[-1]
0x1e9: Pop(1)
0x1ea: Return(); Pop(0)

0x1eb: PushEmpty()
0x1ec: Push("button_plus")
0x1ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ef: PushEmpty()
0x1f0: Call 0x1db

0x1f1: Pop(0)
0x1f2: Push("button_minus")
0x1f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f5: PushEmpty()
0x1f6: Call 0x1e2

0x1f7: Pop(0)
0x1f8: Return(); Pop(0)

0x1f9: PushEmpty(int, int, int, int)
0x1fa: Push((int) 107)
0x1fb: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fd: PushEmpty()
0x1fe: Call 0x1db

0x1ff: Pop(0)
0x200: Return(); Pop(4)

0x201: Push((int) 109)
0x202: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x204: PushEmpty()
0x205: Call 0x1e2

0x206: Pop(0)
0x207: Return(); Pop(4)

0x208: Stack[-2] = Stack[11 + Tasks[-1].StackPointer]
0x209: Stack[-1] = Stack[12 + Tasks[-1].StackPointer]
0x20a: @@ ConvertToWorldCoordinates(Stack[-2], Stack[-1])
0x20b: Pop(0)
0x20c: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-13])
0x20d: Pop(0)
0x20e: @ DestroyWindow()
0x20f: Pop(0)
0x210: Return(); Pop(4)

0x211: PushEmpty(cvector, cvector, object, object, bool, cvector, cvector, object, object, bool)
0x212: @ GetMainOutdoorScene(Stack[-3])
0x213: Pop(0)
0x214: Pop(0); Push((bool) Stack[-3] == 0)
0x215: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x216: Push("Can't find main outdoor scene")
0x217: @ Trace(Stack[-1])
0x218: Pop(1)
0x219: Stack[-5] = CVector(0.0, 0.0, 0.0)
0x21a: Stack[-12] = Stack[-5]
0x21b: Return(); Pop(10)

0x21c: @@ GetLocator(Stack[-11], Stack[-1], Stack[-5], Stack[-4])
0x21d: Pop(0)
0x21e: Stack[-12] = Stack[-5]
0x21f: Return(); Pop(10)

0x220: Stack[-2] = 0
0x221: Stack[-3] = 0
