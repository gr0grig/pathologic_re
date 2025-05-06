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
	GetTextWidth (3 args)
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
		EVENT_2 Op = 0x3e Vars = (int, int)
		EVENT_6 Op = 0x43 Vars = (int, int)
		EVENT_3 Op = 0x48 Vars = (int, int)
		EVENT_9 Op = 0x5c Vars = ()
		EVENT_200 Op = 0xaf Vars = (int, string, object)


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

0x13: PushEmpty(string, int, int, string, int, int)
0x14: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x15: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x16: Return(); Pop(6)

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
0x23: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x24: Push("/")
0x25: Pop(1); Push(Stack[0 + StackPtr] + Stack[-1]);
0x26: Stack[-4] = Stack[-1] + Stack[1 + Tasks[-1].StackPointer]; Pop(1);
0x27: Push("default")
0x28: @ GetTextWidth(Stack[-3], Stack[-1], Stack[-4])
0x29: Pop(1)
0x2a: Push((int) 48)
0x2b: Stack[-2] = Stack[-1] - Stack[-3]; Pop(1);
0x2c: Push((int) 2)
0x2d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2e: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2f: Stack[-1] = (int) 2
0x30: Push("default")
0x31: Push((int) 35)
0x32: @ Print(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x33: Pop(2)
0x34: Push( Stack[3 + Tasks[-1].StackPointer] )
0x35: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x36: Push("disabled")
0x37: Push((int) 1)
0x38: Push((int) 1)
0x39: Push((int) 50)
0x3a: Push((int) 50)
0x3b: @ StretchBlit(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3c: Pop(5)
0x3d: Return(); Pop(6)

0x3e: PushEmpty()
0x3f: Push((int) 0)
0x40: @ SendMessageToParent(Stack[-1])
0x41: Pop(1)
0x42: Return(); Pop(0)

0x43: PushEmpty()
0x44: Push((int) 1)
0x45: @ SendMessageToParent(Stack[-1])
0x46: Pop(1)
0x47: Return(); Pop(0)

0x48: PushEmpty()
0x49: Return(); Pop(0)

0x4a: PushEmpty(int, int, int, int, int, int, int, int)
0x4b: Stack[-4] = (int) 0
0x4c: Stack[-3] = (int) 0
0x4d: Stack[-2] = (int) 0
0x4e: Stack[-1] = (int) 0
0x4f: @ ClientToScreen(Stack[-4], Stack[-3])
0x50: Pop(0)
0x51: @ GetWindowSize(Stack[-2], Stack[-1])
0x52: Pop(0)
0x53: Push((int) 2)
0x54: Pop(1); Push(Stack[-3] / Stack[-1]);
0x55: Pop(1); Push(Stack[-5] + Stack[-1]);
0x56: Push((int) 2)
0x57: Pop(1); Push(Stack[-3] / Stack[-1]);
0x58: Pop(1); Push(Stack[-5] + Stack[-1]);
0x59: @ SetMousePos(Stack[-2], Stack[-1])
0x5a: Pop(2)
0x5b: Return(); Pop(8)

0x5c: PushEmpty(int, int)
0x5d: Pop(0); Push((bool) Stack[5 + Tasks[-1].StackPointer] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x5f: Push((int) -20)
0x60: @ SendMessageToParent(Stack[-1])
0x61: Pop(1)
0x62: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x63: Stack[-1] = (int) 0
0x64: Pop(0); Push((bool) Stack[-1] < Stack[11 + Tasks[-1].StackPointer])
0x65: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x66: Push((int) -5)
0x67: PushEmpty(string, int)
0x68: Stack[-1] = Stack[-4]
0x69: Call2 0x151

0x6a: Pop(1)
0x6b: @ SendMessage(Stack[-2], Stack[-1])
0x6c: Pop(2)
0x6d: Push((int) -5)
0x6e: PushEmpty(string, int)
0x6f: Stack[-1] = Stack[-4]
0x70: Call2 0x161

0x71: Pop(1)
0x72: @ SendMessage(Stack[-2], Stack[-1])
0x73: Pop(2)
0x74: Push((int) 1)
0x75: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x76: GOTO 0x64

0x77: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x78: Return(); Pop(2)

0x79: PushEmpty(int, int, int, int, int, int, int, int, int, int, int, int)
0x7a: Push("")
0x7b: Pop(1); Push((bool) Stack[-14] != Stack[-1])
0x7c: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0x7d: Stack[-6] = (int) 0
0x7e: Stack[-5] = (int) 0
0x7f: Stack[-4] = (int) 0
0x80: Stack[-3] = (int) 0
0x81: @ ClientToScreen(Stack[-6], Stack[-5])
0x82: Pop(0)
0x83: @ GetWindowSize(Stack[-4], Stack[-3])
0x84: Pop(0)
0x85: Stack[-2] = (int) 0
0x86: Stack[-1] = (int) 0
0x87: @ GetCursorPos(Stack[-2], Stack[-1])
0x88: Pop(0)
0x89: PushEmpty(bool)
0x8a: Stack[-1] = (bool) 0
0x8b: PushEmpty(bool)
0x8c: Stack[-1] = (bool) 0
0x8d: PushEmpty(bool)
0x8e: Stack[-1] = (bool) 0
0x8f: Pop(0); Push((bool) Stack[-5] > Stack[-9])
0x90: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x91: Pop(0); Push((bool) Stack[-4] > Stack[-8])
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: Stack[-1] = (bool) 1
0x94: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x95: Pop(0); Push(Stack[-8] + Stack[-6]);
0x96: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: Stack[-1] = (bool) 1
0x99: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9a: Pop(0); Push(Stack[-6] + Stack[-4]);
0x9b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: Stack[-1] = (bool) 1
0x9e: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0x9f: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0xa0: Push("$parent")
0xa1: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa3: Push((int) -4)
0xa4: @ SendMessageToParent(Stack[-1])
0xa5: Pop(1)
0xa6: GOTO 0xaa

0xa7: Push((int) -4)
0xa8: @ SendMessage(Stack[-1], Stack[-14])
0xa9: Pop(1)
0xaa: GOTO 0xae

0xab: PushEmpty()
0xac: Call2 0x4a

0xad: Pop(0)
0xae: Return(); Pop(12)

0xaf: PushEmpty(int, int)
0xb0: Push((int) -1)
0xb1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xb3: Pop(0); Push(( Stack[-3] != 0 )
0xb4: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xb5: Push((int) 0)
0xb6: @@ get(Stack[-7], Stack[-1])
0xb7: Pop(1)
0xb8: Push((int) 1)
0xb9: @@ get(Stack[-8], Stack[-1])
0xba: Pop(1)
0xbb: Push((int) 2)
0xbc: @@ get(Stack[-9], Stack[-1])
0xbd: Pop(1)
0xbe: Push((int) 3)
0xbf: @@ get(Stack[-10], Stack[-1])
0xc0: Pop(1)
0xc1: Return(); Pop(2)

0xc2: Push((int) -19)
0xc3: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc5: Push((int) 0)
0xc6: @@ get(Stack[-11], Stack[-1])
0xc7: Pop(1)
0xc8: Return(); Pop(2)

0xc9: Push((int) -7)
0xca: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcc: Push( Stack[5 + Tasks[-1].StackPointer] )
0xcd: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xce: PushEmpty()
0xcf: Call2 0x4a

0xd0: Pop(0)
0xd1: Return(); Pop(2)

0xd2: Push((int) -6)
0xd3: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd5: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0xd6: Return(); Pop(2)

0xd7: Push((int) -13)
0xd8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd9: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xda: Push( Stack[5 + Tasks[-1].StackPointer] )
0xdb: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdc: PushEmpty(string)
0xdd: Stack[-1] = Stack[7 + Tasks[-1].StackPointer]
0xde: Call2 0x79

0xdf: Pop(1)
0xe0: Return(); Pop(2)

0xe1: Push((int) -14)
0xe2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe4: Push( Stack[5 + Tasks[-1].StackPointer] )
0xe5: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe6: PushEmpty(string)
0xe7: Stack[-1] = Stack[8 + Tasks[-1].StackPointer]
0xe8: Call2 0x79

0xe9: Pop(1)
0xea: Return(); Pop(2)

0xeb: Push((int) -15)
0xec: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xee: Push( Stack[5 + Tasks[-1].StackPointer] )
0xef: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf0: PushEmpty(string)
0xf1: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0xf2: Call2 0x79

0xf3: Pop(1)
0xf4: Return(); Pop(2)

0xf5: Push((int) -16)
0xf6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf8: Push( Stack[5 + Tasks[-1].StackPointer] )
0xf9: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfa: PushEmpty(string)
0xfb: Stack[-1] = Stack[10 + Tasks[-1].StackPointer]
0xfc: Call2 0x79

0xfd: Pop(1)
0xfe: Return(); Pop(2)

0xff: Push((int) -4)
0x100: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x102: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x103: PushEmpty()
0x104: Call2 0x4a

0x105: Pop(0)
0x106: Return(); Pop(2)

0x107: Push((int) -5)
0x108: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10a: Push( Stack[6 + Tasks[-1].StackPointer] )
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x10d: GOTO 0x10f

0x10e: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0x10f: Return(); Pop(2)

0x110: Push((int) 0)
0x111: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x113: Return(); Pop(2)

0x114: Push((int) 65536)
0x115: Pop(1); Push(Stack[-6] & Stack[-1]);
0x116: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x117: Push((int) 0)
0x118: @@ get(Stack[-0], Stack[-1])
0x119: Pop(1)
0x11a: Push((int) 1)
0x11b: @@ get(Stack[-1], Stack[-1])
0x11c: Pop(1)
0x11d: Return(); Pop(2)

0x11e: Push((int) 16384)
0x11f: Pop(1); Push(Stack[-6] & Stack[-1]);
0x120: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x121: Push("selected")
0x122: @ SetBackground(Stack[-1])
0x123: Pop(1)
0x124: GOTO 0x128

0x125: Push("default")
0x126: @ SetBackground(Stack[-1])
0x127: Pop(1)
0x128: Push((int) 32768)
0x129: Pop(1); Push(Stack[-6] & Stack[-1]);
0x12a: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12b: Stack[2 + Tasks[-1].StackPointer] = 0
0x12c: Push((int) -1)
0x12d: Push("")
0x12e: @ SetTooltip(Stack[-2], Stack[-1])
0x12f: Pop(2)
0x130: Return(); Pop(2)

0x131: Push((int) 131072)
0x132: Pop(1); Push(Stack[-6] & Stack[-1]);
0x133: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x134: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x135: GOTO 0x137

0x136: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x137: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x138: Push( Stack[2 + Tasks[-1].StackPointer] )
0x139: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x13a: @@ GetItemID(Stack[-1])
0x13b: Pop(0)
0x13c: @ GetItemImage(Stack[-1], Stack[-4])
0x13d: Pop(0)
0x13e: @ LoadImage(Stack[-4])
0x13f: Pop(0)
0x140: Push( Stack[3 + Tasks[-1].StackPointer] )
0x141: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x142: Push((int) -1)
0x143: Push("")
0x144: @ SetTooltip(Stack[-2], Stack[-1])
0x145: Pop(2)
0x146: GOTO 0x14b

0x147: Push((int) 3)
0x148: Push("")
0x149: @ SetTooltip(Stack[-2], Stack[-1], Stack[-2])
0x14a: Pop(2)
0x14b: GOTO 0x150

0x14c: Push((int) -1)
0x14d: Push("")
0x14e: @ SetTooltip(Stack[-2], Stack[-1])
0x14f: Pop(2)
0x150: Return(); Pop(2)

0x151: PushEmpty()
0x152: Push((int) 1)
0x153: Pop(1); Push(Stack[-2] + Stack[-1]);
0x154: Push((int) 10)
0x155: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x156: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x157: Push("l_slot0")
0x158: Push((int) 1)
0x159: Pop(1); Push(Stack[-3] + Stack[-1]);
0x15a: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x15b: Return(); Pop(0)

0x15c: Push("l_slot")
0x15d: Push((int) 1)
0x15e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x15f: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x160: Return(); Pop(0)

0x161: PushEmpty()
0x162: Push((int) 1)
0x163: Pop(1); Push(Stack[-2] + Stack[-1]);
0x164: Push((int) 10)
0x165: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x167: Push("r_slot0")
0x168: Push((int) 1)
0x169: Pop(1); Push(Stack[-3] + Stack[-1]);
0x16a: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x16b: Return(); Pop(0)

0x16c: Push("r_slot")
0x16d: Push((int) 1)
0x16e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x16f: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x170: Return(); Pop(0)

