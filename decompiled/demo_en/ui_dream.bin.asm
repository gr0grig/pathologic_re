GlobalVarCount = 0

Strings:
	dream_progress
	health_text
	immunity_text
	hunger_text
	tiredness_text
	infection_text
	default
	sleeping
	SetProperty
	add
	health
	immunity
	hunger
	tiredness
	infection
	dream_button
	button_plus
	button_minus

Import:
	CaptureKeyboard (0 args)
	SendMessage (2 args)
	ShowCursor (0 args)
	SetCursor (1 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	ProcessEvents (0 args)
	GetPlayer (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	BeginPlayerUpdate (0 args)
	GetPlayerHealth (1 args)
	DestroyWindow (0 args)
	GetPlayerImmunity (1 args)
	GetPlayerHunger (1 args)
	GetPlayerTiredness (1 args)
	GetPlayerDisease (1 args)
	GetGameTimeScale (1 args)
	AdvanceGameTime (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, float, float) Params = 0
		EVENT_14 Op = 0x32 Vars = ()
		EVENT_1 Op = 0x8e Vars = (float)
		EVENT_100 Op = 0xb3 Vars = (int)
		EVENT_200 Op = 0xbc Vars = (int, string, object)


0x0: @ CaptureKeyboard()
0x1: Pop(0)
0x2: Stack[2 + Tasks[-1].StackPointer] = (float)6.0
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty()
0x5: Call2 0x60

0x6: Pop(0)
0x7: Push((int) 100)
0x8: Pop(1); Push(Stack[-1] * Stack[2 + StackPtr]);
0x9: Push((float)6.0)
0xa: Pop(2); Push(Stack[-2] / Stack[-1]);
0xb: Push("dream_progress")
0xc: @ SendMessage(Stack[-2], Stack[-1])
0xd: Pop(2)
0xe: Push((int) 701)
0xf: Push("health_text")
0x10: @ SendMessage(Stack[-2], Stack[-1])
0x11: Pop(2)
0x12: Push((int) 702)
0x13: Push("immunity_text")
0x14: @ SendMessage(Stack[-2], Stack[-1])
0x15: Pop(2)
0x16: Push((int) 703)
0x17: Push("hunger_text")
0x18: @ SendMessage(Stack[-2], Stack[-1])
0x19: Pop(2)
0x1a: Push((int) 704)
0x1b: Push("tiredness_text")
0x1c: @ SendMessage(Stack[-2], Stack[-1])
0x1d: Pop(2)
0x1e: Push((int) 705)
0x1f: Push("infection_text")
0x20: @ SendMessage(Stack[-2], Stack[-1])
0x21: Pop(2)
0x22: @ ShowCursor()
0x23: Pop(0)
0x24: Push("default")
0x25: @ SetCursor(Stack[-1])
0x26: Pop(1)
0x27: Push((bool) 0)
0x28: @ SetOwnerDraw(Stack[-1])
0x29: Pop(1)
0x2a: Push((bool) 1)
0x2b: @ SetNeedUpdate(Stack[-1])
0x2c: Pop(1)
0x2d: @ CaptureKeyboard()
0x2e: Pop(0)
0x2f: @ ProcessEvents()
0x30: Pop(0)
0x31: Return(); Pop(0)

0x32: PushEmpty(object, object, object, object)
0x33: @ GetPlayer(Stack[-2])
0x34: Pop(0)
0x35: Push("sleeping")
0x36: Push((bool) 0)
0x37: @@ SetProperty(Stack[-2], Stack[-1])
0x38: Pop(2)
0x39: @ CreateFloatVector(Stack[-1])
0x3a: Pop(0)
0x3b: Push((int) 0)
0x3c: @@ add(Stack[-1])
0x3d: Pop(1)
0x3e: Push((int) 11)
0x3f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x40: Pop(1)
0x41: Push((int) 12)
0x42: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x43: Pop(1)
0x44: Push((int) 13)
0x45: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x46: Pop(1)
0x47: Push((int) 14)
0x48: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x49: Pop(1)
0x4a: Push((int) 15)
0x4b: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x4c: Pop(1)
0x4d: Push((int) 16)
0x4e: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x4f: Pop(1)
0x50: Return(); Pop(4)

0x51: Stack[-1] = 0
0x52: Stack[-2] = 0
0x53: PushEmpty(object, object)
0x54: @ GetPlayer(Stack[-1])
0x55: Pop(0)
0x56: Push("sleeping")
0x57: Push((bool) 1)
0x58: @@ SetProperty(Stack[-2], Stack[-1])
0x59: Pop(2)
0x5a: @ BeginPlayerUpdate()
0x5b: Pop(0)
0x5c: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x5d: Return(); Pop(2)

0x5e: Stack[-1] = 0
0x5f: Return(); Pop(0)

0x60: PushEmpty(float, float)
0x61: @ GetPlayerHealth(Stack[-1])
0x62: Pop(0)
0x63: Push((int) 100)
0x64: Pop(1); Push(Stack[-1] * Stack[-2]);
0x65: Push("health")
0x66: @ SendMessage(Stack[-2], Stack[-1])
0x67: Pop(2)
0x68: Push((int) 0)
0x69: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x6a: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6b: PushEmpty()
0x6c: Call2 0x5f

0x6d: Pop(0)
0x6e: @ DestroyWindow()
0x6f: Pop(0)
0x70: Return(); Pop(2)

0x71: @ GetPlayerImmunity(Stack[-1])
0x72: Pop(0)
0x73: Push((int) 100)
0x74: Pop(1); Push(Stack[-1] * Stack[-2]);
0x75: Push("immunity")
0x76: @ SendMessage(Stack[-2], Stack[-1])
0x77: Pop(2)
0x78: @ GetPlayerHunger(Stack[-1])
0x79: Pop(0)
0x7a: Push((int) 100)
0x7b: Pop(1); Push(Stack[-1] * Stack[-2]);
0x7c: Push("hunger")
0x7d: @ SendMessage(Stack[-2], Stack[-1])
0x7e: Pop(2)
0x7f: @ GetPlayerTiredness(Stack[-1])
0x80: Pop(0)
0x81: Push((int) 100)
0x82: Pop(1); Push(Stack[-1] * Stack[-2]);
0x83: Push("tiredness")
0x84: @ SendMessage(Stack[-2], Stack[-1])
0x85: Pop(2)
0x86: @ GetPlayerDisease(Stack[-1])
0x87: Pop(0)
0x88: Push((int) 100)
0x89: Pop(1); Push(Stack[-1] * Stack[-2]);
0x8a: Push("infection")
0x8b: @ SendMessage(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: Return(); Pop(2)

0x8e: PushEmpty(float, int, float, int)
0x8f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(4)

0x92: @ GetGameTimeScale(Stack[-2])
0x93: Pop(0)
0x94: Pop(0); Push(Stack[-5] * Stack[-2]);
0x95: Push((float)200.0)
0x96: Pop(2); Push(Stack[-2] * Stack[-1]);
0x97: @ AdvanceGameTime(Stack[-1])
0x98: Pop(1)
0x99: PushEmpty()
0x9a: Call2 0x60

0x9b: Pop(0)
0x9c: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-5]; Pop(0);
0x9d: Push((float)200.0)
0x9e: Pop(1); Push(Stack[-1] * Stack[1 + StackPtr]);
0x9f: Pop(1); Push(Stack[-1] * Stack[-3]);
0xa0: Pop(1); Push((bool) Stack[-1] > Stack[2 + Tasks[-1].StackPointer])
0xa1: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x5f

0xa4: Pop(0)
0xa5: @ DestroyWindow()
0xa6: Pop(0)
0xa7: Push((int) 100)
0xa8: Push((float)200.0)
0xa9: Pop(1); Push(Stack[-1] * Stack[1 + StackPtr]);
0xaa: Pop(1); Push(Stack[-1] * Stack[-4]);
0xab: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0xac: Pop(2); Push(Stack[-2] * Stack[-1]);
0xad: Push((float)6.0)
0xae: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0xaf: Push("dream_progress")
0xb0: @ SendMessage(Stack[-2], Stack[-1])
0xb1: Pop(1)
0xb2: Return(); Pop(4)

0xb3: PushEmpty()
0xb4: Push( Stack[0 + Tasks[-1].StackPointer] )
0xb5: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x5f

0xb8: Pop(0)
0xb9: @ DestroyWindow()
0xba: Pop(0)
0xbb: Return(); Pop(0)

0xbc: PushEmpty(int, int, int, int)
0xbd: Push("dream_button")
0xbe: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc0: Push( Stack[0 + Tasks[-1].StackPointer] )
0xc1: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0x5f

0xc4: Pop(0)
0xc5: @ DestroyWindow()
0xc6: Pop(0)
0xc7: GOTO 0xcc

0xc8: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xc9: PushEmpty()
0xca: Call2 0x53

0xcb: Pop(0)
0xcc: GOTO 0xfe

0xcd: Push("button_plus")
0xce: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xd0: Push( Stack[0 + Tasks[-1].StackPointer] )
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: Return(); Pop(4)

0xd3: Push((int) 1)
0xd4: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xd5: Push((float)6.0)
0xd6: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] > Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd8: Stack[2 + Tasks[-1].StackPointer] = (float)6.0
0xd9: GOTO 0xde

0xda: Push((int) 1)
0xdb: Stack[-3] = Stack[2 + Tasks[-1].StackPointer] / Stack[-1]; Pop(1);
0xdc: Push((int) 1)
0xdd: Stack[2 + Tasks[-1].StackPointer] = Stack[-3] * Stack[-1]; Pop(1);
0xde: Push((int) 100)
0xdf: Pop(1); Push(Stack[-1] * Stack[2 + StackPtr]);
0xe0: Push((float)6.0)
0xe1: Pop(2); Push(Stack[-2] / Stack[-1]);
0xe2: Push("dream_progress")
0xe3: @ SendMessage(Stack[-2], Stack[-1])
0xe4: Pop(2)
0xe5: GOTO 0xfe

0xe6: Push("button_minus")
0xe7: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xe9: Push( Stack[0 + Tasks[-1].StackPointer] )
0xea: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xeb: Return(); Pop(4)

0xec: Push((int) 1)
0xed: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0xee: Push((int) 1)
0xef: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf1: Stack[2 + Tasks[-1].StackPointer] = (int)1
0xf2: GOTO 0xf7

0xf3: Push((int) 1)
0xf4: Stack[-2] = Stack[2 + Tasks[-1].StackPointer] / Stack[-1]; Pop(1);
0xf5: Push((int) 1)
0xf6: Stack[2 + Tasks[-1].StackPointer] = Stack[-2] * Stack[-1]; Pop(1);
0xf7: Push((int) 100)
0xf8: Pop(1); Push(Stack[-1] * Stack[2 + StackPtr]);
0xf9: Push((float)6.0)
0xfa: Pop(2); Push(Stack[-2] / Stack[-1]);
0xfb: Push("dream_progress")
0xfc: @ SendMessage(Stack[-2], Stack[-1])
0xfd: Pop(2)
0xfe: Return(); Pop(4)

