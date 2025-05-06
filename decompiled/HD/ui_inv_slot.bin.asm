GlobalVarCount = 0

Strings:
	default
	disabled
	selected
	$parent
	get
	GetItemID
	slot0
	slot

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	SendMessage (2 args)
	SendMessageToParent (1 args)
	Blit (3 args)
	Print (4 args)
	StretchBlit (5 args)
	ClientToScreen (2 args)
	GetWindowSize (2 args)
	SetMousePos (2 args)
	GetCursorPos (2 args)
	SetTooltip (2 args)
	GetInvItemSprite (2 args)
	LoadImage (1 args)
	GetInvItemMaxStackSize (2 args)
	SetTooltip (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, object, string, bool, bool, bool, string, string) Params = 0
		EVENT_9 Op = 0xe Vars = ()
		EVENT_10 Op = 0x25 Vars = ()
		EVENT_0 Op = 0x26 Vars = ()
		EVENT_2 Op = 0x3f Vars = (int, int)
		EVENT_6 Op = 0x47 Vars = (int, int)
		EVENT_3 Op = 0x4c Vars = (int, int)
		EVENT_200 Op = 0x96 Vars = (int, string, object)


0x0: Stack[2 + Tasks[-1].StackPointer] = 0
0x1: Stack[0 + Tasks[-1].StackPointer] = (int)1
0x2: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0x3: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x4: Stack[4 + Tasks[-1].StackPointer] = (bool)0
0x5: Push("default")
0x6: @ SetBackground(Stack[-1])
0x7: Pop(1)
0x8: Push((bool) 1)
0x9: @ SetOwnerDraw(Stack[-1])
0xa: Pop(1)
0xb: @ ProcessEvents()
0xc: Pop(0)
0xd: Return(); Pop(0)

0xe: PushEmpty(int, int)
0xf: Pop(0); Push((bool) Stack[5 + Tasks[-1].StackPointer] == 0)
0x10: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x11: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x12: Stack[-1] = (int) 0
0x13: Push((int) 12)
0x14: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x16: Push((int) -5)
0x17: PushEmpty(string, int)
0x18: Stack[-1] = Stack[-4]
0x19: Call2 0x111

0x1a: Pop(1)
0x1b: @ SendMessage(Stack[-2], Stack[-1])
0x1c: Pop(2)
0x1d: Push((int) 1)
0x1e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1f: GOTO 0x13

0x20: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x21: Push((int) -8)
0x22: @ SendMessageToParent(Stack[-1])
0x23: Pop(1)
0x24: Return(); Pop(2)

0x25: Return(); Pop(0)

0x26: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x27: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x28: Return(); Pop(0)

0x29: Push((int) 1)
0x2a: Push((int) 1)
0x2b: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x2c: Pop(2)
0x2d: Push((int) 1)
0x2e: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x30: Push("default")
0x31: Push((int) 2)
0x32: Push((int) 35)
0x33: @ Print(Stack[-3], Stack[-2], Stack[-1], Stack[-0])
0x34: Pop(3)
0x35: Push( Stack[4 + Tasks[-1].StackPointer] )
0x36: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x37: Push("disabled")
0x38: Push((int) 1)
0x39: Push((int) 1)
0x3a: Push((int) 50)
0x3b: Push((int) 50)
0x3c: @ StretchBlit(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3d: Pop(5)
0x3e: Return(); Pop(0)

0x3f: PushEmpty()
0x40: Push("selected")
0x41: @ SetBackground(Stack[-1])
0x42: Pop(1)
0x43: Push((int) 0)
0x44: @ SendMessageToParent(Stack[-1])
0x45: Pop(1)
0x46: Return(); Pop(0)

0x47: PushEmpty()
0x48: Push((int) 1)
0x49: @ SendMessageToParent(Stack[-1])
0x4a: Pop(1)
0x4b: Return(); Pop(0)

0x4c: PushEmpty()
0x4d: Return(); Pop(0)

0x4e: PushEmpty(int, int, int, int, int, int, int, int)
0x4f: Stack[-4] = (int) 0
0x50: Stack[-3] = (int) 0
0x51: Stack[-2] = (int) 0
0x52: Stack[-1] = (int) 0
0x53: @ ClientToScreen(Stack[-4], Stack[-3])
0x54: Pop(0)
0x55: @ GetWindowSize(Stack[-2], Stack[-1])
0x56: Pop(0)
0x57: Push((int) 2)
0x58: Pop(1); Push(Stack[-3] / Stack[-1]);
0x59: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5a: Push((int) 2)
0x5b: Pop(1); Push(Stack[-3] / Stack[-1]);
0x5c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5d: @ SetMousePos(Stack[-2], Stack[-1])
0x5e: Pop(2)
0x5f: Return(); Pop(8)

0x60: PushEmpty(int, int, int, int, int, int, int, int, int, int, int, int)
0x61: Push("")
0x62: Pop(1); Push((bool) Stack[-14] != Stack[-1])
0x63: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x64: Stack[-6] = (int) 0
0x65: Stack[-5] = (int) 0
0x66: Stack[-4] = (int) 0
0x67: Stack[-3] = (int) 0
0x68: @ ClientToScreen(Stack[-6], Stack[-5])
0x69: Pop(0)
0x6a: @ GetWindowSize(Stack[-4], Stack[-3])
0x6b: Pop(0)
0x6c: Stack[-2] = (int) 0
0x6d: Stack[-1] = (int) 0
0x6e: @ GetCursorPos(Stack[-2], Stack[-1])
0x6f: Pop(0)
0x70: PushEmpty(bool)
0x71: Stack[-1] = (bool) 0
0x72: PushEmpty(bool)
0x73: Stack[-1] = (bool) 0
0x74: PushEmpty(bool)
0x75: Stack[-1] = (bool) 0
0x76: Pop(0); Push((bool) Stack[-5] > Stack[-9])
0x77: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x78: Pop(0); Push((bool) Stack[-4] > Stack[-8])
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: Stack[-1] = (bool) 1
0x7b: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7c: Pop(0); Push(Stack[-8] + Stack[-6]);
0x7d: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: Stack[-1] = (bool) 1
0x80: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x81: Pop(0); Push(Stack[-6] + Stack[-4]);
0x82: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: Stack[-1] = (bool) 1
0x85: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x86: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0x87: Push("$parent")
0x88: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x89: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8a: Push((int) -4)
0x8b: @ SendMessageToParent(Stack[-1])
0x8c: Pop(1)
0x8d: GOTO 0x91

0x8e: Push((int) -4)
0x8f: @ SendMessage(Stack[-1], Stack[-14])
0x90: Pop(1)
0x91: GOTO 0x95

0x92: PushEmpty()
0x93: Call2 0x4e

0x94: Pop(0)
0x95: Return(); Pop(12)

0x96: PushEmpty(int, int)
0x97: Push((int) -7)
0x98: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9a: Push( Stack[5 + Tasks[-1].StackPointer] )
0x9b: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9c: PushEmpty()
0x9d: Call2 0x4e

0x9e: Pop(0)
0x9f: Return(); Pop(2)

0xa0: Push((int) -6)
0xa1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa3: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0xa4: Return(); Pop(2)

0xa5: Push((int) -1)
0xa6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa8: Pop(0); Push(( Stack[-3] != 0 )
0xa9: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaa: Push((int) 0)
0xab: @@ get(Stack[-7], Stack[-1])
0xac: Pop(1)
0xad: Push((int) 1)
0xae: @@ get(Stack[-8], Stack[-1])
0xaf: Pop(1)
0xb0: Return(); Pop(2)

0xb1: Push((int) -2)
0xb2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb4: Push( Stack[5 + Tasks[-1].StackPointer] )
0xb5: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb6: PushEmpty(string)
0xb7: Stack[-1] = Stack[7 + Tasks[-1].StackPointer]
0xb8: Call2 0x60

0xb9: Pop(1)
0xba: Return(); Pop(2)

0xbb: Push((int) -3)
0xbc: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xbe: Push( Stack[5 + Tasks[-1].StackPointer] )
0xbf: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc0: PushEmpty(string)
0xc1: Stack[-1] = Stack[8 + Tasks[-1].StackPointer]
0xc2: Call2 0x60

0xc3: Pop(1)
0xc4: Return(); Pop(2)

0xc5: Push((int) -4)
0xc6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc8: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0xc9: PushEmpty()
0xca: Call2 0x4e

0xcb: Pop(0)
0xcc: Return(); Pop(2)

0xcd: Push((int) -5)
0xce: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd0: Push( Stack[6 + Tasks[-1].StackPointer] )
0xd1: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd2: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0xd3: GOTO 0xd5

0xd4: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0xd5: Return(); Pop(2)

0xd6: Push((int) 65536)
0xd7: Pop(1); Push(Stack[-6] & Stack[-1]);
0xd8: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd9: Push((int) 16383)
0xda: Stack[0 + Tasks[-1].StackPointer] = Stack[-6] & Stack[-1]; Pop(1);
0xdb: Return(); Pop(2)

0xdc: Push((int) 16384)
0xdd: Pop(1); Push(Stack[-6] & Stack[-1]);
0xde: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xdf: Push("selected")
0xe0: @ SetBackground(Stack[-1])
0xe1: Pop(1)
0xe2: GOTO 0xe6

0xe3: Push("default")
0xe4: @ SetBackground(Stack[-1])
0xe5: Pop(1)
0xe6: Push((int) 32768)
0xe7: Pop(1); Push(Stack[-6] & Stack[-1]);
0xe8: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xe9: Stack[2 + Tasks[-1].StackPointer] = 0
0xea: Push((int) -1)
0xeb: Push("")
0xec: @ SetTooltip(Stack[-2], Stack[-1])
0xed: Pop(2)
0xee: GOTO 0x110

0xef: Push((int) 131072)
0xf0: Pop(1); Push(Stack[-6] & Stack[-1]);
0xf1: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf2: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0xf3: GOTO 0xf5

0xf4: Stack[4 + Tasks[-1].StackPointer] = (bool)0
0xf5: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0xf6: Push( Stack[2 + Tasks[-1].StackPointer] )
0xf7: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xf8: @@ GetItemID(Stack[-1])
0xf9: Pop(0)
0xfa: @ GetInvItemSprite(Stack[-3], Stack[-1])
0xfb: Pop(0)
0xfc: @ LoadImage(Stack[-3])
0xfd: Pop(0)
0xfe: @ GetInvItemMaxStackSize(Stack[-1], Stack[-1])
0xff: Pop(0)
0x100: Push( Stack[4 + Tasks[-1].StackPointer] )
0x101: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x102: Push((int) -1)
0x103: Push("")
0x104: @ SetTooltip(Stack[-2], Stack[-1])
0x105: Pop(2)
0x106: GOTO 0x10b

0x107: Push((int) 1)
0x108: Push("")
0x109: @ SetTooltip(Stack[-2], Stack[-1], Stack[-2])
0x10a: Pop(2)
0x10b: GOTO 0x110

0x10c: Push((int) -1)
0x10d: Push("")
0x10e: @ SetTooltip(Stack[-2], Stack[-1])
0x10f: Pop(2)
0x110: Return(); Pop(2)

0x111: PushEmpty()
0x112: Push((int) 1)
0x113: Pop(1); Push(Stack[-2] + Stack[-1]);
0x114: Push((int) 10)
0x115: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x117: Push("slot0")
0x118: Push((int) 1)
0x119: Pop(1); Push(Stack[-3] + Stack[-1]);
0x11a: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x11b: Return(); Pop(0)

0x11c: Push("slot")
0x11d: Push((int) 1)
0x11e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x11f: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x120: Return(); Pop(0)

