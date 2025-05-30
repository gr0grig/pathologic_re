GlobalVarCount = 0

Strings:
	slider_pressed
	slider
	scroll_button_up
	scroll_button_down

Import:
	SetOwnerDraw (1 args)
	GetWindowSize (2 args)
	ProcessEvents (0 args)
	SendToParent (0 args)
	Blit (3 args)
	SendMessageToParent (1 args)
	CaptureMouse (0 args)
	ReleaseMouse (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool, bool, int, int) Params = 0
		EVENT_15 Op = 0x19 Vars = (int, int, float)
		EVENT_0 Op = 0x1d Vars = ()
		EVENT_2 Op = 0x45 Vars = (int, int)
		EVENT_3 Op = 0x83 Vars = (int, int)
		EVENT_200 Op = 0x8b Vars = (int, string, object)
		EVENT_8 Op = 0xb7 Vars = (int, int)


0x0: PushEmpty(bool)
0x1: Stack[-1] = (bool) 0
0x2: Call2 0x5

0x3: Pop(1)
0x4: Return(); Pop(0)

0x5: PushEmpty(int, int, int, int)
0x6: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x7: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x8: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x9: Stack[3 + Tasks[-1].StackPointer] = (int)0
0xa: Push((bool) 1)
0xb: @ SetOwnerDraw(Stack[-1])
0xc: Pop(1)
0xd: @ GetWindowSize(Stack[-2], Stack[-1])
0xe: Pop(0)
0xf: Push( Stack[2 + Tasks[-1].StackPointer] )
0x10: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x11: Push((int) 14)
0x12: Stack[4 + Tasks[-1].StackPointer] = Stack[-2] - Stack[-1]; Pop(1);
0x13: GOTO 0x16

0x14: Push((int) 14)
0x15: Stack[4 + Tasks[-1].StackPointer] = Stack[-3] - Stack[-1]; Pop(1);
0x16: @ ProcessEvents()
0x17: Pop(0)
0x18: Return(); Pop(4)

0x19: PushEmpty()
0x1a: @ SendToParent()
0x1b: Pop(0)
0x1c: Return(); Pop(0)

0x1d: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1e: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1f: Return(); Pop(0)

0x20: Push( Stack[0 + Tasks[-1].StackPointer] )
0x21: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x22: Push("slider_pressed")
0x23: Push( Stack[2 + Tasks[-1].StackPointer] )
0x24: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x25: Push((int) 0)
0x26: GOTO 0x28

0x27: Push( Stack[3 + Tasks[-1].StackPointer] )
0x28: Push( Stack[2 + Tasks[-1].StackPointer] )
0x29: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x2a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2b: GOTO 0x2d

0x2c: Push((int) 0)
0x2d: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x2e: Pop(3)
0x2f: GOTO 0x3d

0x30: Push("slider")
0x31: Push( Stack[2 + Tasks[-1].StackPointer] )
0x32: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x33: Push((int) 0)
0x34: GOTO 0x36

0x35: Push( Stack[3 + Tasks[-1].StackPointer] )
0x36: Push( Stack[2 + Tasks[-1].StackPointer] )
0x37: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x38: Push( Stack[3 + Tasks[-1].StackPointer] )
0x39: GOTO 0x3b

0x3a: Push((int) 0)
0x3b: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x3c: Pop(3)
0x3d: Return(); Pop(0)

0x3e: PushEmpty(int, int)
0x3f: Push((int) 100)
0x40: Pop(1); Push(Stack[3 + StackPtr] * Stack[-1]);
0x41: Stack[-2] = Stack[-1] / Stack[4 + Tasks[-1].StackPointer]; Pop(1);
0x42: @ SendMessageToParent(Stack[-1])
0x43: Pop(0)
0x44: Return(); Pop(2)

0x45: PushEmpty(int, int, int, int, int, int)
0x46: Push( Stack[1 + Tasks[-1].StackPointer] )
0x47: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x48: Return(); Pop(6)

0x49: PushEmpty(bool, int, int)
0x4a: Stack[-2] = Stack[-11]
0x4b: Stack[-1] = Stack[-10]
0x4c: Call2 0xcf

0x4d: Pop(2)
0x4e: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4f: @ CaptureMouse()
0x50: Pop(0)
0x51: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x52: Return(); Pop(6)

0x53: Push( Stack[2 + Tasks[-1].StackPointer] )
0x54: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x55: Stack[-3] = Stack[-7]
0x56: GOTO 0x58

0x57: Stack[-3] = Stack[-8]
0x58: Push((int) 0)
0x59: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x5a: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5b: Stack[-3] = (int) 0
0x5c: GOTO 0x60

0x5d: Pop(0); Push((bool) Stack[-3] > Stack[4 + Tasks[-1].StackPointer])
0x5e: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5f: Stack[-3] = Stack[4 + Tasks[-1].StackPointer]
0x60: Pop(0); Push((bool) Stack[-3] > Stack[3 + Tasks[-1].StackPointer])
0x61: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x62: Stack[-2] = Stack[-3] - Stack[3 + Tasks[-1].StackPointer]; Pop(0);
0x63: Push((int) 100)
0x64: Pop(1); Push(Stack[-3] * Stack[-1]);
0x65: Stack[-3] = Stack[-1] / Stack[4 + Tasks[-1].StackPointer]; Pop(1);
0x66: Push((int) 27)
0x67: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x68: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x69: Stack[3 + Tasks[-1].StackPointer] = Stack[-3]
0x6a: GOTO 0x70

0x6b: Push((int) 27)
0x6c: Pop(1); Push(Stack[-1] * Stack[4 + StackPtr]);
0x6d: Push((int) 100)
0x6e: Pop(2); Push(Stack[-2] / Stack[-1]);
0x6f: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x70: GOTO 0x7f

0x71: Stack[-1] = Stack[3 + Tasks[-1].StackPointer] - Stack[-3]; Pop(0);
0x72: Push((int) 100)
0x73: Pop(1); Push(Stack[-2] * Stack[-1]);
0x74: Stack[-2] = Stack[-1] / Stack[4 + Tasks[-1].StackPointer]; Pop(1);
0x75: Push((int) 27)
0x76: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x77: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x78: Stack[3 + Tasks[-1].StackPointer] = Stack[-3]
0x79: GOTO 0x7f

0x7a: Push((int) 27)
0x7b: Pop(1); Push(Stack[-1] * Stack[4 + StackPtr]);
0x7c: Push((int) 100)
0x7d: Pop(2); Push(Stack[-2] / Stack[-1]);
0x7e: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x7f: PushEmpty()
0x80: Call2 0x3e

0x81: Pop(0)
0x82: Return(); Pop(6)

0x83: PushEmpty()
0x84: Push( Stack[1 + Tasks[-1].StackPointer] )
0x85: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x86: Return(); Pop(0)

0x87: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x88: @ ReleaseMouse()
0x89: Pop(0)
0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: Push("scroll_button_up")
0x8d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x8f: Push((int) 27)
0x90: Pop(1); Push(Stack[-1] * Stack[4 + StackPtr]);
0x91: Push((int) 100)
0x92: Pop(2); Push(Stack[-2] / Stack[-1]);
0x93: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x94: Push((int) 0)
0x95: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] < Stack[-1])
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Stack[3 + Tasks[-1].StackPointer] = (int)0
0x98: PushEmpty()
0x99: Call2 0x3e

0x9a: Pop(0)
0x9b: GOTO 0xb6

0x9c: Push("scroll_button_down")
0x9d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0x9f: Push((int) 27)
0xa0: Pop(1); Push(Stack[-1] * Stack[4 + StackPtr]);
0xa1: Push((int) 100)
0xa2: Pop(2); Push(Stack[-2] / Stack[-1]);
0xa3: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xa4: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] > Stack[4 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Stack[3 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer]
0xa7: PushEmpty()
0xa8: Call2 0x3e

0xa9: Pop(0)
0xaa: GOTO 0xb6

0xab: Push((int) 16384)
0xac: Pop(1); Push(Stack[-1] & Stack[-4]);
0xad: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xae: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xaf: GOTO 0xb1

0xb0: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xb1: Push((int) 16383)
0xb2: Pop(1); Push(Stack[-1] & Stack[-4]);
0xb3: Pop(1); Push(Stack[-1] * Stack[4 + StackPtr]);
0xb4: Push((int) 100)
0xb5: Stack[3 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0xb6: Return(); Pop(0)

0xb7: PushEmpty(int, int)
0xb8: Push( Stack[1 + Tasks[-1].StackPointer] )
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Return(); Pop(2)

0xbb: Push( Stack[0 + Tasks[-1].StackPointer] )
0xbc: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xbd: Push( Stack[2 + Tasks[-1].StackPointer] )
0xbe: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbf: Stack[-1] = Stack[-3]
0xc0: GOTO 0xc2

0xc1: Stack[-1] = Stack[-4]
0xc2: Push((int) 0)
0xc3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc5: Stack[-1] = (int) 0
0xc6: GOTO 0xca

0xc7: Pop(0); Push((bool) Stack[-1] > Stack[4 + Tasks[-1].StackPointer])
0xc8: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc9: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0xca: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0xcb: PushEmpty()
0xcc: Call2 0x3e

0xcd: Pop(0)
0xce: Return(); Pop(2)

0xcf: PushEmpty()
0xd0: Push( Stack[2 + Tasks[-1].StackPointer] )
0xd1: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xd2: PushEmpty(bool)
0xd3: Stack[-1] = (bool) 0
0xd4: Pop(0); Push((bool) Stack[-2] >= Stack[3 + Tasks[-1].StackPointer])
0xd5: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd6: Push((int) 14)
0xd7: Pop(1); Push(Stack[3 + StackPtr] + Stack[-1]);
0xd8: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0xd9: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xda: Stack[-1] = (bool) 1
0xdb: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdc: Stack[-3] = (bool) 1
0xdd: Return(); Pop(0)

0xde: Stack[-3] = (bool) 0
0xdf: Return(); Pop(0)

0xe0: PushEmpty(bool)
0xe1: Stack[-1] = (bool) 0
0xe2: Pop(0); Push((bool) Stack[-3] >= Stack[3 + Tasks[-1].StackPointer])
0xe3: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe4: Push((int) 14)
0xe5: Pop(1); Push(Stack[3 + StackPtr] + Stack[-1]);
0xe6: Pop(1); Push((bool) Stack[-4] <= Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe8: Stack[-1] = (bool) 1
0xe9: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xea: Stack[-3] = (bool) 1
0xeb: Return(); Pop(0)

0xec: Stack[-3] = (bool) 0
0xed: Return(); Pop(0)

