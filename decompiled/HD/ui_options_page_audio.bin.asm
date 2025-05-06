GlobalVarCount = 0

Strings:
	%
	default
	get

Import:
	GetTextWidth (3 args)
	GetVolMaster (1 args)
	GetVolMusic (1 args)
	GetVolVoice (1 args)
	GetVolSounds (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Print (4 args)
	GetStringByID (2 args)

RunOp = 0x72
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, string, string, string, int, int, int, int) Params = 0
		EVENT_0 Op = 0x7b Vars = ()
		EVENT_200 Op = 0xb0 Vars = (int, string, object)


0x0: PushEmpty(int, int, int, int)
0x1: Push((int) 100)
0x2: Stack[-2] = Stack[-6] * Stack[-1]; Pop(1);
0x3: Push((int) 0)
0x4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0x6: PushEmpty(string, int)
0x7: Stack[-1] = (int) 124
0x8: Call2 0xd6

0x9: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0xa: Pop(2)
0xb: GOTO 0xe

0xc: Push("%")
0xd: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(1);
0xe: Push("default")
0xf: @ GetTextWidth(Stack[-3], Stack[-1], Stack[-0])
0x10: Pop(1)
0x11: Push((int) 305)
0x12: Push((int) 2)
0x13: Pop(1); Push(Stack[-4] / Stack[-1]);
0x14: Stack[4 + Tasks[-1].StackPointer] = Stack[-2] - Stack[-1]; Pop(2);
0x15: Return(); Pop(4)

0x16: PushEmpty(int, int, int, int)
0x17: Push((int) 100)
0x18: Stack[-2] = Stack[-6] * Stack[-1]; Pop(1);
0x19: Push((int) 0)
0x1a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1c: PushEmpty(string, int)
0x1d: Stack[-1] = (int) 124
0x1e: Call2 0xd6

0x1f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x20: Pop(2)
0x21: GOTO 0x24

0x22: Push("%")
0x23: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(1);
0x24: Push("default")
0x25: @ GetTextWidth(Stack[-3], Stack[-1], Stack[-1])
0x26: Pop(1)
0x27: Push((int) 305)
0x28: Push((int) 2)
0x29: Pop(1); Push(Stack[-4] / Stack[-1]);
0x2a: Stack[5 + Tasks[-1].StackPointer] = Stack[-2] - Stack[-1]; Pop(2);
0x2b: Return(); Pop(4)

0x2c: PushEmpty(int, int, int, int)
0x2d: Push((int) 100)
0x2e: Stack[-2] = Stack[-6] * Stack[-1]; Pop(1);
0x2f: Push((int) 0)
0x30: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x32: PushEmpty(string, int)
0x33: Stack[-1] = (int) 124
0x34: Call2 0xd6

0x35: Stack[2 + Tasks[-1].StackPointer] = Stack[-2]
0x36: Pop(2)
0x37: GOTO 0x3a

0x38: Push("%")
0x39: Stack[2 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(1);
0x3a: Push("default")
0x3b: @ GetTextWidth(Stack[-3], Stack[-1], Stack[-2])
0x3c: Pop(1)
0x3d: Push((int) 305)
0x3e: Push((int) 2)
0x3f: Pop(1); Push(Stack[-4] / Stack[-1]);
0x40: Stack[6 + Tasks[-1].StackPointer] = Stack[-2] - Stack[-1]; Pop(2);
0x41: Return(); Pop(4)

0x42: PushEmpty(int, int, int, int)
0x43: Push((int) 100)
0x44: Stack[-2] = Stack[-6] * Stack[-1]; Pop(1);
0x45: Push((int) 0)
0x46: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x48: PushEmpty(string, int)
0x49: Stack[-1] = (int) 124
0x4a: Call2 0xd6

0x4b: Stack[3 + Tasks[-1].StackPointer] = Stack[-2]
0x4c: Pop(2)
0x4d: GOTO 0x50

0x4e: Push("%")
0x4f: Stack[3 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(1);
0x50: Push("default")
0x51: @ GetTextWidth(Stack[-3], Stack[-1], Stack[-3])
0x52: Pop(1)
0x53: Push((int) 305)
0x54: Push((int) 2)
0x55: Pop(1); Push(Stack[-4] / Stack[-1]);
0x56: Stack[7 + Tasks[-1].StackPointer] = Stack[-2] - Stack[-1]; Pop(2);
0x57: Return(); Pop(4)

0x58: PushEmpty(float, float, float, float, float, float, float, float)
0x59: @ GetVolMaster(Stack[-4])
0x5a: Pop(0)
0x5b: @ GetVolMusic(Stack[-3])
0x5c: Pop(0)
0x5d: @ GetVolVoice(Stack[-2])
0x5e: Pop(0)
0x5f: @ GetVolSounds(Stack[-1])
0x60: Pop(0)
0x61: PushEmpty(float)
0x62: Stack[-1] = Stack[-5]
0x63: Call2 0x0

0x64: Pop(1)
0x65: PushEmpty(float)
0x66: Stack[-1] = Stack[-4]
0x67: Call2 0x16

0x68: Pop(1)
0x69: PushEmpty(float)
0x6a: Stack[-1] = Stack[-3]
0x6b: Call2 0x2c

0x6c: Pop(1)
0x6d: PushEmpty(float)
0x6e: Stack[-1] = Stack[-2]
0x6f: Call2 0x42

0x70: Pop(1)
0x71: Return(); Pop(8)

0x72: Push((bool) 1)
0x73: @ SetOwnerDraw(Stack[-1])
0x74: Pop(1)
0x75: PushEmpty()
0x76: Call2 0x58

0x77: Pop(0)
0x78: @ ProcessEvents()
0x79: Pop(0)
0x7a: Return(); Pop(0)

0x7b: Push("default")
0x7c: Push((int) 15)
0x7d: Push((int) 15)
0x7e: PushEmpty(string, int)
0x7f: Stack[-1] = (int) 104
0x80: Call2 0xd6

0x81: Pop(1)
0x82: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x83: Pop(4)
0x84: Push("default")
0x85: Push((int) 15)
0x86: @ Print(Stack[-2], Stack[-4], Stack[-1], Stack[-0])
0x87: Pop(2)
0x88: Push("default")
0x89: Push((int) 15)
0x8a: Push((int) 98)
0x8b: PushEmpty(string, int)
0x8c: Stack[-1] = (int) 105
0x8d: Call2 0xd6

0x8e: Pop(1)
0x8f: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x90: Pop(4)
0x91: Push("default")
0x92: Push((int) 98)
0x93: @ Print(Stack[-2], Stack[-5], Stack[-1], Stack[-1])
0x94: Pop(2)
0x95: Push("default")
0x96: Push((int) 16)
0x97: Push((int) 182)
0x98: PushEmpty(string, int)
0x99: Stack[-1] = (int) 106
0x9a: Call2 0xd6

0x9b: Pop(1)
0x9c: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9d: Pop(4)
0x9e: Push("default")
0x9f: Push((int) 182)
0xa0: @ Print(Stack[-2], Stack[-6], Stack[-1], Stack[-2])
0xa1: Pop(2)
0xa2: Push("default")
0xa3: Push((int) 16)
0xa4: Push((int) 265)
0xa5: PushEmpty(string, int)
0xa6: Stack[-1] = (int) 107
0xa7: Call2 0xd6

0xa8: Pop(1)
0xa9: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xaa: Pop(4)
0xab: Push("default")
0xac: Push((int) 265)
0xad: @ Print(Stack[-2], Stack[-7], Stack[-1], Stack[-3])
0xae: Pop(2)
0xaf: Return(); Pop(0)

0xb0: PushEmpty(float, float)
0xb1: Pop(0); Push(( Stack[-3] != 0 )
0xb2: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xb3: Push((int) 0)
0xb4: @@ get(Stack[-2], Stack[-1])
0xb5: Pop(1)
0xb6: Push((int) 105)
0xb7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb9: PushEmpty(float)
0xba: Stack[-1] = Stack[-2]
0xbb: Call2 0x0

0xbc: Pop(1)
0xbd: GOTO 0xd5

0xbe: Push((int) 106)
0xbf: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc1: PushEmpty(float)
0xc2: Stack[-1] = Stack[-2]
0xc3: Call2 0x16

0xc4: Pop(1)
0xc5: GOTO 0xd5

0xc6: Push((int) 107)
0xc7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc9: PushEmpty(float)
0xca: Stack[-1] = Stack[-2]
0xcb: Call2 0x2c

0xcc: Pop(1)
0xcd: GOTO 0xd5

0xce: Push((int) 108)
0xcf: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd1: PushEmpty(float)
0xd2: Stack[-1] = Stack[-2]
0xd3: Call2 0x42

0xd4: Pop(1)
0xd5: Return(); Pop(2)

0xd6: PushEmpty(string, string)
0xd7: @ GetStringByID(Stack[-1], Stack[-3])
0xd8: Pop(0)
0xd9: Stack[-4] = Stack[-1]
0xda: Return(); Pop(2)

