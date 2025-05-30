GlobalVarCount = 0

Strings:
	default
	size
	get
	add
	remove
	clear
	scrollbar
	money_slot
	sel_money_slot
	ok
	cancel
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
	ProcessEvents (0 args)
	DestroyWindow (0 args)
	SendMessage (2 args)
	SendMessage (3 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, int, int, int) Params = 0
		EVENT_100 Op = 0x53 Vars = (int)
		EVENT_15 Op = 0x59 Vars = (int, int, float)
		EVENT_200 Op = 0xbb Vars = (int, string, object)


0x0: Push("default")
0x1: @ SetCursor(Stack[-1])
0x2: Pop(1)
0x3: @ ShowCursor()
0x4: Pop(0)
0x5: @ CaptureKeyboard()
0x6: Pop(0)
0x7: Push((bool) 0)
0x8: @ SetOwnerDraw(Stack[-1])
0x9: Pop(1)
0xa: PushEmpty(int)
0xb: Call2 0x13c

0xc: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0xd: Pop(1)
0xe: @ GetChooseItems(Stack[-0])
0xf: Pop(0)
0x10: @ GetAdditionalData(Stack[-1])
0x11: Pop(0)
0x12: @ GetReturnValue(Stack[-2])
0x13: Pop(0)
0x14: PushEmpty()
0x15: Call2 0x66

0x16: Pop(0)
0x17: PushEmpty()
0x18: Call2 0x83

0x19: Pop(0)
0x1a: @ ProcessEvents()
0x1b: Pop(0)
0x1c: Return(); Pop(0)

0x1d: PushEmpty(int, int, int, int, int, int)
0x1e: @@ size(Stack[-3])
0x1f: Pop(0)
0x20: Stack[-2] = (int) 0
0x21: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x22: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x23: @@ get(Stack[-1], Stack[-2])
0x24: Pop(0)
0x25: Pop(0); Push((bool) Stack[-1] == Stack[-7])
0x26: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x27: Stack[-8] = (bool) 1
0x28: Return(); Pop(6)

0x29: Push((int) 1)
0x2a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2b: GOTO 0x21

0x2c: Stack[-8] = (bool) 0
0x2d: Return(); Pop(6)

0x2e: PushEmpty(int, int)
0x2f: PushEmpty(bool, int)
0x30: Stack[-1] = Stack[-5]
0x31: Call2 0x1d

0x32: Pop(1)
0x33: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x34: Return(); Pop(2)

0x35: @@ get(Stack[-1], Stack[-3])
0x36: Pop(0)
0x37: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] >= Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x39: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x3a: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x3b: @@ add(Stack[-3])
0x3c: Pop(0)
0x3d: Return(); Pop(2)

0x3e: PushEmpty(int, int, int, int, int, int, int, int)
0x3f: @@ size(Stack[-4])
0x40: Pop(0)
0x41: Stack[-3] = (int) 0
0x42: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x43: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x44: @@ get(Stack[-2], Stack[-3])
0x45: Pop(0)
0x46: Pop(0); Push((bool) Stack[-2] == Stack[-9])
0x47: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x48: @@ remove(Stack[-3])
0x49: Pop(0)
0x4a: @@ get(Stack[-1], Stack[-9])
0x4b: Pop(0)
0x4c: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x4d: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x4e: GOTO 0x52

0x4f: Push((int) 1)
0x50: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x51: GOTO 0x42

0x52: Return(); Pop(8)

0x53: PushEmpty()
0x54: @@ clear()
0x55: Pop(0)
0x56: @ DestroyWindow()
0x57: Pop(0)
0x58: Return(); Pop(0)

0x59: PushEmpty()
0x5a: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x5b: Push((int) 0)
0x5c: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] < Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5e: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x5f: PushEmpty()
0x60: Call2 0x66

0x61: Pop(0)
0x62: PushEmpty()
0x63: Call2 0x83

0x64: Pop(0)
0x65: Return(); Pop(0)

0x66: PushEmpty(int, int, int, int)
0x67: @@ size(Stack[-2])
0x68: Pop(0)
0x69: Push((int) 4)
0x6a: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x6b: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6c: Push((int) 16384)
0x6d: Push("scrollbar")
0x6e: @ SendMessage(Stack[-2], Stack[-1])
0x6f: Pop(2)
0x70: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x71: GOTO 0x82

0x72: Push((int) 4)
0x73: Pop(1); Push(Stack[5 + StackPtr] + Stack[-1]);
0x74: Pop(1); Push((bool) Stack[-1] > Stack[-3])
0x75: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x76: Push((int) 4)
0x77: Pop(1); Push(Stack[5 + StackPtr] + Stack[-1]);
0x78: Pop(1); Push(Stack[-1] - Stack[-3]);
0x79: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x7a: Push((int) 100)
0x7b: Pop(1); Push(Stack[5 + StackPtr] * Stack[-1]);
0x7c: Push((int) 4)
0x7d: Pop(1); Push(Stack[-4] - Stack[-1]);
0x7e: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x7f: Push("scrollbar")
0x80: @ SendMessage(Stack[-2], Stack[-1])
0x81: Pop(1)
0x82: Return(); Pop(4)

0x83: PushEmpty(int, int, object, int, int, int, object, int)
0x84: PushEmpty(int)
0x85: Call2 0x13c

0x86: Pop(0)
0x87: Push("money_slot")
0x88: @ SendMessage(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: Push("sel_money_slot")
0x8b: @ SendMessage(Stack[-4], Stack[-1])
0x8c: Pop(1)
0x8d: @@ size(Stack[-4])
0x8e: Pop(0)
0x8f: Stack[-3] = Stack[5 + Tasks[-1].StackPointer]
0x90: Push((int) 4)
0x91: Pop(1); Push(Stack[5 + StackPtr] + Stack[-1]);
0x92: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x93: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0x94: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x95: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0x96: @@ get(Stack[-2], Stack[-3])
0x97: Pop(0)
0x98: @@ get(Stack[-1], Stack[-3])
0x99: Pop(0)
0x9a: PushEmpty(bool, int)
0x9b: Stack[-1] = Stack[-5]
0x9c: Call2 0x1d

0x9d: Pop(1)
0x9e: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0x9f: Push((int) 16384)
0xa0: Pop(1); Push(Stack[-1] | Stack[-2]);
0xa1: PushEmpty(string, int)
0xa2: Stack[-1] = Stack[-6] - Stack[5 + Tasks[-1].StackPointer]; Pop(0);
0xa3: Call2 0x11a

0xa4: Pop(1)
0xa5: @ SendMessage(Stack[-2], Stack[-1], Stack[-4])
0xa6: Pop(2)
0xa7: GOTO 0xae

0xa8: PushEmpty(string, int)
0xa9: Stack[-1] = Stack[-5] - Stack[5 + Tasks[-1].StackPointer]; Pop(0);
0xaa: Call2 0x11a

0xab: Pop(1)
0xac: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0xad: Pop(1)
0xae: Stack[-2] = 0
0xaf: GOTO 0xb7

0xb0: Push((int) 32768)
0xb1: PushEmpty(string, int)
0xb2: Stack[-1] = Stack[-6] - Stack[5 + Tasks[-1].StackPointer]; Pop(0);
0xb3: Call2 0x11a

0xb4: Pop(1)
0xb5: @ SendMessage(Stack[-2], Stack[-1])
0xb6: Pop(2)
0xb7: Push((int) 1)
0xb8: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xb9: GOTO 0x90

0xba: Return(); Pop(8)

0xbb: PushEmpty(int, int, int, int)
0xbc: Push("ok")
0xbd: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbf: PushEmpty()
0xc0: Call2 0xfa

0xc1: Pop(0)
0xc2: GOTO 0xf9

0xc3: Push("cancel")
0xc4: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc6: PushEmpty()
0xc7: Call2 0xfd

0xc8: Pop(0)
0xc9: GOTO 0xf9

0xca: Push("scrollbar")
0xcb: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xcd: @@ size(Stack[-2])
0xce: Pop(0)
0xcf: Push((float)0.01)
0xd0: Push((int) 4)
0xd1: Pop(1); Push(Stack[-4] - Stack[-1]);
0xd2: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd3: Pop(1); Push(Stack[-1] * Stack[-8]);
0xd4: Push((float)0.5)
0xd5: Stack[5 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0xd6: Push((int) 0)
0xd7: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] < Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd9: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xda: PushEmpty()
0xdb: Call2 0x66

0xdc: Pop(0)
0xdd: PushEmpty()
0xde: Call2 0x83

0xdf: Pop(0)
0xe0: GOTO 0xf9

0xe1: PushEmpty(int, int, string)
0xe2: Stack[-2] = Stack[-10]
0xe3: Stack[-1] = Stack[-9]
0xe4: Call2 0x12a

0xe5: Stack[-4] = Stack[-3]
0xe6: Pop(3)
0xe7: Push((int) -1)
0xe8: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xea: Push((int) 0)
0xeb: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xed: PushEmpty(int)
0xee: Stack[-1] = Stack[-2] + Stack[5 + Tasks[-1].StackPointer]; Pop(0);
0xef: Call2 0x108

0xf0: Pop(1)
0xf1: GOTO 0xf9

0xf2: Push((int) 1)
0xf3: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf5: PushEmpty(int)
0xf6: Stack[-1] = Stack[-2] + Stack[5 + Tasks[-1].StackPointer]; Pop(0);
0xf7: Call2 0x111

0xf8: Pop(1)
0xf9: Return(); Pop(4)

0xfa: @ DestroyWindow()
0xfb: Pop(0)
0xfc: Return(); Pop(0)

0xfd: @@ clear()
0xfe: Pop(0)
0xff: PushEmpty(int)
0x100: Call2 0x13c

0x101: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x102: Pop(1)
0x103: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x104: PushEmpty()
0x105: Call2 0x83

0x106: Pop(0)
0x107: Return(); Pop(0)

0x108: PushEmpty()
0x109: PushEmpty(int)
0x10a: Stack[-1] = Stack[-2]
0x10b: Call2 0x2e

0x10c: Pop(1)
0x10d: PushEmpty()
0x10e: Call2 0x83

0x10f: Pop(0)
0x110: Return(); Pop(0)

0x111: PushEmpty()
0x112: PushEmpty(int)
0x113: Stack[-1] = Stack[-2]
0x114: Call2 0x3e

0x115: Pop(1)
0x116: PushEmpty()
0x117: Call2 0x83

0x118: Pop(0)
0x119: Return(); Pop(0)

0x11a: PushEmpty()
0x11b: Push((int) 1)
0x11c: Pop(1); Push(Stack[-2] + Stack[-1]);
0x11d: Push((int) 10)
0x11e: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x120: Push("slot0")
0x121: Push((int) 1)
0x122: Pop(1); Push(Stack[-3] + Stack[-1]);
0x123: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x124: Return(); Pop(0)

0x125: Push("slot")
0x126: Push((int) 1)
0x127: Pop(1); Push(Stack[-3] + Stack[-1]);
0x128: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x129: Return(); Pop(0)

0x12a: PushEmpty(int, int)
0x12b: Stack[-1] = (int) 0
0x12c: Push((int) 4)
0x12d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x12f: PushEmpty(string, int)
0x130: Stack[-1] = Stack[-3]
0x131: Call2 0x11a

0x132: Pop(1)
0x133: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x135: Stack[-5] = Stack[-1]
0x136: Return(); Pop(2)

0x137: Push((int) 1)
0x138: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x139: GOTO 0x12c

0x13a: Stack[-5] = (int) -1
0x13b: Return(); Pop(2)

0x13c: PushEmpty(object, int, object, int)
0x13d: Push("player")
0x13e: @ FindActor(Stack[-3], Stack[-1])
0x13f: Pop(1)
0x140: Push("money")
0x141: @@ GetProperty(Stack[-1], Stack[-2])
0x142: Pop(1)
0x143: Stack[-5] = Stack[-1]
0x144: Return(); Pop(4)

0x145: Stack[-2] = 0
