GlobalVarCount = 0

Strings:
	cross
	rep_down
	rep_up
	player_exchange
	player_mail
	player_diary
	rep_down_big
	rep_down_small
	player
	reputation
	GetProperty

Import:
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	ProcessEvents (0 args)
	Blit (3 args)
	Blit (4 args)
	SetVariable (2 args)
	PlaySound (1 args)
	GetVariable (2 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool, bool, bool, bool, bool, float, float, float) Params = 0
		EVENT_1 Op = 0x11 Vars = (float)
		EVENT_0 Op = 0x14 Vars = ()


0x0: Stack[6 + Tasks[-1].StackPointer] = (int)0
0x1: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x2: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0x6: Stack[8 + Tasks[-1].StackPointer] = (int)-1
0x7: Stack[4 + Tasks[-1].StackPointer] = (bool)0
0x8: Push((bool) 1)
0x9: @ SetOwnerDraw(Stack[-1])
0xa: Pop(1)
0xb: Push((bool) 1)
0xc: @ SetNeedUpdate(Stack[-1])
0xd: Pop(1)
0xe: @ ProcessEvents()
0xf: Pop(0)
0x10: Return(); Pop(0)

0x11: PushEmpty()
0x12: Stack[6 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x13: Return(); Pop(0)

0x14: PushEmpty(float, float, float, float, float, float, float, float, float, float, float, float, float, float)
0x15: Push("cross")
0x16: Push((int) 399)
0x17: Push((int) 299)
0x18: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x19: Pop(3)
0x1a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1b: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x1c: Pop(0); Push(Stack[6 + StackPtr] - Stack[7 + StackPtr]);
0x1d: Push((float)2.0)
0x1e: Stack[-9] = Stack[-2] / Stack[-1]; Pop(2);
0x1f: Push((int) 2)
0x20: Pop(1); Push((bool) Stack[-8] > Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x22: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x23: PushEmpty(float)
0x24: Call 0x116

0x25: Stack[8 + Tasks[-1].StackPointer] = Stack[-1]
0x26: Pop(1)
0x27: Return(); Pop(14)

0x28: Push((float)6.283)
0x29: Stack[-8] = Stack[-8] * Stack[-1]; Pop(1);
0x2a: Push("rep_down")
0x2b: Push((int) 20)
0x2c: Push((int) 500)
0x2d: Push((float)0.5)
0x2e: Push((float)0.5)
0x2f: Pop(0); Push(Cos(Stack[-12]))
0x30: Pop(2); Push(Stack[-2] * Stack[-1]);
0x31: Pop(2); Push(Stack[-2] - Stack[-1]);
0x32: @ Blit(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x33: Pop(4)
0x34: Return(); Pop(14)

0x35: Push( Stack[2 + Tasks[-1].StackPointer] )
0x36: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x37: Pop(0); Push(Stack[6 + StackPtr] - Stack[7 + StackPtr]);
0x38: Push((float)2.0)
0x39: Stack[-8] = Stack[-2] / Stack[-1]; Pop(2);
0x3a: Push((int) 2)
0x3b: Pop(1); Push((bool) Stack[-7] > Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x3d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3e: PushEmpty(float)
0x3f: Call 0x116

0x40: Stack[8 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Pop(1)
0x42: Return(); Pop(14)

0x43: Push((float)6.283)
0x44: Stack[-7] = Stack[-7] * Stack[-1]; Pop(1);
0x45: Push("rep_up")
0x46: Push((int) 20)
0x47: Push((int) 500)
0x48: Push((float)0.5)
0x49: Push((float)0.5)
0x4a: Pop(0); Push(Cos(Stack[-11]))
0x4b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4c: Pop(2); Push(Stack[-2] - Stack[-1]);
0x4d: @ Blit(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4e: Pop(4)
0x4f: Return(); Pop(14)

0x50: Push( Stack[5 + Tasks[-1].StackPointer] )
0x51: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x52: PushEmpty(bool)
0x53: Call 0x10f

0x54: Pop(0)
0x55: Pop(1); Push((bool) Stack[-1] == 0)
0x56: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x57: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0x58: Return(); Pop(14)

0x59: Pop(0); Push(Stack[6 + StackPtr] - Stack[7 + StackPtr]);
0x5a: Push((float)1.0)
0x5b: Stack[-7] = Stack[-2] / Stack[-1]; Pop(2);
0x5c: Push((int) 1)
0x5d: Pop(1); Push((bool) Stack[-6] > Stack[-1])
0x5e: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x60: Push("player_exchange")
0x61: Push((int) 0)
0x62: @ SetVariable(Stack[-2], Stack[-1])
0x63: Pop(2)
0x64: Return(); Pop(14)

0x65: Push((float)6.283)
0x66: Stack[-6] = Stack[-6] * Stack[-1]; Pop(1);
0x67: Push("exchange")
0x68: Push((int) 20)
0x69: Push((int) 500)
0x6a: Push((float)0.5)
0x6b: Push((float)0.5)
0x6c: Pop(0); Push(Cos(Stack[-10]))
0x6d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6e: Pop(2); Push(Stack[-2] - Stack[-1]);
0x6f: @ Blit(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x70: Pop(4)
0x71: Return(); Pop(14)

0x72: Push( Stack[0 + Tasks[-1].StackPointer] )
0x73: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x74: PushEmpty(bool)
0x75: Call 0x101

0x76: Pop(0)
0x77: Pop(1); Push((bool) Stack[-1] == 0)
0x78: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x79: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x7a: Return(); Pop(14)

0x7b: Pop(0); Push(Stack[6 + StackPtr] - Stack[7 + StackPtr]);
0x7c: Push((float)2.0)
0x7d: Stack[-6] = Stack[-2] / Stack[-1]; Pop(2);
0x7e: Push((int) 2)
0x7f: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x80: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x81: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x82: Push("player_mail")
0x83: Push((int) 0)
0x84: @ SetVariable(Stack[-2], Stack[-1])
0x85: Pop(2)
0x86: Return(); Pop(14)

0x87: Push((float)6.283)
0x88: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x89: Push("mail")
0x8a: Push((int) 20)
0x8b: Push((int) 500)
0x8c: Push((float)0.5)
0x8d: Push((float)0.5)
0x8e: Pop(0); Push(Cos(Stack[-9]))
0x8f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x90: Pop(2); Push(Stack[-2] - Stack[-1]);
0x91: @ Blit(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(4)
0x93: Return(); Pop(14)

0x94: Push( Stack[1 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0x96: PushEmpty(bool)
0x97: Call 0x108

0x98: Pop(0)
0x99: Pop(1); Push((bool) Stack[-1] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x9c: Return(); Pop(14)

0x9d: Pop(0); Push(Stack[6 + StackPtr] - Stack[7 + StackPtr]);
0x9e: Push((float)2.0)
0x9f: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xa0: Push((int) 2)
0xa1: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa3: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xa4: Push("player_diary")
0xa5: Push((int) 0)
0xa6: @ SetVariable(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: Return(); Pop(14)

0xa9: Push((float)6.283)
0xaa: Stack[-4] = Stack[-4] * Stack[-1]; Pop(1);
0xab: Push("diary")
0xac: Push((int) 20)
0xad: Push((int) 470)
0xae: Push((float)0.5)
0xaf: Push((float)0.5)
0xb0: Pop(0); Push(Cos(Stack[-8]))
0xb1: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb2: Pop(2); Push(Stack[-2] - Stack[-1]);
0xb3: @ Blit(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb4: Pop(4)
0xb5: Return(); Pop(14)

0xb6: PushEmpty(float)
0xb7: Call 0x116

0xb8: Stack[-3] = Stack[-1]
0xb9: Pop(1)
0xba: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0xbb: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xbc: Push((int) 0)
0xbd: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbf: Stack[8 + Tasks[-1].StackPointer] = Stack[-2]
0xc0: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0xc1: Return(); Pop(14)

0xc2: Pop(0); Push((bool) Stack[8 + Tasks[-1].StackPointer] != Stack[-2])
0xc3: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xc4: Push((int) 0)
0xc5: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc7: Return(); Pop(14)

0xc8: Stack[7 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer]
0xc9: PushEmpty(float)
0xca: Call 0x116

0xcb: Pop(0)
0xcc: Pop(1); Push((bool) Stack[8 + Tasks[-1].StackPointer] < Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xce: Push("rep_up")
0xcf: @ PlaySound(Stack[-1])
0xd0: Pop(1)
0xd1: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xd2: GOTO 0xe2

0xd3: PushEmpty(float)
0xd4: Call 0x116

0xd5: Pop(0)
0xd6: Stack[-2] = Stack[8 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0xd7: Push((float)0.3)
0xd8: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd9: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xda: Push("rep_down_big")
0xdb: @ PlaySound(Stack[-1])
0xdc: Pop(1)
0xdd: GOTO 0xe1

0xde: Push("rep_down_small")
0xdf: @ PlaySound(Stack[-1])
0xe0: Pop(1)
0xe1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe2: Return(); Pop(14)

0xe3: PushEmpty(bool)
0xe4: Call 0x10f

0xe5: Pop(0)
0xe6: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe7: Push("exchange")
0xe8: @ PlaySound(Stack[-1])
0xe9: Pop(1)
0xea: Stack[7 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer]
0xeb: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0xec: Return(); Pop(14)

0xed: PushEmpty(bool)
0xee: Call 0x101

0xef: Pop(0)
0xf0: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf1: Push("mail")
0xf2: @ PlaySound(Stack[-1])
0xf3: Pop(1)
0xf4: Stack[7 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer]
0xf5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xf6: Return(); Pop(14)

0xf7: PushEmpty(bool)
0xf8: Call 0x108

0xf9: Pop(0)
0xfa: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfb: Push("diary")
0xfc: @ PlaySound(Stack[-1])
0xfd: Pop(1)
0xfe: Stack[7 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer]
0xff: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x100: Return(); Pop(14)

0x101: PushEmpty(int, int)
0x102: Push("player_mail")
0x103: @ GetVariable(Stack[-1], Stack[-2])
0x104: Pop(1)
0x105: Push((int) 0)
0x106: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x107: Return(); Pop(2)

0x108: PushEmpty(int, int)
0x109: Push("player_diary")
0x10a: @ GetVariable(Stack[-1], Stack[-2])
0x10b: Pop(1)
0x10c: Push((int) 0)
0x10d: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x10e: Return(); Pop(2)

0x10f: PushEmpty(int, int)
0x110: Push("player_exchange")
0x111: @ GetVariable(Stack[-1], Stack[-2])
0x112: Pop(1)
0x113: Push((int) 0)
0x114: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x115: Return(); Pop(2)

0x116: PushEmpty(object, float, object, float)
0x117: Push("player")
0x118: @ FindActor(Stack[-3], Stack[-1])
0x119: Pop(1)
0x11a: Pop(0); Push((bool) Stack[-2] == 0)
0x11b: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11c: Stack[-5] = (int) -1
0x11d: Return(); Pop(4)

0x11e: Push("reputation")
0x11f: @@ GetProperty(Stack[-1], Stack[-2])
0x120: Pop(1)
0x121: Stack[-5] = Stack[-1]
0x122: Return(); Pop(4)

0x123: Stack[-2] = 0
