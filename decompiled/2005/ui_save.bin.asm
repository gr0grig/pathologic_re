GlobalVarCount = 0

Strings:
	button_save
	button_overwrite
	GetFileName
	add
	Next
	IsQuickSave
	sys_border.xml
	size
	get
	BlitClipped
	default
	GetProperty
	????
	big
	button_x_pressed
	button_x
	button_pressed
	button
	separator
	shot_black
	shot_border
	scrollbar
	GetGameTime
	GetSaveTime

Import:
	CaptureKeyboard (0 args)
	Blit (3 args)
	SendMessageToParent (2 args)
	DeleteGame (1 args)
	StopEventProcessing (0 args)
	SendMessageToParent (1 args)
	CreateSaveEnumerator (1 args)
	CreateObjectVector (1 args)
	GetWindowSize (2 args)
	ClientToScreen (2 args)
	EnableClipping (1 args)
	SetOwnerDraw (1 args)
	CreateWindow (3 args)
	ProcessEvents (0 args)
	Print (7 args)
	StretchBlit (5 args)
	SendMessage (2 args)
	GetStringByID (2 args)
	format (5 args)
	format (7 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, int, int, int, int, int, int, int, object, object, object) Params = 0
		EVENT_100 Op = 0x22 Vars = (int)
		EVENT_0 Op = 0x61 Vars = ()
		EVENT_200 Op = 0x137 Vars = (int, string, object)
		EVENT_15 Op = 0x147 Vars = (int, int, float)
		EVENT_2 Op = 0x153 Vars = (int, int)
		EVENT_3 Op = 0x161 Vars = (int, int)


0x0: @ CaptureKeyboard()
0x1: Pop(0)
0x2: Push((bool) 1)
0x3: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x4: PushEmpty(bool)
0x5: Stack[-1] = (bool) 1
0x6: Call2 0x27

0x7: Pop(1)
0x8: GOTO 0x2

0x9: Return(); Pop(0)

0xa: PushEmpty()
0xb: Pop(0); Push((bool) Stack[-3] == 0)
0xc: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xd: Push("button_save")
0xe: @ Blit(Stack[-1], Stack[-3], Stack[-2])
0xf: Pop(1)
0x10: GOTO 0x14

0x11: Push("button_overwrite")
0x12: @ Blit(Stack[-1], Stack[-3], Stack[-2])
0x13: Pop(1)
0x14: Return(); Pop(0)

0x15: PushEmpty()
0x16: Push((int) 0)
0x17: @ SendMessageToParent(Stack[-1], Stack[-2])
0x18: Pop(1)
0x19: Return(); Pop(0)

0x1a: PushEmpty(string, string)
0x1b: @@ GetFileName(Stack[-1])
0x1c: Pop(0)
0x1d: @ DeleteGame(Stack[-1])
0x1e: Pop(0)
0x1f: @ StopEventProcessing()
0x20: Pop(0)
0x21: Return(); Pop(2)

0x22: PushEmpty()
0x23: Push((int) 1)
0x24: @ SendMessageToParent(Stack[-1])
0x25: Pop(1)
0x26: Return(); Pop(0)

0x27: PushEmpty(object, object, bool, object, object, bool)
0x28: Stack[2 + Tasks[-1].StackPointer] = (int)-1
0x29: Stack[3 + Tasks[-1].StackPointer] = (int)-1
0x2a: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x2b: @ CreateSaveEnumerator(Stack[-8])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[8 + Tasks[-1].StackPointer] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2f: Return(); Pop(6)

0x30: @ CreateObjectVector(Stack[-9])
0x31: Pop(0)
0x32: Push(Stack[-7])
0x33: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x34: Stack[-3] = 0
0x35: @@ add(Stack[-3])
0x36: Pop(0)
0x37: Stack[-3] = 0
0x38: Push((int) 1)
0x39: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x3a: @@ Next(Stack[-2])
0x3b: Pop(0)
0x3c: Pop(0); Push((bool) Stack[-2] == 0)
0x3d: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3e: GOTO 0x4a

0x3f: Push(Stack[-7])
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @@ IsQuickSave(Stack[-1])
0x42: Pop(0)
0x43: Push(Stack[-1])
0x44: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x45: GOTO 0x38

0x46: @@ add(Stack[-2])
0x47: Pop(0)
0x48: Stack[-2] = 0
0x49: GOTO 0x38

0x4a: @ GetWindowSize(Stack[-4], Stack[-5])
0x4b: Pop(0)
0x4c: Stack[6 + Tasks[-1].StackPointer] = (int)0
0x4d: Stack[7 + Tasks[-1].StackPointer] = (int)0
0x4e: @ ClientToScreen(Stack[-6], Stack[-7])
0x4f: Pop(0)
0x50: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x51: Push((bool) 1)
0x52: @ EnableClipping(Stack[-1])
0x53: Pop(1)
0x54: Push((bool) 1)
0x55: @ SetOwnerDraw(Stack[-1])
0x56: Pop(1)
0x57: Push("sys_border.xml")
0x58: Push((bool) 0)
0x59: @ CreateWindow(Stack[-2], Stack[-1], Stack[-10])
0x5a: Pop(2)
0x5b: PushEmpty()
0x5c: Call2 0x1ea

0x5d: Pop(0)
0x5e: @ ProcessEvents()
0x5f: Pop(0)
0x60: Return(); Pop(6)

0x61: PushEmpty(int)
0x62: PushEmpty(int, int)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0x6a

0x65: Stack[-3] = Stack[-2]
0x66: Pop(2)
0x67: Call2 0x6d

0x68: Pop(1)
0x69: Return(); Pop(0)

0x6a: PushEmpty()
0x6b: Stack[-2] = Stack[-1]
0x6c: Return(); Pop(0)

0x6d: PushEmpty(int, int, object, int, int, bool, string, bool, int, string, int, int, object, int, int, bool, string, bool, int, string)
0x6e: @@ size(Stack[-10])
0x6f: Pop(0)
0x70: Stack[-9] = (int) 0
0x71: Pop(0); Push((bool) Stack[-9] < Stack[-10])
0x72: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x73: @@ get(Stack[-8], Stack[-9])
0x74: Pop(0)
0x75: Stack[-7] = (int) 0
0x76: Stack[-6] = Stack[-21]
0x77: @ ClientToScreen(Stack[-7], Stack[-6])
0x78: Pop(0)
0x79: Push(Stack[-8])
0x7a: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0x7b: @@ BlitClipped(Stack[-7], Stack[-6], Stack[-6], Stack[-7], Stack[-4], Stack[-5])
0x7c: Pop(0)
0x7d: PushEmpty(int, int, bool)
0x7e: Stack[-3] = (int) 0
0x7f: Stack[-2] = Stack[-24]
0x80: Stack[-1] = (bool) 0
0x81: Call2 0x112

0x82: Pop(3)
0x83: @@ IsQuickSave(Stack[-5])
0x84: Pop(0)
0x85: Push(Stack[-5])
0x86: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x87: Push("default")
0x88: Push((int) 129)
0x89: Push((int) 7)
0x8a: Pop(1); Push(Stack[-1] + Stack[-24]);
0x8b: PushEmpty(string, int)
0x8c: Stack[-1] = (int) 17
0x8d: Call2 0x20c

0x8e: Pop(1)
0x8f: Push((float)0.55686)
0x90: Push((float)0.55686)
0x91: Push((float)0.55686)
0x92: @ Print(Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x93: Pop(7)
0x94: GOTO 0xab

0x95: Push((int) 0)
0x96: @@ GetProperty(Stack[-1], Stack[-4], Stack[-3])
0x97: Pop(1)
0x98: Push(Stack[-3])
0x99: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9a: PushEmpty(string, int)
0x9b: Push((int) 500)
0x9c: Stack[-2] = Stack[-1] + Stack[-5]; Pop(1);
0x9d: Call2 0x20c

0x9e: Stack[-6] = Stack[-2]
0x9f: Pop(2)
0xa0: GOTO 0xa2

0xa1: Stack[-4] = "????"
0xa2: Push("default")
0xa3: Push((int) 129)
0xa4: Push((int) 7)
0xa5: Pop(1); Push(Stack[-1] + Stack[-24]);
0xa6: Push((float)0.55686)
0xa7: Push((float)0.55686)
0xa8: Push((float)0.55686)
0xa9: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-10], Stack[-3], Stack[-2], Stack[-1])
0xaa: Pop(6)
0xab: PushEmpty(string, object)
0xac: Stack[-1] = Stack[-10]
0xad: Call2 0x211

0xae: Stack[-3] = Stack[-2]
0xaf: Pop(2)
0xb0: Push("big")
0xb1: Push((int) 129)
0xb2: Push((int) 28)
0xb3: Pop(1); Push(Stack[-1] + Stack[-24]);
0xb4: Push((float)1.0)
0xb5: Push((float)1.0)
0xb6: Push((float)1.0)
0xb7: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0xb8: Pop(6)
0xb9: PushEmpty(string, object)
0xba: Stack[-1] = Stack[-10]
0xbb: Call2 0x229

0xbc: Stack[-3] = Stack[-2]
0xbd: Pop(2)
0xbe: Push("default")
0xbf: Push((int) 129)
0xc0: Push((int) 47)
0xc1: Pop(1); Push(Stack[-1] + Stack[-24]);
0xc2: Push((float)0.55686)
0xc3: Push((float)0.55686)
0xc4: Push((float)0.55686)
0xc5: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(6)
0xc7: Push( Stack[0 + Tasks[-1].StackPointer] )
0xc8: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xc9: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-9])
0xca: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcb: Push("button_x_pressed")
0xcc: Push((int) 248)
0xcd: Push((int) 68)
0xce: Pop(1); Push(Stack[-1] + Stack[-24]);
0xcf: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0xd0: Pop(3)
0xd1: GOTO 0xd8

0xd2: Push("button_x")
0xd3: Push((int) 248)
0xd4: Push((int) 68)
0xd5: Pop(1); Push(Stack[-1] + Stack[-24]);
0xd6: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0xd7: Pop(3)
0xd8: GOTO 0xec

0xd9: PushEmpty(int, int, bool)
0xda: Stack[-3] = (int) 0
0xdb: Stack[-2] = Stack[-24]
0xdc: Stack[-1] = (bool) 1
0xdd: Call2 0x112

0xde: Pop(3)
0xdf: Push("default")
0xe0: Push((int) 129)
0xe1: Push((int) 47)
0xe2: Pop(1); Push(Stack[-1] + Stack[-24]);
0xe3: PushEmpty(string, int)
0xe4: Stack[-1] = (int) 32
0xe5: Call2 0x20c

0xe6: Pop(1)
0xe7: Push((float)0.55686)
0xe8: Push((float)0.55686)
0xe9: Push((float)0.55686)
0xea: @ Print(Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(7)
0xec: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-9])
0xed: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xee: Push("button_pressed")
0xef: Push((int) 129)
0xf0: Push((int) 67)
0xf1: Pop(1); Push(Stack[-1] + Stack[-24]);
0xf2: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(3)
0xf4: GOTO 0xfb

0xf5: Push("button")
0xf6: Push((int) 129)
0xf7: Push((int) 67)
0xf8: Pop(1); Push(Stack[-1] + Stack[-24]);
0xf9: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: PushEmpty(object, int, int)
0xfc: Stack[-3] = Stack[-11]
0xfd: Stack[-2] = (int) 129
0xfe: Push((int) 67)
0xff: Stack[-2] = Stack[-1] + Stack[-25]; Pop(1);
0x100: Call2 0xa

0x101: Pop(3)
0x102: Push((int) 90)
0x103: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x104: Push("separator")
0x105: Push((int) 0)
0x106: Push((int) 15)
0x107: Pop(1); Push(Stack[-24] + Stack[-1]);
0x108: Push((int) 1)
0x109: @ StretchBlit(Stack[-4], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x10a: Pop(4)
0x10b: Push((int) 31)
0x10c: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x10d: Stack[-8] = 0
0x10e: Push((int) 1)
0x10f: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x110: GOTO 0x71

0x111: Return(); Pop(20)

0x112: PushEmpty()
0x113: Push(Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x115: Push("shot_black")
0x116: Push((int) 120)
0x117: Push((int) 90)
0x118: @ StretchBlit(Stack[-3], Stack[-6], Stack[-5], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Push("shot_border")
0x11b: Push((int) 120)
0x11c: Push((int) 1)
0x11d: @ StretchBlit(Stack[-3], Stack[-6], Stack[-5], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Push("shot_border")
0x120: Push((int) 90)
0x121: Pop(1); Push(Stack[-4] + Stack[-1]);
0x122: Push((int) 1)
0x123: Pop(2); Push(Stack[-2] - Stack[-1]);
0x124: Push((int) 120)
0x125: Push((int) 1)
0x126: @ StretchBlit(Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(4)
0x128: Push("shot_border")
0x129: Push((int) 1)
0x12a: Push((int) 90)
0x12b: @ StretchBlit(Stack[-3], Stack[-6], Stack[-5], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: Push("shot_border")
0x12e: Push((int) 120)
0x12f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x130: Push((int) 1)
0x131: Pop(2); Push(Stack[-2] - Stack[-1]);
0x132: Push((int) 1)
0x133: Push((int) 90)
0x134: @ StretchBlit(Stack[-4], Stack[-3], Stack[-6], Stack[-2], Stack[-1])
0x135: Pop(4)
0x136: Return(); Pop(0)

0x137: PushEmpty()
0x138: Push("scrollbar")
0x139: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x13b: Pop(0); Push(( -Stack[-3])
0x13c: PushEmpty(int)
0x13d: Call2 0x1e2

0x13e: Pop(0)
0x13f: Pop(1); Push(Stack[-1] - Stack[5 + StackPtr]);
0x140: Pop(2); Push(Stack[-2] * Stack[-1]);
0x141: Push((int) 100)
0x142: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x143: PushEmpty()
0x144: Call2 0x1ea

0x145: Pop(0)
0x146: Return(); Pop(0)

0x147: PushEmpty(int, int)
0x148: PushEmpty(int)
0x149: Call2 0x1e0

0x14a: Pop(0)
0x14b: Pop(1); Push(Stack[-4] * Stack[-1]);
0x14c: Push((int) 2)
0x14d: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x14e: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x14f: PushEmpty()
0x150: Call2 0x1ea

0x151: Pop(0)
0x152: Return(); Pop(2)

0x153: PushEmpty()
0x154: PushEmpty(int, int, int)
0x155: Stack[-2] = Stack[-5]
0x156: Stack[-1] = Stack[-4]
0x157: Call2 0x192

0x158: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x159: Pop(3)
0x15a: PushEmpty(int, int, int)
0x15b: Stack[-2] = Stack[-5]
0x15c: Stack[-1] = Stack[-4]
0x15d: Call2 0x1b9

0x15e: Stack[3 + Tasks[-1].StackPointer] = Stack[-3]
0x15f: Pop(3)
0x160: Return(); Pop(0)

0x161: PushEmpty(object, object, object, object)
0x162: Push((int) -1)
0x163: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] != Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x165: PushEmpty(int, int, int)
0x166: Stack[-2] = Stack[-9]
0x167: Stack[-1] = Stack[-8]
0x168: Call2 0x192

0x169: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x16a: Pop(3)
0x16b: Push((int) -1)
0x16c: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] != Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x16e: @@ get(Stack[-2], Stack[-2])
0x16f: Pop(0)
0x170: PushEmpty(object)
0x171: Stack[-1] = Stack[-3]
0x172: Call2 0x15

0x173: Pop(1)
0x174: Stack[-2] = 0
0x175: GOTO 0x191

0x176: PushEmpty(bool)
0x177: Stack[-1] = (bool) 0
0x178: Push( Stack[0 + Tasks[-1].StackPointer] )
0x179: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17a: Push((int) -1)
0x17b: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] != Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: Stack[-1] = (bool) 1
0x17e: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x17f: PushEmpty(int, int, int)
0x180: Stack[-2] = Stack[-9]
0x181: Stack[-1] = Stack[-8]
0x182: Call2 0x1b9

0x183: Stack[3 + Tasks[-1].StackPointer] = Stack[-3]
0x184: Pop(3)
0x185: Push((int) -1)
0x186: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] != Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x188: @@ get(Stack[-1], Stack[-3])
0x189: Pop(0)
0x18a: Push(Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18c: PushEmpty(object)
0x18d: Stack[-1] = Stack[-2]
0x18e: Call2 0x1a

0x18f: Pop(1)
0x190: Stack[-1] = 0
0x191: Return(); Pop(4)

0x192: PushEmpty(int, int, int, int, int, int, int, int)
0x193: Push((int) 129)
0x194: Pop(1); Push((bool) Stack[-11] < Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x196: Stack[-11] = (int) -1
0x197: Return(); Pop(8)

0x198: Push((int) 233)
0x199: Pop(1); Push((bool) Stack[-11] > Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19b: Stack[-11] = (int) -1
0x19c: Return(); Pop(8)

0x19d: Stack[-4] = Stack[-9] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x19e: PushEmpty(int)
0x19f: Call2 0x1e0

0x1a0: Stack[-4] = Stack[-1]
0x1a1: Pop(1)
0x1a2: Stack[-2] = Stack[-4] / Stack[-3]; Pop(0);
0x1a3: Pop(0); Push(Stack[-2] * Stack[-3]);
0x1a4: Stack[-5] = Stack[-5] - Stack[-1]; Pop(1);
0x1a5: @@ size(Stack[-1])
0x1a6: Pop(0)
0x1a7: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a9: Stack[-11] = (int) -1
0x1aa: Return(); Pop(8)

0x1ab: PushEmpty(bool)
0x1ac: Stack[-1] = (bool) 0
0x1ad: Push((int) 67)
0x1ae: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b0: Push((int) 91)
0x1b1: Pop(1); Push((bool) Stack[-6] <= Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b3: Stack[-1] = (bool) 1
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b5: Stack[-11] = Stack[-2]
0x1b6: Return(); Pop(8)

0x1b7: Stack[-11] = (int) -1
0x1b8: Return(); Pop(8)

0x1b9: PushEmpty(int, int, int, int, int, int, int, int)
0x1ba: Push((int) 248)
0x1bb: Pop(1); Push((bool) Stack[-11] < Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1bd: Stack[-11] = (int) -1
0x1be: Return(); Pop(8)

0x1bf: Push((int) 268)
0x1c0: Pop(1); Push((bool) Stack[-11] > Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c2: Stack[-11] = (int) -1
0x1c3: Return(); Pop(8)

0x1c4: Stack[-4] = Stack[-9] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1c5: PushEmpty(int)
0x1c6: Call2 0x1e0

0x1c7: Stack[-4] = Stack[-1]
0x1c8: Pop(1)
0x1c9: Stack[-2] = Stack[-4] / Stack[-3]; Pop(0);
0x1ca: Pop(0); Push(Stack[-2] * Stack[-3]);
0x1cb: Stack[-5] = Stack[-5] - Stack[-1]; Pop(1);
0x1cc: @@ size(Stack[-1])
0x1cd: Pop(0)
0x1ce: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d0: Stack[-11] = (int) -1
0x1d1: Return(); Pop(8)

0x1d2: PushEmpty(bool)
0x1d3: Stack[-1] = (bool) 0
0x1d4: Push((int) 68)
0x1d5: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d7: Push((int) 91)
0x1d8: Pop(1); Push((bool) Stack[-6] <= Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1da: Stack[-1] = (bool) 1
0x1db: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dc: Stack[-11] = Stack[-2]
0x1dd: Return(); Pop(8)

0x1de: Stack[-11] = (int) -1
0x1df: Return(); Pop(8)

0x1e0: Stack[-1] = (int) 121
0x1e1: Return(); Pop(0)

0x1e2: PushEmpty(int, int)
0x1e3: @@ size(Stack[-1])
0x1e4: Pop(0)
0x1e5: PushEmpty(int)
0x1e6: Call2 0x1e0

0x1e7: Pop(0)
0x1e8: Stack[-4] = Stack[-2] * Stack[-1]; Pop(1);
0x1e9: Return(); Pop(2)

0x1ea: PushEmpty(int, int)
0x1eb: PushEmpty(int)
0x1ec: Call2 0x1e2

0x1ed: Pop(0)
0x1ee: Stack[-2] = Stack[-1] - Stack[5 + Tasks[-1].StackPointer]; Pop(1);
0x1ef: Push((int) 0)
0x1f0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1f2: Stack[-1] = (int) 0
0x1f3: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x1f4: Pop(1); Push((bool) Stack[-1] > Stack[-2])
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f6: Stack[1 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(0);
0x1f7: GOTO 0x1fc

0x1f8: Push((int) 0)
0x1f9: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fb: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1fc: Push((int) 0)
0x1fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1ff: Push((int) 16384)
0x200: Push("scrollbar")
0x201: @ SendMessage(Stack[-2], Stack[-1])
0x202: Pop(2)
0x203: GOTO 0x20b

0x204: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x205: Push((int) 100)
0x206: Pop(2); Push(Stack[-2] * Stack[-1]);
0x207: Pop(1); Push(Stack[-1] / Stack[-2]);
0x208: Push("scrollbar")
0x209: @ SendMessage(Stack[-2], Stack[-1])
0x20a: Pop(2)
0x20b: Return(); Pop(2)

0x20c: PushEmpty(string, string)
0x20d: @ GetStringByID(Stack[-1], Stack[-3])
0x20e: Pop(0)
0x20f: Stack[-4] = Stack[-1]
0x210: Return(); Pop(2)

0x211: PushEmpty(string, float, int, int, int, string, float, int, int, int)
0x212: @@ GetGameTime(Stack[-4])
0x213: Pop(0)
0x214: Push((int) 24)
0x215: Stack[-4] = Stack[-5] / Stack[-1]; Pop(1);
0x216: Push((int) 24)
0x217: Pop(1); Push(Stack[-4] * Stack[-1]);
0x218: Stack[-3] = Stack[-5] - Stack[-1]; Pop(1);
0x219: Push((int) 24)
0x21a: Pop(1); Push(Stack[-4] * Stack[-1]);
0x21b: Pop(1); Push(Stack[-5] - Stack[-1]);
0x21c: Pop(1); Push(Stack[-1] - Stack[-3]);
0x21d: Push((int) 60)
0x21e: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x21f: PushEmpty(string, int)
0x220: Stack[-1] = (int) 18
0x221: Call2 0x20c

0x222: Pop(1)
0x223: Push((int) 1)
0x224: Pop(1); Push(Stack[-5] + Stack[-1]);
0x225: @ format(Stack[-7], Stack[-2], Stack[-1], Stack[-4], Stack[-3])
0x226: Pop(2)
0x227: Stack[-12] = Stack[-5]
0x228: Return(); Pop(10)

0x229: PushEmpty(string, int, int, int, int, int, string, int, int, int, int, int)
0x22a: @@ GetSaveTime(Stack[-5], Stack[-4], Stack[-3], Stack[-1], Stack[-2])
0x22b: Pop(0)
0x22c: PushEmpty(string, int)
0x22d: Stack[-1] = (int) 19
0x22e: Call2 0x20c

0x22f: Pop(1)
0x230: PushEmpty(string, int)
0x231: Push((int) 20)
0x232: Stack[-2] = Stack[-1] + Stack[-5]; Pop(1);
0x233: Call2 0x20c

0x234: Pop(1)
0x235: @ format(Stack[-8], Stack[-2], Stack[-4], Stack[-1], Stack[-5], Stack[-6], Stack[-7])
0x236: Pop(2)
0x237: Stack[-14] = Stack[-6]
0x238: Return(); Pop(12)

