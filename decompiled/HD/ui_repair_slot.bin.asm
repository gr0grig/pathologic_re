GlobalVarCount = 0

Strings:
	default
	$parent
	selected
	get
	GetItemID
	slot0
	slot

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Blit (3 args)
	Print (4 args)
	SendMessage (2 args)
	SendMessageToParent (1 args)
	ClientToScreen (2 args)
	GetWindowSize (2 args)
	SetMousePos (2 args)
	GetCursorPos (2 args)
	SetTooltip (2 args)
	GetStringByID (2 args)
	GetInvItemSprite (2 args)
	LoadImage (1 args)
	GetInvItemMaxStackSize (2 args)
	SetTooltip (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, object, string, bool, bool, string, string) Params = 0
		EVENT_0 Op = 0xd Vars = ()
		EVENT_9 Op = 0x1d Vars = ()
		EVENT_2 Op = 0x7c Vars = (int, int)
		EVENT_6 Op = 0x87 Vars = (int, int)
		EVENT_3 Op = 0x8f Vars = (int, int)
		EVENT_200 Op = 0x91 Vars = (int, string, object)


0x0: Stack[2 + Tasks[-1].StackPointer] = 0
0x1: Stack[0 + Tasks[-1].StackPointer] = (int)1
0x2: Stack[4 + Tasks[-1].StackPointer] = (bool)0
0x3: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0x4: Push("default")
0x5: @ SetBackground(Stack[-1])
0x6: Pop(1)
0x7: Push((bool) 1)
0x8: @ SetOwnerDraw(Stack[-1])
0x9: Pop(1)
0xa: @ ProcessEvents()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xe: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0xf: Return(); Pop(0)

0x10: Push((int) 1)
0x11: Push((int) 1)
0x12: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x13: Pop(2)
0x14: Push((int) 1)
0x15: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x16: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x17: Push("default")
0x18: Push((int) 2)
0x19: Push((int) 35)
0x1a: @ Print(Stack[-3], Stack[-2], Stack[-1], Stack[-0])
0x1b: Pop(3)
0x1c: Return(); Pop(0)

0x1d: PushEmpty(int, int)
0x1e: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1f: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x20: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x21: Stack[-1] = (int) 0
0x22: Push((int) 4)
0x23: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x24: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x25: Push((int) -5)
0x26: PushEmpty(string, int)
0x27: Stack[-1] = Stack[-4]
0x28: Call2 0x104

0x29: Pop(1)
0x2a: @ SendMessage(Stack[-2], Stack[-1])
0x2b: Pop(2)
0x2c: Push((int) 1)
0x2d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2e: GOTO 0x22

0x2f: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0x30: Push((int) -9)
0x31: @ SendMessageToParent(Stack[-1])
0x32: Pop(1)
0x33: Return(); Pop(2)

0x34: PushEmpty(int, int, int, int, int, int, int, int)
0x35: Stack[-4] = (int) 0
0x36: Stack[-3] = (int) 0
0x37: Stack[-2] = (int) 0
0x38: Stack[-1] = (int) 0
0x39: @ ClientToScreen(Stack[-4], Stack[-3])
0x3a: Pop(0)
0x3b: @ GetWindowSize(Stack[-2], Stack[-1])
0x3c: Pop(0)
0x3d: Push((int) 2)
0x3e: Pop(1); Push(Stack[-3] / Stack[-1]);
0x3f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x40: Push((int) 2)
0x41: Pop(1); Push(Stack[-3] / Stack[-1]);
0x42: Pop(1); Push(Stack[-5] + Stack[-1]);
0x43: @ SetMousePos(Stack[-2], Stack[-1])
0x44: Pop(2)
0x45: Return(); Pop(8)

0x46: PushEmpty(int, int, int, int, int, int, int, int, int, int, int, int)
0x47: Push("")
0x48: Pop(1); Push((bool) Stack[-14] != Stack[-1])
0x49: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x4a: Stack[-6] = (int) 0
0x4b: Stack[-5] = (int) 0
0x4c: Stack[-4] = (int) 0
0x4d: Stack[-3] = (int) 0
0x4e: @ ClientToScreen(Stack[-6], Stack[-5])
0x4f: Pop(0)
0x50: @ GetWindowSize(Stack[-4], Stack[-3])
0x51: Pop(0)
0x52: Stack[-2] = (int) 0
0x53: Stack[-1] = (int) 0
0x54: @ GetCursorPos(Stack[-2], Stack[-1])
0x55: Pop(0)
0x56: PushEmpty(bool)
0x57: Stack[-1] = (bool) 0
0x58: PushEmpty(bool)
0x59: Stack[-1] = (bool) 0
0x5a: PushEmpty(bool)
0x5b: Stack[-1] = (bool) 0
0x5c: Pop(0); Push((bool) Stack[-5] > Stack[-9])
0x5d: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5e: Pop(0); Push((bool) Stack[-4] > Stack[-8])
0x5f: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x60: Stack[-1] = (bool) 1
0x61: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x62: Pop(0); Push(Stack[-8] + Stack[-6]);
0x63: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-1] = (bool) 1
0x66: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x67: Pop(0); Push(Stack[-6] + Stack[-4]);
0x68: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: Stack[-1] = (bool) 1
0x6b: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x6c: Stack[4 + Tasks[-1].StackPointer] = (bool)0
0x6d: Push("$parent")
0x6e: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x70: Push((int) -4)
0x71: @ SendMessageToParent(Stack[-1])
0x72: Pop(1)
0x73: GOTO 0x77

0x74: Push((int) -4)
0x75: @ SendMessage(Stack[-1], Stack[-14])
0x76: Pop(1)
0x77: GOTO 0x7b

0x78: PushEmpty()
0x79: Call2 0x34

0x7a: Pop(0)
0x7b: Return(); Pop(12)

0x7c: PushEmpty()
0x7d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: Return(); Pop(0)

0x80: Push("selected")
0x81: @ SetBackground(Stack[-1])
0x82: Pop(1)
0x83: Push((int) 0)
0x84: @ SendMessageToParent(Stack[-1])
0x85: Pop(1)
0x86: Return(); Pop(0)

0x87: PushEmpty()
0x88: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Push((int) 1)
0x8c: @ SendMessageToParent(Stack[-1])
0x8d: Pop(1)
0x8e: Return(); Pop(0)

0x8f: PushEmpty()
0x90: Return(); Pop(0)

0x91: PushEmpty(int, string, int, int, string, int)
0x92: Push((int) -7)
0x93: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x95: Push( Stack[4 + Tasks[-1].StackPointer] )
0x96: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x97: PushEmpty()
0x98: Call2 0x34

0x99: Pop(0)
0x9a: Return(); Pop(6)

0x9b: Push((int) -6)
0x9c: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x9d: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9e: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0x9f: Return(); Pop(6)

0xa0: Push((int) -1)
0xa1: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa3: Pop(0); Push(( Stack[-7] != 0 )
0xa4: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa5: Push((int) 0)
0xa6: @@ get(Stack[-6], Stack[-1])
0xa7: Pop(1)
0xa8: Push((int) 1)
0xa9: @@ get(Stack[-7], Stack[-1])
0xaa: Pop(1)
0xab: Return(); Pop(6)

0xac: Push((int) -2)
0xad: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xaf: Push( Stack[4 + Tasks[-1].StackPointer] )
0xb0: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb1: PushEmpty(string)
0xb2: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0xb3: Call2 0x46

0xb4: Pop(1)
0xb5: Return(); Pop(6)

0xb6: Push((int) -3)
0xb7: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb9: Push( Stack[4 + Tasks[-1].StackPointer] )
0xba: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbb: PushEmpty(string)
0xbc: Stack[-1] = Stack[7 + Tasks[-1].StackPointer]
0xbd: Call2 0x46

0xbe: Pop(1)
0xbf: Return(); Pop(6)

0xc0: Push((int) -4)
0xc1: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc3: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0xc4: PushEmpty()
0xc5: Call2 0x34

0xc6: Pop(0)
0xc7: Return(); Pop(6)

0xc8: Push((int) -5)
0xc9: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcb: Push( Stack[5 + Tasks[-1].StackPointer] )
0xcc: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xcd: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0xce: GOTO 0xd0

0xcf: Stack[4 + Tasks[-1].StackPointer] = (bool)0
0xd0: Return(); Pop(6)

0xd1: Push((int) 65536)
0xd2: Pop(1); Push(Stack[-10] & Stack[-1]);
0xd3: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd4: Push((int) 16383)
0xd5: Stack[0 + Tasks[-1].StackPointer] = Stack[-10] & Stack[-1]; Pop(1);
0xd6: Return(); Pop(6)

0xd7: Push((int) 16384)
0xd8: Pop(1); Push(Stack[-10] & Stack[-1]);
0xd9: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xda: Push("selected")
0xdb: @ SetBackground(Stack[-1])
0xdc: Pop(1)
0xdd: GOTO 0xe1

0xde: Push("default")
0xdf: @ SetBackground(Stack[-1])
0xe0: Pop(1)
0xe1: Push((int) 32768)
0xe2: Pop(1); Push(Stack[-10] & Stack[-1]);
0xe3: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe4: Stack[2 + Tasks[-1].StackPointer] = 0
0xe5: Push((int) -1)
0xe6: Push("")
0xe7: @ SetTooltip(Stack[-2], Stack[-1])
0xe8: Pop(2)
0xe9: GOTO 0x103

0xea: Push((int) 16383)
0xeb: Stack[-4] = Stack[-10] & Stack[-1]; Pop(1);
0xec: Push((int) 1007)
0xed: @ GetStringByID(Stack[-3], Stack[-1])
0xee: Pop(1)
0xef: Stack[-2] = Stack[-2] + Stack[-3]; Pop(0);
0xf0: Stack[2 + Tasks[-1].StackPointer] = Stack[-7]
0xf1: Push( Stack[2 + Tasks[-1].StackPointer] )
0xf2: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf3: @@ GetItemID(Stack[-1])
0xf4: Pop(0)
0xf5: @ GetInvItemSprite(Stack[-3], Stack[-1])
0xf6: Pop(0)
0xf7: @ LoadImage(Stack[-3])
0xf8: Pop(0)
0xf9: @ GetInvItemMaxStackSize(Stack[-1], Stack[-1])
0xfa: Pop(0)
0xfb: Push((int) 1)
0xfc: @ SetTooltip(Stack[-1], Stack[-3], Stack[-2])
0xfd: Pop(1)
0xfe: GOTO 0x103

0xff: Push((int) -1)
0x100: Push("")
0x101: @ SetTooltip(Stack[-2], Stack[-1])
0x102: Pop(2)
0x103: Return(); Pop(6)

0x104: PushEmpty()
0x105: Push((int) 1)
0x106: Pop(1); Push(Stack[-2] + Stack[-1]);
0x107: Push((int) 10)
0x108: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10a: Push("slot0")
0x10b: Push((int) 1)
0x10c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x10d: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x10e: Return(); Pop(0)

0x10f: Push("slot")
0x110: Push((int) 1)
0x111: Pop(1); Push(Stack[-3] + Stack[-1]);
0x112: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x113: Return(); Pop(0)

