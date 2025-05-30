GlobalVarCount = 0

Strings:
	default
	$parent
	add
	cancel
	ok
	size
	get
	remove
	clear
	scrollbar
	money_slot
	sel_money_slot
	slot0
	player
	money
	GetProperty

Import:
	SetCursor (1 args)
	ShowCursor (0 args)
	CaptureKeyboard (0 args)
	SetOwnerDraw (1 args)
	GetChooseItems (1 args)
	GetAdditionalData (1 args)
	GetReturnValue (1 args)
	CreateStringVector (1 args)
	SendMessage (3 args)
	SendMessage (2 args)
	ProcessEvents (0 args)
	DestroyWindow (0 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, int, int, int, int) Params = 0
		EVENT_101 Op = 0x55 Vars = (int)
		EVENT_102 Op = 0xbf Vars = (int)
		EVENT_100 Op = 0x15f Vars = (int)
		EVENT_15 Op = 0x165 Vars = (int, int, float)
		EVENT_200 Op = 0x1c7 Vars = (int, string, object)


0x0: PushEmpty(int, object, string, string, int, object, string, string)
0x1: Push("default")
0x2: @ SetCursor(Stack[-1])
0x3: Pop(1)
0x4: @ ShowCursor()
0x5: Pop(0)
0x6: @ CaptureKeyboard()
0x7: Pop(0)
0x8: Push((bool) 0)
0x9: @ SetOwnerDraw(Stack[-1])
0xa: Pop(1)
0xb: PushEmpty(int)
0xc: Call2 0x288

0xd: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0xe: Pop(1)
0xf: @ GetChooseItems(Stack[-0])
0x10: Pop(0)
0x11: @ GetAdditionalData(Stack[-1])
0x12: Pop(0)
0x13: @ GetReturnValue(Stack[-2])
0x14: Pop(0)
0x15: Stack[6 + Tasks[-1].StackPointer] = (int)2
0x16: Stack[-4] = (int) 0
0x17: Push((int) 4)
0x18: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x19: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x1a: @ CreateStringVector(Stack[-3])
0x1b: Pop(0)
0x1c: Push((int) 1)
0x1d: Pop(1); Push(Stack[-5] - Stack[-1]);
0x1e: Push((int) 0)
0x1f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x21: PushEmpty(string, int)
0x22: Push((int) 1)
0x23: Stack[-2] = Stack[-7] - Stack[-1]; Pop(1);
0x24: Call2 0x266

0x25: Stack[-4] = Stack[-2]
0x26: Pop(2)
0x27: GOTO 0x29

0x28: Stack[-2] = "$parent"
0x29: Push((int) 1)
0x2a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2b: Push((int) 4)
0x2c: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x2e: PushEmpty(string, int)
0x2f: Push((int) 1)
0x30: Stack[-2] = Stack[-7] + Stack[-1]; Pop(1);
0x31: Call2 0x266

0x32: Stack[-3] = Stack[-2]
0x33: Pop(2)
0x34: GOTO 0x36

0x35: Stack[-1] = "$parent"
0x36: @@ add(Stack[-2])
0x37: Pop(0)
0x38: @@ add(Stack[-1])
0x39: Pop(0)
0x3a: Push((int) -1)
0x3b: PushEmpty(string, int)
0x3c: Stack[-1] = Stack[-7]
0x3d: Call2 0x266

0x3e: Pop(1)
0x3f: @ SendMessage(Stack[-2], Stack[-1], Stack[-5])
0x40: Pop(2)
0x41: Stack[-3] = 0
0x42: Push((int) 1)
0x43: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x44: GOTO 0x17

0x45: Push((int) -6)
0x46: PushEmpty(string, int)
0x47: Stack[-1] = (int) 0
0x48: Call2 0x266

0x49: Pop(1)
0x4a: @ SendMessage(Stack[-2], Stack[-1])
0x4b: Pop(2)
0x4c: PushEmpty()
0x4d: Call2 0x172

0x4e: Pop(0)
0x4f: PushEmpty()
0x50: Call2 0x18f

0x51: Pop(0)
0x52: @ ProcessEvents()
0x53: Pop(0)
0x54: Return(); Pop(8)

0x55: PushEmpty(int, int, int, int, int, int)
0x56: Push((int) 267)
0x57: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x58: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x59: Push((int) 0)
0x5a: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x5c: Stack[6 + Tasks[-1].StackPointer] = (int)1
0x5d: Push((int) -4)
0x5e: Push("cancel")
0x5f: @ SendMessage(Stack[-2], Stack[-1])
0x60: Pop(2)
0x61: GOTO 0x7b

0x62: PushEmpty(bool)
0x63: Stack[-1] = (bool) 1
0x64: Push((int) 1)
0x65: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0x66: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x67: Push((int) 2)
0x68: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: Stack[-1] = (bool) 0
0x6b: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x6c: Stack[6 + Tasks[-1].StackPointer] = (int)2
0x6d: Stack[-3] = (int) 0
0x6e: Push((int) 4)
0x6f: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x70: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x71: Push((int) -7)
0x72: PushEmpty(string, int)
0x73: Stack[-1] = Stack[-6]
0x74: Call2 0x266

0x75: Pop(1)
0x76: @ SendMessage(Stack[-2], Stack[-1])
0x77: Pop(2)
0x78: Push((int) 1)
0x79: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x7a: GOTO 0x6e

0x7b: Push((int) 268)
0x7c: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x7d: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 1
0x80: Push((int) 1)
0x81: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0x82: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x83: Push((int) 0)
0x84: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0x85: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x86: Stack[-1] = (bool) 0
0x87: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x88: Stack[6 + Tasks[-1].StackPointer] = (int)0
0x89: Push((int) -4)
0x8a: Push("ok")
0x8b: @ SendMessage(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: GOTO 0x96

0x8e: Push((int) 2)
0x8f: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0x90: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x91: Stack[6 + Tasks[-1].StackPointer] = (int)1
0x92: Push((int) -4)
0x93: Push("cancel")
0x94: @ SendMessage(Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: Push((int) 269)
0x97: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x98: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x99: Stack[-2] = (int) 0
0x9a: Push((int) 4)
0x9b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x9d: Push((int) 2)
0x9e: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0x9f: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa0: Push((int) -2)
0xa1: PushEmpty(string, int)
0xa2: Stack[-1] = Stack[-5]
0xa3: Call2 0x266

0xa4: Pop(1)
0xa5: @ SendMessage(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: Push((int) 1)
0xa8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa9: GOTO 0x9a

0xaa: Push((int) 270)
0xab: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xad: Stack[-1] = (int) 0
0xae: Push((int) 4)
0xaf: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb1: Push((int) 2)
0xb2: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb4: Push((int) -3)
0xb5: PushEmpty(string, int)
0xb6: Stack[-1] = Stack[-4]
0xb7: Call2 0x266

0xb8: Pop(1)
0xb9: @ SendMessage(Stack[-2], Stack[-1])
0xba: Pop(2)
0xbb: Push((int) 1)
0xbc: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xbd: GOTO 0xae

0xbe: Return(); Pop(6)

0xbf: PushEmpty(int, int, int, int, int, int)
0xc0: Push((int) 272)
0xc1: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xc3: Push((int) 0)
0xc4: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc6: Stack[6 + Tasks[-1].StackPointer] = (int)1
0xc7: Push((int) -4)
0xc8: Push("cancel")
0xc9: @ SendMessage(Stack[-2], Stack[-1])
0xca: Pop(2)
0xcb: GOTO 0xe5

0xcc: PushEmpty(bool)
0xcd: Stack[-1] = (bool) 1
0xce: Push((int) 1)
0xcf: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd1: Push((int) 2)
0xd2: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd4: Stack[-1] = (bool) 0
0xd5: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd6: Stack[6 + Tasks[-1].StackPointer] = (int)2
0xd7: Stack[-3] = (int) 0
0xd8: Push((int) 4)
0xd9: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xdb: Push((int) -7)
0xdc: PushEmpty(string, int)
0xdd: Stack[-1] = Stack[-6]
0xde: Call2 0x266

0xdf: Pop(1)
0xe0: @ SendMessage(Stack[-2], Stack[-1])
0xe1: Pop(2)
0xe2: Push((int) 1)
0xe3: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xe4: GOTO 0xd8

0xe5: Push((int) 274)
0xe6: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xe8: PushEmpty(bool)
0xe9: Stack[-1] = (bool) 1
0xea: Push((int) 1)
0xeb: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xed: Push((int) 0)
0xee: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xf0: Stack[-1] = (bool) 0
0xf1: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf2: Stack[6 + Tasks[-1].StackPointer] = (int)0
0xf3: Push((int) -4)
0xf4: Push("ok")
0xf5: @ SendMessage(Stack[-2], Stack[-1])
0xf6: Pop(2)
0xf7: GOTO 0x100

0xf8: Push((int) 2)
0xf9: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfb: Stack[6 + Tasks[-1].StackPointer] = (int)1
0xfc: Push((int) -4)
0xfd: Push("cancel")
0xfe: @ SendMessage(Stack[-2], Stack[-1])
0xff: Pop(2)
0x100: Push((int) 273)
0x101: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x103: Stack[-2] = (int) 0
0x104: Push((int) 4)
0x105: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x107: Push((int) 2)
0x108: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10a: Push((int) -2)
0x10b: PushEmpty(string, int)
0x10c: Stack[-1] = Stack[-5]
0x10d: Call2 0x266

0x10e: Pop(1)
0x10f: @ SendMessage(Stack[-2], Stack[-1])
0x110: Pop(2)
0x111: Push((int) 1)
0x112: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x113: GOTO 0x104

0x114: Push((int) 271)
0x115: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x117: Stack[-1] = (int) 0
0x118: Push((int) 4)
0x119: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x11b: Push((int) 2)
0x11c: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x11e: Push((int) -3)
0x11f: PushEmpty(string, int)
0x120: Stack[-1] = Stack[-4]
0x121: Call2 0x266

0x122: Pop(1)
0x123: @ SendMessage(Stack[-2], Stack[-1])
0x124: Pop(2)
0x125: Push((int) 1)
0x126: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x127: GOTO 0x118

0x128: Return(); Pop(6)

0x129: PushEmpty(int, int, int, int, int, int)
0x12a: @@ size(Stack[-3])
0x12b: Pop(0)
0x12c: Stack[-2] = (int) 0
0x12d: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x12e: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x12f: @@ get(Stack[-1], Stack[-2])
0x130: Pop(0)
0x131: Pop(0); Push((bool) Stack[-1] == Stack[-7])
0x132: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x133: Stack[-8] = (bool) 1
0x134: Return(); Pop(6)

0x135: Push((int) 1)
0x136: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x137: GOTO 0x12d

0x138: Stack[-8] = (bool) 0
0x139: Return(); Pop(6)

0x13a: PushEmpty(int, int)
0x13b: PushEmpty(bool, int)
0x13c: Stack[-1] = Stack[-5]
0x13d: Call2 0x129

0x13e: Pop(1)
0x13f: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x140: Return(); Pop(2)

0x141: @@ get(Stack[-1], Stack[-3])
0x142: Pop(0)
0x143: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] >= Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x145: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x146: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x147: @@ add(Stack[-3])
0x148: Pop(0)
0x149: Return(); Pop(2)

0x14a: PushEmpty(int, int, int, int, int, int, int, int)
0x14b: @@ size(Stack[-4])
0x14c: Pop(0)
0x14d: Stack[-3] = (int) 0
0x14e: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x14f: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x150: @@ get(Stack[-2], Stack[-3])
0x151: Pop(0)
0x152: Pop(0); Push((bool) Stack[-2] == Stack[-9])
0x153: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x154: @@ remove(Stack[-3])
0x155: Pop(0)
0x156: @@ get(Stack[-1], Stack[-9])
0x157: Pop(0)
0x158: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x159: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x15a: GOTO 0x15e

0x15b: Push((int) 1)
0x15c: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x15d: GOTO 0x14e

0x15e: Return(); Pop(8)

0x15f: PushEmpty()
0x160: @@ clear()
0x161: Pop(0)
0x162: @ DestroyWindow()
0x163: Pop(0)
0x164: Return(); Pop(0)

0x165: PushEmpty()
0x166: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x167: Push((int) 0)
0x168: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] < Stack[-1])
0x169: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x16a: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x16b: PushEmpty()
0x16c: Call2 0x172

0x16d: Pop(0)
0x16e: PushEmpty()
0x16f: Call2 0x18f

0x170: Pop(0)
0x171: Return(); Pop(0)

0x172: PushEmpty(int, int, int, int)
0x173: @@ size(Stack[-2])
0x174: Pop(0)
0x175: Push((int) 4)
0x176: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x178: Push((int) 16384)
0x179: Push("scrollbar")
0x17a: @ SendMessage(Stack[-2], Stack[-1])
0x17b: Pop(2)
0x17c: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x17d: GOTO 0x18e

0x17e: Push((int) 4)
0x17f: Pop(1); Push(Stack[5 + StackPtr] + Stack[-1]);
0x180: Pop(1); Push((bool) Stack[-1] > Stack[-3])
0x181: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x182: Push((int) 4)
0x183: Pop(1); Push(Stack[5 + StackPtr] + Stack[-1]);
0x184: Pop(1); Push(Stack[-1] - Stack[-3]);
0x185: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x186: Push((int) 100)
0x187: Pop(1); Push(Stack[5 + StackPtr] * Stack[-1]);
0x188: Push((int) 4)
0x189: Pop(1); Push(Stack[-4] - Stack[-1]);
0x18a: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x18b: Push("scrollbar")
0x18c: @ SendMessage(Stack[-2], Stack[-1])
0x18d: Pop(1)
0x18e: Return(); Pop(4)

0x18f: PushEmpty(int, int, object, int, int, int, object, int)
0x190: PushEmpty(int)
0x191: Call2 0x288

0x192: Pop(0)
0x193: Push("money_slot")
0x194: @ SendMessage(Stack[-2], Stack[-1])
0x195: Pop(2)
0x196: Push("sel_money_slot")
0x197: @ SendMessage(Stack[-4], Stack[-1])
0x198: Pop(1)
0x199: @@ size(Stack[-4])
0x19a: Pop(0)
0x19b: Stack[-3] = Stack[5 + Tasks[-1].StackPointer]
0x19c: Push((int) 4)
0x19d: Pop(1); Push(Stack[5 + StackPtr] + Stack[-1]);
0x19e: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1a0: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1a2: @@ get(Stack[-2], Stack[-3])
0x1a3: Pop(0)
0x1a4: @@ get(Stack[-1], Stack[-3])
0x1a5: Pop(0)
0x1a6: PushEmpty(bool, int)
0x1a7: Stack[-1] = Stack[-5]
0x1a8: Call2 0x129

0x1a9: Pop(1)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1ab: Push((int) 16384)
0x1ac: Pop(1); Push(Stack[-1] | Stack[-2]);
0x1ad: PushEmpty(string, int)
0x1ae: Stack[-1] = Stack[-6] - Stack[5 + Tasks[-1].StackPointer]; Pop(0);
0x1af: Call2 0x266

0x1b0: Pop(1)
0x1b1: @ SendMessage(Stack[-2], Stack[-1], Stack[-4])
0x1b2: Pop(2)
0x1b3: GOTO 0x1ba

0x1b4: PushEmpty(string, int)
0x1b5: Stack[-1] = Stack[-5] - Stack[5 + Tasks[-1].StackPointer]; Pop(0);
0x1b6: Call2 0x266

0x1b7: Pop(1)
0x1b8: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x1b9: Pop(1)
0x1ba: Stack[-2] = 0
0x1bb: GOTO 0x1c3

0x1bc: Push((int) 32768)
0x1bd: PushEmpty(string, int)
0x1be: Stack[-1] = Stack[-6] - Stack[5 + Tasks[-1].StackPointer]; Pop(0);
0x1bf: Call2 0x266

0x1c0: Pop(1)
0x1c1: @ SendMessage(Stack[-2], Stack[-1])
0x1c2: Pop(2)
0x1c3: Push((int) 1)
0x1c4: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x1c5: GOTO 0x19c

0x1c6: Return(); Pop(8)

0x1c7: PushEmpty(int, int, int, int, int, int)
0x1c8: Push((int) -4)
0x1c9: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1cb: PushEmpty(string, int)
0x1cc: Stack[-1] = (int) 0
0x1cd: Call2 0x266

0x1ce: Pop(1)
0x1cf: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d1: Push((int) 0)
0x1d2: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d4: Push((int) -1)
0x1d5: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1d6: PushEmpty()
0x1d7: Call2 0x18f

0x1d8: Pop(0)
0x1d9: PushEmpty()
0x1da: Call2 0x172

0x1db: Pop(0)
0x1dc: GOTO 0x1f1

0x1dd: PushEmpty(string, int)
0x1de: Stack[-1] = (int) 3
0x1df: Call2 0x266

0x1e0: Pop(1)
0x1e1: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e3: @@ size(Stack[-3])
0x1e4: Pop(0)
0x1e5: Push((int) 4)
0x1e6: Pop(1); Push(Stack[5 + StackPtr] + Stack[-1]);
0x1e7: Pop(1); Push((bool) Stack[-1] <= Stack[-4])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e9: Push((int) 1)
0x1ea: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1eb: PushEmpty()
0x1ec: Call2 0x18f

0x1ed: Pop(0)
0x1ee: PushEmpty()
0x1ef: Call2 0x172

0x1f0: Pop(0)
0x1f1: Push((int) -4)
0x1f2: @ SendMessage(Stack[-1], Stack[-9])
0x1f3: Pop(1)
0x1f4: Return(); Pop(6)

0x1f5: Push((int) -11)
0x1f6: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f8: Stack[6 + Tasks[-1].StackPointer] = (int)0
0x1f9: Return(); Pop(6)

0x1fa: Push((int) -12)
0x1fb: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fd: Stack[6 + Tasks[-1].StackPointer] = (int)1
0x1fe: Return(); Pop(6)

0x1ff: Push((int) -9)
0x200: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x202: Stack[6 + Tasks[-1].StackPointer] = (int)2
0x203: Return(); Pop(6)

0x204: Push((int) 0)
0x205: Pop(1); Push((bool) Stack[-10] < Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x207: Return(); Pop(6)

0x208: Push("ok")
0x209: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20b: PushEmpty()
0x20c: Call2 0x246

0x20d: Pop(0)
0x20e: GOTO 0x245

0x20f: Push("cancel")
0x210: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x212: PushEmpty()
0x213: Call2 0x249

0x214: Pop(0)
0x215: GOTO 0x245

0x216: Push("scrollbar")
0x217: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x219: @@ size(Stack[-2])
0x21a: Pop(0)
0x21b: Push((float)0.01)
0x21c: Push((int) 4)
0x21d: Pop(1); Push(Stack[-4] - Stack[-1]);
0x21e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x21f: Pop(1); Push(Stack[-1] * Stack[-10]);
0x220: Push((float)0.5)
0x221: Stack[5 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x222: Push((int) 0)
0x223: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] < Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x225: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x226: PushEmpty()
0x227: Call2 0x172

0x228: Pop(0)
0x229: PushEmpty()
0x22a: Call2 0x18f

0x22b: Pop(0)
0x22c: GOTO 0x245

0x22d: PushEmpty(int, int, string)
0x22e: Stack[-2] = Stack[-12]
0x22f: Stack[-1] = Stack[-11]
0x230: Call2 0x276

0x231: Stack[-4] = Stack[-3]
0x232: Pop(3)
0x233: Push((int) -1)
0x234: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x236: Push((int) 0)
0x237: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x238: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x239: PushEmpty(int)
0x23a: Stack[-1] = Stack[-2] + Stack[5 + Tasks[-1].StackPointer]; Pop(0);
0x23b: Call2 0x254

0x23c: Pop(1)
0x23d: GOTO 0x245

0x23e: Push((int) 1)
0x23f: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x241: PushEmpty(int)
0x242: Stack[-1] = Stack[-2] + Stack[5 + Tasks[-1].StackPointer]; Pop(0);
0x243: Call2 0x25d

0x244: Pop(1)
0x245: Return(); Pop(6)

0x246: @ DestroyWindow()
0x247: Pop(0)
0x248: Return(); Pop(0)

0x249: @@ clear()
0x24a: Pop(0)
0x24b: PushEmpty(int)
0x24c: Call2 0x288

0x24d: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x24e: Pop(1)
0x24f: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x250: PushEmpty()
0x251: Call2 0x18f

0x252: Pop(0)
0x253: Return(); Pop(0)

0x254: PushEmpty()
0x255: PushEmpty(int)
0x256: Stack[-1] = Stack[-2]
0x257: Call2 0x13a

0x258: Pop(1)
0x259: PushEmpty()
0x25a: Call2 0x18f

0x25b: Pop(0)
0x25c: Return(); Pop(0)

0x25d: PushEmpty()
0x25e: PushEmpty(int)
0x25f: Stack[-1] = Stack[-2]
0x260: Call2 0x14a

0x261: Pop(1)
0x262: PushEmpty()
0x263: Call2 0x18f

0x264: Pop(0)
0x265: Return(); Pop(0)

0x266: PushEmpty()
0x267: Push((int) 1)
0x268: Pop(1); Push(Stack[-2] + Stack[-1]);
0x269: Push((int) 10)
0x26a: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26c: Push("slot0")
0x26d: Push((int) 1)
0x26e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x26f: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x270: Return(); Pop(0)

0x271: Push("slot")
0x272: Push((int) 1)
0x273: Pop(1); Push(Stack[-3] + Stack[-1]);
0x274: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x275: Return(); Pop(0)

0x276: PushEmpty(int, int)
0x277: Stack[-1] = (int) 0
0x278: Push((int) 4)
0x279: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x27a: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x27b: PushEmpty(string, int)
0x27c: Stack[-1] = Stack[-3]
0x27d: Call2 0x266

0x27e: Pop(1)
0x27f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x281: Stack[-5] = Stack[-1]
0x282: Return(); Pop(2)

0x283: Push((int) 1)
0x284: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x285: GOTO 0x278

0x286: Stack[-5] = (int) -1
0x287: Return(); Pop(2)

0x288: PushEmpty(object, int, object, int)
0x289: Push("player")
0x28a: @ FindActor(Stack[-3], Stack[-1])
0x28b: Pop(1)
0x28c: Push("money")
0x28d: @@ GetProperty(Stack[-1], Stack[-2])
0x28e: Pop(1)
0x28f: Stack[-5] = Stack[-1]
0x290: Return(); Pop(4)

0x291: Stack[-2] = 0
