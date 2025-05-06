GlobalVarCount = 0

Strings:
	default
	x
	get

Import:
	GetTextWidth (3 args)
	GetResolution (3 args)
	GetCurrentResolution (1 args)
	GetCurrentAnisotropic (1 args)
	GetGammaCorrection (1 args)
	GetPlayerFOV (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Print (4 args)
	PrintInWidth (9 args)
	GetStringByID (2 args)

RunOp = 0x51
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, string, string, string, bool, bool, bool, int, int, int, int) Params = 0
		EVENT_0 Op = 0x5a Vars = ()
		EVENT_200 Op = 0xea Vars = (int, string, object)


0x0: PushEmpty(int, int, int, int)
0x1: Stack[-1] = Stack[-5]
0x2: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Push("default")
0x4: @ GetTextWidth(Stack[-3], Stack[-1], Stack[-3])
0x5: Pop(1)
0x6: Push((int) 305)
0x7: Push((int) 2)
0x8: Pop(1); Push(Stack[-4] / Stack[-1]);
0x9: Stack[8 + Tasks[-1].StackPointer] = Stack[-2] - Stack[-1]; Pop(2);
0xa: Return(); Pop(4)

0xb: PushEmpty(int, int)
0xc: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0xd: Push("default")
0xe: @ GetTextWidth(Stack[-2], Stack[-1], Stack[-0])
0xf: Pop(1)
0x10: Push((int) 305)
0x11: Push((int) 2)
0x12: Pop(1); Push(Stack[-3] / Stack[-1]);
0x13: Stack[10 + Tasks[-1].StackPointer] = Stack[-2] - Stack[-1]; Pop(2);
0x14: Return(); Pop(2)

0x15: PushEmpty(int, int, int, int, int, int)
0x16: @ GetResolution(Stack[-7], Stack[-3], Stack[-2])
0x17: Pop(0)
0x18: Push("x")
0x19: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x1b: Push("default")
0x1c: @ GetTextWidth(Stack[-2], Stack[-1], Stack[-1])
0x1d: Pop(1)
0x1e: Push((int) 332)
0x1f: Pop(1); Push(Stack[-1] - Stack[-2]);
0x20: Push((int) 2)
0x21: Stack[7 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x22: Return(); Pop(6)

0x23: PushEmpty(int, int, int, int)
0x24: Stack[-1] = Stack[-5]
0x25: Push((int) 0)
0x26: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x28: PushEmpty(string, int)
0x29: Stack[-1] = (int) 124
0x2a: Call2 0x11d

0x2b: Stack[2 + Tasks[-1].StackPointer] = Stack[-2]
0x2c: Pop(2)
0x2d: GOTO 0x2f

0x2e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2f: Push("default")
0x30: @ GetTextWidth(Stack[-3], Stack[-1], Stack[-2])
0x31: Pop(1)
0x32: Push((int) 305)
0x33: Push((int) 2)
0x34: Pop(1); Push(Stack[-4] / Stack[-1]);
0x35: Stack[9 + Tasks[-1].StackPointer] = Stack[-2] - Stack[-1]; Pop(2);
0x36: Return(); Pop(4)

0x37: PushEmpty(float, float, float, float, float, float, float, float)
0x38: @ GetCurrentResolution(Stack[-4])
0x39: Pop(0)
0x3a: PushEmpty(float)
0x3b: Stack[-1] = Stack[-5]
0x3c: Call2 0x15

0x3d: Pop(1)
0x3e: @ GetCurrentAnisotropic(Stack[-3])
0x3f: Pop(0)
0x40: PushEmpty(float)
0x41: Stack[-1] = Stack[-4]
0x42: Call2 0x23

0x43: Pop(1)
0x44: @ GetGammaCorrection(Stack[-2])
0x45: Pop(0)
0x46: PushEmpty(float)
0x47: Stack[-1] = Stack[-3]
0x48: Call2 0xb

0x49: Pop(1)
0x4a: @ GetPlayerFOV(Stack[-1])
0x4b: Pop(0)
0x4c: PushEmpty(float)
0x4d: Stack[-1] = Stack[-2]
0x4e: Call2 0x0

0x4f: Pop(1)
0x50: Return(); Pop(8)

0x51: Push((bool) 1)
0x52: @ SetOwnerDraw(Stack[-1])
0x53: Pop(1)
0x54: PushEmpty()
0x55: Call2 0x37

0x56: Pop(0)
0x57: @ ProcessEvents()
0x58: Pop(0)
0x59: Return(); Pop(0)

0x5a: Push("default")
0x5b: Push((int) 15)
0x5c: Push((int) 12)
0x5d: PushEmpty(string, int)
0x5e: Stack[-1] = (int) 110
0x5f: Call2 0x11d

0x60: Pop(1)
0x61: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(4)
0x63: Push("default")
0x64: Push((int) 29)
0x65: @ Print(Stack[-2], Stack[-7], Stack[-1], Stack[-1])
0x66: Pop(2)
0x67: Push("default")
0x68: Push((int) 15)
0x69: Push((int) 62)
0x6a: PushEmpty(string, int)
0x6b: Stack[-1] = (int) 112
0x6c: Call2 0x11d

0x6d: Pop(1)
0x6e: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(4)
0x70: Push("default")
0x71: Push((int) 62)
0x72: @ Print(Stack[-2], Stack[-9], Stack[-1], Stack[-2])
0x73: Pop(2)
0x74: Push("default")
0x75: Push((int) 15)
0x76: Push((int) 112)
0x77: PushEmpty(string, int)
0x78: Stack[-1] = (int) 103
0x79: Call2 0x11d

0x7a: Pop(1)
0x7b: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(4)
0x7d: Push("default")
0x7e: Push((int) 112)
0x7f: @ Print(Stack[-2], Stack[-10], Stack[-1], Stack[-0])
0x80: Pop(2)
0x81: Push("default")
0x82: Push((int) 15)
0x83: Push((int) 162)
0x84: PushEmpty(string, int)
0x85: Stack[-1] = (int) 113
0x86: Call2 0x11d

0x87: Pop(1)
0x88: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x89: Pop(4)
0x8a: Push("default")
0x8b: Push((int) 162)
0x8c: @ Print(Stack[-2], Stack[-8], Stack[-1], Stack[-3])
0x8d: Pop(2)
0x8e: Push("default")
0x8f: Push((int) 15)
0x90: Push((int) 223)
0x91: PushEmpty(string, int)
0x92: Stack[-1] = (int) 114
0x93: Call2 0x11d

0x94: Pop(1)
0x95: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x96: Pop(4)
0x97: Push("default")
0x98: Push((int) 15)
0x99: Push((int) 249)
0x9a: PushEmpty(string, int)
0x9b: Stack[-1] = (int) 102
0x9c: Call2 0x11d

0x9d: Pop(1)
0x9e: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9f: Pop(4)
0xa0: Push("default")
0xa1: Push((int) 15)
0xa2: Push((int) 275)
0xa3: PushEmpty(string, int)
0xa4: Stack[-1] = (int) 111
0xa5: Call2 0x11d

0xa6: Pop(1)
0xa7: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa8: Pop(4)
0xa9: Push("default")
0xaa: Push((int) 15)
0xab: Push((int) 300)
0xac: PushEmpty(string, int)
0xad: Stack[-1] = (int) 115
0xae: Call2 0x11d

0xaf: Pop(1)
0xb0: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb1: Pop(4)
0xb2: Push("default")
0xb3: Push((int) 15)
0xb4: Push((int) 325)
0xb5: PushEmpty(string, int)
0xb6: Stack[-1] = (int) 116
0xb7: Call2 0x11d

0xb8: Pop(1)
0xb9: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xba: Pop(4)
0xbb: Push("default")
0xbc: Push((int) 15)
0xbd: Push((int) 351)
0xbe: PushEmpty(string, int)
0xbf: Stack[-1] = (int) 117
0xc0: Call2 0x11d

0xc1: Pop(1)
0xc2: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc3: Pop(4)
0xc4: Push("default")
0xc5: Push((int) 15)
0xc6: Push((int) 375)
0xc7: PushEmpty(string, int)
0xc8: Stack[-1] = (int) 118
0xc9: Call2 0x11d

0xca: Pop(1)
0xcb: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(4)
0xcd: PushEmpty(bool)
0xce: Stack[-1] = (bool) 1
0xcf: PushEmpty(bool)
0xd0: Stack[-1] = (bool) 1
0xd1: Push( Stack[6 + Tasks[-1].StackPointer] )
0xd2: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd3: Push( Stack[4 + Tasks[-1].StackPointer] )
0xd4: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd5: Stack[-1] = (bool) 0
0xd6: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd7: Push( Stack[5 + Tasks[-1].StackPointer] )
0xd8: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd9: Stack[-1] = (bool) 0
0xda: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xdb: Push((int) 50)
0xdc: Push("default")
0xdd: Push((int) 15)
0xde: Push((int) 410)
0xdf: Push((int) 300)
0xe0: PushEmpty(string, int)
0xe1: Stack[-1] = (int) 119
0xe2: Call2 0x11d

0xe3: Pop(1)
0xe4: Push((float)0.9)
0xe5: Push((float)0.0)
0xe6: Push((float)0.0)
0xe7: @ PrintInWidth(Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(9)
0xe9: Return(); Pop(0)

0xea: PushEmpty(float, float)
0xeb: Pop(0); Push(( Stack[-3] != 0 )
0xec: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0xed: Push((int) 0)
0xee: @@ get(Stack[-2], Stack[-1])
0xef: Pop(1)
0xf0: Push((int) 100)
0xf1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf3: PushEmpty(float)
0xf4: Stack[-1] = Stack[-2]
0xf5: Call2 0xb

0xf6: Pop(1)
0xf7: GOTO 0x11c

0xf8: Push((int) 101)
0xf9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfb: PushEmpty(float)
0xfc: Stack[-1] = Stack[-2]
0xfd: Call2 0x15

0xfe: Pop(1)
0xff: Push((int) 1)
0x100: @@ get(Stack[-4], Stack[-1])
0x101: Pop(1)
0x102: GOTO 0x11c

0x103: Push((int) 103)
0x104: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x106: PushEmpty(float)
0x107: Stack[-1] = Stack[-2]
0x108: Call2 0x23

0x109: Pop(1)
0x10a: Push((int) 1)
0x10b: @@ get(Stack[-5], Stack[-1])
0x10c: Pop(1)
0x10d: GOTO 0x11c

0x10e: Push((int) 104)
0x10f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x111: PushEmpty(float)
0x112: Stack[-1] = Stack[-2]
0x113: Call2 0x0

0x114: Pop(1)
0x115: GOTO 0x11c

0x116: Push((int) 112)
0x117: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x119: Push((int) 1)
0x11a: @@ get(Stack[-6], Stack[-1])
0x11b: Pop(1)
0x11c: Return(); Pop(2)

0x11d: PushEmpty(string, string)
0x11e: @ GetStringByID(Stack[-1], Stack[-3])
0x11f: Pop(0)
0x120: Stack[-4] = Stack[-1]
0x121: Return(); Pop(2)

