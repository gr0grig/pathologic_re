GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	size
	get
	remove
	Damaging: 
	health
	New damage target: 
	add
	Removed damage target: 
	cleanup
	restore
	fire
	bullet
	phys
	HasProperty
	HasProperty
	armor
	GetProperty
	armor_
	SetProperty

Import:
	Sleep (1 args)
	Trace (1 args)
	ReportHit (5 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	IsPlayerActor (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_23 Op = 0x31 Vars = (object)
		EVENT_27 Op = 0x40 Vars = (object)
		EVENT_26 Op = 0x5c Vars = (string)
		EVENT_6 Op = 0x78 Vars = ()


0x0: PushEmpty(int, int, object, float, int, int, object, float)
0x1: Push(GlobalVars[0])
0x2: PushEmpty(object)
0x3: Call2 0x10a

0x4: Stack[-2] = Stack[-1]
0x5: Pop(1)
0x6: GlobalVars[0] = Stack[-1]; Pop(1)
0x7: Push((int) 1)
0x8: @ Sleep(Stack[-1])
0x9: Pop(1)
0xa: Push(GlobalVars[0])
0xb: @@ size(Stack[-5])
0xc: Pop(1)
0xd: Stack[-3] = (int) 0
0xe: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0xf: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x10: Push(GlobalVars[0])
0x11: @@ get(Stack[-3], Stack[-4])
0x12: Pop(1)
0x13: Pop(0); Push((bool) Stack[-2] == 0)
0x14: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x15: Push(GlobalVars[0])
0x16: @@ remove(Stack[-4])
0x17: Pop(1)
0x18: GOTO 0x2d

0x19: Push("Damaging: ")
0x1a: Pop(1); Push(Stack[-1] + Stack[-3]);
0x1b: @ Trace(Stack[-1])
0x1c: Pop(1)
0x1d: PushEmpty(float, object, float, int)
0x1e: Stack[-3] = Stack[-6]
0x1f: Stack[-2] = (float) 0.8
0x20: Stack[-1] = (int) 2
0x21: Call2 0xa9

0x22: Stack[-5] = Stack[-4]
0x23: Pop(4)
0x24: PushEmpty(object)
0x25: Call2 0xf2

0x26: Pop(0)
0x27: Push((int) 4)
0x28: Push((float)0.8)
0x29: @ ReportHit(Stack[-5], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x2a: Pop(3)
0x2b: Push((int) 1)
0x2c: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x2d: Stack[-2] = 0
0x2e: GOTO 0xe

0x2f: GOTO 0x7

0x30: Return(); Pop(8)

0x31: PushEmpty()
0x32: PushEmpty(bool, object, string)
0x33: Stack[-2] = Stack[-4]
0x34: Stack[-1] = "health"
0x35: Call2 0x9d

0x36: Pop(2)
0x37: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x38: Push("New damage target: ")
0x39: Pop(1); Push(Stack[-1] + Stack[-2]);
0x3a: @ Trace(Stack[-1])
0x3b: Pop(1)
0x3c: Push(GlobalVars[0])
0x3d: @@ add(Stack[-2])
0x3e: Pop(1)
0x3f: Return(); Pop(0)

0x40: PushEmpty(int, int, object, int, int, object)
0x41: Push(GlobalVars[0])
0x42: @@ size(Stack[-4])
0x43: Pop(1)
0x44: Stack[-2] = (int) 0
0x45: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x46: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x47: Push(GlobalVars[0])
0x48: @@ get(Stack[-2], Stack[-3])
0x49: Pop(1)
0x4a: Pop(0); Push((bool) Stack[-1] == Stack[-7])
0x4b: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4c: Push(GlobalVars[0])
0x4d: @@ remove(Stack[-3])
0x4e: Pop(1)
0x4f: Push((int) -1)
0x50: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x51: GOTO 0x55

0x52: Push((int) 1)
0x53: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x54: GOTO 0x56

0x55: Stack[-1] = 0
0x56: GOTO 0x45

0x57: Push("Removed damage target: ")
0x58: Pop(1); Push(Stack[-1] + Stack[-8]);
0x59: @ Trace(Stack[-1])
0x5a: Pop(1)
0x5b: Return(); Pop(6)

0x5c: PushEmpty(bool, bool)
0x5d: Push("cleanup")
0x5e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5f: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x60: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x61: @ IsLoaded(Stack[-1])
0x62: Pop(0)
0x63: PushEmpty(bool)
0x64: Stack[-1] = (bool) 0
0x65: Pop(0); Push((bool) Stack[-2] == 0)
0x66: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x67: PushEmpty(bool)
0x68: Call2 0x88

0x69: Pop(0)
0x6a: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x6b: Stack[-1] = (bool) 1
0x6c: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6d: PushEmpty(object)
0x6e: Call2 0xf2

0x6f: Pop(0)
0x70: @ RemoveActor(Stack[-1])
0x71: Pop(1)
0x72: GOTO 0x77

0x73: Push("restore")
0x74: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x75: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x76: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x77: Return(); Pop(2)

0x78: PushEmpty(bool)
0x79: Stack[-1] = (bool) 0
0x7a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x7b: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7c: PushEmpty(bool)
0x7d: Call2 0x88

0x7e: Pop(0)
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: Stack[-1] = (bool) 1
0x81: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x82: PushEmpty(object)
0x83: Call2 0xf2

0x84: Pop(0)
0x85: @ RemoveActor(Stack[-1])
0x86: Pop(1)
0x87: Return(); Pop(0)

0x88: Stack[-1] = (bool) 1
0x89: Return(); Pop(0)

0x8a: PushEmpty()
0x8b: Push((int) 2)
0x8c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8d: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8e: Stack[-2] = "fire"
0x8f: Return(); Pop(0)

0x90: GOTO 0x96

0x91: Push((int) 1)
0x92: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x93: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x94: Stack[-2] = "bullet"
0x95: Return(); Pop(0)

0x96: Stack[-2] = "phys"
0x97: Return(); Pop(0)

0x98: PushEmpty(bool, bool)
0x99: @ IsPlayerActor(Stack[-3], Stack[-1])
0x9a: Pop(0)
0x9b: Stack[-4] = Stack[-1]
0x9c: Return(); Pop(2)

0x9d: PushEmpty(bool, bool)
0x9e: Push("HasProperty")
0x9f: Push((int) 2)
0xa0: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa3: Stack[-5] = (bool) 0
0xa4: Return(); Pop(2)

0xa5: @@ HasProperty(Stack[-3], Stack[-1])
0xa6: Pop(0)
0xa7: Stack[-5] = Stack[-1]
0xa8: Return(); Pop(2)

0xa9: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0xaa: PushEmpty(bool, object, string)
0xab: Stack[-2] = Stack[-18]
0xac: Stack[-1] = "health"
0xad: Call2 0x9d

0xae: Pop(2)
0xaf: Pop(1); Push((bool) Stack[-1] == 0)
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: Stack[-16] = (float) 0.0
0xb2: Return(); Pop(12)

0xb3: PushEmpty(bool, object, string)
0xb4: Stack[-2] = Stack[-18]
0xb5: Stack[-1] = "armor"
0xb6: Call2 0x9d

0xb7: Pop(2)
0xb8: Pop(1); Push((bool) Stack[-1] == 0)
0xb9: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xba: Stack[-6] = (int) 0
0xbb: GOTO 0xbf

0xbc: Push("armor")
0xbd: @@ GetProperty(Stack[-1], Stack[-7])
0xbe: Pop(1)
0xbf: Push("armor_")
0xc0: PushEmpty(string, int)
0xc1: Stack[-1] = Stack[-16]
0xc2: Call2 0x8a

0xc3: Pop(1)
0xc4: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xc5: PushEmpty(bool, object, string)
0xc6: Stack[-2] = Stack[-18]
0xc7: Stack[-1] = Stack[-8]
0xc8: Call2 0x9d

0xc9: Pop(2)
0xca: Pop(1); Push((bool) Stack[-1] == 0)
0xcb: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcc: Stack[-4] = (int) 0
0xcd: GOTO 0xd0

0xce: @@ GetProperty(Stack[-5], Stack[-4])
0xcf: Pop(0)
0xd0: PushEmpty(float, float, float)
0xd1: Pop(0); Push(Stack[-9] + Stack[-7]);
0xd2: Push((float)100.0)
0xd3: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0xd4: Stack[-1] = (int) 1
0xd5: Call2 0xf8

0xd6: Stack[-6] = Stack[-3]
0xd7: Pop(3)
0xd8: Push("health")
0xd9: @@ GetProperty(Stack[-1], Stack[-3])
0xda: Pop(1)
0xdb: Push((int) 1)
0xdc: Pop(1); Push(Stack[-1] - Stack[-4]);
0xdd: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0xde: Push("health")
0xdf: PushEmpty(float, float, float, float)
0xe0: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xe1: Stack[-2] = (int) 0
0xe2: Stack[-1] = (int) 1
0xe3: Call2 0xff

0xe4: Pop(3)
0xe5: @@ SetProperty(Stack[-2], Stack[-1])
0xe6: Pop(2)
0xe7: PushEmpty(bool, object)
0xe8: Stack[-1] = Stack[-17]
0xe9: Call2 0x98

0xea: Pop(1)
0xeb: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xec: PushEmpty(float)
0xed: Stack[-1] = -Stack[-2]; Pop(0);
0xee: Call2 0x110

0xef: Pop(1)
0xf0: Stack[-16] = Stack[-1]
0xf1: Return(); Pop(12)

0xf2: PushEmpty(object, object)
0xf3: @ self(Stack[-1])
0xf4: Pop(0)
0xf5: Stack[-3] = Stack[-1]
0xf6: Return(); Pop(2)

0xf7: Stack[-1] = 0
0xf8: PushEmpty()
0xf9: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfb: Stack[-3] = Stack[-2]
0xfc: GOTO 0xfe

0xfd: Stack[-3] = Stack[-1]
0xfe: Return(); Pop(0)

0xff: PushEmpty()
0x100: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x101: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x102: Stack[-4] = Stack[-2]
0x103: Return(); Pop(0)

0x104: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x106: Stack[-4] = Stack[-1]
0x107: Return(); Pop(0)

0x108: Stack[-4] = Stack[-3]
0x109: Return(); Pop(0)

0x10a: PushEmpty(object, object)
0x10b: @ CreateObjectVector(Stack[-1])
0x10c: Pop(0)
0x10d: Stack[-3] = Stack[-1]
0x10e: Return(); Pop(2)

0x10f: Stack[-1] = 0
0x110: PushEmpty(object, object)
0x111: @ CreateFloatVector(Stack[-1])
0x112: Pop(0)
0x113: @@ add(Stack[-3])
0x114: Pop(0)
0x115: Push((int) 0)
0x116: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x118: Push((float)0.7)
0x119: Push((int) 500)
0x11a: @ RumblePlay(Stack[-2], Stack[-1])
0x11b: Pop(2)
0x11c: Push((int) 15)
0x11d: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x11e: Pop(1)
0x11f: Return(); Pop(2)

0x120: Stack[-1] = 0
