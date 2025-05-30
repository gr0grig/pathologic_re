GlobalVarCount = 0

Strings:
	button_text
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
		EVENT_100 Op = 0x1c Vars = (int)
		EVENT_0 Op = 0x5b Vars = ()
		EVENT_200 Op = 0x131 Vars = (int, string, object)
		EVENT_15 Op = 0x141 Vars = (int, int, float)
		EVENT_2 Op = 0x14d Vars = (int, int)
		EVENT_3 Op = 0x15b Vars = (int, int)


0x0: @ CaptureKeyboard()
0x1: Pop(0)
0x2: Push((bool) 1)
0x3: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x4: PushEmpty(bool)
0x5: Stack[-1] = (bool) 0
0x6: Call2 0x21

0x7: Pop(1)
0x8: GOTO 0x2

0x9: Return(); Pop(0)

0xa: PushEmpty()
0xb: Push("button_text")
0xc: @ Blit(Stack[-1], Stack[-3], Stack[-2])
0xd: Pop(1)
0xe: Return(); Pop(0)

0xf: PushEmpty()
0x10: Push((int) 0)
0x11: @ SendMessageToParent(Stack[-1], Stack[-2])
0x12: Pop(1)
0x13: Return(); Pop(0)

0x14: PushEmpty(string, string)
0x15: @@ GetFileName(Stack[-1])
0x16: Pop(0)
0x17: @ DeleteGame(Stack[-1])
0x18: Pop(0)
0x19: @ StopEventProcessing()
0x1a: Pop(0)
0x1b: Return(); Pop(2)

0x1c: PushEmpty()
0x1d: Push((int) 1)
0x1e: @ SendMessageToParent(Stack[-1])
0x1f: Pop(1)
0x20: Return(); Pop(0)

0x21: PushEmpty(object, object, bool, object, object, bool)
0x22: Stack[2 + Tasks[-1].StackPointer] = (int)-1
0x23: Stack[3 + Tasks[-1].StackPointer] = (int)-1
0x24: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x25: @ CreateSaveEnumerator(Stack[-8])
0x26: Pop(0)
0x27: Pop(0); Push((bool) Stack[8 + Tasks[-1].StackPointer] == 0)
0x28: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x29: Return(); Pop(6)

0x2a: @ CreateObjectVector(Stack[-9])
0x2b: Pop(0)
0x2c: Push(Stack[-7])
0x2d: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2e: Stack[-3] = 0
0x2f: @@ add(Stack[-3])
0x30: Pop(0)
0x31: Stack[-3] = 0
0x32: Push((int) 1)
0x33: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x34: @@ Next(Stack[-2])
0x35: Pop(0)
0x36: Pop(0); Push((bool) Stack[-2] == 0)
0x37: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x38: GOTO 0x44

0x39: Push(Stack[-7])
0x3a: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3b: @@ IsQuickSave(Stack[-1])
0x3c: Pop(0)
0x3d: Push(Stack[-1])
0x3e: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3f: GOTO 0x32

0x40: @@ add(Stack[-2])
0x41: Pop(0)
0x42: Stack[-2] = 0
0x43: GOTO 0x32

0x44: @ GetWindowSize(Stack[-4], Stack[-5])
0x45: Pop(0)
0x46: Stack[6 + Tasks[-1].StackPointer] = (int)0
0x47: Stack[7 + Tasks[-1].StackPointer] = (int)0
0x48: @ ClientToScreen(Stack[-6], Stack[-7])
0x49: Pop(0)
0x4a: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x4b: Push((bool) 1)
0x4c: @ EnableClipping(Stack[-1])
0x4d: Pop(1)
0x4e: Push((bool) 1)
0x4f: @ SetOwnerDraw(Stack[-1])
0x50: Pop(1)
0x51: Push("sys_border.xml")
0x52: Push((bool) 0)
0x53: @ CreateWindow(Stack[-2], Stack[-1], Stack[-10])
0x54: Pop(2)
0x55: PushEmpty()
0x56: Call2 0x1e4

0x57: Pop(0)
0x58: @ ProcessEvents()
0x59: Pop(0)
0x5a: Return(); Pop(6)

0x5b: PushEmpty(int)
0x5c: PushEmpty(int, int)
0x5d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Call2 0x64

0x5f: Stack[-3] = Stack[-2]
0x60: Pop(2)
0x61: Call2 0x67

0x62: Pop(1)
0x63: Return(); Pop(0)

0x64: PushEmpty()
0x65: Stack[-2] = Stack[-1]
0x66: Return(); Pop(0)

0x67: PushEmpty(int, int, object, int, int, bool, string, bool, int, string, int, int, object, int, int, bool, string, bool, int, string)
0x68: @@ size(Stack[-10])
0x69: Pop(0)
0x6a: Stack[-9] = (int) 0
0x6b: Pop(0); Push((bool) Stack[-9] < Stack[-10])
0x6c: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x6d: @@ get(Stack[-8], Stack[-9])
0x6e: Pop(0)
0x6f: Stack[-7] = (int) 0
0x70: Stack[-6] = Stack[-21]
0x71: @ ClientToScreen(Stack[-7], Stack[-6])
0x72: Pop(0)
0x73: Push(Stack[-8])
0x74: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0x75: @@ BlitClipped(Stack[-7], Stack[-6], Stack[-6], Stack[-7], Stack[-4], Stack[-5])
0x76: Pop(0)
0x77: PushEmpty(int, int, bool)
0x78: Stack[-3] = (int) 0
0x79: Stack[-2] = Stack[-24]
0x7a: Stack[-1] = (bool) 0
0x7b: Call2 0x10c

0x7c: Pop(3)
0x7d: @@ IsQuickSave(Stack[-5])
0x7e: Pop(0)
0x7f: Push(Stack[-5])
0x80: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x81: Push("default")
0x82: Push((int) 129)
0x83: Push((int) 7)
0x84: Pop(1); Push(Stack[-1] + Stack[-24]);
0x85: PushEmpty(string, int)
0x86: Stack[-1] = (int) 17
0x87: Call2 0x206

0x88: Pop(1)
0x89: Push((float)0.55686)
0x8a: Push((float)0.55686)
0x8b: Push((float)0.55686)
0x8c: @ Print(Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(7)
0x8e: GOTO 0xa5

0x8f: Push((int) 0)
0x90: @@ GetProperty(Stack[-1], Stack[-4], Stack[-3])
0x91: Pop(1)
0x92: Push(Stack[-3])
0x93: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x94: PushEmpty(string, int)
0x95: Push((int) 500)
0x96: Stack[-2] = Stack[-1] + Stack[-5]; Pop(1);
0x97: Call2 0x206

0x98: Stack[-6] = Stack[-2]
0x99: Pop(2)
0x9a: GOTO 0x9c

0x9b: Stack[-4] = "????"
0x9c: Push("default")
0x9d: Push((int) 129)
0x9e: Push((int) 7)
0x9f: Pop(1); Push(Stack[-1] + Stack[-24]);
0xa0: Push((float)0.55686)
0xa1: Push((float)0.55686)
0xa2: Push((float)0.55686)
0xa3: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-10], Stack[-3], Stack[-2], Stack[-1])
0xa4: Pop(6)
0xa5: PushEmpty(string, object)
0xa6: Stack[-1] = Stack[-10]
0xa7: Call2 0x20b

0xa8: Stack[-3] = Stack[-2]
0xa9: Pop(2)
0xaa: Push("big")
0xab: Push((int) 129)
0xac: Push((int) 28)
0xad: Pop(1); Push(Stack[-1] + Stack[-24]);
0xae: Push((float)1.0)
0xaf: Push((float)1.0)
0xb0: Push((float)1.0)
0xb1: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0xb2: Pop(6)
0xb3: PushEmpty(string, object)
0xb4: Stack[-1] = Stack[-10]
0xb5: Call2 0x223

0xb6: Stack[-3] = Stack[-2]
0xb7: Pop(2)
0xb8: Push("default")
0xb9: Push((int) 129)
0xba: Push((int) 47)
0xbb: Pop(1); Push(Stack[-1] + Stack[-24]);
0xbc: Push((float)0.55686)
0xbd: Push((float)0.55686)
0xbe: Push((float)0.55686)
0xbf: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0xc0: Pop(6)
0xc1: Push( Stack[0 + Tasks[-1].StackPointer] )
0xc2: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xc3: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-9])
0xc4: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc5: Push("button_x_pressed")
0xc6: Push((int) 248)
0xc7: Push((int) 68)
0xc8: Pop(1); Push(Stack[-1] + Stack[-24]);
0xc9: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0xca: Pop(3)
0xcb: GOTO 0xd2

0xcc: Push("button_x")
0xcd: Push((int) 248)
0xce: Push((int) 68)
0xcf: Pop(1); Push(Stack[-1] + Stack[-24]);
0xd0: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: GOTO 0xe6

0xd3: PushEmpty(int, int, bool)
0xd4: Stack[-3] = (int) 0
0xd5: Stack[-2] = Stack[-24]
0xd6: Stack[-1] = (bool) 1
0xd7: Call2 0x10c

0xd8: Pop(3)
0xd9: Push("default")
0xda: Push((int) 129)
0xdb: Push((int) 47)
0xdc: Pop(1); Push(Stack[-1] + Stack[-24]);
0xdd: PushEmpty(string, int)
0xde: Stack[-1] = (int) 32
0xdf: Call2 0x206

0xe0: Pop(1)
0xe1: Push((float)0.55686)
0xe2: Push((float)0.55686)
0xe3: Push((float)0.55686)
0xe4: @ Print(Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(7)
0xe6: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-9])
0xe7: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xe8: Push("button_pressed")
0xe9: Push((int) 129)
0xea: Push((int) 67)
0xeb: Pop(1); Push(Stack[-1] + Stack[-24]);
0xec: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: GOTO 0xf5

0xef: Push("button")
0xf0: Push((int) 129)
0xf1: Push((int) 67)
0xf2: Pop(1); Push(Stack[-1] + Stack[-24]);
0xf3: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: PushEmpty(object, int, int)
0xf6: Stack[-3] = Stack[-11]
0xf7: Stack[-2] = (int) 129
0xf8: Push((int) 67)
0xf9: Stack[-2] = Stack[-1] + Stack[-25]; Pop(1);
0xfa: Call2 0xa

0xfb: Pop(3)
0xfc: Push((int) 90)
0xfd: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0xfe: Push("separator")
0xff: Push((int) 0)
0x100: Push((int) 15)
0x101: Pop(1); Push(Stack[-24] + Stack[-1]);
0x102: Push((int) 1)
0x103: @ StretchBlit(Stack[-4], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x104: Pop(4)
0x105: Push((int) 31)
0x106: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x107: Stack[-8] = 0
0x108: Push((int) 1)
0x109: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x10a: GOTO 0x6b

0x10b: Return(); Pop(20)

0x10c: PushEmpty()
0x10d: Push(Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x10f: Push("shot_black")
0x110: Push((int) 120)
0x111: Push((int) 90)
0x112: @ StretchBlit(Stack[-3], Stack[-6], Stack[-5], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Push("shot_border")
0x115: Push((int) 120)
0x116: Push((int) 1)
0x117: @ StretchBlit(Stack[-3], Stack[-6], Stack[-5], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Push("shot_border")
0x11a: Push((int) 90)
0x11b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x11c: Push((int) 1)
0x11d: Pop(2); Push(Stack[-2] - Stack[-1]);
0x11e: Push((int) 120)
0x11f: Push((int) 1)
0x120: @ StretchBlit(Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(4)
0x122: Push("shot_border")
0x123: Push((int) 1)
0x124: Push((int) 90)
0x125: @ StretchBlit(Stack[-3], Stack[-6], Stack[-5], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Push("shot_border")
0x128: Push((int) 120)
0x129: Pop(1); Push(Stack[-5] + Stack[-1]);
0x12a: Push((int) 1)
0x12b: Pop(2); Push(Stack[-2] - Stack[-1]);
0x12c: Push((int) 1)
0x12d: Push((int) 90)
0x12e: @ StretchBlit(Stack[-4], Stack[-3], Stack[-6], Stack[-2], Stack[-1])
0x12f: Pop(4)
0x130: Return(); Pop(0)

0x131: PushEmpty()
0x132: Push("scrollbar")
0x133: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x135: Pop(0); Push(( -Stack[-3])
0x136: PushEmpty(int)
0x137: Call2 0x1dc

0x138: Pop(0)
0x139: Pop(1); Push(Stack[-1] - Stack[5 + StackPtr]);
0x13a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x13b: Push((int) 100)
0x13c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x13d: PushEmpty()
0x13e: Call2 0x1e4

0x13f: Pop(0)
0x140: Return(); Pop(0)

0x141: PushEmpty(int, int)
0x142: PushEmpty(int)
0x143: Call2 0x1da

0x144: Pop(0)
0x145: Pop(1); Push(Stack[-4] * Stack[-1]);
0x146: Push((int) 2)
0x147: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x148: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x149: PushEmpty()
0x14a: Call2 0x1e4

0x14b: Pop(0)
0x14c: Return(); Pop(2)

0x14d: PushEmpty()
0x14e: PushEmpty(int, int, int)
0x14f: Stack[-2] = Stack[-5]
0x150: Stack[-1] = Stack[-4]
0x151: Call2 0x18c

0x152: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x153: Pop(3)
0x154: PushEmpty(int, int, int)
0x155: Stack[-2] = Stack[-5]
0x156: Stack[-1] = Stack[-4]
0x157: Call2 0x1b3

0x158: Stack[3 + Tasks[-1].StackPointer] = Stack[-3]
0x159: Pop(3)
0x15a: Return(); Pop(0)

0x15b: PushEmpty(object, object, object, object)
0x15c: Push((int) -1)
0x15d: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] != Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x15f: PushEmpty(int, int, int)
0x160: Stack[-2] = Stack[-9]
0x161: Stack[-1] = Stack[-8]
0x162: Call2 0x18c

0x163: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x164: Pop(3)
0x165: Push((int) -1)
0x166: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] != Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x168: @@ get(Stack[-2], Stack[-2])
0x169: Pop(0)
0x16a: PushEmpty(object)
0x16b: Stack[-1] = Stack[-3]
0x16c: Call2 0xf

0x16d: Pop(1)
0x16e: Stack[-2] = 0
0x16f: GOTO 0x18b

0x170: PushEmpty(bool)
0x171: Stack[-1] = (bool) 0
0x172: Push( Stack[0 + Tasks[-1].StackPointer] )
0x173: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x174: Push((int) -1)
0x175: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] != Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x177: Stack[-1] = (bool) 1
0x178: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x179: PushEmpty(int, int, int)
0x17a: Stack[-2] = Stack[-9]
0x17b: Stack[-1] = Stack[-8]
0x17c: Call2 0x1b3

0x17d: Stack[3 + Tasks[-1].StackPointer] = Stack[-3]
0x17e: Pop(3)
0x17f: Push((int) -1)
0x180: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] != Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x182: @@ get(Stack[-1], Stack[-3])
0x183: Pop(0)
0x184: Push(Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x186: PushEmpty(object)
0x187: Stack[-1] = Stack[-2]
0x188: Call2 0x14

0x189: Pop(1)
0x18a: Stack[-1] = 0
0x18b: Return(); Pop(4)

0x18c: PushEmpty(int, int, int, int, int, int, int, int)
0x18d: Push((int) 129)
0x18e: Pop(1); Push((bool) Stack[-11] < Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x190: Stack[-11] = (int) -1
0x191: Return(); Pop(8)

0x192: Push((int) 233)
0x193: Pop(1); Push((bool) Stack[-11] > Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x195: Stack[-11] = (int) -1
0x196: Return(); Pop(8)

0x197: Stack[-4] = Stack[-9] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x198: PushEmpty(int)
0x199: Call2 0x1da

0x19a: Stack[-4] = Stack[-1]
0x19b: Pop(1)
0x19c: Stack[-2] = Stack[-4] / Stack[-3]; Pop(0);
0x19d: Pop(0); Push(Stack[-2] * Stack[-3]);
0x19e: Stack[-5] = Stack[-5] - Stack[-1]; Pop(1);
0x19f: @@ size(Stack[-1])
0x1a0: Pop(0)
0x1a1: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a3: Stack[-11] = (int) -1
0x1a4: Return(); Pop(8)

0x1a5: PushEmpty(bool)
0x1a6: Stack[-1] = (bool) 0
0x1a7: Push((int) 67)
0x1a8: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1aa: Push((int) 91)
0x1ab: Pop(1); Push((bool) Stack[-6] <= Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ad: Stack[-1] = (bool) 1
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1af: Stack[-11] = Stack[-2]
0x1b0: Return(); Pop(8)

0x1b1: Stack[-11] = (int) -1
0x1b2: Return(); Pop(8)

0x1b3: PushEmpty(int, int, int, int, int, int, int, int)
0x1b4: Push((int) 248)
0x1b5: Pop(1); Push((bool) Stack[-11] < Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b7: Stack[-11] = (int) -1
0x1b8: Return(); Pop(8)

0x1b9: Push((int) 268)
0x1ba: Pop(1); Push((bool) Stack[-11] > Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bc: Stack[-11] = (int) -1
0x1bd: Return(); Pop(8)

0x1be: Stack[-4] = Stack[-9] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1bf: PushEmpty(int)
0x1c0: Call2 0x1da

0x1c1: Stack[-4] = Stack[-1]
0x1c2: Pop(1)
0x1c3: Stack[-2] = Stack[-4] / Stack[-3]; Pop(0);
0x1c4: Pop(0); Push(Stack[-2] * Stack[-3]);
0x1c5: Stack[-5] = Stack[-5] - Stack[-1]; Pop(1);
0x1c6: @@ size(Stack[-1])
0x1c7: Pop(0)
0x1c8: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1ca: Stack[-11] = (int) -1
0x1cb: Return(); Pop(8)

0x1cc: PushEmpty(bool)
0x1cd: Stack[-1] = (bool) 0
0x1ce: Push((int) 68)
0x1cf: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d1: Push((int) 91)
0x1d2: Pop(1); Push((bool) Stack[-6] <= Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d4: Stack[-1] = (bool) 1
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d6: Stack[-11] = Stack[-2]
0x1d7: Return(); Pop(8)

0x1d8: Stack[-11] = (int) -1
0x1d9: Return(); Pop(8)

0x1da: Stack[-1] = (int) 121
0x1db: Return(); Pop(0)

0x1dc: PushEmpty(int, int)
0x1dd: @@ size(Stack[-1])
0x1de: Pop(0)
0x1df: PushEmpty(int)
0x1e0: Call2 0x1da

0x1e1: Pop(0)
0x1e2: Stack[-4] = Stack[-2] * Stack[-1]; Pop(1);
0x1e3: Return(); Pop(2)

0x1e4: PushEmpty(int, int)
0x1e5: PushEmpty(int)
0x1e6: Call2 0x1dc

0x1e7: Pop(0)
0x1e8: Stack[-2] = Stack[-1] - Stack[5 + Tasks[-1].StackPointer]; Pop(1);
0x1e9: Push((int) 0)
0x1ea: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ec: Stack[-1] = (int) 0
0x1ed: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x1ee: Pop(1); Push((bool) Stack[-1] > Stack[-2])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f0: Stack[1 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(0);
0x1f1: GOTO 0x1f6

0x1f2: Push((int) 0)
0x1f3: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f5: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1f6: Push((int) 0)
0x1f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f9: Push((int) 16384)
0x1fa: Push("scrollbar")
0x1fb: @ SendMessage(Stack[-2], Stack[-1])
0x1fc: Pop(2)
0x1fd: GOTO 0x205

0x1fe: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x1ff: Push((int) 100)
0x200: Pop(2); Push(Stack[-2] * Stack[-1]);
0x201: Pop(1); Push(Stack[-1] / Stack[-2]);
0x202: Push("scrollbar")
0x203: @ SendMessage(Stack[-2], Stack[-1])
0x204: Pop(2)
0x205: Return(); Pop(2)

0x206: PushEmpty(string, string)
0x207: @ GetStringByID(Stack[-1], Stack[-3])
0x208: Pop(0)
0x209: Stack[-4] = Stack[-1]
0x20a: Return(); Pop(2)

0x20b: PushEmpty(string, float, int, int, int, string, float, int, int, int)
0x20c: @@ GetGameTime(Stack[-4])
0x20d: Pop(0)
0x20e: Push((int) 24)
0x20f: Stack[-4] = Stack[-5] / Stack[-1]; Pop(1);
0x210: Push((int) 24)
0x211: Pop(1); Push(Stack[-4] * Stack[-1]);
0x212: Stack[-3] = Stack[-5] - Stack[-1]; Pop(1);
0x213: Push((int) 24)
0x214: Pop(1); Push(Stack[-4] * Stack[-1]);
0x215: Pop(1); Push(Stack[-5] - Stack[-1]);
0x216: Pop(1); Push(Stack[-1] - Stack[-3]);
0x217: Push((int) 60)
0x218: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x219: PushEmpty(string, int)
0x21a: Stack[-1] = (int) 18
0x21b: Call2 0x206

0x21c: Pop(1)
0x21d: Push((int) 1)
0x21e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x21f: @ format(Stack[-7], Stack[-2], Stack[-1], Stack[-4], Stack[-3])
0x220: Pop(2)
0x221: Stack[-12] = Stack[-5]
0x222: Return(); Pop(10)

0x223: PushEmpty(string, int, int, int, int, int, string, int, int, int, int, int)
0x224: @@ GetSaveTime(Stack[-5], Stack[-4], Stack[-3], Stack[-1], Stack[-2])
0x225: Pop(0)
0x226: PushEmpty(string, int)
0x227: Stack[-1] = (int) 19
0x228: Call2 0x206

0x229: Pop(1)
0x22a: PushEmpty(string, int)
0x22b: Push((int) 20)
0x22c: Stack[-2] = Stack[-1] + Stack[-5]; Pop(1);
0x22d: Call2 0x206

0x22e: Pop(1)
0x22f: @ format(Stack[-8], Stack[-2], Stack[-4], Stack[-1], Stack[-5], Stack[-6], Stack[-7])
0x230: Pop(2)
0x231: Stack[-14] = Stack[-6]
0x232: Return(); Pop(12)

