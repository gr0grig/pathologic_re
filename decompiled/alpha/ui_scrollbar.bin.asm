GlobalVarCount = 0

Strings:
	iMouseMax 
	slider_pressed
	slider
	scroll_button_up
	scroll up 
	scroll_button_down
	scroll down 

Import:
	SetOwnerDraw (1 args)
	GetWindowSize (2 args)
	Trace (1 args)
	ProcessEvents (0 args)
	Blit (3 args)
	SendMessageToParent (1 args)
	CaptureMouse (0 args)
	ReleaseMouse (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool, int, int) Params = 0
		EVENT_0 Op = 0x12 Vars = ()
		EVENT_2 Op = 0x28 Vars = (int, int)
		EVENT_3 Op = 0x62 Vars = (int, int)
		EVENT_200 Op = 0x6a Vars = (int, string, object)
		EVENT_8 Op = 0x9e Vars = (int, int)


0x0: PushEmpty(int, int, int, int)
0x1: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x2: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x3: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x4: Push((bool) 1)
0x5: @ SetOwnerDraw(Stack[-1])
0x6: Pop(1)
0x7: @ GetWindowSize(Stack[-2], Stack[-1])
0x8: Pop(0)
0x9: Push((int) 14)
0xa: Stack[3 + Tasks[-1].StackPointer] = Stack[-2] - Stack[-1]; Pop(1);
0xb: Push("iMouseMax ")
0xc: Pop(1); Push(Stack[-1] + Stack[3 + StackPtr]);
0xd: @ Trace(Stack[-1])
0xe: Pop(1)
0xf: @ ProcessEvents()
0x10: Pop(0)
0x11: Return(); Pop(4)

0x12: Push( Stack[1 + Tasks[-1].StackPointer] )
0x13: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0x14: Return(); Pop(0)

0x15: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x17: Push("slider_pressed")
0x18: Push((int) 0)
0x19: @ Blit(Stack[-2], Stack[-1], Stack[-2])
0x1a: Pop(2)
0x1b: GOTO 0x20

0x1c: Push("slider")
0x1d: Push((int) 0)
0x1e: @ Blit(Stack[-2], Stack[-1], Stack[-2])
0x1f: Pop(2)
0x20: Return(); Pop(0)

0x21: PushEmpty(int, int)
0x22: Push((int) 100)
0x23: Pop(1); Push(Stack[2 + StackPtr] * Stack[-1]);
0x24: Stack[-2] = Stack[-1] / Stack[3 + Tasks[-1].StackPointer]; Pop(1);
0x25: @ SendMessageToParent(Stack[-1])
0x26: Pop(0)
0x27: Return(); Pop(2)

0x28: PushEmpty(int, int, int, int, int, int)
0x29: Push( Stack[1 + Tasks[-1].StackPointer] )
0x2a: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x2b: Return(); Pop(6)

0x2c: PushEmpty(bool, int, int)
0x2d: Stack[-2] = Stack[-11]
0x2e: Stack[-1] = Stack[-10]
0x2f: Call 0xb2

0x30: Pop(2)
0x31: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x32: @ CaptureMouse()
0x33: Pop(0)
0x34: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x35: Return(); Pop(6)

0x36: Stack[-3] = Stack[-7]
0x37: Push((int) 0)
0x38: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x39: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3a: Stack[-3] = (int) 0
0x3b: GOTO 0x3f

0x3c: Pop(0); Push((bool) Stack[-3] > Stack[3 + Tasks[-1].StackPointer])
0x3d: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3e: Stack[-3] = Stack[3 + Tasks[-1].StackPointer]
0x3f: Pop(0); Push((bool) Stack[-3] > Stack[2 + Tasks[-1].StackPointer])
0x40: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x41: Stack[-2] = Stack[-3] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x42: Push((int) 100)
0x43: Pop(1); Push(Stack[-3] * Stack[-1]);
0x44: Stack[-3] = Stack[-1] / Stack[3 + Tasks[-1].StackPointer]; Pop(1);
0x45: Push((int) 27)
0x46: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x48: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x49: GOTO 0x4f

0x4a: Push((int) 27)
0x4b: Pop(1); Push(Stack[-1] * Stack[3 + StackPtr]);
0x4c: Push((int) 100)
0x4d: Pop(2); Push(Stack[-2] / Stack[-1]);
0x4e: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x4f: GOTO 0x5e

0x50: Stack[-1] = Stack[2 + Tasks[-1].StackPointer] - Stack[-3]; Pop(0);
0x51: Push((int) 100)
0x52: Pop(1); Push(Stack[-2] * Stack[-1]);
0x53: Stack[-2] = Stack[-1] / Stack[3 + Tasks[-1].StackPointer]; Pop(1);
0x54: Push((int) 27)
0x55: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x57: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x58: GOTO 0x5e

0x59: Push((int) 27)
0x5a: Pop(1); Push(Stack[-1] * Stack[3 + StackPtr]);
0x5b: Push((int) 100)
0x5c: Pop(2); Push(Stack[-2] / Stack[-1]);
0x5d: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x5e: PushEmpty()
0x5f: Call 0x21

0x60: Pop(0)
0x61: Return(); Pop(6)

0x62: PushEmpty()
0x63: Push( Stack[1 + Tasks[-1].StackPointer] )
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Return(); Pop(0)

0x66: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x67: @ ReleaseMouse()
0x68: Pop(0)
0x69: Return(); Pop(0)

0x6a: PushEmpty()
0x6b: Push("scroll_button_up")
0x6c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x6e: Push((int) 27)
0x6f: Pop(1); Push(Stack[-1] * Stack[3 + StackPtr]);
0x70: Push((int) 100)
0x71: Pop(2); Push(Stack[-2] / Stack[-1]);
0x72: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x73: Push((int) 0)
0x74: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x75: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x76: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x77: Push("scroll up ")
0x78: Pop(1); Push(Stack[-1] + Stack[2 + StackPtr]);
0x79: @ Trace(Stack[-1])
0x7a: Pop(1)
0x7b: PushEmpty()
0x7c: Call 0x21

0x7d: Pop(0)
0x7e: GOTO 0x9d

0x7f: Push("scroll_button_down")
0x80: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x82: Push((int) 10)
0x83: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x84: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] > Stack[3 + Tasks[-1].StackPointer])
0x85: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x86: Stack[2 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer]
0x87: Push("scroll down ")
0x88: Pop(1); Push(Stack[-1] + Stack[2 + StackPtr]);
0x89: Push(" ")
0x8a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8b: Pop(1); Push(Stack[-1] + Stack[3 + StackPtr]);
0x8c: @ Trace(Stack[-1])
0x8d: Pop(1)
0x8e: PushEmpty()
0x8f: Call 0x21

0x90: Pop(0)
0x91: GOTO 0x9d

0x92: Push((int) 16384)
0x93: Pop(1); Push(Stack[-1] & Stack[-4]);
0x94: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x95: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x96: GOTO 0x98

0x97: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x98: Push((int) 16383)
0x99: Pop(1); Push(Stack[-1] & Stack[-4]);
0x9a: Pop(1); Push(Stack[-1] * Stack[3 + StackPtr]);
0x9b: Push((int) 100)
0x9c: Stack[2 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x9d: Return(); Pop(0)

0x9e: PushEmpty(int, int)
0x9f: Push( Stack[1 + Tasks[-1].StackPointer] )
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Return(); Pop(2)

0xa2: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa3: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa4: Stack[-1] = Stack[-3]
0xa5: Push((int) 0)
0xa6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa8: Stack[-1] = (int) 0
0xa9: GOTO 0xad

0xaa: Pop(0); Push((bool) Stack[-1] > Stack[3 + Tasks[-1].StackPointer])
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0xad: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xae: PushEmpty()
0xaf: Call 0x21

0xb0: Pop(0)
0xb1: Return(); Pop(2)

0xb2: PushEmpty()
0xb3: PushEmpty(bool)
0xb4: Stack[-1] = (bool) 0
0xb5: Pop(0); Push((bool) Stack[-2] >= Stack[2 + Tasks[-1].StackPointer])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: Push((int) 14)
0xb8: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0xb9: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xbb: Stack[-1] = (bool) 1
0xbc: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbd: Stack[-3] = (bool) 1
0xbe: Return(); Pop(0)

0xbf: Stack[-3] = (bool) 0
0xc0: Return(); Pop(0)

