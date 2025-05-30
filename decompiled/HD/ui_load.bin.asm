GlobalVarCount = 0

Strings:
	load
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
		EVENT_100 Op = 0x3e Vars = (int)
		EVENT_0 Op = 0x7d Vars = ()
		EVENT_200 Op = 0x153 Vars = (int, string, object)
		EVENT_15 Op = 0x171 Vars = (int, int, float)
		EVENT_2 Op = 0x197 Vars = (int, int)
		EVENT_3 Op = 0x1a5 Vars = (int, int)


0x0: @ CaptureKeyboard()
0x1: Pop(0)
0x2: Push((bool) 1)
0x3: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x4: PushEmpty(bool)
0x5: Stack[-1] = (bool) 0
0x6: Call2 0x43

0x7: Pop(1)
0x8: GOTO 0x2

0x9: Return(); Pop(0)

0xa: PushEmpty()
0xb: Push((int) 267)
0xc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xe: Push((int) 1001)
0xf: Push("load")
0x10: @ SendMessage(Stack[-2], Stack[-1])
0x11: Pop(2)
0x12: GOTO 0x1a

0x13: Push((int) 268)
0x14: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x16: Push((int) 1000)
0x17: Push("load")
0x18: @ SendMessage(Stack[-2], Stack[-1])
0x19: Pop(2)
0x1a: Return(); Pop(0)

0x1b: PushEmpty()
0x1c: Push((int) 272)
0x1d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x1f: Push((int) 1001)
0x20: Push("load")
0x21: @ SendMessage(Stack[-2], Stack[-1])
0x22: Pop(2)
0x23: GOTO 0x2b

0x24: Push((int) 274)
0x25: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x27: Push((int) 1000)
0x28: Push("load")
0x29: @ SendMessage(Stack[-2], Stack[-1])
0x2a: Pop(2)
0x2b: Return(); Pop(0)

0x2c: PushEmpty()
0x2d: Push("button_text")
0x2e: @ Blit(Stack[-1], Stack[-3], Stack[-2])
0x2f: Pop(1)
0x30: Return(); Pop(0)

0x31: PushEmpty()
0x32: Push((int) 0)
0x33: @ SendMessageToParent(Stack[-1], Stack[-2])
0x34: Pop(1)
0x35: Return(); Pop(0)

0x36: PushEmpty(string, string)
0x37: @@ GetFileName(Stack[-1])
0x38: Pop(0)
0x39: @ DeleteGame(Stack[-1])
0x3a: Pop(0)
0x3b: @ StopEventProcessing()
0x3c: Pop(0)
0x3d: Return(); Pop(2)

0x3e: PushEmpty()
0x3f: Push((int) 1)
0x40: @ SendMessageToParent(Stack[-1])
0x41: Pop(1)
0x42: Return(); Pop(0)

0x43: PushEmpty(object, object, bool, object, object, bool)
0x44: Stack[2 + Tasks[-1].StackPointer] = (int)-1
0x45: Stack[3 + Tasks[-1].StackPointer] = (int)-1
0x46: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x47: @ CreateSaveEnumerator(Stack[-8])
0x48: Pop(0)
0x49: Pop(0); Push((bool) Stack[8 + Tasks[-1].StackPointer] == 0)
0x4a: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x4b: Return(); Pop(6)

0x4c: @ CreateObjectVector(Stack[-9])
0x4d: Pop(0)
0x4e: Push(Stack[-7])
0x4f: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x50: Stack[-3] = 0
0x51: @@ add(Stack[-3])
0x52: Pop(0)
0x53: Stack[-3] = 0
0x54: Push((int) 1)
0x55: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x56: @@ Next(Stack[-2])
0x57: Pop(0)
0x58: Pop(0); Push((bool) Stack[-2] == 0)
0x59: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x5a: GOTO 0x66

0x5b: Push(Stack[-7])
0x5c: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x5d: @@ IsQuickSave(Stack[-1])
0x5e: Pop(0)
0x5f: Push(Stack[-1])
0x60: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x61: GOTO 0x54

0x62: @@ add(Stack[-2])
0x63: Pop(0)
0x64: Stack[-2] = 0
0x65: GOTO 0x54

0x66: @ GetWindowSize(Stack[-4], Stack[-5])
0x67: Pop(0)
0x68: Stack[6 + Tasks[-1].StackPointer] = (int)0
0x69: Stack[7 + Tasks[-1].StackPointer] = (int)0
0x6a: @ ClientToScreen(Stack[-6], Stack[-7])
0x6b: Pop(0)
0x6c: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x6d: Push((bool) 1)
0x6e: @ EnableClipping(Stack[-1])
0x6f: Pop(1)
0x70: Push((bool) 1)
0x71: @ SetOwnerDraw(Stack[-1])
0x72: Pop(1)
0x73: Push("sys_border.xml")
0x74: Push((bool) 0)
0x75: @ CreateWindow(Stack[-2], Stack[-1], Stack[-10])
0x76: Pop(2)
0x77: PushEmpty()
0x78: Call2 0x22e

0x79: Pop(0)
0x7a: @ ProcessEvents()
0x7b: Pop(0)
0x7c: Return(); Pop(6)

0x7d: PushEmpty(int)
0x7e: PushEmpty(int, int)
0x7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80: Call2 0x86

0x81: Stack[-3] = Stack[-2]
0x82: Pop(2)
0x83: Call2 0x89

0x84: Pop(1)
0x85: Return(); Pop(0)

0x86: PushEmpty()
0x87: Stack[-2] = Stack[-1]
0x88: Return(); Pop(0)

0x89: PushEmpty(int, int, object, int, int, bool, string, bool, int, string, int, int, object, int, int, bool, string, bool, int, string)
0x8a: @@ size(Stack[-10])
0x8b: Pop(0)
0x8c: Stack[-9] = (int) 0
0x8d: Pop(0); Push((bool) Stack[-9] < Stack[-10])
0x8e: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x8f: @@ get(Stack[-8], Stack[-9])
0x90: Pop(0)
0x91: Stack[-7] = (int) 0
0x92: Stack[-6] = Stack[-21]
0x93: @ ClientToScreen(Stack[-7], Stack[-6])
0x94: Pop(0)
0x95: Push(Stack[-8])
0x96: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0x97: @@ BlitClipped(Stack[-7], Stack[-6], Stack[-6], Stack[-7], Stack[-4], Stack[-5])
0x98: Pop(0)
0x99: PushEmpty(int, int, bool)
0x9a: Stack[-3] = (int) 0
0x9b: Stack[-2] = Stack[-24]
0x9c: Stack[-1] = (bool) 0
0x9d: Call2 0x12e

0x9e: Pop(3)
0x9f: @@ IsQuickSave(Stack[-5])
0xa0: Pop(0)
0xa1: Push(Stack[-5])
0xa2: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa3: Push("default")
0xa4: Push((int) 129)
0xa5: Push((int) 7)
0xa6: Pop(1); Push(Stack[-1] + Stack[-24]);
0xa7: PushEmpty(string, int)
0xa8: Stack[-1] = (int) 17
0xa9: Call2 0x250

0xaa: Pop(1)
0xab: Push((float)0.55686)
0xac: Push((float)0.55686)
0xad: Push((float)0.55686)
0xae: @ Print(Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xaf: Pop(7)
0xb0: GOTO 0xc7

0xb1: Push((int) 0)
0xb2: @@ GetProperty(Stack[-1], Stack[-4], Stack[-3])
0xb3: Pop(1)
0xb4: Push(Stack[-3])
0xb5: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb6: PushEmpty(string, int)
0xb7: Push((int) 500)
0xb8: Stack[-2] = Stack[-1] + Stack[-5]; Pop(1);
0xb9: Call2 0x250

0xba: Stack[-6] = Stack[-2]
0xbb: Pop(2)
0xbc: GOTO 0xbe

0xbd: Stack[-4] = "????"
0xbe: Push("default")
0xbf: Push((int) 129)
0xc0: Push((int) 7)
0xc1: Pop(1); Push(Stack[-1] + Stack[-24]);
0xc2: Push((float)0.55686)
0xc3: Push((float)0.55686)
0xc4: Push((float)0.55686)
0xc5: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-10], Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(6)
0xc7: PushEmpty(string, object)
0xc8: Stack[-1] = Stack[-10]
0xc9: Call2 0x255

0xca: Stack[-3] = Stack[-2]
0xcb: Pop(2)
0xcc: Push("big")
0xcd: Push((int) 129)
0xce: Push((int) 28)
0xcf: Pop(1); Push(Stack[-1] + Stack[-24]);
0xd0: Push((float)1.0)
0xd1: Push((float)1.0)
0xd2: Push((float)1.0)
0xd3: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0xd4: Pop(6)
0xd5: PushEmpty(string, object)
0xd6: Stack[-1] = Stack[-10]
0xd7: Call2 0x26d

0xd8: Stack[-3] = Stack[-2]
0xd9: Pop(2)
0xda: Push("default")
0xdb: Push((int) 129)
0xdc: Push((int) 47)
0xdd: Pop(1); Push(Stack[-1] + Stack[-24]);
0xde: Push((float)0.55686)
0xdf: Push((float)0.55686)
0xe0: Push((float)0.55686)
0xe1: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0xe2: Pop(6)
0xe3: Push( Stack[0 + Tasks[-1].StackPointer] )
0xe4: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xe5: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-9])
0xe6: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe7: Push("button_x_pressed")
0xe8: Push((int) 248)
0xe9: Push((int) 68)
0xea: Pop(1); Push(Stack[-1] + Stack[-24]);
0xeb: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: GOTO 0xf4

0xee: Push("button_x")
0xef: Push((int) 248)
0xf0: Push((int) 68)
0xf1: Pop(1); Push(Stack[-1] + Stack[-24]);
0xf2: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(3)
0xf4: GOTO 0x108

0xf5: PushEmpty(int, int, bool)
0xf6: Stack[-3] = (int) 0
0xf7: Stack[-2] = Stack[-24]
0xf8: Stack[-1] = (bool) 1
0xf9: Call2 0x12e

0xfa: Pop(3)
0xfb: Push("default")
0xfc: Push((int) 129)
0xfd: Push((int) 47)
0xfe: Pop(1); Push(Stack[-1] + Stack[-24]);
0xff: PushEmpty(string, int)
0x100: Stack[-1] = (int) 32
0x101: Call2 0x250

0x102: Pop(1)
0x103: Push((float)0.55686)
0x104: Push((float)0.55686)
0x105: Push((float)0.55686)
0x106: @ Print(Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(7)
0x108: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-9])
0x109: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10a: Push("button_pressed")
0x10b: Push((int) 129)
0x10c: Push((int) 67)
0x10d: Pop(1); Push(Stack[-1] + Stack[-24]);
0x10e: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x10f: Pop(3)
0x110: GOTO 0x117

0x111: Push("button")
0x112: Push((int) 129)
0x113: Push((int) 67)
0x114: Pop(1); Push(Stack[-1] + Stack[-24]);
0x115: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: PushEmpty(object, int, int)
0x118: Stack[-3] = Stack[-11]
0x119: Stack[-2] = (int) 129
0x11a: Push((int) 67)
0x11b: Stack[-2] = Stack[-1] + Stack[-25]; Pop(1);
0x11c: Call2 0x2c

0x11d: Pop(3)
0x11e: Push((int) 90)
0x11f: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x120: Push("separator")
0x121: Push((int) 0)
0x122: Push((int) 15)
0x123: Pop(1); Push(Stack[-24] + Stack[-1]);
0x124: Push((int) 1)
0x125: @ StretchBlit(Stack[-4], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x126: Pop(4)
0x127: Push((int) 31)
0x128: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x129: Stack[-8] = 0
0x12a: Push((int) 1)
0x12b: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x12c: GOTO 0x8d

0x12d: Return(); Pop(20)

0x12e: PushEmpty()
0x12f: Push(Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x131: Push("shot_black")
0x132: Push((int) 120)
0x133: Push((int) 90)
0x134: @ StretchBlit(Stack[-3], Stack[-6], Stack[-5], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Push("shot_border")
0x137: Push((int) 120)
0x138: Push((int) 1)
0x139: @ StretchBlit(Stack[-3], Stack[-6], Stack[-5], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Push("shot_border")
0x13c: Push((int) 90)
0x13d: Pop(1); Push(Stack[-4] + Stack[-1]);
0x13e: Push((int) 1)
0x13f: Pop(2); Push(Stack[-2] - Stack[-1]);
0x140: Push((int) 120)
0x141: Push((int) 1)
0x142: @ StretchBlit(Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x143: Pop(4)
0x144: Push("shot_border")
0x145: Push((int) 1)
0x146: Push((int) 90)
0x147: @ StretchBlit(Stack[-3], Stack[-6], Stack[-5], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Push("shot_border")
0x14a: Push((int) 120)
0x14b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x14c: Push((int) 1)
0x14d: Pop(2); Push(Stack[-2] - Stack[-1]);
0x14e: Push((int) 1)
0x14f: Push((int) 90)
0x150: @ StretchBlit(Stack[-4], Stack[-3], Stack[-6], Stack[-2], Stack[-1])
0x151: Pop(4)
0x152: Return(); Pop(0)

0x153: PushEmpty()
0x154: Push("scrollbar")
0x155: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x156: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x157: Pop(0); Push(( -Stack[-3])
0x158: PushEmpty(int)
0x159: Call2 0x226

0x15a: Pop(0)
0x15b: Pop(1); Push(Stack[-1] - Stack[5 + StackPtr]);
0x15c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x15d: Push((int) 100)
0x15e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x15f: PushEmpty()
0x160: Call2 0x22e

0x161: Pop(0)
0x162: GOTO 0x170

0x163: Push((int) 1000)
0x164: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x166: PushEmpty()
0x167: Call2 0x18a

0x168: Pop(0)
0x169: GOTO 0x170

0x16a: Push((int) 1001)
0x16b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16d: PushEmpty()
0x16e: Call2 0x17d

0x16f: Pop(0)
0x170: Return(); Pop(0)

0x171: PushEmpty(int, int)
0x172: PushEmpty(int)
0x173: Call2 0x224

0x174: Pop(0)
0x175: Pop(1); Push(Stack[-4] * Stack[-1]);
0x176: Push((int) 2)
0x177: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x178: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x179: PushEmpty()
0x17a: Call2 0x22e

0x17b: Pop(0)
0x17c: Return(); Pop(2)

0x17d: PushEmpty(int, int)
0x17e: Push((int) 2)
0x17f: PushEmpty(int)
0x180: Call2 0x224

0x181: Pop(0)
0x182: Pop(2); Push(Stack[-2] * Stack[-1]);
0x183: Push((int) 2)
0x184: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x185: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x186: PushEmpty()
0x187: Call2 0x22e

0x188: Pop(0)
0x189: Return(); Pop(2)

0x18a: PushEmpty(int, int)
0x18b: Push((int) -2)
0x18c: PushEmpty(int)
0x18d: Call2 0x224

0x18e: Pop(0)
0x18f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x190: Push((int) 2)
0x191: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x192: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x193: PushEmpty()
0x194: Call2 0x22e

0x195: Pop(0)
0x196: Return(); Pop(2)

0x197: PushEmpty()
0x198: PushEmpty(int, int, int)
0x199: Stack[-2] = Stack[-5]
0x19a: Stack[-1] = Stack[-4]
0x19b: Call2 0x1d6

0x19c: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x19d: Pop(3)
0x19e: PushEmpty(int, int, int)
0x19f: Stack[-2] = Stack[-5]
0x1a0: Stack[-1] = Stack[-4]
0x1a1: Call2 0x1fd

0x1a2: Stack[3 + Tasks[-1].StackPointer] = Stack[-3]
0x1a3: Pop(3)
0x1a4: Return(); Pop(0)

0x1a5: PushEmpty(object, object, object, object)
0x1a6: Push((int) -1)
0x1a7: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] != Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1a9: PushEmpty(int, int, int)
0x1aa: Stack[-2] = Stack[-9]
0x1ab: Stack[-1] = Stack[-8]
0x1ac: Call2 0x1d6

0x1ad: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x1ae: Pop(3)
0x1af: Push((int) -1)
0x1b0: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] != Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b2: @@ get(Stack[-2], Stack[-2])
0x1b3: Pop(0)
0x1b4: PushEmpty(object)
0x1b5: Stack[-1] = Stack[-3]
0x1b6: Call2 0x31

0x1b7: Pop(1)
0x1b8: Stack[-2] = 0
0x1b9: GOTO 0x1d5

0x1ba: PushEmpty(bool)
0x1bb: Stack[-1] = (bool) 0
0x1bc: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1be: Push((int) -1)
0x1bf: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] != Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c1: Stack[-1] = (bool) 1
0x1c2: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1c3: PushEmpty(int, int, int)
0x1c4: Stack[-2] = Stack[-9]
0x1c5: Stack[-1] = Stack[-8]
0x1c6: Call2 0x1fd

0x1c7: Stack[3 + Tasks[-1].StackPointer] = Stack[-3]
0x1c8: Pop(3)
0x1c9: Push((int) -1)
0x1ca: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] != Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1cc: @@ get(Stack[-1], Stack[-3])
0x1cd: Pop(0)
0x1ce: Push(Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d0: PushEmpty(object)
0x1d1: Stack[-1] = Stack[-2]
0x1d2: Call2 0x36

0x1d3: Pop(1)
0x1d4: Stack[-1] = 0
0x1d5: Return(); Pop(4)

0x1d6: PushEmpty(int, int, int, int, int, int, int, int)
0x1d7: Push((int) 129)
0x1d8: Pop(1); Push((bool) Stack[-11] < Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1da: Stack[-11] = (int) -1
0x1db: Return(); Pop(8)

0x1dc: Push((int) 233)
0x1dd: Pop(1); Push((bool) Stack[-11] > Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1df: Stack[-11] = (int) -1
0x1e0: Return(); Pop(8)

0x1e1: Stack[-4] = Stack[-9] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1e2: PushEmpty(int)
0x1e3: Call2 0x224

0x1e4: Stack[-4] = Stack[-1]
0x1e5: Pop(1)
0x1e6: Stack[-2] = Stack[-4] / Stack[-3]; Pop(0);
0x1e7: Pop(0); Push(Stack[-2] * Stack[-3]);
0x1e8: Stack[-5] = Stack[-5] - Stack[-1]; Pop(1);
0x1e9: @@ size(Stack[-1])
0x1ea: Pop(0)
0x1eb: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ed: Stack[-11] = (int) -1
0x1ee: Return(); Pop(8)

0x1ef: PushEmpty(bool)
0x1f0: Stack[-1] = (bool) 0
0x1f1: Push((int) 67)
0x1f2: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f4: Push((int) 91)
0x1f5: Pop(1); Push((bool) Stack[-6] <= Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: Stack[-1] = (bool) 1
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f9: Stack[-11] = Stack[-2]
0x1fa: Return(); Pop(8)

0x1fb: Stack[-11] = (int) -1
0x1fc: Return(); Pop(8)

0x1fd: PushEmpty(int, int, int, int, int, int, int, int)
0x1fe: Push((int) 248)
0x1ff: Pop(1); Push((bool) Stack[-11] < Stack[-1])
0x200: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x201: Stack[-11] = (int) -1
0x202: Return(); Pop(8)

0x203: Push((int) 268)
0x204: Pop(1); Push((bool) Stack[-11] > Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x206: Stack[-11] = (int) -1
0x207: Return(); Pop(8)

0x208: Stack[-4] = Stack[-9] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x209: PushEmpty(int)
0x20a: Call2 0x224

0x20b: Stack[-4] = Stack[-1]
0x20c: Pop(1)
0x20d: Stack[-2] = Stack[-4] / Stack[-3]; Pop(0);
0x20e: Pop(0); Push(Stack[-2] * Stack[-3]);
0x20f: Stack[-5] = Stack[-5] - Stack[-1]; Pop(1);
0x210: @@ size(Stack[-1])
0x211: Pop(0)
0x212: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x213: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x214: Stack[-11] = (int) -1
0x215: Return(); Pop(8)

0x216: PushEmpty(bool)
0x217: Stack[-1] = (bool) 0
0x218: Push((int) 68)
0x219: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21b: Push((int) 91)
0x21c: Pop(1); Push((bool) Stack[-6] <= Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21e: Stack[-1] = (bool) 1
0x21f: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x220: Stack[-11] = Stack[-2]
0x221: Return(); Pop(8)

0x222: Stack[-11] = (int) -1
0x223: Return(); Pop(8)

0x224: Stack[-1] = (int) 121
0x225: Return(); Pop(0)

0x226: PushEmpty(int, int)
0x227: @@ size(Stack[-1])
0x228: Pop(0)
0x229: PushEmpty(int)
0x22a: Call2 0x224

0x22b: Pop(0)
0x22c: Stack[-4] = Stack[-2] * Stack[-1]; Pop(1);
0x22d: Return(); Pop(2)

0x22e: PushEmpty(int, int)
0x22f: PushEmpty(int)
0x230: Call2 0x226

0x231: Pop(0)
0x232: Stack[-2] = Stack[-1] - Stack[5 + Tasks[-1].StackPointer]; Pop(1);
0x233: Push((int) 0)
0x234: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: Stack[-1] = (int) 0
0x237: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x238: Pop(1); Push((bool) Stack[-1] > Stack[-2])
0x239: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23a: Stack[1 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(0);
0x23b: GOTO 0x240

0x23c: Push((int) 0)
0x23d: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x240: Push((int) 0)
0x241: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x243: Push((int) 16384)
0x244: Push("scrollbar")
0x245: @ SendMessage(Stack[-2], Stack[-1])
0x246: Pop(2)
0x247: GOTO 0x24f

0x248: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x249: Push((int) 100)
0x24a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x24b: Pop(1); Push(Stack[-1] / Stack[-2]);
0x24c: Push("scrollbar")
0x24d: @ SendMessage(Stack[-2], Stack[-1])
0x24e: Pop(2)
0x24f: Return(); Pop(2)

0x250: PushEmpty(string, string)
0x251: @ GetStringByID(Stack[-1], Stack[-3])
0x252: Pop(0)
0x253: Stack[-4] = Stack[-1]
0x254: Return(); Pop(2)

0x255: PushEmpty(string, float, int, int, int, string, float, int, int, int)
0x256: @@ GetGameTime(Stack[-4])
0x257: Pop(0)
0x258: Push((int) 24)
0x259: Stack[-4] = Stack[-5] / Stack[-1]; Pop(1);
0x25a: Push((int) 24)
0x25b: Pop(1); Push(Stack[-4] * Stack[-1]);
0x25c: Stack[-3] = Stack[-5] - Stack[-1]; Pop(1);
0x25d: Push((int) 24)
0x25e: Pop(1); Push(Stack[-4] * Stack[-1]);
0x25f: Pop(1); Push(Stack[-5] - Stack[-1]);
0x260: Pop(1); Push(Stack[-1] - Stack[-3]);
0x261: Push((int) 60)
0x262: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x263: PushEmpty(string, int)
0x264: Stack[-1] = (int) 18
0x265: Call2 0x250

0x266: Pop(1)
0x267: Push((int) 1)
0x268: Pop(1); Push(Stack[-5] + Stack[-1]);
0x269: @ format(Stack[-7], Stack[-2], Stack[-1], Stack[-4], Stack[-3])
0x26a: Pop(2)
0x26b: Stack[-12] = Stack[-5]
0x26c: Return(); Pop(10)

0x26d: PushEmpty(string, int, int, int, int, int, string, int, int, int, int, int)
0x26e: @@ GetSaveTime(Stack[-5], Stack[-4], Stack[-3], Stack[-1], Stack[-2])
0x26f: Pop(0)
0x270: PushEmpty(string, int)
0x271: Stack[-1] = (int) 19
0x272: Call2 0x250

0x273: Pop(1)
0x274: PushEmpty(string, int)
0x275: Push((int) 20)
0x276: Stack[-2] = Stack[-1] + Stack[-5]; Pop(1);
0x277: Call2 0x250

0x278: Pop(1)
0x279: @ format(Stack[-8], Stack[-2], Stack[-4], Stack[-1], Stack[-5], Stack[-6], Stack[-7])
0x27a: Pop(2)
0x27b: Stack[-14] = Stack[-6]
0x27c: Return(); Pop(12)

