GlobalVarCount = 0

Strings:
	default
	$parent
	scalpel
	get
	GetItemID
	ccslot0
	ccslot

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	SendMessage (2 args)
	SendMessageToParent (1 args)
	ClientToScreen (2 args)
	GetWindowSize (2 args)
	SetMousePos (2 args)
	GetCursorPos (2 args)
	Blit (3 args)
	Print (4 args)
	SetTooltip (2 args)
	GetInvItemSprite (2 args)
	LoadImage (1 args)
	GetInvItemMaxStackSize (2 args)
	SetTooltip (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, object, string, bool, bool, string, string) Params = 0
		EVENT_9 Op = 0xd Vars = ()
		EVENT_0 Op = 0x6c Vars = ()
		EVENT_2 Op = 0x81 Vars = (int, int)
		EVENT_200 Op = 0x88 Vars = (int, string, object)


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

0xd: PushEmpty(int, int)
0xe: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x10: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x11: Stack[-1] = (int) 0
0x12: Push((int) 4)
0x13: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x14: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x15: Push((int) -5)
0x16: PushEmpty(string, int)
0x17: Stack[-1] = Stack[-4]
0x18: Call2 0xec

0x19: Pop(1)
0x1a: @ SendMessage(Stack[-2], Stack[-1])
0x1b: Pop(2)
0x1c: Push((int) 1)
0x1d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1e: GOTO 0x12

0x1f: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0x20: Push((int) -10)
0x21: @ SendMessageToParent(Stack[-1])
0x22: Pop(1)
0x23: Return(); Pop(2)

0x24: PushEmpty(int, int, int, int, int, int, int, int)
0x25: Stack[-4] = (int) 0
0x26: Stack[-3] = (int) 0
0x27: Stack[-2] = (int) 0
0x28: Stack[-1] = (int) 0
0x29: @ ClientToScreen(Stack[-4], Stack[-3])
0x2a: Pop(0)
0x2b: @ GetWindowSize(Stack[-2], Stack[-1])
0x2c: Pop(0)
0x2d: Push((int) 2)
0x2e: Pop(1); Push(Stack[-3] / Stack[-1]);
0x2f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x30: Push((int) 2)
0x31: Pop(1); Push(Stack[-3] / Stack[-1]);
0x32: Pop(1); Push(Stack[-5] + Stack[-1]);
0x33: @ SetMousePos(Stack[-2], Stack[-1])
0x34: Pop(2)
0x35: Return(); Pop(8)

0x36: PushEmpty(int, int, int, int, int, int, int, int, int, int, int, int)
0x37: Push("")
0x38: Pop(1); Push((bool) Stack[-14] != Stack[-1])
0x39: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x3a: Stack[-6] = (int) 0
0x3b: Stack[-5] = (int) 0
0x3c: Stack[-4] = (int) 0
0x3d: Stack[-3] = (int) 0
0x3e: @ ClientToScreen(Stack[-6], Stack[-5])
0x3f: Pop(0)
0x40: @ GetWindowSize(Stack[-4], Stack[-3])
0x41: Pop(0)
0x42: Stack[-2] = (int) 0
0x43: Stack[-1] = (int) 0
0x44: @ GetCursorPos(Stack[-2], Stack[-1])
0x45: Pop(0)
0x46: PushEmpty(bool)
0x47: Stack[-1] = (bool) 0
0x48: PushEmpty(bool)
0x49: Stack[-1] = (bool) 0
0x4a: PushEmpty(bool)
0x4b: Stack[-1] = (bool) 0
0x4c: Pop(0); Push((bool) Stack[-5] > Stack[-9])
0x4d: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4e: Pop(0); Push((bool) Stack[-4] > Stack[-8])
0x4f: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x50: Stack[-1] = (bool) 1
0x51: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x52: Pop(0); Push(Stack[-8] + Stack[-6]);
0x53: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x55: Stack[-1] = (bool) 1
0x56: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x57: Pop(0); Push(Stack[-6] + Stack[-4]);
0x58: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x5a: Stack[-1] = (bool) 1
0x5b: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x5c: Stack[4 + Tasks[-1].StackPointer] = (bool)0
0x5d: Push("$parent")
0x5e: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x5f: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x60: Push((int) -4)
0x61: @ SendMessageToParent(Stack[-1])
0x62: Pop(1)
0x63: GOTO 0x67

0x64: Push((int) -4)
0x65: @ SendMessage(Stack[-1], Stack[-14])
0x66: Pop(1)
0x67: GOTO 0x6b

0x68: PushEmpty()
0x69: Call2 0x24

0x6a: Pop(0)
0x6b: Return(); Pop(12)

0x6c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x6d: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6e: Push("scalpel")
0x6f: Push((int) 1)
0x70: Push((int) 1)
0x71: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x72: Pop(3)
0x73: Return(); Pop(0)

0x74: Push((int) 1)
0x75: Push((int) 1)
0x76: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(2)
0x78: Push((int) 1)
0x79: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0x7a: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7b: Push("default")
0x7c: Push((int) 2)
0x7d: Push((int) 35)
0x7e: @ Print(Stack[-3], Stack[-2], Stack[-1], Stack[-0])
0x7f: Pop(3)
0x80: Return(); Pop(0)

0x81: PushEmpty()
0x82: Push( Stack[2 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x84: Push((int) 0)
0x85: @ SendMessageToParent(Stack[-1])
0x86: Pop(1)
0x87: Return(); Pop(0)

0x88: PushEmpty(int, int)
0x89: Push((int) -7)
0x8a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x8b: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8c: Push( Stack[4 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8e: PushEmpty()
0x8f: Call2 0x24

0x90: Pop(0)
0x91: Return(); Pop(2)

0x92: Push((int) -6)
0x93: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x95: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0x96: Return(); Pop(2)

0x97: Push((int) -1)
0x98: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x9a: Pop(0); Push(( Stack[-3] != 0 )
0x9b: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9c: Push((int) 0)
0x9d: @@ get(Stack[-6], Stack[-1])
0x9e: Pop(1)
0x9f: Push((int) 1)
0xa0: @@ get(Stack[-7], Stack[-1])
0xa1: Pop(1)
0xa2: Return(); Pop(2)

0xa3: Push((int) -2)
0xa4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa6: Push( Stack[4 + Tasks[-1].StackPointer] )
0xa7: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa8: PushEmpty(string)
0xa9: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0xaa: Call2 0x36

0xab: Pop(1)
0xac: Return(); Pop(2)

0xad: Push((int) -3)
0xae: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb0: Push( Stack[4 + Tasks[-1].StackPointer] )
0xb1: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb2: PushEmpty(string)
0xb3: Stack[-1] = Stack[7 + Tasks[-1].StackPointer]
0xb4: Call2 0x36

0xb5: Pop(1)
0xb6: Return(); Pop(2)

0xb7: Push((int) -4)
0xb8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xba: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0xbb: PushEmpty()
0xbc: Call2 0x24

0xbd: Pop(0)
0xbe: Return(); Pop(2)

0xbf: Push((int) -5)
0xc0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc2: Push( Stack[5 + Tasks[-1].StackPointer] )
0xc3: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc4: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0xc5: GOTO 0xc7

0xc6: Stack[4 + Tasks[-1].StackPointer] = (bool)0
0xc7: Return(); Pop(2)

0xc8: Push((int) 65536)
0xc9: Pop(1); Push(Stack[-6] & Stack[-1]);
0xca: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcb: Push((int) 16383)
0xcc: Stack[0 + Tasks[-1].StackPointer] = Stack[-6] & Stack[-1]; Pop(1);
0xcd: Return(); Pop(2)

0xce: Push((int) 32768)
0xcf: Pop(1); Push(Stack[-6] & Stack[-1]);
0xd0: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd1: Stack[2 + Tasks[-1].StackPointer] = 0
0xd2: Push((int) -1)
0xd3: Push("")
0xd4: @ SetTooltip(Stack[-2], Stack[-1])
0xd5: Pop(2)
0xd6: GOTO 0xeb

0xd7: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0xd8: Push( Stack[2 + Tasks[-1].StackPointer] )
0xd9: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xda: @@ GetItemID(Stack[-1])
0xdb: Pop(0)
0xdc: @ GetInvItemSprite(Stack[-3], Stack[-1])
0xdd: Pop(0)
0xde: @ LoadImage(Stack[-3])
0xdf: Pop(0)
0xe0: @ GetInvItemMaxStackSize(Stack[-1], Stack[-1])
0xe1: Pop(0)
0xe2: Push((int) 1)
0xe3: Push("")
0xe4: @ SetTooltip(Stack[-2], Stack[-1], Stack[-2])
0xe5: Pop(2)
0xe6: GOTO 0xeb

0xe7: Push((int) -1)
0xe8: Push("")
0xe9: @ SetTooltip(Stack[-2], Stack[-1])
0xea: Pop(2)
0xeb: Return(); Pop(2)

0xec: PushEmpty()
0xed: Push((int) 1)
0xee: Pop(1); Push(Stack[-2] + Stack[-1]);
0xef: Push((int) 10)
0xf0: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf2: Push("ccslot0")
0xf3: Push((int) 1)
0xf4: Pop(1); Push(Stack[-3] + Stack[-1]);
0xf5: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0xf6: Return(); Pop(0)

0xf7: Push("ccslot")
0xf8: Push((int) 1)
0xf9: Pop(1); Push(Stack[-3] + Stack[-1]);
0xfa: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0xfb: Return(); Pop(0)

