GlobalVarCount = 0

Strings:
	default
	$parent
	get
	GetItemID
	cslot0
	cslot

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
	SendToParent (0 args)
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
		EVENT_15 Op = 0x6c Vars = (int, int, float)
		EVENT_0 Op = 0x70 Vars = ()
		EVENT_2 Op = 0x80 Vars = (int, int)
		EVENT_200 Op = 0x87 Vars = (int, string, object)


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
0x18: Call2 0xeb

0x19: Pop(1)
0x1a: @ SendMessage(Stack[-2], Stack[-1])
0x1b: Pop(2)
0x1c: Push((int) 1)
0x1d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1e: GOTO 0x12

0x1f: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0x20: Push((int) -9)
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

0x6c: PushEmpty()
0x6d: @ SendToParent()
0x6e: Pop(0)
0x6f: Return(); Pop(0)

0x70: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x71: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x72: Return(); Pop(0)

0x73: Push((int) 1)
0x74: Push((int) 1)
0x75: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(2)
0x77: Push((int) 1)
0x78: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0x79: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7a: Push("default")
0x7b: Push((int) 2)
0x7c: Push((int) 35)
0x7d: @ Print(Stack[-3], Stack[-2], Stack[-1], Stack[-0])
0x7e: Pop(3)
0x7f: Return(); Pop(0)

0x80: PushEmpty()
0x81: Push( Stack[2 + Tasks[-1].StackPointer] )
0x82: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x83: Push((int) 0)
0x84: @ SendMessageToParent(Stack[-1])
0x85: Pop(1)
0x86: Return(); Pop(0)

0x87: PushEmpty(int, int)
0x88: Push((int) -7)
0x89: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x8a: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8b: Push( Stack[4 + Tasks[-1].StackPointer] )
0x8c: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8d: PushEmpty()
0x8e: Call2 0x24

0x8f: Pop(0)
0x90: Return(); Pop(2)

0x91: Push((int) -6)
0x92: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x93: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x94: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0x95: Return(); Pop(2)

0x96: Push((int) -1)
0x97: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x98: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x99: Pop(0); Push(( Stack[-3] != 0 )
0x9a: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9b: Push((int) 0)
0x9c: @@ get(Stack[-6], Stack[-1])
0x9d: Pop(1)
0x9e: Push((int) 1)
0x9f: @@ get(Stack[-7], Stack[-1])
0xa0: Pop(1)
0xa1: Return(); Pop(2)

0xa2: Push((int) -2)
0xa3: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa4: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa5: Push( Stack[4 + Tasks[-1].StackPointer] )
0xa6: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa7: PushEmpty(string)
0xa8: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0xa9: Call2 0x36

0xaa: Pop(1)
0xab: Return(); Pop(2)

0xac: Push((int) -3)
0xad: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xaf: Push( Stack[4 + Tasks[-1].StackPointer] )
0xb0: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb1: PushEmpty(string)
0xb2: Stack[-1] = Stack[7 + Tasks[-1].StackPointer]
0xb3: Call2 0x36

0xb4: Pop(1)
0xb5: Return(); Pop(2)

0xb6: Push((int) -4)
0xb7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb9: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0xba: PushEmpty()
0xbb: Call2 0x24

0xbc: Pop(0)
0xbd: Return(); Pop(2)

0xbe: Push((int) -5)
0xbf: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc1: Push( Stack[5 + Tasks[-1].StackPointer] )
0xc2: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc3: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0xc4: GOTO 0xc6

0xc5: Stack[4 + Tasks[-1].StackPointer] = (bool)0
0xc6: Return(); Pop(2)

0xc7: Push((int) 65536)
0xc8: Pop(1); Push(Stack[-6] & Stack[-1]);
0xc9: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xca: Push((int) 16383)
0xcb: Stack[0 + Tasks[-1].StackPointer] = Stack[-6] & Stack[-1]; Pop(1);
0xcc: Return(); Pop(2)

0xcd: Push((int) 32768)
0xce: Pop(1); Push(Stack[-6] & Stack[-1]);
0xcf: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd0: Stack[2 + Tasks[-1].StackPointer] = 0
0xd1: Push((int) -1)
0xd2: Push("")
0xd3: @ SetTooltip(Stack[-2], Stack[-1])
0xd4: Pop(2)
0xd5: GOTO 0xea

0xd6: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0xd7: Push( Stack[2 + Tasks[-1].StackPointer] )
0xd8: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xd9: @@ GetItemID(Stack[-1])
0xda: Pop(0)
0xdb: @ GetInvItemSprite(Stack[-3], Stack[-1])
0xdc: Pop(0)
0xdd: @ LoadImage(Stack[-3])
0xde: Pop(0)
0xdf: @ GetInvItemMaxStackSize(Stack[-1], Stack[-1])
0xe0: Pop(0)
0xe1: Push((int) 1)
0xe2: Push("")
0xe3: @ SetTooltip(Stack[-2], Stack[-1], Stack[-2])
0xe4: Pop(2)
0xe5: GOTO 0xea

0xe6: Push((int) -1)
0xe7: Push("")
0xe8: @ SetTooltip(Stack[-2], Stack[-1])
0xe9: Pop(2)
0xea: Return(); Pop(2)

0xeb: PushEmpty()
0xec: Push((int) 1)
0xed: Pop(1); Push(Stack[-2] + Stack[-1]);
0xee: Push((int) 10)
0xef: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf1: Push("cslot0")
0xf2: Push((int) 1)
0xf3: Pop(1); Push(Stack[-3] + Stack[-1]);
0xf4: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0xf5: Return(); Pop(0)

0xf6: Push("cslot")
0xf7: Push((int) 1)
0xf8: Pop(1); Push(Stack[-3] + Stack[-1]);
0xf9: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0xfa: Return(); Pop(0)

