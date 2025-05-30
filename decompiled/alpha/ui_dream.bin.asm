GlobalVarCount = 0

Strings:
	dream_progress
	default
	sleeping
	SetProperty
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
	BeginPlayerUpdate (0 args)
	GetGameTimeScale (1 args)
	AdvanceGameTime (1 args)
	GetPlayerHealth (1 args)
	DestroyWindow (0 args)
	GetPlayerImmunity (1 args)
	GetPlayerHunger (1 args)
	GetPlayerTiredness (1 args)
	GetPlayerDisease (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, float, float) Params = 0
		EVENT_14 Op = 0x1e Vars = ()
		EVENT_1 Op = 0x6a Vars = (float)
		EVENT_100 Op = 0x8a Vars = (int)
		EVENT_200 Op = 0x93 Vars = (int, string, object)


0x0: @ CaptureKeyboard()
0x1: Pop(0)
0x2: Stack[2 + Tasks[-1].StackPointer] = (float)6.0
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty()
0x5: Call 0x3c

0x6: Pop(0)
0x7: Push((int) 100)
0x8: Pop(1); Push(Stack[-1] * Stack[2 + StackPtr]);
0x9: Push((float)6.0)
0xa: Pop(2); Push(Stack[-2] / Stack[-1]);
0xb: Push("dream_progress")
0xc: @ SendMessage(Stack[-2], Stack[-1])
0xd: Pop(2)
0xe: @ ShowCursor()
0xf: Pop(0)
0x10: Push("default")
0x11: @ SetCursor(Stack[-1])
0x12: Pop(1)
0x13: Push((bool) 0)
0x14: @ SetOwnerDraw(Stack[-1])
0x15: Pop(1)
0x16: Push((bool) 1)
0x17: @ SetNeedUpdate(Stack[-1])
0x18: Pop(1)
0x19: @ CaptureKeyboard()
0x1a: Pop(0)
0x1b: @ ProcessEvents()
0x1c: Pop(0)
0x1d: Return(); Pop(0)

0x1e: PushEmpty(object, object)
0x1f: @ GetPlayer(Stack[-1])
0x20: Pop(0)
0x21: Push("sleeping")
0x22: Push((bool) 0)
0x23: @@ SetProperty(Stack[-2], Stack[-1])
0x24: Pop(2)
0x25: Return(); Pop(2)

0x26: Stack[-1] = 0
0x27: PushEmpty(object, object)
0x28: @ GetPlayer(Stack[-1])
0x29: Pop(0)
0x2a: Push("sleeping")
0x2b: Push((bool) 1)
0x2c: @@ SetProperty(Stack[-2], Stack[-1])
0x2d: Pop(2)
0x2e: @ BeginPlayerUpdate()
0x2f: Pop(0)
0x30: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x31: Return(); Pop(2)

0x32: Stack[-1] = 0
0x33: PushEmpty(float, float)
0x34: @ GetGameTimeScale(Stack[-1])
0x35: Pop(0)
0x36: Pop(0); Push(Stack[1 + StackPtr] * Stack[-1]);
0x37: Push((float)200.0)
0x38: Pop(2); Push(Stack[-2] * Stack[-1]);
0x39: @ AdvanceGameTime(Stack[-1])
0x3a: Pop(1)
0x3b: Return(); Pop(2)

0x3c: PushEmpty(float, float)
0x3d: @ GetPlayerHealth(Stack[-1])
0x3e: Pop(0)
0x3f: Push((int) 100)
0x40: Pop(1); Push(Stack[-1] * Stack[-2]);
0x41: Push("health")
0x42: @ SendMessage(Stack[-2], Stack[-1])
0x43: Pop(2)
0x44: Push((int) 0)
0x45: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x47: PushEmpty()
0x48: Call 0x33

0x49: Pop(0)
0x4a: @ DestroyWindow()
0x4b: Pop(0)
0x4c: Return(); Pop(2)

0x4d: @ GetPlayerImmunity(Stack[-1])
0x4e: Pop(0)
0x4f: Push((int) 100)
0x50: Pop(1); Push(Stack[-1] * Stack[-2]);
0x51: Push("immunity")
0x52: @ SendMessage(Stack[-2], Stack[-1])
0x53: Pop(2)
0x54: @ GetPlayerHunger(Stack[-1])
0x55: Pop(0)
0x56: Push((int) 100)
0x57: Pop(1); Push(Stack[-1] * Stack[-2]);
0x58: Push("hunger")
0x59: @ SendMessage(Stack[-2], Stack[-1])
0x5a: Pop(2)
0x5b: @ GetPlayerTiredness(Stack[-1])
0x5c: Pop(0)
0x5d: Push((int) 100)
0x5e: Pop(1); Push(Stack[-1] * Stack[-2]);
0x5f: Push("tiredness")
0x60: @ SendMessage(Stack[-2], Stack[-1])
0x61: Pop(2)
0x62: @ GetPlayerDisease(Stack[-1])
0x63: Pop(0)
0x64: Push((int) 100)
0x65: Pop(1); Push(Stack[-1] * Stack[-2]);
0x66: Push("infection")
0x67: @ SendMessage(Stack[-2], Stack[-1])
0x68: Pop(2)
0x69: Return(); Pop(2)

0x6a: PushEmpty(float, int, float, int)
0x6b: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x6c: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6d: Return(); Pop(4)

0x6e: PushEmpty()
0x6f: Call 0x3c

0x70: Pop(0)
0x71: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-5]; Pop(0);
0x72: @ GetGameTimeScale(Stack[-2])
0x73: Pop(0)
0x74: Push((float)200.0)
0x75: Pop(1); Push(Stack[-1] * Stack[1 + StackPtr]);
0x76: Pop(1); Push(Stack[-1] * Stack[-3]);
0x77: Pop(1); Push((bool) Stack[-1] > Stack[2 + Tasks[-1].StackPointer])
0x78: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x79: PushEmpty()
0x7a: Call 0x33

0x7b: Pop(0)
0x7c: @ DestroyWindow()
0x7d: Pop(0)
0x7e: Push((int) 100)
0x7f: Push((float)200.0)
0x80: Pop(1); Push(Stack[-1] * Stack[1 + StackPtr]);
0x81: Pop(1); Push(Stack[-1] * Stack[-4]);
0x82: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0x83: Pop(2); Push(Stack[-2] * Stack[-1]);
0x84: Push((float)6.0)
0x85: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x86: Push("dream_progress")
0x87: @ SendMessage(Stack[-2], Stack[-1])
0x88: Pop(1)
0x89: Return(); Pop(4)

0x8a: PushEmpty()
0x8b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8c: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8d: PushEmpty()
0x8e: Call 0x33

0x8f: Pop(0)
0x90: @ DestroyWindow()
0x91: Pop(0)
0x92: Return(); Pop(0)

0x93: PushEmpty(int, int, int, int)
0x94: Push("dream_button")
0x95: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x96: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x97: Push( Stack[0 + Tasks[-1].StackPointer] )
0x98: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x99: PushEmpty()
0x9a: Call 0x33

0x9b: Pop(0)
0x9c: @ DestroyWindow()
0x9d: Pop(0)
0x9e: GOTO 0xa3

0x9f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xa0: PushEmpty()
0xa1: Call 0x27

0xa2: Pop(0)
0xa3: GOTO 0xd5

0xa4: Push("button_plus")
0xa5: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xa7: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: Return(); Pop(4)

0xaa: Push((int) 1)
0xab: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xac: Push((float)6.0)
0xad: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] > Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xaf: Stack[2 + Tasks[-1].StackPointer] = (float)6.0
0xb0: GOTO 0xb5

0xb1: Push((int) 1)
0xb2: Stack[-3] = Stack[2 + Tasks[-1].StackPointer] / Stack[-1]; Pop(1);
0xb3: Push((int) 1)
0xb4: Stack[2 + Tasks[-1].StackPointer] = Stack[-3] * Stack[-1]; Pop(1);
0xb5: Push((int) 100)
0xb6: Pop(1); Push(Stack[-1] * Stack[2 + StackPtr]);
0xb7: Push((float)6.0)
0xb8: Pop(2); Push(Stack[-2] / Stack[-1]);
0xb9: Push("dream_progress")
0xba: @ SendMessage(Stack[-2], Stack[-1])
0xbb: Pop(2)
0xbc: GOTO 0xd5

0xbd: Push("button_minus")
0xbe: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc0: Push( Stack[0 + Tasks[-1].StackPointer] )
0xc1: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc2: Return(); Pop(4)

0xc3: Push((int) 1)
0xc4: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0xc5: Push((int) 1)
0xc6: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc8: Stack[2 + Tasks[-1].StackPointer] = (int)1
0xc9: GOTO 0xce

0xca: Push((int) 1)
0xcb: Stack[-2] = Stack[2 + Tasks[-1].StackPointer] / Stack[-1]; Pop(1);
0xcc: Push((int) 1)
0xcd: Stack[2 + Tasks[-1].StackPointer] = Stack[-2] * Stack[-1]; Pop(1);
0xce: Push((int) 100)
0xcf: Pop(1); Push(Stack[-1] * Stack[2 + StackPtr]);
0xd0: Push((float)6.0)
0xd1: Pop(2); Push(Stack[-2] / Stack[-1]);
0xd2: Push("dream_progress")
0xd3: @ SendMessage(Stack[-2], Stack[-1])
0xd4: Pop(2)
0xd5: Return(); Pop(4)

