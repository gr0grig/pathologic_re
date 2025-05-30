GlobalVarCount = 0

Strings:
	add
	get
	size
	default
	scrollbar

Import:
	SetOwnerDraw (1 args)
	EnableClipping (1 args)
	GetWindowSize (2 args)
	CreateObjectVector (1 args)
	CreateStringVector (1 args)
	CreateIntVector (1 args)
	GetMessageCount (1 args)
	GetMessage (4 args)
	ProcessEvents (0 args)
	GetTextHeightInWidth (4 args)
	PrintInWidth (9 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, int, int, int, int, int, object, object, object) Params = 0
		EVENT_0 Op = 0xb5 Vars = ()
		EVENT_3 Op = 0x103 Vars = (int, int)
		EVENT_8 Op = 0x116 Vars = (int, int)
		EVENT_10 Op = 0x11d Vars = ()
		EVENT_200 Op = 0x11f Vars = (int, string, object)


0x0: PushEmpty(int, object, int, int, float, string, string, int, object, object, object, int, object, int, int, float, string, string, int, object, object, object)
0x1: Push((bool) 1)
0x2: @ SetOwnerDraw(Stack[-1])
0x3: Pop(1)
0x4: Push((bool) 1)
0x5: @ EnableClipping(Stack[-1])
0x6: Pop(1)
0x7: @ GetWindowSize(Stack[-2], Stack[-3])
0x8: Pop(0)
0x9: Stack[0 + Tasks[-1].StackPointer] = (int)0
0xa: Stack[4 + Tasks[-1].StackPointer] = (int)0
0xb: Stack[5 + Tasks[-1].StackPointer] = (int)-1
0xc: @ CreateObjectVector(Stack[-7])
0xd: Pop(0)
0xe: @ CreateObjectVector(Stack[-8])
0xf: Pop(0)
0x10: @ CreateObjectVector(Stack[-9])
0x11: Pop(0)
0x12: Stack[-11] = (int) 0
0x13: Push((int) 12)
0x14: Pop(1); Push((bool) Stack[-12] < Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x16: @ CreateStringVector(Stack[-10])
0x17: Pop(0)
0x18: @@ add(Stack[-10])
0x19: Pop(0)
0x1a: @ CreateStringVector(Stack[-10])
0x1b: Pop(0)
0x1c: @@ add(Stack[-10])
0x1d: Pop(0)
0x1e: @ CreateIntVector(Stack[-10])
0x1f: Pop(0)
0x20: @@ add(Stack[-10])
0x21: Pop(0)
0x22: Stack[-10] = 0
0x23: Push((int) 1)
0x24: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x25: GOTO 0x13

0x26: @ GetMessageCount(Stack[-9])
0x27: Pop(0)
0x28: Stack[-8] = (int) 0
0x29: Pop(0); Push((bool) Stack[-8] < Stack[-9])
0x2a: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x2b: @ GetMessage(Stack[-8], Stack[-6], Stack[-5], Stack[-7])
0x2c: Pop(0)
0x2d: Push((int) 24)
0x2e: Stack[-5] = Stack[-8] / Stack[-1]; Pop(1);
0x2f: @@ get(Stack[-3], Stack[-4])
0x30: Pop(0)
0x31: @@ get(Stack[-2], Stack[-4])
0x32: Pop(0)
0x33: @@ get(Stack[-1], Stack[-4])
0x34: Pop(0)
0x35: @@ add(Stack[-6])
0x36: Pop(0)
0x37: @@ add(Stack[-5])
0x38: Pop(0)
0x39: @@ add(Stack[-8])
0x3a: Pop(0)
0x3b: Stack[-1] = 0
0x3c: Stack[-2] = 0
0x3d: Stack[-3] = 0
0x3e: Push((int) 1)
0x3f: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x40: GOTO 0x29

0x41: @ ProcessEvents()
0x42: Pop(0)
0x43: Return(); Pop(22)

0x44: PushEmpty(int)
0x45: Call 0x4e

0x46: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x47: Pop(1)
0x48: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[3 + Tasks[-1].StackPointer]; Pop(0);
0x49: Push((int) 0)
0x4a: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4c: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x4d: Return(); Pop(0)

0x4e: PushEmpty(int, object, object, object, int, int, string, string, int, int, int, object, object, object, int, int, string, string, int, int)
0x4f: Stack[-10] = (int) 0
0x50: @@ get(Stack[-9], Stack[-4])
0x51: Pop(0)
0x52: @@ get(Stack[-8], Stack[-4])
0x53: Pop(0)
0x54: @@ get(Stack[-7], Stack[-4])
0x55: Pop(0)
0x56: @@ size(Stack[-6])
0x57: Pop(0)
0x58: Stack[-5] = (int) 0
0x59: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x5a: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x5b: @@ get(Stack[-4], Stack[-5])
0x5c: Pop(0)
0x5d: @@ get(Stack[-3], Stack[-5])
0x5e: Pop(0)
0x5f: @@ get(Stack[-2], Stack[-5])
0x60: Pop(0)
0x61: Push("default")
0x62: @ GetTextHeightInWidth(Stack[-2], Stack[-1], Stack[-2], Stack[-5])
0x63: Pop(1)
0x64: Stack[-10] = Stack[-10] + Stack[-1]; Pop(0);
0x65: Pop(0); Push((bool) Stack[-2] == Stack[5 + Tasks[-1].StackPointer])
0x66: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x67: Push((int) 5)
0x68: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x69: Push("default")
0x6a: Push((int) 15)
0x6b: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0x6c: @ GetTextHeightInWidth(Stack[-3], Stack[-2], Stack[-1], Stack[-5])
0x6d: Pop(2)
0x6e: Stack[-10] = Stack[-10] + Stack[-1]; Pop(0);
0x6f: Push((int) 5)
0x70: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x71: GOTO 0x74

0x72: Push((int) 5)
0x73: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x74: Push((int) 1)
0x75: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x76: GOTO 0x59

0x77: Stack[-21] = Stack[-10]
0x78: Return(); Pop(20)

0x79: Stack[-7] = 0
0x7a: Stack[-8] = 0
0x7b: Stack[-9] = 0
0x7c: PushEmpty(int, object, object, object, int, int, int, string, string, int, int, int, object, object, object, int, int, int, string, string, int, int)
0x7d: Stack[-11] = Stack[0 + Tasks[-1].StackPointer]
0x7e: @@ get(Stack[-10], Stack[-4])
0x7f: Pop(0)
0x80: @@ get(Stack[-9], Stack[-4])
0x81: Pop(0)
0x82: @@ get(Stack[-8], Stack[-4])
0x83: Pop(0)
0x84: @@ size(Stack[-7])
0x85: Pop(0)
0x86: Stack[-6] = (int) 0
0x87: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x88: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0x89: Stack[-5] = Stack[-11]
0x8a: @@ get(Stack[-4], Stack[-6])
0x8b: Pop(0)
0x8c: @@ get(Stack[-3], Stack[-6])
0x8d: Pop(0)
0x8e: @@ get(Stack[-2], Stack[-6])
0x8f: Pop(0)
0x90: Push("default")
0x91: @ GetTextHeightInWidth(Stack[-2], Stack[-1], Stack[-2], Stack[-5])
0x92: Pop(1)
0x93: Stack[-11] = Stack[-11] + Stack[-1]; Pop(0);
0x94: Pop(0); Push((bool) Stack[-2] == Stack[5 + Tasks[-1].StackPointer])
0x95: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x96: Push((int) 5)
0x97: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x98: Push("default")
0x99: Push((int) 15)
0x9a: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0x9b: @ GetTextHeightInWidth(Stack[-3], Stack[-2], Stack[-1], Stack[-5])
0x9c: Pop(2)
0x9d: Stack[-11] = Stack[-11] + Stack[-1]; Pop(0);
0x9e: Push((int) 5)
0x9f: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xa0: GOTO 0xa3

0xa1: Push((int) 5)
0xa2: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xa3: PushEmpty(bool)
0xa4: Stack[-1] = (bool) 0
0xa5: Pop(0); Push((bool) Stack[-24] > Stack[-6])
0xa6: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa7: Pop(0); Push((bool) Stack[-24] < Stack[-12])
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: Stack[-1] = (bool) 1
0xaa: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xab: Stack[-24] = Stack[-2]
0xac: Return(); Pop(22)

0xad: Push((int) 1)
0xae: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xaf: GOTO 0x87

0xb0: Stack[-24] = (int) -1
0xb1: Return(); Pop(22)

0xb2: Stack[-8] = 0
0xb3: Stack[-9] = 0
0xb4: Stack[-10] = 0
0xb5: PushEmpty(int, object, object, object, int, int, string, string, int, int, int, object, object, object, int, int, string, string, int, int)
0xb6: PushEmpty()
0xb7: Call 0x44

0xb8: Pop(0)
0xb9: Stack[-10] = Stack[0 + Tasks[-1].StackPointer]
0xba: @@ get(Stack[-9], Stack[-4])
0xbb: Pop(0)
0xbc: @@ get(Stack[-8], Stack[-4])
0xbd: Pop(0)
0xbe: @@ get(Stack[-7], Stack[-4])
0xbf: Pop(0)
0xc0: @@ size(Stack[-6])
0xc1: Pop(0)
0xc2: Stack[-5] = (int) 0
0xc3: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0xc4: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xc5: @@ get(Stack[-4], Stack[-5])
0xc6: Pop(0)
0xc7: @@ get(Stack[-3], Stack[-5])
0xc8: Pop(0)
0xc9: @@ get(Stack[-2], Stack[-5])
0xca: Pop(0)
0xcb: Pop(0); Push((bool) Stack[-2] == Stack[6 + Tasks[-1].StackPointer])
0xcc: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xcd: Push("default")
0xce: Push((int) 0)
0xcf: Push((float)1.0)
0xd0: Push((float)1.0)
0xd1: Push((float)1.0)
0xd2: @ PrintInWidth(Stack[-6], Stack[-5], Stack[-4], Stack[-15], Stack[-2], Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(5)
0xd4: GOTO 0xdc

0xd5: Push("default")
0xd6: Push((int) 0)
0xd7: Push((float)0.804)
0xd8: Push((float)0.804)
0xd9: Push((float)0.804)
0xda: @ PrintInWidth(Stack[-6], Stack[-5], Stack[-4], Stack[-15], Stack[-2], Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0xdb: Pop(5)
0xdc: Stack[-10] = Stack[-10] + Stack[-1]; Pop(0);
0xdd: Pop(0); Push((bool) Stack[-2] == Stack[5 + Tasks[-1].StackPointer])
0xde: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xdf: Push((int) 5)
0xe0: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0xe1: Pop(0); Push((bool) Stack[-2] == Stack[6 + Tasks[-1].StackPointer])
0xe2: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe3: Push("default")
0xe4: Push((int) 15)
0xe5: Push((int) 15)
0xe6: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0xe7: Push((float)0.804)
0xe8: Push((float)0.804)
0xe9: Push((float)0.804)
0xea: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-16], Stack[-4], Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(6)
0xec: GOTO 0xf6

0xed: Push("default")
0xee: Push((int) 15)
0xef: Push((int) 15)
0xf0: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0xf1: Push((float)0.698)
0xf2: Push((float)0.659)
0xf3: Push((float)0.647)
0xf4: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-16], Stack[-4], Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(6)
0xf6: Stack[-10] = Stack[-10] + Stack[-1]; Pop(0);
0xf7: Push((int) 5)
0xf8: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0xf9: GOTO 0xfc

0xfa: Push((int) 5)
0xfb: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0xfc: Push((int) 1)
0xfd: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xfe: GOTO 0xc3

0xff: Return(); Pop(20)

0x100: Stack[-7] = 0
0x101: Stack[-8] = 0
0x102: Stack[-9] = 0
0x103: PushEmpty(int, int)
0x104: PushEmpty(int, int)
0x105: Stack[-1] = Stack[-5]
0x106: Call 0x7c

0x107: Stack[-3] = Stack[-2]
0x108: Pop(2)
0x109: Push((int) -1)
0x10a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x10c: Return(); Pop(2)

0x10d: Pop(0); Push((bool) Stack[-1] == Stack[5 + Tasks[-1].StackPointer])
0x10e: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10f: Stack[5 + Tasks[-1].StackPointer] = (int)-1
0x110: GOTO 0x112

0x111: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x112: PushEmpty()
0x113: Call 0x44

0x114: Pop(0)
0x115: Return(); Pop(2)

0x116: PushEmpty()
0x117: PushEmpty(int, int)
0x118: Stack[-1] = Stack[-3]
0x119: Call 0x7c

0x11a: Stack[6 + Tasks[-1].StackPointer] = Stack[-2]
0x11b: Pop(2)
0x11c: Return(); Pop(0)

0x11d: Stack[6 + Tasks[-1].StackPointer] = (int)-1
0x11e: Return(); Pop(0)

0x11f: PushEmpty()
0x120: Push("scrollbar")
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x123: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x124: Pop(1); Push(Stack[-1] * Stack[-4]);
0x125: Push((int) 100)
0x126: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x127: Return(); Pop(0)

0x128: Push((int) 32768)
0x129: Pop(1); Push(Stack[-4] & Stack[-1]);
0x12a: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12b: Push((int) 32767)
0x12c: Stack[5 + Tasks[-1].StackPointer] = Stack[-4] & Stack[-1]; Pop(1);
0x12d: GOTO 0x12f

0x12e: Stack[4 + Tasks[-1].StackPointer] = Stack[-3]
0x12f: Return(); Pop(0)

