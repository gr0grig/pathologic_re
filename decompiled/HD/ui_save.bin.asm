GlobalVarCount = 0

Strings:
	save
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
	SendMessage (2 args)
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
	GetStringByID (2 args)
	format (5 args)
	format (7 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, int, int, int, int, int, int, int, object, object, object) Params = 0
		EVENT_101 Op = 0xa Vars = (int)
		EVENT_102 Op = 0x1b Vars = (int)
		EVENT_100 Op = 0x44 Vars = (int)
		EVENT_0 Op = 0x83 Vars = ()
		EVENT_200 Op = 0x159 Vars = (int, string, object)
		EVENT_15 Op = 0x177 Vars = (int, int, float)
		EVENT_2 Op = 0x19d Vars = (int, int)
		EVENT_3 Op = 0x1ab Vars = (int, int)


0x0: @ CaptureKeyboard()
0x1: Pop(0)
0x2: Push((bool) 1)
0x3: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x4: PushEmpty(bool)
0x5: Stack[-1] = (bool) 1
0x6: Call2 0x49

0x7: Pop(1)
0x8: GOTO 0x2

0x9: Return(); Pop(0)

0xa: PushEmpty()
0xb: Push((int) 267)
0xc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xe: Push((int) 1001)
0xf: Push("save")
0x10: @ SendMessage(Stack[-2], Stack[-1])
0x11: Pop(2)
0x12: GOTO 0x1a

0x13: Push((int) 268)
0x14: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x16: Push((int) 1000)
0x17: Push("save")
0x18: @ SendMessage(Stack[-2], Stack[-1])
0x19: Pop(2)
0x1a: Return(); Pop(0)

0x1b: PushEmpty()
0x1c: Push((int) 272)
0x1d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x1f: Push((int) 1001)
0x20: Push("save")
0x21: @ SendMessage(Stack[-2], Stack[-1])
0x22: Pop(2)
0x23: GOTO 0x2b

0x24: Push((int) 274)
0x25: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x27: Push((int) 1000)
0x28: Push("save")
0x29: @ SendMessage(Stack[-2], Stack[-1])
0x2a: Pop(2)
0x2b: Return(); Pop(0)

0x2c: PushEmpty()
0x2d: Pop(0); Push((bool) Stack[-3] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2f: Push("button_save")
0x30: @ Blit(Stack[-1], Stack[-3], Stack[-2])
0x31: Pop(1)
0x32: GOTO 0x36

0x33: Push("button_overwrite")
0x34: @ Blit(Stack[-1], Stack[-3], Stack[-2])
0x35: Pop(1)
0x36: Return(); Pop(0)

0x37: PushEmpty()
0x38: Push((int) 0)
0x39: @ SendMessageToParent(Stack[-1], Stack[-2])
0x3a: Pop(1)
0x3b: Return(); Pop(0)

0x3c: PushEmpty(string, string)
0x3d: @@ GetFileName(Stack[-1])
0x3e: Pop(0)
0x3f: @ DeleteGame(Stack[-1])
0x40: Pop(0)
0x41: @ StopEventProcessing()
0x42: Pop(0)
0x43: Return(); Pop(2)

0x44: PushEmpty()
0x45: Push((int) 1)
0x46: @ SendMessageToParent(Stack[-1])
0x47: Pop(1)
0x48: Return(); Pop(0)

0x49: PushEmpty(object, object, bool, object, object, bool)
0x4a: Stack[2 + Tasks[-1].StackPointer] = (int)-1
0x4b: Stack[3 + Tasks[-1].StackPointer] = (int)-1
0x4c: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x4d: @ CreateSaveEnumerator(Stack[-8])
0x4e: Pop(0)
0x4f: Pop(0); Push((bool) Stack[8 + Tasks[-1].StackPointer] == 0)
0x50: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x51: Return(); Pop(6)

0x52: @ CreateObjectVector(Stack[-9])
0x53: Pop(0)
0x54: Push(Stack[-7])
0x55: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x56: Stack[-3] = 0
0x57: @@ add(Stack[-3])
0x58: Pop(0)
0x59: Stack[-3] = 0
0x5a: Push((int) 1)
0x5b: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x5c: @@ Next(Stack[-2])
0x5d: Pop(0)
0x5e: Pop(0); Push((bool) Stack[-2] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x60: GOTO 0x6c

0x61: Push(Stack[-7])
0x62: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x63: @@ IsQuickSave(Stack[-1])
0x64: Pop(0)
0x65: Push(Stack[-1])
0x66: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x67: GOTO 0x5a

0x68: @@ add(Stack[-2])
0x69: Pop(0)
0x6a: Stack[-2] = 0
0x6b: GOTO 0x5a

0x6c: @ GetWindowSize(Stack[-4], Stack[-5])
0x6d: Pop(0)
0x6e: Stack[6 + Tasks[-1].StackPointer] = (int)0
0x6f: Stack[7 + Tasks[-1].StackPointer] = (int)0
0x70: @ ClientToScreen(Stack[-6], Stack[-7])
0x71: Pop(0)
0x72: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x73: Push((bool) 1)
0x74: @ EnableClipping(Stack[-1])
0x75: Pop(1)
0x76: Push((bool) 1)
0x77: @ SetOwnerDraw(Stack[-1])
0x78: Pop(1)
0x79: Push("sys_border.xml")
0x7a: Push((bool) 0)
0x7b: @ CreateWindow(Stack[-2], Stack[-1], Stack[-10])
0x7c: Pop(2)
0x7d: PushEmpty()
0x7e: Call2 0x234

0x7f: Pop(0)
0x80: @ ProcessEvents()
0x81: Pop(0)
0x82: Return(); Pop(6)

0x83: PushEmpty(int)
0x84: PushEmpty(int, int)
0x85: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86: Call2 0x8c

0x87: Stack[-3] = Stack[-2]
0x88: Pop(2)
0x89: Call2 0x8f

0x8a: Pop(1)
0x8b: Return(); Pop(0)

0x8c: PushEmpty()
0x8d: Stack[-2] = Stack[-1]
0x8e: Return(); Pop(0)

0x8f: PushEmpty(int, int, object, int, int, bool, string, bool, int, string, int, int, object, int, int, bool, string, bool, int, string)
0x90: @@ size(Stack[-10])
0x91: Pop(0)
0x92: Stack[-9] = (int) 0
0x93: Pop(0); Push((bool) Stack[-9] < Stack[-10])
0x94: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x95: @@ get(Stack[-8], Stack[-9])
0x96: Pop(0)
0x97: Stack[-7] = (int) 0
0x98: Stack[-6] = Stack[-21]
0x99: @ ClientToScreen(Stack[-7], Stack[-6])
0x9a: Pop(0)
0x9b: Push(Stack[-8])
0x9c: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0x9d: @@ BlitClipped(Stack[-7], Stack[-6], Stack[-6], Stack[-7], Stack[-4], Stack[-5])
0x9e: Pop(0)
0x9f: PushEmpty(int, int, bool)
0xa0: Stack[-3] = (int) 0
0xa1: Stack[-2] = Stack[-24]
0xa2: Stack[-1] = (bool) 0
0xa3: Call2 0x134

0xa4: Pop(3)
0xa5: @@ IsQuickSave(Stack[-5])
0xa6: Pop(0)
0xa7: Push(Stack[-5])
0xa8: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa9: Push("default")
0xaa: Push((int) 129)
0xab: Push((int) 7)
0xac: Pop(1); Push(Stack[-1] + Stack[-24]);
0xad: PushEmpty(string, int)
0xae: Stack[-1] = (int) 17
0xaf: Call2 0x256

0xb0: Pop(1)
0xb1: Push((float)0.55686)
0xb2: Push((float)0.55686)
0xb3: Push((float)0.55686)
0xb4: @ Print(Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(7)
0xb6: GOTO 0xcd

0xb7: Push((int) 0)
0xb8: @@ GetProperty(Stack[-1], Stack[-4], Stack[-3])
0xb9: Pop(1)
0xba: Push(Stack[-3])
0xbb: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbc: PushEmpty(string, int)
0xbd: Push((int) 500)
0xbe: Stack[-2] = Stack[-1] + Stack[-5]; Pop(1);
0xbf: Call2 0x256

0xc0: Stack[-6] = Stack[-2]
0xc1: Pop(2)
0xc2: GOTO 0xc4

0xc3: Stack[-4] = "????"
0xc4: Push("default")
0xc5: Push((int) 129)
0xc6: Push((int) 7)
0xc7: Pop(1); Push(Stack[-1] + Stack[-24]);
0xc8: Push((float)0.55686)
0xc9: Push((float)0.55686)
0xca: Push((float)0.55686)
0xcb: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-10], Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(6)
0xcd: PushEmpty(string, object)
0xce: Stack[-1] = Stack[-10]
0xcf: Call2 0x25b

0xd0: Stack[-3] = Stack[-2]
0xd1: Pop(2)
0xd2: Push("big")
0xd3: Push((int) 129)
0xd4: Push((int) 28)
0xd5: Pop(1); Push(Stack[-1] + Stack[-24]);
0xd6: Push((float)1.0)
0xd7: Push((float)1.0)
0xd8: Push((float)1.0)
0xd9: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0xda: Pop(6)
0xdb: PushEmpty(string, object)
0xdc: Stack[-1] = Stack[-10]
0xdd: Call2 0x273

0xde: Stack[-3] = Stack[-2]
0xdf: Pop(2)
0xe0: Push("default")
0xe1: Push((int) 129)
0xe2: Push((int) 47)
0xe3: Pop(1); Push(Stack[-1] + Stack[-24]);
0xe4: Push((float)0.55686)
0xe5: Push((float)0.55686)
0xe6: Push((float)0.55686)
0xe7: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(6)
0xe9: Push( Stack[0 + Tasks[-1].StackPointer] )
0xea: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xeb: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-9])
0xec: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xed: Push("button_x_pressed")
0xee: Push((int) 248)
0xef: Push((int) 68)
0xf0: Pop(1); Push(Stack[-1] + Stack[-24]);
0xf1: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: GOTO 0xfa

0xf4: Push("button_x")
0xf5: Push((int) 248)
0xf6: Push((int) 68)
0xf7: Pop(1); Push(Stack[-1] + Stack[-24]);
0xf8: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0xf9: Pop(3)
0xfa: GOTO 0x10e

0xfb: PushEmpty(int, int, bool)
0xfc: Stack[-3] = (int) 0
0xfd: Stack[-2] = Stack[-24]
0xfe: Stack[-1] = (bool) 1
0xff: Call2 0x134

0x100: Pop(3)
0x101: Push("default")
0x102: Push((int) 129)
0x103: Push((int) 47)
0x104: Pop(1); Push(Stack[-1] + Stack[-24]);
0x105: PushEmpty(string, int)
0x106: Stack[-1] = (int) 32
0x107: Call2 0x256

0x108: Pop(1)
0x109: Push((float)0.55686)
0x10a: Push((float)0.55686)
0x10b: Push((float)0.55686)
0x10c: @ Print(Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(7)
0x10e: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-9])
0x10f: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x110: Push("button_pressed")
0x111: Push((int) 129)
0x112: Push((int) 67)
0x113: Pop(1); Push(Stack[-1] + Stack[-24]);
0x114: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(3)
0x116: GOTO 0x11d

0x117: Push("button")
0x118: Push((int) 129)
0x119: Push((int) 67)
0x11a: Pop(1); Push(Stack[-1] + Stack[-24]);
0x11b: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: PushEmpty(object, int, int)
0x11e: Stack[-3] = Stack[-11]
0x11f: Stack[-2] = (int) 129
0x120: Push((int) 67)
0x121: Stack[-2] = Stack[-1] + Stack[-25]; Pop(1);
0x122: Call2 0x2c

0x123: Pop(3)
0x124: Push((int) 90)
0x125: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x126: Push("separator")
0x127: Push((int) 0)
0x128: Push((int) 15)
0x129: Pop(1); Push(Stack[-24] + Stack[-1]);
0x12a: Push((int) 1)
0x12b: @ StretchBlit(Stack[-4], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x12c: Pop(4)
0x12d: Push((int) 31)
0x12e: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x12f: Stack[-8] = 0
0x130: Push((int) 1)
0x131: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x132: GOTO 0x93

0x133: Return(); Pop(20)

0x134: PushEmpty()
0x135: Push(Stack[-1])
0x136: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x137: Push("shot_black")
0x138: Push((int) 120)
0x139: Push((int) 90)
0x13a: @ StretchBlit(Stack[-3], Stack[-6], Stack[-5], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Push("shot_border")
0x13d: Push((int) 120)
0x13e: Push((int) 1)
0x13f: @ StretchBlit(Stack[-3], Stack[-6], Stack[-5], Stack[-2], Stack[-1])
0x140: Pop(3)
0x141: Push("shot_border")
0x142: Push((int) 90)
0x143: Pop(1); Push(Stack[-4] + Stack[-1]);
0x144: Push((int) 1)
0x145: Pop(2); Push(Stack[-2] - Stack[-1]);
0x146: Push((int) 120)
0x147: Push((int) 1)
0x148: @ StretchBlit(Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x149: Pop(4)
0x14a: Push("shot_border")
0x14b: Push((int) 1)
0x14c: Push((int) 90)
0x14d: @ StretchBlit(Stack[-3], Stack[-6], Stack[-5], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: Push("shot_border")
0x150: Push((int) 120)
0x151: Pop(1); Push(Stack[-5] + Stack[-1]);
0x152: Push((int) 1)
0x153: Pop(2); Push(Stack[-2] - Stack[-1]);
0x154: Push((int) 1)
0x155: Push((int) 90)
0x156: @ StretchBlit(Stack[-4], Stack[-3], Stack[-6], Stack[-2], Stack[-1])
0x157: Pop(4)
0x158: Return(); Pop(0)

0x159: PushEmpty()
0x15a: Push("scrollbar")
0x15b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x15d: Pop(0); Push(( -Stack[-3])
0x15e: PushEmpty(int)
0x15f: Call2 0x22c

0x160: Pop(0)
0x161: Pop(1); Push(Stack[-1] - Stack[5 + StackPtr]);
0x162: Pop(2); Push(Stack[-2] * Stack[-1]);
0x163: Push((int) 100)
0x164: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x165: PushEmpty()
0x166: Call2 0x234

0x167: Pop(0)
0x168: GOTO 0x176

0x169: Push((int) 1000)
0x16a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16c: PushEmpty()
0x16d: Call2 0x190

0x16e: Pop(0)
0x16f: GOTO 0x176

0x170: Push((int) 1001)
0x171: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x173: PushEmpty()
0x174: Call2 0x183

0x175: Pop(0)
0x176: Return(); Pop(0)

0x177: PushEmpty(int, int)
0x178: PushEmpty(int)
0x179: Call2 0x22a

0x17a: Pop(0)
0x17b: Pop(1); Push(Stack[-4] * Stack[-1]);
0x17c: Push((int) 2)
0x17d: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x17e: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x17f: PushEmpty()
0x180: Call2 0x234

0x181: Pop(0)
0x182: Return(); Pop(2)

0x183: PushEmpty(int, int)
0x184: Push((int) 2)
0x185: PushEmpty(int)
0x186: Call2 0x22a

0x187: Pop(0)
0x188: Pop(2); Push(Stack[-2] * Stack[-1]);
0x189: Push((int) 2)
0x18a: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x18b: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x18c: PushEmpty()
0x18d: Call2 0x234

0x18e: Pop(0)
0x18f: Return(); Pop(2)

0x190: PushEmpty(int, int)
0x191: Push((int) -2)
0x192: PushEmpty(int)
0x193: Call2 0x22a

0x194: Pop(0)
0x195: Pop(2); Push(Stack[-2] * Stack[-1]);
0x196: Push((int) 2)
0x197: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x198: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x199: PushEmpty()
0x19a: Call2 0x234

0x19b: Pop(0)
0x19c: Return(); Pop(2)

0x19d: PushEmpty()
0x19e: PushEmpty(int, int, int)
0x19f: Stack[-2] = Stack[-5]
0x1a0: Stack[-1] = Stack[-4]
0x1a1: Call2 0x1dc

0x1a2: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x1a3: Pop(3)
0x1a4: PushEmpty(int, int, int)
0x1a5: Stack[-2] = Stack[-5]
0x1a6: Stack[-1] = Stack[-4]
0x1a7: Call2 0x203

0x1a8: Stack[3 + Tasks[-1].StackPointer] = Stack[-3]
0x1a9: Pop(3)
0x1aa: Return(); Pop(0)

0x1ab: PushEmpty(object, object, object, object)
0x1ac: Push((int) -1)
0x1ad: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] != Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1af: PushEmpty(int, int, int)
0x1b0: Stack[-2] = Stack[-9]
0x1b1: Stack[-1] = Stack[-8]
0x1b2: Call2 0x1dc

0x1b3: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x1b4: Pop(3)
0x1b5: Push((int) -1)
0x1b6: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] != Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1b8: @@ get(Stack[-2], Stack[-2])
0x1b9: Pop(0)
0x1ba: PushEmpty(object)
0x1bb: Stack[-1] = Stack[-3]
0x1bc: Call2 0x37

0x1bd: Pop(1)
0x1be: Stack[-2] = 0
0x1bf: GOTO 0x1db

0x1c0: PushEmpty(bool)
0x1c1: Stack[-1] = (bool) 0
0x1c2: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c4: Push((int) -1)
0x1c5: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] != Stack[-1])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: Stack[-1] = (bool) 1
0x1c8: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1c9: PushEmpty(int, int, int)
0x1ca: Stack[-2] = Stack[-9]
0x1cb: Stack[-1] = Stack[-8]
0x1cc: Call2 0x203

0x1cd: Stack[3 + Tasks[-1].StackPointer] = Stack[-3]
0x1ce: Pop(3)
0x1cf: Push((int) -1)
0x1d0: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] != Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d2: @@ get(Stack[-1], Stack[-3])
0x1d3: Pop(0)
0x1d4: Push(Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d6: PushEmpty(object)
0x1d7: Stack[-1] = Stack[-2]
0x1d8: Call2 0x3c

0x1d9: Pop(1)
0x1da: Stack[-1] = 0
0x1db: Return(); Pop(4)

0x1dc: PushEmpty(int, int, int, int, int, int, int, int)
0x1dd: Push((int) 129)
0x1de: Pop(1); Push((bool) Stack[-11] < Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e0: Stack[-11] = (int) -1
0x1e1: Return(); Pop(8)

0x1e2: Push((int) 233)
0x1e3: Pop(1); Push((bool) Stack[-11] > Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e5: Stack[-11] = (int) -1
0x1e6: Return(); Pop(8)

0x1e7: Stack[-4] = Stack[-9] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1e8: PushEmpty(int)
0x1e9: Call2 0x22a

0x1ea: Stack[-4] = Stack[-1]
0x1eb: Pop(1)
0x1ec: Stack[-2] = Stack[-4] / Stack[-3]; Pop(0);
0x1ed: Pop(0); Push(Stack[-2] * Stack[-3]);
0x1ee: Stack[-5] = Stack[-5] - Stack[-1]; Pop(1);
0x1ef: @@ size(Stack[-1])
0x1f0: Pop(0)
0x1f1: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f3: Stack[-11] = (int) -1
0x1f4: Return(); Pop(8)

0x1f5: PushEmpty(bool)
0x1f6: Stack[-1] = (bool) 0
0x1f7: Push((int) 67)
0x1f8: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fa: Push((int) 91)
0x1fb: Pop(1); Push((bool) Stack[-6] <= Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fd: Stack[-1] = (bool) 1
0x1fe: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1ff: Stack[-11] = Stack[-2]
0x200: Return(); Pop(8)

0x201: Stack[-11] = (int) -1
0x202: Return(); Pop(8)

0x203: PushEmpty(int, int, int, int, int, int, int, int)
0x204: Push((int) 248)
0x205: Pop(1); Push((bool) Stack[-11] < Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x207: Stack[-11] = (int) -1
0x208: Return(); Pop(8)

0x209: Push((int) 268)
0x20a: Pop(1); Push((bool) Stack[-11] > Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20c: Stack[-11] = (int) -1
0x20d: Return(); Pop(8)

0x20e: Stack[-4] = Stack[-9] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x20f: PushEmpty(int)
0x210: Call2 0x22a

0x211: Stack[-4] = Stack[-1]
0x212: Pop(1)
0x213: Stack[-2] = Stack[-4] / Stack[-3]; Pop(0);
0x214: Pop(0); Push(Stack[-2] * Stack[-3]);
0x215: Stack[-5] = Stack[-5] - Stack[-1]; Pop(1);
0x216: @@ size(Stack[-1])
0x217: Pop(0)
0x218: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x219: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21a: Stack[-11] = (int) -1
0x21b: Return(); Pop(8)

0x21c: PushEmpty(bool)
0x21d: Stack[-1] = (bool) 0
0x21e: Push((int) 68)
0x21f: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0x220: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x221: Push((int) 91)
0x222: Pop(1); Push((bool) Stack[-6] <= Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x224: Stack[-1] = (bool) 1
0x225: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x226: Stack[-11] = Stack[-2]
0x227: Return(); Pop(8)

0x228: Stack[-11] = (int) -1
0x229: Return(); Pop(8)

0x22a: Stack[-1] = (int) 121
0x22b: Return(); Pop(0)

0x22c: PushEmpty(int, int)
0x22d: @@ size(Stack[-1])
0x22e: Pop(0)
0x22f: PushEmpty(int)
0x230: Call2 0x22a

0x231: Pop(0)
0x232: Stack[-4] = Stack[-2] * Stack[-1]; Pop(1);
0x233: Return(); Pop(2)

0x234: PushEmpty(int, int)
0x235: PushEmpty(int)
0x236: Call2 0x22c

0x237: Pop(0)
0x238: Stack[-2] = Stack[-1] - Stack[5 + Tasks[-1].StackPointer]; Pop(1);
0x239: Push((int) 0)
0x23a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23c: Stack[-1] = (int) 0
0x23d: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x23e: Pop(1); Push((bool) Stack[-1] > Stack[-2])
0x23f: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x240: Stack[1 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(0);
0x241: GOTO 0x246

0x242: Push((int) 0)
0x243: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x246: Push((int) 0)
0x247: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x248: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x249: Push((int) 16384)
0x24a: Push("scrollbar")
0x24b: @ SendMessage(Stack[-2], Stack[-1])
0x24c: Pop(2)
0x24d: GOTO 0x255

0x24e: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x24f: Push((int) 100)
0x250: Pop(2); Push(Stack[-2] * Stack[-1]);
0x251: Pop(1); Push(Stack[-1] / Stack[-2]);
0x252: Push("scrollbar")
0x253: @ SendMessage(Stack[-2], Stack[-1])
0x254: Pop(2)
0x255: Return(); Pop(2)

0x256: PushEmpty(string, string)
0x257: @ GetStringByID(Stack[-1], Stack[-3])
0x258: Pop(0)
0x259: Stack[-4] = Stack[-1]
0x25a: Return(); Pop(2)

0x25b: PushEmpty(string, float, int, int, int, string, float, int, int, int)
0x25c: @@ GetGameTime(Stack[-4])
0x25d: Pop(0)
0x25e: Push((int) 24)
0x25f: Stack[-4] = Stack[-5] / Stack[-1]; Pop(1);
0x260: Push((int) 24)
0x261: Pop(1); Push(Stack[-4] * Stack[-1]);
0x262: Stack[-3] = Stack[-5] - Stack[-1]; Pop(1);
0x263: Push((int) 24)
0x264: Pop(1); Push(Stack[-4] * Stack[-1]);
0x265: Pop(1); Push(Stack[-5] - Stack[-1]);
0x266: Pop(1); Push(Stack[-1] - Stack[-3]);
0x267: Push((int) 60)
0x268: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x269: PushEmpty(string, int)
0x26a: Stack[-1] = (int) 18
0x26b: Call2 0x256

0x26c: Pop(1)
0x26d: Push((int) 1)
0x26e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x26f: @ format(Stack[-7], Stack[-2], Stack[-1], Stack[-4], Stack[-3])
0x270: Pop(2)
0x271: Stack[-12] = Stack[-5]
0x272: Return(); Pop(10)

0x273: PushEmpty(string, int, int, int, int, int, string, int, int, int, int, int)
0x274: @@ GetSaveTime(Stack[-5], Stack[-4], Stack[-3], Stack[-1], Stack[-2])
0x275: Pop(0)
0x276: PushEmpty(string, int)
0x277: Stack[-1] = (int) 19
0x278: Call2 0x256

0x279: Pop(1)
0x27a: PushEmpty(string, int)
0x27b: Push((int) 20)
0x27c: Stack[-2] = Stack[-1] + Stack[-5]; Pop(1);
0x27d: Call2 0x256

0x27e: Pop(1)
0x27f: @ format(Stack[-8], Stack[-2], Stack[-4], Stack[-1], Stack[-5], Stack[-6], Stack[-7])
0x280: Pop(2)
0x281: Stack[-14] = Stack[-6]
0x282: Return(); Pop(12)

