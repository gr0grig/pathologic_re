GlobalVarCount = 0

Strings:
	default
	/
	disabled
	$parent
	get
	selected
	GetItemID
	l_slot0
	l_slot
	r_slot0
	r_slot

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	SendToParent (0 args)
	Blit (3 args)
	Print (4 args)
	StretchBlit (5 args)
	SendMessageToParent (1 args)
	ClientToScreen (2 args)
	GetWindowSize (2 args)
	SetMousePos (2 args)
	SendMessage (2 args)
	GetCursorPos (2 args)
	SetTooltip (2 args)
	GetItemImage (2 args)
	LoadImage (1 args)
	SetTooltip (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, object, bool, string, bool, bool, string, string, string, string, int) Params = 0
		EVENT_15 Op = 0xf Vars = (int, int, float)
		EVENT_0 Op = 0x13 Vars = ()
		EVENT_2 Op = 0x36 Vars = (int, int)
		EVENT_6 Op = 0x3b Vars = (int, int)
		EVENT_3 Op = 0x40 Vars = (int, int)
		EVENT_9 Op = 0x54 Vars = ()
		EVENT_200 Op = 0xa7 Vars = (int, string, object)


0x0: Stack[2 + Tasks[-1].StackPointer] = 0
0x1: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x2: Stack[1 + Tasks[-1].StackPointer] = (int)1
0x3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0x5: Stack[11 + Tasks[-1].StackPointer] = (int)0
0x6: Push("default")
0x7: @ SetBackground(Stack[-1])
0x8: Pop(1)
0x9: Push((bool) 1)
0xa: @ SetOwnerDraw(Stack[-1])
0xb: Pop(1)
0xc: @ ProcessEvents()
0xd: Pop(0)
0xe: Return(); Pop(0)

0xf: PushEmpty()
0x10: @ SendToParent()
0x11: Pop(0)
0x12: Return(); Pop(0)

0x13: PushEmpty(string, string)
0x14: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x15: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x16: Return(); Pop(2)

0x17: Push((int) 1)
0x18: Push((int) 1)
0x19: @ Blit(Stack[-4], Stack[-2], Stack[-1])
0x1a: Pop(2)
0x1b: PushEmpty(bool)
0x1c: Stack[-1] = (bool) 0
0x1d: Push((int) 1)
0x1e: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0x1f: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x20: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x21: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x22: Stack[-1] = (bool) 1
0x23: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x24: Push("/")
0x25: Pop(1); Push(Stack[0 + StackPtr] + Stack[-1]);
0x26: Stack[-2] = Stack[-1] + Stack[1 + Tasks[-1].StackPointer]; Pop(1);
0x27: Push("default")
0x28: Push((int) 2)
0x29: Push((int) 35)
0x2a: @ Print(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x2b: Pop(3)
0x2c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2d: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x2e: Push("disabled")
0x2f: Push((int) 1)
0x30: Push((int) 1)
0x31: Push((int) 50)
0x32: Push((int) 50)
0x33: @ StretchBlit(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x34: Pop(5)
0x35: Return(); Pop(2)

0x36: PushEmpty()
0x37: Push((int) 0)
0x38: @ SendMessageToParent(Stack[-1])
0x39: Pop(1)
0x3a: Return(); Pop(0)

0x3b: PushEmpty()
0x3c: Push((int) 1)
0x3d: @ SendMessageToParent(Stack[-1])
0x3e: Pop(1)
0x3f: Return(); Pop(0)

0x40: PushEmpty()
0x41: Return(); Pop(0)

0x42: PushEmpty(int, int, int, int, int, int, int, int)
0x43: Stack[-4] = (int) 0
0x44: Stack[-3] = (int) 0
0x45: Stack[-2] = (int) 0
0x46: Stack[-1] = (int) 0
0x47: @ ClientToScreen(Stack[-4], Stack[-3])
0x48: Pop(0)
0x49: @ GetWindowSize(Stack[-2], Stack[-1])
0x4a: Pop(0)
0x4b: Push((int) 2)
0x4c: Pop(1); Push(Stack[-3] / Stack[-1]);
0x4d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4e: Push((int) 2)
0x4f: Pop(1); Push(Stack[-3] / Stack[-1]);
0x50: Pop(1); Push(Stack[-5] + Stack[-1]);
0x51: @ SetMousePos(Stack[-2], Stack[-1])
0x52: Pop(2)
0x53: Return(); Pop(8)

0x54: PushEmpty(int, int)
0x55: Pop(0); Push((bool) Stack[5 + Tasks[-1].StackPointer] == 0)
0x56: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x57: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x58: Push((int) -20)
0x59: @ SendMessageToParent(Stack[-1])
0x5a: Pop(1)
0x5b: Stack[-1] = (int) 0
0x5c: Pop(0); Push((bool) Stack[-1] < Stack[11 + Tasks[-1].StackPointer])
0x5d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x5e: Push((int) -5)
0x5f: PushEmpty(string, int)
0x60: Stack[-1] = Stack[-4]
0x61: Call2 0x149

0x62: Pop(1)
0x63: @ SendMessage(Stack[-2], Stack[-1])
0x64: Pop(2)
0x65: Push((int) -5)
0x66: PushEmpty(string, int)
0x67: Stack[-1] = Stack[-4]
0x68: Call2 0x159

0x69: Pop(1)
0x6a: @ SendMessage(Stack[-2], Stack[-1])
0x6b: Pop(2)
0x6c: Push((int) 1)
0x6d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6e: GOTO 0x5c

0x6f: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x70: Return(); Pop(2)

0x71: PushEmpty(int, int, int, int, int, int, int, int, int, int, int, int)
0x72: Push("")
0x73: Pop(1); Push((bool) Stack[-14] != Stack[-1])
0x74: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x75: Stack[-6] = (int) 0
0x76: Stack[-5] = (int) 0
0x77: Stack[-4] = (int) 0
0x78: Stack[-3] = (int) 0
0x79: @ ClientToScreen(Stack[-6], Stack[-5])
0x7a: Pop(0)
0x7b: @ GetWindowSize(Stack[-4], Stack[-3])
0x7c: Pop(0)
0x7d: Stack[-2] = (int) 0
0x7e: Stack[-1] = (int) 0
0x7f: @ GetCursorPos(Stack[-2], Stack[-1])
0x80: Pop(0)
0x81: PushEmpty(bool)
0x82: Stack[-1] = (bool) 0
0x83: PushEmpty(bool)
0x84: Stack[-1] = (bool) 0
0x85: PushEmpty(bool)
0x86: Stack[-1] = (bool) 0
0x87: Pop(0); Push((bool) Stack[-5] > Stack[-9])
0x88: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x89: Pop(0); Push((bool) Stack[-4] > Stack[-8])
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: Stack[-1] = (bool) 1
0x8c: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8d: Pop(0); Push(Stack[-8] + Stack[-6]);
0x8e: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: Stack[-1] = (bool) 1
0x91: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x92: Pop(0); Push(Stack[-6] + Stack[-4]);
0x93: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x95: Stack[-1] = (bool) 1
0x96: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x97: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0x98: Push("$parent")
0x99: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x9a: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9b: Push((int) -4)
0x9c: @ SendMessageToParent(Stack[-1])
0x9d: Pop(1)
0x9e: GOTO 0xa2

0x9f: Push((int) -4)
0xa0: @ SendMessage(Stack[-1], Stack[-14])
0xa1: Pop(1)
0xa2: GOTO 0xa6

0xa3: PushEmpty()
0xa4: Call2 0x42

0xa5: Pop(0)
0xa6: Return(); Pop(12)

0xa7: PushEmpty(int, int)
0xa8: Push((int) -1)
0xa9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xab: Pop(0); Push(( Stack[-3] != 0 )
0xac: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xad: Push((int) 0)
0xae: @@ get(Stack[-7], Stack[-1])
0xaf: Pop(1)
0xb0: Push((int) 1)
0xb1: @@ get(Stack[-8], Stack[-1])
0xb2: Pop(1)
0xb3: Push((int) 2)
0xb4: @@ get(Stack[-9], Stack[-1])
0xb5: Pop(1)
0xb6: Push((int) 3)
0xb7: @@ get(Stack[-10], Stack[-1])
0xb8: Pop(1)
0xb9: Return(); Pop(2)

0xba: Push((int) -19)
0xbb: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbd: Push((int) 0)
0xbe: @@ get(Stack[-11], Stack[-1])
0xbf: Pop(1)
0xc0: Return(); Pop(2)

0xc1: Push((int) -7)
0xc2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc4: Push( Stack[5 + Tasks[-1].StackPointer] )
0xc5: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc6: PushEmpty()
0xc7: Call2 0x42

0xc8: Pop(0)
0xc9: Return(); Pop(2)

0xca: Push((int) -6)
0xcb: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xcd: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0xce: Return(); Pop(2)

0xcf: Push((int) -13)
0xd0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd2: Push( Stack[5 + Tasks[-1].StackPointer] )
0xd3: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd4: PushEmpty(string)
0xd5: Stack[-1] = Stack[7 + Tasks[-1].StackPointer]
0xd6: Call2 0x71

0xd7: Pop(1)
0xd8: Return(); Pop(2)

0xd9: Push((int) -14)
0xda: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xdc: Push( Stack[5 + Tasks[-1].StackPointer] )
0xdd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xde: PushEmpty(string)
0xdf: Stack[-1] = Stack[8 + Tasks[-1].StackPointer]
0xe0: Call2 0x71

0xe1: Pop(1)
0xe2: Return(); Pop(2)

0xe3: Push((int) -15)
0xe4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe6: Push( Stack[5 + Tasks[-1].StackPointer] )
0xe7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0xea: Call2 0x71

0xeb: Pop(1)
0xec: Return(); Pop(2)

0xed: Push((int) -16)
0xee: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf0: Push( Stack[5 + Tasks[-1].StackPointer] )
0xf1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = Stack[10 + Tasks[-1].StackPointer]
0xf4: Call2 0x71

0xf5: Pop(1)
0xf6: Return(); Pop(2)

0xf7: Push((int) -4)
0xf8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfa: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0xfb: PushEmpty()
0xfc: Call2 0x42

0xfd: Pop(0)
0xfe: Return(); Pop(2)

0xff: Push((int) -5)
0x100: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x102: Push( Stack[6 + Tasks[-1].StackPointer] )
0x103: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x104: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x105: GOTO 0x107

0x106: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0x107: Return(); Pop(2)

0x108: Push((int) 0)
0x109: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x10b: Return(); Pop(2)

0x10c: Push((int) 65536)
0x10d: Pop(1); Push(Stack[-6] & Stack[-1]);
0x10e: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x10f: Push((int) 0)
0x110: @@ get(Stack[-0], Stack[-1])
0x111: Pop(1)
0x112: Push((int) 1)
0x113: @@ get(Stack[-1], Stack[-1])
0x114: Pop(1)
0x115: Return(); Pop(2)

0x116: Push((int) 16384)
0x117: Pop(1); Push(Stack[-6] & Stack[-1]);
0x118: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x119: Push("selected")
0x11a: @ SetBackground(Stack[-1])
0x11b: Pop(1)
0x11c: GOTO 0x120

0x11d: Push("default")
0x11e: @ SetBackground(Stack[-1])
0x11f: Pop(1)
0x120: Push((int) 32768)
0x121: Pop(1); Push(Stack[-6] & Stack[-1]);
0x122: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x123: Stack[2 + Tasks[-1].StackPointer] = 0
0x124: Push((int) -1)
0x125: Push("")
0x126: @ SetTooltip(Stack[-2], Stack[-1])
0x127: Pop(2)
0x128: Return(); Pop(2)

0x129: Push((int) 131072)
0x12a: Pop(1); Push(Stack[-6] & Stack[-1]);
0x12b: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x12d: GOTO 0x12f

0x12e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x12f: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x130: Push( Stack[2 + Tasks[-1].StackPointer] )
0x131: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x132: @@ GetItemID(Stack[-1])
0x133: Pop(0)
0x134: @ GetItemImage(Stack[-1], Stack[-4])
0x135: Pop(0)
0x136: @ LoadImage(Stack[-4])
0x137: Pop(0)
0x138: Push( Stack[3 + Tasks[-1].StackPointer] )
0x139: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13a: Push((int) -1)
0x13b: Push("")
0x13c: @ SetTooltip(Stack[-2], Stack[-1])
0x13d: Pop(2)
0x13e: GOTO 0x143

0x13f: Push((int) 4)
0x140: Push("")
0x141: @ SetTooltip(Stack[-2], Stack[-1], Stack[-2])
0x142: Pop(2)
0x143: GOTO 0x148

0x144: Push((int) -1)
0x145: Push("")
0x146: @ SetTooltip(Stack[-2], Stack[-1])
0x147: Pop(2)
0x148: Return(); Pop(2)

0x149: PushEmpty()
0x14a: Push((int) 1)
0x14b: Pop(1); Push(Stack[-2] + Stack[-1]);
0x14c: Push((int) 10)
0x14d: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x14f: Push("l_slot0")
0x150: Push((int) 1)
0x151: Pop(1); Push(Stack[-3] + Stack[-1]);
0x152: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x153: Return(); Pop(0)

0x154: Push("l_slot")
0x155: Push((int) 1)
0x156: Pop(1); Push(Stack[-3] + Stack[-1]);
0x157: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x158: Return(); Pop(0)

0x159: PushEmpty()
0x15a: Push((int) 1)
0x15b: Pop(1); Push(Stack[-2] + Stack[-1]);
0x15c: Push((int) 10)
0x15d: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15f: Push("r_slot0")
0x160: Push((int) 1)
0x161: Pop(1); Push(Stack[-3] + Stack[-1]);
0x162: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x163: Return(); Pop(0)

0x164: Push("r_slot")
0x165: Push((int) 1)
0x166: Pop(1); Push(Stack[-3] + Stack[-1]);
0x167: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x168: Return(); Pop(0)

